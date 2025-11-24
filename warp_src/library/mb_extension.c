#include "mb_extension.h"
#include "jit_compiler.h"
#include "asm_engine.h"
#include "pdb_symbol.h"

#define MBEX_SETSYMB_FN(p_func) JIT_AddSymbol(#p_func, p_func)
#define MBEX_SETSYMB_VAR(p_var) JIT_AddSymbol(#p_var, &p_var)
#define MBEX_GETSYMB(p_symbol) do { PVOID pSymbolOut = JIT_GetSymbol(#p_symbol); if (pSymbolOut == NULL) { p_symbol = NULL; printf("ERROR: symbol '" #p_symbol "' not found\n"); return false; } else { p_symbol = pSymbolOut; } } while(0)
#define MBEX_CALL_FN(force, p_mbfunc, ...) do { if (force || warp.bRuntimeOk) { ENSURE(p_mbfunc); DWORD dwRetval = p_mbfunc(__VA_ARGS__); if (dwRetval != 0) { printf("[MB] FATAL ERROR - " #p_mbfunc " line: %lu. All plugins suspended.", dwRetval); warp.bRuntimeOk = FALSE; } } } while(0)
#define MBEX_CALL_FN_S(force, p_mbfunc, ...) do { ASM_SAVE_REGS; MBEX_CALL_FN(force, p_mbfunc, ## __VA_ARGS__); ASM_RESTORE_REGS; } while(0)

// Extra types
typedef INT MB_ERROR;
typedef void (*MBEX_F_free)(void *);

// Extra functions
MB_ERROR (*MB_Init)(VOID) = NULL;
MB_ERROR (*MB_Exit)(VOID) = NULL;
MB_ERROR (*MB_MissionFrameMove)(VOID) = NULL;
MB_ERROR (*MB_MissionStart)(VOID) = NULL;
MB_ERROR (*MB_MissionFinish)(VOID) = NULL;
MB_ERROR (*MB_MissionClear)(VOID) = NULL;
MB_ERROR (*MB_StatementExecuteWSE)(VOID*, DWORD64*) = NULL;

// Extra variables
BYTE MBEX_VerMajor = VERSION_MAJOR;
BYTE MBEX_VerMinor = VERSION_MINOR;
BYTE MBEX_VerPatch = VERSION_PATCH;


// Searches pattern for specific function within a memory range defined it's address and size
DWORD MBEX_SearchFuncPattern(UINT uIndex)
{
    ENSURE(uIndex < wfn_Count);

    // Init search range
    DWORD dwStartAddr = warp.func[uIndex].dwAddr;
    DWORD dwSearchRegionSz = warp.func[uIndex].dwSz;

    // Init search pattern
    PBYTE pbtPattern = &WARP_FN_PATTERNS[uIndex][1];
    DWORD dwPatternSz = WARP_FN_PATTERNS[uIndex][0];

    // Call the function to search for the pattern
    DWORD dwFoundAddr = ASM_SearchMemPattern(dwStartAddr, dwSearchRegionSz, pbtPattern, dwPatternSz);
    return dwFoundAddr;
}


// Inject custom function into memory
BOOL MBEX_InjectCustomFunc(UINT uIndex, DWORD dwAddr, VOID *pFunc)
{
    ENSURE(dwAddr && pFunc && uIndex < wfn_Count);

    dwAddr -= warp.dwBaseAddr; // Fix to comply with legacy code
    BYTE btTrampSz = WARP_FN_PATTERNS[uIndex][0]; // Trampoline size
    if (btTrampSz == 0) return FALSE; // If size is 0 it's disabled
    ENSURE(btTrampSz >= 5); // Make sure the pattern is at least 5 bytes long

    PBYTE pbtData;
    ASM_InstallHook(dwAddr, btTrampSz, ASM_CALL_CUSTOM_SUB_SZ, ASM_CALL_CUSTOM_SUB, sizeof(DWORD), &pbtData, NULL);
    *((DWORD *)pbtData) = (DWORD)pFunc; //load custom sub address into memory!

    return TRUE;
}


