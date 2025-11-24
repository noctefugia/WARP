#include "pdb_symbol.h"

#define ENSURE_WPRINTF_PDB_ENUM(format, ...) do { \
    WCHAR pwszDefEnum[UTIL_MAXLINE]; \
    ENSURE(snwprintf(pwszDefEnum, UTIL_MAXLINE, format, ## __VA_ARGS__) > 0); \
    DynBuff_Append(&pdb.sEnumData, pwszDefEnum); \
} while(0)


WINBOOL PDB_EnumProcess(PSYMBOL_INFO pSymInfo)
{
    ENSURE(pSymInfo && warp.dw64ModBase);

    ULONG ulNumChildren = 0;
    TI_FINDCHILDREN_PARAMS* pChildrenParams = NULL;

    // Handle mb & rgl enums
    if (pSymInfo->Tag == SymTagEnum) { FOR_I_CONFIG(cid_Enums) {
        if (strstr(pSymInfo->Name, COMM_GetConfigString(cid_Enums, i)) == pSymInfo->Name) {
            if (!PDBC_TypeGetChilds(pSymInfo->TypeIndex, &ulNumChildren, &pChildrenParams)) return TRUE; // exit if we don't have children

            //! This code is temporary and should be reworked (it's a bad practice to check enum name against the whole text buffer)

            // Check if name already exists, consider space after string to allow names with the same prefix
            LPWSTR lpwszEnumName = UTIL_AllocWideStringA(pSymInfo->Name);
            INT iEnumNameLen = wcslen(lpwszEnumName); PWCHAR pwszNamePos;
            if ( ((pwszNamePos = wcsstr(pdb.sEnumData.buffer, lpwszEnumName)) != NULL) && (pwszNamePos[iEnumNameLen] == L' ') ) {
                printf("Skipping duplicate enum: %s\n", pSymInfo->Name);
            }
            
            // Valid name, add to buffer
            else {
                ENSURE_WPRINTF_PDB_ENUM(L"enum %s // #%lu\n{\n", lpwszEnumName, pSymInfo->TypeIndex);

                // Iterate over each children
                DWORD dwChildIndex = 0;
                for (ULONG ulChildInd = 0; ulChildInd < ulNumChildren; ++ulChildInd) {
                    DWORD dwChildId = pChildrenParams->ChildId[ulChildInd];

                    // Get child name
                    LPWSTR lpwszName;
                    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwChildId, TI_GET_SYMNAME, &lpwszName) && lpwszName);

                    DWORD64 varValue[2]; // VARIANT varValue; - hack to not use VARIANT with tons of bloated winAPI headers
                    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwChildId, TI_GET_VALUE, &varValue));

                    LPCWSTR lpcwszComma = (++dwChildIndex == ulNumChildren) ? L" " : L",";
                    ENSURE_WPRINTF_PDB_ENUM(L"\t%-*s = 0x%llX%s\n", 64, lpwszName, varValue[1], lpcwszComma);

                    LocalFree(lpwszName);
                }

                ENSURE_WPRINTF_PDB_ENUM(L"};\n\n");
            }

            if (lpwszEnumName != NULL) LocalFree(lpwszEnumName);
            if (pChildrenParams != NULL) free(pChildrenParams);
            break;
        } }

        return TRUE;
    }

    return FALSE;
}