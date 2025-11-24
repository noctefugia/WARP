#include "asm_engine.h"

static VOID ASM_InstallProg(BYTE *pbtInstAddr, BYTE *pbtProg, WORD wProgSz);
static VOID ASM_CheckMemIsAccessible(BYTE *pdwAddr, DWORD dwMemSz);

/* ASM SUBPROG: get current address
    0D16001C - 55                    - push ebp
    0D16001D - E8 00000000           - call 0D160022
    0D160022 - 5D                    - pop ebp
*/
#define ASM_EBP_STORE_CUR_ADDR 0x55, 0xE8, 0x00, 0x00, 0x00, 0x00, 0x5D

// ASM PROG: Call custom function from assembly code if address is non-zero
BYTE ASM_CALL_CUSTOM_SUB[] = {
                                    // DATA:
                                    // 07FB0088 - 00 00 00 00
                                    // CODE:
    ASM_EBP_STORE_CUR_ADDR,
                                    // 07FB008C - 55                    - push ebp
                                    // 07FB008D - E8 00000000           - call 07FB0092
                                    // 07FB0092 - 5D                    - pop ebp
    0x8B, 0x6D, 0xF6,               // 07FB0093 - 8B 6D F6              - mov ebp,[ebp-A]
    0x83, 0xFD, 0x00,               // 07FB0096 - 83 FD 00              - cmp ebp,00 { 0 }
    0x74, 0x02,                     // 07FB0099 - 74 02                 - je 07FB009D
    0xFF, 0xD5,                     // 07FB009B - FF D5                 - call ebp
    0x5D                            // 07FB009D - 5D                    - pop ebp
};
const BYTE ASM_CALL_CUSTOM_SUB_SZ = sizeof(ASM_CALL_CUSTOM_SUB);


/* == ASM-x32 Hooking Engine (v1.3) - Installs Code Hooks within 32-bit Processes ==
   This function facilitates the installation of code hooks within 32-bit x86 processes. 
   It supports the following features:
     - Automatic alignment of original instructions using NOP insertion.
     - Calculation and management of jump addresses for hook entry and exit.
     - Installation of multiple hooks sequentially with detection of existing patches.
     - Memory allocation and management for hook code and data.
     - User-defined sizes for hook code and data sections.
     - Initialization of hook sections (zeroing data, filling code with NOPs).
     - Integration of user-provided assembly code within the hook.
     - Preservation and restoration of original page protection settings.
     - Verification of memory accessibility and permissions.
     - Optional retrieval of the original trampoline code (v1.2).
   
   Parameters:
     dwInstOffset: Relative virtual address (to process base) where the hook will be installed.
     btTrampSz: Size (in bytes) of the original code to replace with a jump to the hook.
     wCodeSz: Size of the user code section within the hook.
     *pbtAsmProg: Pointer to a byte array containing user-provided assembly code (NULL if none). 
     wDataSz: Size of the user data section within the hook.
     *pData: (Optional) Pointer to a variable that will receive the address of the hook's data section.
     *pbtOrigTramp: (Optional) Pointer to a buffer where the original trampoline code will be stored.

   Returns:
     Pointer to the beginning of the user code section within the allocated hook memory. 

   Notes:
     - This engine is designed for 32-bit processes and currently only supports instruction swapping without relative addressing. */
