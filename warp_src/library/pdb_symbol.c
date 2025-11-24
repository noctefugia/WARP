#include "pdb_symbol.h"
#include "mb_extension.h"

static BOOL CALLBACK PDB_EnumSymbolsCallback(PSYMBOL_INFO pSymInfo, ULONG SymbolSize, PVOID UserContext);

pdbDef pdb = {0};

// Include all submodules
#include "pdb_symbol_func.c"
#include "pdb_symbol_struct.c"
#include "pdb_symbol_enum.c"
#include "pdb_symbol_global.c"

VOID PDB_Init(VOID)
{
    ENSURE(warp.hProcess);
    
    // Initialize the symbol handler for the process.
    ENSURE(SymInitialize(warp.hProcess, NULL, FALSE));

    // Get the module base address from the module handle.
    HMODULE hModule = GetModuleHandle(NULL);
    MODULEINFO modInfo;
    ENSURE(GetModuleInformation(warp.hProcess, hModule, &modInfo, sizeof(modInfo)));
    DWORD dwBase = (DWORD)modInfo.lpBaseOfDll;

    // Load the module symbols.
    CHAR szExePath[MAX_PATH];
    ENSURE(GetModuleFileNameEx(warp.hProcess, hModule, szExePath, MAX_PATH));
    warp.dwModBase = SymLoadModuleEx(warp.hProcess, NULL, szExePath, NULL, dwBase, 0, NULL, 0);
    
    // Ensure that the loaded module base matches the expected base address.
    ENSURE(warp.dwModBase == dwBase);
    warp.dw64ModBase = (DWORD64)dwBase;
}


VOID PDB_Close(VOID)
{
    SymCleanup(warp.hProcess);
}


