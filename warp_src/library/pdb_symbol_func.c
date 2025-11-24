#include "pdb_symbol.h"


#define ENSURE_WPRINTF_PDB_FUNC(format, ...) do { \
    WCHAR pwszDefFunc[UTIL_MAXLINE]; \
    ENSURE(snwprintf(pwszDefFunc, UTIL_MAXLINE, format, ## __VA_ARGS__) > 0); \
    DynBuff_Append(&pdb.sFuncData, pwszDefFunc); \
} while(0)


VOID PDB_ProcessSymFunctionChild(PSYMBOL_INFO pSymInfo, pdbChild *pParent)
{
    ENSURE(pSymInfo && pParent);

	DWORD dwNumArgs = 0, dwTypeId = 0, dwCallConv; 

    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pParent->dwId, TI_GET_TYPEID, &dwTypeId));
	ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwTypeId, TI_GET_COUNT, &dwNumArgs));

    LPWSTR lpwszCallPref = NULL;
    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwTypeId, TI_GET_CALLING_CONVENTION, &dwCallConv));
    switch (dwCallConv) {
        case CV_CALL_THISCALL:  lpwszCallPref = UTIL_AllocWideStringW(L"THISCALL"); lpwszCallPref = UTIL_AppendWideStringDec(lpwszCallPref, (INT)dwNumArgs);    break;
        case CV_CALL_NEAR_C:    lpwszCallPref = UTIL_AllocWideStringW(L"cdecl");                                                                                break;
        case CV_CALL_NEAR_STD:  lpwszCallPref = UTIL_AllocWideStringW(L"stdcall");                                                                              break;
        default:                wprintf(L"WARNING: %s calling convention not implemented: 0x%X\n", pParent->lpcwszName, dwCallConv);                            return;
    }
    ENSURE(lpwszCallPref != NULL);

    LPWSTR lpwszFnPref = UTIL_AllocWideStringA(pSymInfo->Name);

    // Add warp functions
    LPWSTR lpwszClassName = UTIL_AllocWideStringW(lpwszFnPref);
    lpwszClassName = UTIL_AppendWideStringW(lpwszClassName, L"::");
    lpwszClassName = UTIL_AppendWideStringW(lpwszClassName, pParent->lpcwszName);
    for (UINT i = 0; i < wfn_Count; ++i) {
        if (wcscmp(lpwszClassName, WARP_FN_NAMES[i]) == 0) {
            warp.func[i].dwAddr = (DWORD)pParent->ul64Address;
            warp.func[i].dwSz = pParent->dwLenFn;
            wprintf(L"Added warp func: %s (addr:0x%X, sz:%lu)\n", WARP_FN_NAMES[i], warp.func[i].dwAddr, warp.func[i].dwSz);
            break;
        }
    }
    LocalFree(lpwszClassName);

    // Create satinized name of func address variable
    LPWSTR lpwszFnPrefS = UTIL_AllocWideStringW(lpwszFnPref);
    PDBC_SanitizeSymbolName(lpwszFnPrefS);
    LPWSTR lpcwszNameS = UTIL_AllocWideStringW(pParent->lpcwszName);
    PDBC_SanitizeSymbolName(lpcwszNameS);
    WCHAR pwszVarName[UTIL_MAXLINE], pwszVarNameRef[UTIL_MAXLINE];
    ENSURE(snwprintf(pwszVarName, UTIL_MAXLINE, L"%s_A_%s ", lpwszFnPrefS, lpcwszNameS) >= 0);

    //! This code is temporary and should be reworked (it's a bad idea to check func name against monolitic buffer)

    // Check duplicates
    BOOL bIsDuplicate = TRUE; DWORD dwDupNo = 0;
    wcscpy(pwszVarNameRef, pwszVarName);
    do { // Loop till we find unique name
        if (wcsstr(pdb.sFuncData.buffer, pwszVarName) != NULL) {
            // Get index string
            WCHAR pwszDupNo[10], pwszTemp[UTIL_MAXLINE];
            _itow(dwDupNo++, pwszDupNo, 10);
            // Append index to avoid duplicates
            wcscpy(pwszTemp, pwszVarNameRef);
            pwszTemp[wcslen(pwszTemp) - 1] = L'\0'; // Remove trailing space
            ENSURE(snwprintf(pwszVarName, UTIL_MAXLINE, L"%s_%s ", pwszTemp, pwszDupNo) >= 0);
        } else {
            bIsDuplicate = FALSE;
        }
    } while(bIsDuplicate);

    // Append to buffer
    ENSURE_WPRINTF_PDB_FUNC(L"const uint %s= 0x%08X; // %s %s::%s(%lu)\n", pwszVarName, (DWORD)pParent->ul64Address, lpwszCallPref, lpwszFnPref, pParent->lpcwszName, dwNumArgs);

    /* TODO
    ULONG ulNumChildren = 0;
    TI_FINDCHILDREN_PARAMS* pChildrenParams = NULL;

    if (PDBC_TypeGetChilds(dwTypeId, &ulNumChildren, &pChildrenParams)) {
        wprintf(L"\t%s %s_%s(%s *this", lpwszCallPref, lpwszFnPref, pParent->lpcwszName, lpwszFnPref, pParent->ul64Address, dwNumArgs);

        for (ULONG ulChildInd = 0; ulChildInd < ulNumChildren; ++ulChildInd) {
            DWORD dwCurId = 0, dwCurTag = 0, dwCurType = 0;
            dwCurId = pChildrenParams->ChildId[ulChildInd];
            // Get child symtag
            ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwCurId, TI_GET_SYMTAG, &dwCurTag));
            if (dwCurTag == SymTagFunctionArgType) {
                ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwCurId, TI_GET_TYPEID, &dwCurType));

                wprintf(L", ARG%lu", dwCurType);

                LPWSTR lpwszName = NULL;
                if (SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwCurType, TI_GET_SYMNAME, &lpwszName) && lpwszName) {
                    wprintf(L", %s", lpwszName);
                    LocalFree(lpwszName);
                }
            }
        }

        wprintf(L"); // 0x%llX, n_args=%lu\n", pParent->ul64Address, dwNumArgs);

        free(pChildrenParams);

    }*/
        
    // Clean up
    LocalFree(lpwszFnPref);
    LocalFree(lpwszFnPrefS);
    LocalFree(lpcwszNameS);
}