BYTE *ASM_InstallHook(DWORD dwInstOffset, BYTE btTrampSz, WORD wCodeSz, BYTE *pbtAsmProg, WORD wDataSz, VOID *pData, BYTE *pbtOrigTramp)
{
    static DWORD dwMemPagePos = 0, dwMemPageStart = 0;
    static WORD wHookNo = 0;
    const BYTE btJumpInstrSz = 1 + sizeof(DWORD);
    BYTE pbtJumpInstr[btJumpInstrSz];
    pbtJumpInstr[0] = 0xE9; // Jump instr
    ++wHookNo;

    COMM_DEBUGF("[ASM] New hook params: offset=0x%08lX, wCodeSz=%u, wDataSz=%u\n", dwInstOffset, wCodeSz, wDataSz);

    BYTE *pbtInstAddr = (BYTE *)(warp.dwBaseAddr + dwInstOffset);
    ASM_CheckMemIsAccessible(pbtInstAddr, btTrampSz); // Target mem is ok?
    DWORD dwOldProtect, dwNewProtect;
    ENSURE(VirtualProtect(pbtInstAddr, btTrampSz, PAGE_EXECUTE_READWRITE, &dwOldProtect));
    if (dwOldProtect == PAGE_EXECUTE) // We need read access after hook installation
        dwOldProtect = PAGE_EXECUTE_READ;

    if (pbtOrigTramp != NULL) // NEW v1.2 - return original trampoline data
        memcpy(pbtOrigTramp, pbtInstAddr, btTrampSz);

    BYTE *pbtCustomCodeAddr = NULL, *pbtCustomDataAddr = NULL;
    if (pbtInstAddr[0] == pbtJumpInstr[0]) { // Already patched?
        DWORD *pdwRelAddrToOldHook = (DWORD *)(pbtInstAddr + 1);
        DWORD dwOldHookAddr = ((DWORD)(*pdwRelAddrToOldHook)) + warp.dwBaseAddr + dwInstOffset + btJumpInstrSz; // Give me old hook address!
        pbtCustomDataAddr = (BYTE *)(dwOldHookAddr - wDataSz);
        if (pData != NULL)
            memcpy(pData, &pbtCustomDataAddr, sizeof(void *));
        pbtCustomCodeAddr = (BYTE *)dwOldHookAddr;
        COMM_DEBUGF("[ASM] Detected installed hook#%u at address: 0x%08lX (p_data:0x%p, p_code:0x%p)\n", wHookNo, dwOldHookAddr, pbtCustomDataAddr, pbtCustomCodeAddr);
        ENSURE(VirtualProtect(pbtInstAddr, btTrampSz, dwOldProtect, &dwNewProtect));
        return pbtCustomCodeAddr; // Return pointer to first nop
    }  // NOTE: new hooks is better to place on the new page even if there is some free space on detected hook page...

    BYTE *pbtHookAddr = NULL;
    WORD wHookSzFull = wDataSz + wCodeSz + btTrampSz + btJumpInstrSz;

    // NEW v1.3 - analyze trampoline and exclude it from hook if all opcodes are nops
    BYTE btTrampSzOptimized = btTrampSz; BOOL bIsNops = TRUE;
    for (BYTE i = 0; i < btTrampSz; ++i) {
        if (((BYTE)*(pbtInstAddr + i)) != 0x90) {bIsNops = FALSE; break;}
    }
    if (bIsNops) {
        COMM_DEBUGF("[ASM] Detected empty trampoline, optimizing hook size...\n");
        wHookSzFull -= btTrampSz; btTrampSzOptimized = 0;
    }

    if ( (dwMemPagePos != 0) && ((dwMemPagePos + wHookSzFull) < (dwMemPageStart + warp.dwPageSz)) ) { // Check if we can use already allocated page
        COMM_DEBUGF("[ASM] Installing hook in already allocated page...\n");
        pbtHookAddr = (BYTE *)dwMemPagePos;
        *(pbtHookAddr - 1) = 0x90; // Fix - replace 00 with nop to fix disasm view
    } else { // No allocated page or not enough bytes on current page
        pbtHookAddr = VirtualAlloc(NULL, wHookSzFull, MEM_COMMIT | MEM_RESERVE, PAGE_EXECUTE_READWRITE);
        COMM_DEBUGF("[ASM] New page for hook allocated at address 0x%p\n", pbtHookAddr);
        dwMemPageStart = (DWORD)pbtHookAddr;
    }
    ENSURE(pbtHookAddr != NULL); // WHAT?!
    ASM_CheckMemIsAccessible(pbtHookAddr, wHookSzFull); // Hook mem is ok?

    pbtCustomDataAddr = (BYTE *)pbtHookAddr;
    if (pData != NULL) // If data pointer is valid
        memcpy(pData, &pbtCustomDataAddr, sizeof(void *)); // Then save first data byte address into it
    memset(pbtHookAddr, 0x00, wDataSz); // Make sure that data section contains only zeros
    pbtHookAddr += wDataSz; // Shift from data section
    wHookSzFull -= wDataSz; // Reduce size due to shift

    memset(pbtHookAddr, 0x90, wHookSzFull); // Fill code section with nops
    BYTE *pbtHookTrampAddr = (BYTE *)(pbtHookAddr + wCodeSz); // Address where trampoline first byte is located inside hook
    if (btTrampSzOptimized != 0)
        memcpy(pbtHookTrampAddr, pbtInstAddr, btTrampSzOptimized); // Copy stolen bytes at the end of hook

    BYTE *pbtRetFromHookAddr = (BYTE *)(pbtHookAddr + wHookSzFull - btJumpInstrSz); // Create custom hook asm code before patch
    DWORD dwRelAddrFromHook = (DWORD)(pbtInstAddr - pbtRetFromHookAddr - btJumpInstrSz + btTrampSz); // Jump AFTER trampoline
    memcpy((BYTE *)(pbtJumpInstr + 1), &dwRelAddrFromHook, sizeof(DWORD)); // Assign jump address
    memcpy(pbtRetFromHookAddr, pbtJumpInstr, btJumpInstrSz); // Append jump from hook instr

    DWORD dwRelAddrToHook = (DWORD)(pbtHookAddr - pbtInstAddr - btJumpInstrSz); // M&B code patching - redirect code flow to custom section
    memcpy((BYTE *)(pbtJumpInstr + 1), &dwRelAddrToHook, sizeof(DWORD)); // Assign jump address
    BYTE pbtInstAddrPatch[btTrampSz];
    memset(pbtInstAddrPatch, 0x90, btTrampSz); // Don't show me garbage in debugger!
    memcpy(pbtInstAddrPatch, pbtJumpInstr, btJumpInstrSz); // Full patch with jump and nops
    memcpy(pbtInstAddr, pbtInstAddrPatch, btTrampSz); // Apply the patch, finally
    ENSURE(VirtualProtect(pbtInstAddr, btTrampSz, dwOldProtect, &dwNewProtect)); // Restore page protection

    pbtCustomCodeAddr = pbtHookAddr; // NEW - place custom code at the start of hook code section
    COMM_DEBUGF("[ASM] Hook#%u installed at address: 0x%p (pData:0x%p, p_code:0x%p)\n", wHookNo, pbtHookAddr, pbtCustomDataAddr, pbtCustomCodeAddr);

    if (pbtAsmProg != NULL)
        ASM_InstallProg(pbtCustomCodeAddr, pbtAsmProg, wCodeSz);

    dwMemPagePos = (DWORD)(pbtHookAddr + wHookSzFull + 1); // Set page pos to end of current hook + 1 nop
    COMM_DEBUGF("[ASM] Page address for next hook: 0x%08lX\n", dwMemPagePos);

    return pbtCustomCodeAddr; // Return pointer to first NOP instr in hook
}


