#include "pdb_symbol.h"


VOID PDB_GlobalProcess(LPCSTR lpcszVarName)
{
    ENSURE(warp.hProcess && warp.dw64ModBase && lpcszVarName);
    
    printf("Parsing global: %s\n", lpcszVarName);
    
    // Define a SYMBOL_INFO structure to store the symbol information.
    SYMBOL_INFO_PACKAGE sip;
    UTIL_ZERO_STRUCT(sip);
    sip.si.SizeOfStruct = sizeof(SYMBOL_INFO);
    sip.si.MaxNameLen = MAX_SYM_NAME;
    // Attempt to find the symbol by name.
    ENSURE(SymFromName(warp.hProcess, (LPSTR)lpcszVarName, &sip.si));

    if (sip.si.Tag == SymTagData) {

        // Wide name for global variable
        LPWSTR lpwszVarName = PDBC_AllocWideSymbolNameA(lpcszVarName);
        DWORD dwVarAddr = (DWORD)sip.si.Address;

        // Get symbol length
        ULONG64 ul64Len = 0;
        ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, sip.si.TypeIndex, TI_GET_LENGTH, &ul64Len));
        DWORD dwLen = (DWORD)ul64Len;

        // Get num children
        ULONG ulNumChildren = 0;
        ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, sip.si.TypeIndex, TI_GET_CHILDRENCOUNT, &ulNumChildren));

        LPCWSTR lpcwszVarPre = L"*p";
        LPCWSTR lpcwszVarAddrPre = L"= (void *)0x";

        // It's a struct
        if (ulNumChildren > 0) { 
            // Get the type name of the struct
            LPWSTR lpwszStructName = NULL;
            ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, sip.si.TypeIndex, TI_GET_SYMNAME, &lpwszStructName) && lpwszStructName);
            PDBC_SanitizeSymbolName(lpwszStructName);
            ENSURE_FWPRINTF(L"%25s %s%-35s %s%p;\n", lpwszStructName, lpcwszVarPre, lpwszVarName, lpcwszVarAddrPre, dwVarAddr);
            LocalFree(lpwszStructName);
        }

        // It's a base type or complex type
        else {
            DWORD dwTypeId = 0, dwBaseTypeId = 0, dwTag = 0;

            // Check it's a base type
            if (PDBC_TypeGetBaseType(sip.si.TypeIndex, dwLen, 1, &dwBaseTypeId)) {
                ENSURE_FWPRINTF(L"%25s %s%-35s %s%p;\n", PDBC_BT_NAMES[dwBaseTypeId], lpcwszVarPre, lpwszVarName, lpcwszVarAddrPre, dwVarAddr);
            }

            // If not - then it's a complex type
            else {
                ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, sip.si.TypeIndex, TI_GET_TYPEID, &dwTypeId));

                // Get child type symtag
                ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwTypeId, TI_GET_SYMTAG, &dwTag));

                // Pointer or array type
                if ( (dwTag == SymTagPointerType) || (dwTag == SymTagArrayType)|| (dwTag == SymTagBaseType) ) dwTag = SymTagFunctionType; // treat as void (temp fix)

                // Just a function pointer
                if (dwTag == SymTagFunctionType) {
                    ENSURE_FWPRINTF(L"%25s %s%-35s %s%p;\n", L"void", lpcwszVarPre, lpwszVarName, lpcwszVarAddrPre, dwVarAddr);
                } 
                // pure UDT
                else if (dwTag == SymTagUDT) {
                    // Get child type name
                    LPWSTR lpwszUdtName = NULL;
                    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwTypeId, TI_GET_SYMNAME, &lpwszUdtName) && lpwszUdtName);
                    PDBC_SanitizeSymbolName(lpwszUdtName);
                    ENSURE_FWPRINTF(L"%25s *%sp%-33s %s%p;\n", lpwszUdtName, lpcwszVarPre, lpwszVarName, lpcwszVarAddrPre, dwVarAddr);
                    LocalFree(lpwszUdtName);
                } 
                
                else {
                    printf("WARNING: undefined global %s tag:%lu\n", lpcszVarName, dwTag);
                }
                SetLastError(ERROR_SUCCESS);
            }
        }

        LocalFree(lpwszVarName);
    }

    // Symbol is not a valid data
    else {
        printf("WARNING: Invalid global type %s tag %lu\n", lpcszVarName, sip.si.Tag);
    }
}