VOID PDB_PatchFunctions(VOID)
{
    for (UINT i = 0; i < wfn_Count; ++i) {
        // Check if function is valid
        if (warp.func[i].dwAddr && warp.func[i].dwSz && warp.func[i].pHookFn) {
            // Search specific pattern by function index
            DWORD dwFoundAddr = MBEX_SearchFuncPattern(i);
            if (dwFoundAddr != 0) {
                wprintf(L"Patch '%s' at 0x%p: ", WARP_FN_NAMES[i], dwFoundAddr);
                // Install patch with custom hook function
                LPCWSTR lpcszResult = MBEX_InjectCustomFunc(i, dwFoundAddr, warp.func[i].pHookFn) ? L"OK" : L"OFF";
                wprintf(L"%s\n", lpcszResult);
            } else {
                wprintf(L"ERROR: Pattern for '%s' not found.\n", WARP_FN_NAMES[i]);
            }
        } else {
            wprintf(L"ERROR: Function '%s' not defined (addr=%lu, sz=%lu, ptr=%p)\n", WARP_FN_NAMES[i], warp.func[i].dwAddr, warp.func[i].dwSz, warp.func[i].pHookFn);
        }
    }
}


VOID PDB_SearchFunctions(LPCSTR lpcszName)
{
    ENSURE(lpcszName != NULL);

    SYMBOL_INFO SymInfo;
    if (PDB_FindSymbol(&SymInfo, lpcszName)) {
        DWORD dwAddr = (DWORD)SymInfo.Address;
        LPWSTR lpcwszName = UTIL_AllocWideStringA(lpcszName);
        ENSURE_WPRINTF_PDB_FUNC(L"const uint A_%s = 0x%08X;\n", lpcwszName, dwAddr);
        LocalFree(lpcwszName);
        printf("Function '%s' at: 0x%08X\n", lpcszName, dwAddr);
    } else {
        printf("ERROR: func '%s' not found.\n", lpcszName);
    }
}