/* Installs User-Provided Assembly Code within a Hook
   Copies the provided assembly code byte array into the designated code section of a previously allocated hook.

   Parameters:
     *pbtInstAddr: Pointer to the starting address of the hook's code section.
     *pbtProg: Pointer to a byte array containing the user-provided assembly code.
     wProgSz: Size (in bytes) of the assembly code. 
*/
static VOID ASM_InstallProg(BYTE *pbtInstAddr, BYTE *pbtProg, WORD wProgSz)
{
    ENSURE(pbtInstAddr && pbtProg && wProgSz > 0);

    for (WORD i = 0; i < wProgSz; ++i)
        *(pbtInstAddr + i) = *(pbtProg + i);

    COMM_DEBUGF("[ASM] Custom asm-prog (%u bytes) installed at address: 0x%p\n", wProgSz, pbtInstAddr);
}


/* Verifies Memory Accessibility and Permissions
   Checks if the specified memory region is accessible and has the required permissions for modification (read/write/execute).

   Parameters:
     *pdwAddr: Base address of the memory region to check.
     dwMemSz: Size of the memory region. 
*/
static VOID ASM_CheckMemIsAccessible(BYTE *pdwAddr, DWORD dwMemSz)
{
    ENSURE(pdwAddr != NULL);

    MEMORY_BASIC_INFORMATION mbi;
    mbi.RegionSize = dwMemSz;
    ENSURE(VirtualQuery(pdwAddr, &mbi, sizeof(mbi)));

    COMM_DEBUGF("[ASM] Page flags (state:0x%08lX, protect:0x%08lX)\n", mbi.State, mbi.Protect);
    ENSURE( (mbi.State == MEM_COMMIT) && (mbi.Protect != PAGE_NOACCESS) );
}