// Install WARP version into WSE2 major version field
BOOL MBEX_PatchHookedFuncs(void)
{

    // Init search range
    DWORD dwStartAddr = warp.func[wfn_ExecuteWSE].dwAddr;
    DWORD dwSearchRegionSz = warp.func[wfn_ExecuteWSE].dwSz;

    // Patch WSE2 version field with WARP version
    BYTE pbtPattern[] = { 0xb9, 0x05, 0x00, 0x00, 0x00 }; // move ecx, 0x5
    BYTE pbtNewPattern[] = { 0xb9, MBEX_VerPatch, MBEX_VerMinor, MBEX_VerMajor, 0x00 };
    DWORD dwFoundAddr = ASM_PatchMemPattern(dwStartAddr, dwSearchRegionSz, 0, pbtPattern, sizeof(pbtPattern), pbtNewPattern, sizeof(pbtNewPattern));
    if (!dwFoundAddr) return FALSE;
    else printf("WSE2 version patched at: 0x%p\n", dwFoundAddr);

    // Patch WSE2 sleep operation
    BYTE pbtPattern2[] = { 0x8b, 0x45, 0x10, 0xff, 0x30, 0xff, 0x15 }; // MOV EAX, dword ptr [EBP + 0x10]; PUSH dword ptr [EAX] 
    BYTE pbtNewPattern2[] = { 0x90, 0x90, 0x90, 0x90, 0x90, 0x90 };   
    DWORD dwPattern2Sz = sizeof(pbtPattern2);
    dwFoundAddr = ASM_PatchMemPattern(dwStartAddr, dwSearchRegionSz, 5, pbtPattern2, sizeof(pbtPattern2), pbtNewPattern2, sizeof(pbtNewPattern2));
    if (!dwFoundAddr) return FALSE;
    else printf("Sleep operator patched at: 0x%p\n", dwFoundAddr);
    
    return TRUE;
}



// Core functions
VOID MBEX_Init(VOID) { MBEX_CALL_FN(TRUE, MB_Init); }                       // Called after compilation success
VOID MBEX_Exit(VOID) { if (JIT_State()) MBEX_CALL_FN(TRUE, MB_Exit);}       // Called before JIT cleanup

// Callbacks for Mission hooks
static VOID MBEX_H_MissionFrameMove(VOID) { MBEX_CALL_FN_S(FALSE, MB_MissionFrameMove); }
static VOID MBEX_H_MissionStart(VOID)     { MBEX_CALL_FN_S(FALSE, MB_MissionStart); }
static VOID MBEX_H_MissionFinish(VOID)    { MBEX_CALL_FN_S(FALSE, MB_MissionFinish); }
static VOID MBEX_H_MissionClear(VOID)     { MBEX_CALL_FN_S(FALSE, MB_MissionClear); }

// Callback for ExecuteWSE hook
static VOID MBEX_H_ExecuteWSE(VOID)
{
    DWORD dwStructAddr, dwDataAddr;
    ASM_GET_ECX_VALUE(dwStructAddr);
    ASM_GET_EAX_VALUE(dwDataAddr);

    ASM_SAVE_REGS;

    VOID *pStruct = (VOID*)dwStructAddr;
    VOID *pData = (VOID*)dwDataAddr;
    ENSURE(pStruct && pData);
    MBEX_CALL_FN(FALSE, MB_StatementExecuteWSE, pStruct, pData);

    ASM_RESTORE_REGS;
}


// Search function by name in PDB file
static DWORD MBEX_FindSymbol(LPCSTR lpcszName)
{
    ENSURE(lpcszName);
    SYMBOL_INFO SymInfo;
    PDB_FindSymbol(&SymInfo, lpcszName);
    return SymInfo.Address;
}


static VOID MBEX_Print(const char *pMsg)
{
    ENSURE(pMsg != NULL);
    puts(pMsg);
}

static VOID MBEX_Sleep(DWORD dwMsec)
{
    Sleep(dwMsec);
}


VOID MBEX_AddSymbolsCallback(VOID)
{
    MBEX_SETSYMB_FN(MBEX_Print);
    MBEX_SETSYMB_FN(MBEX_Sleep);
    MBEX_SETSYMB_FN(MBEX_FindSymbol);

    MBEX_SETSYMB_VAR(MBEX_VerMajor);
    MBEX_SETSYMB_VAR(MBEX_VerMinor);
    MBEX_SETSYMB_VAR(MBEX_VerPatch);
}


bool MBEX_GetSymbolsCallback(VOID)
{
    MBEX_GETSYMB(MB_Init);
    MBEX_GETSYMB(MB_Exit);

    MBEX_GETSYMB(MB_MissionFrameMove);
    MBEX_GETSYMB(MB_MissionStart);
    MBEX_GETSYMB(MB_MissionFinish);
    MBEX_GETSYMB(MB_MissionClear);
    MBEX_GETSYMB(MB_StatementExecuteWSE);

    return true;
}


VOID MBEX_AssignHookFuncs(VOID)
{
    warp.func[wfn_MissionFrameMove].pHookFn = &MBEX_H_MissionFrameMove;
    warp.func[wfn_MissionStart].pHookFn     = &MBEX_H_MissionStart;
    warp.func[wfn_MissionFinish].pHookFn    = &MBEX_H_MissionFinish;
    warp.func[wfn_MissionClear].pHookFn     = &MBEX_H_MissionClear;
    warp.func[wfn_ExecuteWSE].pHookFn       = &MBEX_H_ExecuteWSE;
}