VOID PDB_Process(VOID)
{
    ENSURE(warp.dwModBase);
    UTIL_ZERO_STRUCT(pdb);
    
    // Read in the mb-config
    COMM_ReadConfigIntoArray(cid_Structs,   FILEPATH_MBNAMES, CONFSECT_STRUCTS);
    COMM_ReadConfigIntoArray(cid_Enums,     FILEPATH_MBNAMES, CONFSECT_ENUMS);
    COMM_ReadConfigIntoArray(cid_Globals,   FILEPATH_MBNAMES, CONFSECT_GLOBALS);
    COMM_ReadConfigIntoArray(cid_Functions, FILEPATH_MBNAMES, CONFSECT_FUNCTIONS);

    // Init string buffers
    DynBuff_Init(&pdb.sUndefData);
    DynBuff_Init(&pdb.sEnumData);
    DynBuff_Init(&pdb.sFuncData);
    
    // Initialize the PDB structure
    pdb.pStructs = (pdbStruct*)calloc(COMM_GetConfigSize(cid_Structs), sizeof(pdbStruct));
    ENSURE(pdb.pStructs != NULL);
    FOR_I_CONFIG(cid_Structs) DynBuff_Init(&pdb.pStructs[i].sData);
    
    printf("\nSTRUCTS:\n");
    COMM_OpenFile(FILEPATH_MBDEFSH, "w");
    ENSURE_GENFILE_CAPTION(FILENAME_MB_DEFSH, "definitions extracted from game engine's codebase");
    
    ENSURE_FPRINTF("/* Related headers */\n");
    ENSURE_FPRINTF("#include \"" FILENAME_MB_UNDEFSH "\"\n");
    ENSURE_FPRINTF("#include \"" FILENAME_MB_ENUMSH "\"\n");

    ENSURE_FPRINTF("\n/* Related functions */\n");
    ENSURE_FPRINTF("int WARP_TestEngineStructs(void);\n");

    ENSURE_FPRINTF("\n/* Struct type-defs */\n");
    FOR_I_CONFIG(cid_Structs) { 
        LPWSTR lpwszName = PDBC_AllocWideSymbolNameA(COMM_GetConfigString(cid_Structs, i));
        ENSURE_FWPRINTF(L"typedef struct %s %s;\n", lpwszName, lpwszName);
        LocalFree(lpwszName);
    }

    // Enumarete through all types
    ENSURE(SymEnumTypes(warp.hProcess, warp.dw64ModBase, PDB_EnumSymbolsCallback, NULL));

    // Sort and generate structs
    ENSURE_FPRINTF("\n/* Struct definitions */\n\n");
    PDB_StructSortAndPrint();

    ENSURE_FPRINTF("/* Related code */\n");
    ENSURE_FPRINTF("#include \"" FILENAME_MB_DEFSC "\"\n");
    
    COMM_CloseFile(); printf("\n");
    PRINTF_FILEGEN(FILENAME_MB_DEFSH);

    COMM_OpenFile(FILEPATH_MBUNDEFSH, "w");
    ENSURE_GENFILE_CAPTION(FILENAME_MB_UNDEFSH, "undefined references extracted from game engine's codebase");
    ENSURE_FPRINTF("/* Undefined structures */\n");
    ENSURE_FWPRINTF(L"%s", pdb.sUndefData.buffer);
    COMM_CloseFile();
    PRINTF_FILEGEN(FILENAME_MB_UNDEFSH);

    COMM_OpenFile(FILEPATH_MBDEFSC, "w");
    ENSURE_GENFILE_CAPTION(FILENAME_MB_DEFSC, "extracted globals and codegen tests");

    printf("\nGLOBALS:\n");
    ENSURE_FPRINTF("/* Define globals */\n");
    FOR_I_CONFIG(cid_Globals) PDB_GlobalProcess(COMM_GetConfigString(cid_Globals, i));

    // Inject custom hooks into engine functions
    printf("\nFUNCTIONS:\n");
    PDB_PatchFunctions();

    ENSURE_FPRINTF("\n/* Define functions */\n");
    DynBuff_Append(&pdb.sFuncData, L"\n");
    FOR_I_CONFIG(cid_Functions) PDB_SearchFunctions(COMM_GetConfigString(cid_Functions, i));
    ENSURE_FWPRINTF(L"%s", pdb.sFuncData.buffer); printf("\n"); 

    ENSURE_FPRINTF("\n\n/* Test struct sizes */\n");
    ENSURE_FPRINTF("MB_ERROR MB_TestEngineStructs(void)\n{\n");
    FOR_I_CONFIG(cid_Structs) {
        LPWSTR lpwszName = PDBC_AllocWideSymbolNameA(COMM_GetConfigString(cid_Structs, i));
        ENSURE_FWPRINTF(L"\tENSURE_SZ(%s, %d);\n", lpwszName, pdb.pStructs[i].dwSize);
        LocalFree(lpwszName);
    }
    ENSURE_FPRINTF("\n\treturn 0;\n");
    ENSURE_FPRINTF("}\n");

    COMM_CloseFile();
    PRINTF_FILEGEN(FILENAME_MB_DEFSC);

    // Create enum file
    COMM_OpenFile(FILEPATH_MBENUMSH, "w");
    ENSURE_GENFILE_CAPTION(FILENAME_MB_ENUMSH, "enumerations extracted from game engine's codebase");
    ENSURE_FWPRINTF(L"%s", pdb.sEnumData.buffer);
    COMM_CloseFile();
    PRINTF_FILEGEN(FILENAME_MB_ENUMSH);

    // Cleanup
    DynBuff_Free(&pdb.sEnumData);
    DynBuff_Free(&pdb.sUndefData);
    DynBuff_Free(&pdb.sFuncData);
    FOR_I_CONFIG(cid_Structs) DynBuff_Free(&pdb.pStructs[i].sData);
    free(pdb.pStructs);

    // Free mb-configs
    COMM_FreeConfigArray(cid_Structs);
    COMM_FreeConfigArray(cid_Enums);
    COMM_FreeConfigArray(cid_Globals);
    COMM_FreeConfigArray(cid_Functions);
    
    UTIL_ZERO_STRUCT(pdb);
}


static BOOL CALLBACK PDB_EnumSymbolsCallback(PSYMBOL_INFO pSymInfo, ULONG SymbolSize, PVOID UserContext) 
{
    ENSURE(pSymInfo && warp.dw64ModBase);

    //COMM_DEBUGF("SymInfo: %s\n", pSymInfo->Name);

    if (PDB_EnumProcess(pSymInfo))      return TRUE;
    if (PDB_StructProcess(pSymInfo))    return TRUE;

    return TRUE; // continue enumeration
}


BOOL PDB_FindSymbol(PSYMBOL_INFO pSymInfo, LPCSTR lpcszName)
{
    ENSURE(lpcszName && pSymInfo);

    // Zero input buffer
    memset(pSymInfo, 0, sizeof(SYMBOL_INFO));

    // Define a SYMBOL_INFO_PACKAGE structure to store the symbol information.
    SYMBOL_INFO_PACKAGE sip;
    UTIL_ZERO_STRUCT(sip);
    sip.si.SizeOfStruct = sizeof(SYMBOL_INFO);
    sip.si.MaxNameLen = MAX_SYM_NAME;

    // Attempt to find the symbol by name.
    BOOL result = SymFromName(warp.hProcess, (LPSTR)lpcszName, &sip.si);

    // Copy data from SYMBOL_INFO_PACKAGE into provided symbol info structure
    if (result) memcpy(pSymInfo, &sip.si, sizeof(SYMBOL_INFO));

    return result;
}