/* Modifies Process Memory at a Specified Address
   Directly modifies the memory of the target process at the given relative address with the provided data.

   Parameters:
     dwRelAddr: Relative virtual address (to process base) of the memory location to modify.
     pBuff: Pointer to the data buffer containing the new values.
     dwBuffSz: Size (in bytes) of the data buffer. 
*/ 
VOID ASM_ModifyMem(DWORD dwRelAddr, VOID *pBuff, DWORD dwBuffSz)
{
    ENSURE(pBuff && dwBuffSz > 0);

    DWORD dwAddr = warp.dwBaseAddr + dwRelAddr;
    BYTE *pData = (BYTE *)pBuff;
    BYTE *pbtAddr = (BYTE *)dwAddr;

    ASM_CheckMemIsAccessible(pbtAddr, dwBuffSz);

    DWORD dwOldProtect, dwNewProtect;
    ENSURE(VirtualProtect(pbtAddr, dwBuffSz, PAGE_EXECUTE_READWRITE, &dwOldProtect));

    while (dwBuffSz--)
        *pbtAddr++ = *pData++;

    VirtualProtect(pbtAddr, dwBuffSz, dwOldProtect, &dwNewProtect);
    COMM_DEBUGF("[ASM] Memory at address 0x%08lX modified (%lu bytes)\n", dwAddr, dwBuffSz);
}


/* Searches for a Binary Pattern in Memory within a Specified Range

   Parameters:
     dwStartAddr: Start address of the memory range to search.
     dwRegionSize: Size of the memory region to search.
     pPattern: Pointer to the binary pattern to search for.
     dwPatternSz: Size (in bytes) of the pattern.

   Returns:
     The address of the first occurrence of the pattern in the memory range, or 0 if not found.
*/
DWORD ASM_SearchMemPattern(DWORD dwStartAddr, DWORD dwRegionSize, BYTE *pPattern, DWORD dwPatternSz)
{
    ENSURE(pPattern != NULL);
    DWORD dwEndAddr = dwStartAddr + dwRegionSize - dwPatternSz;

    for (DWORD p = dwStartAddr; p <= dwEndAddr; ++p) {
        if (memcmp((BYTE*)p, pPattern, dwPatternSz) == 0)
            return p;
    }

    return 0;
}


DWORD ASM_PatchMemPattern(DWORD dwStartAddr, DWORD dwRegionSize, DWORD dwOffset, BYTE *pbtPattern, DWORD dwPatternSz, BYTE *pbtNewPattern, DWORD dwNewPatternSz)
{
    ENSURE(pbtPattern && pbtNewPattern && dwPatternSz > 0);

    // Call the function to search for the pattern
    DWORD dwFoundAddr = ASM_SearchMemPattern(dwStartAddr, dwRegionSize, pbtPattern, dwPatternSz);
    if (dwFoundAddr == 0) return 0;

    // Modify the pattern to match the new pattern
    DWORD dwFoundAddrRel = dwFoundAddr - warp.dwBaseAddr + dwOffset; // Fix to comply with legacy code
    ASM_ModifyMem(dwFoundAddrRel, pbtNewPattern, dwNewPatternSz);

    COMM_DEBUGF("Memory patched at: 0x%p\n", dwFoundAddr);

    return dwFoundAddr;
}
