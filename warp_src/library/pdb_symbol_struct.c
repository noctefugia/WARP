#include "pdb_symbol.h"

WINBOOL PDB_StructProcess(PSYMBOL_INFO pSymInfo);
VOID PDB_StructProcessChild(pdbChild *pChild);
VOID PDB_StructAddUndefList(pdbChild *pChild, LPCWSTR lpcwszUdtName);
VOID PDB_StructAddDefList(LPCWSTR lpcwszName);
VOID PDB_StructSortAndPrint(VOID);
VOID PDB_StructPrintChild(pdbChild *pChild, LPCWSTR lpcwszName);

#define PDB_CHILD_WFIXPREFIX(index) L"/* FIX-" L ## #index L" */ "

#define ENSURE_WPRINTF_PDB_STRUCT(format, ...) do { \
    ENSURE(pdb.dwStructInd < COMM_GetConfigSize(cid_Structs)); \
    WCHAR pwszDefStruct[UTIL_MAXLINE]; \
    ENSURE(snwprintf(pwszDefStruct, UTIL_MAXLINE, format, ## __VA_ARGS__) > 0); \
    DynBuff_Append(&pdb.pStructs[pdb.dwStructInd].sData, pwszDefStruct); \
} while(0)

#define ENSURE_WPRINTF_PDB_STRUCT_CHILD(format, type_name, child_name, offset, len, ...) do { \
    WCHAR pwszDefChild[UTIL_MAXLINE]; \
    ENSURE(snwprintf(pwszDefChild, UTIL_MAXLINE, format, type_name, child_name, ## __VA_ARGS__) > 0); \
    ENSURE_WPRINTF_PDB_STRUCT(L"\t%-*s // %p | %X \n", 64, pwszDefChild, offset, len); \
} while(0)


WINBOOL PDB_StructProcess(PSYMBOL_INFO pSymInfo)
{
    ENSURE(pSymInfo && warp.dw64ModBase);
    
    ULONG ulNumChildren = 0;
    TI_FINDCHILDREN_PARAMS* pChildrenParams = NULL;

    // Iterate over config array to find target symbols
    for (pdb.dwStructInd = 0; pdb.dwStructInd < COMM_GetConfigSize(cid_Structs); ++pdb.dwStructInd) {
        if ( (!pdb.pStructs[pdb.dwStructInd].bUsed) && (strcmp(COMM_GetConfigString(cid_Structs, pdb.dwStructInd), pSymInfo->Name) == 0) ) {
            printf("Parsing struct: %s\n", pSymInfo->Name);
            PDBC_TypeGetChilds(pSymInfo->TypeIndex, &ulNumChildren, &pChildrenParams);
            ULONG64 ul64Len = 0;

            // Print struct caption
            LPWSTR lpwszStructName = PDBC_AllocWideSymbolNameA(pSymInfo->Name);
            ENSURE_WPRINTF_PDB_STRUCT(L"struct ALIGN(1) %s // #%lu\n{\n", lpwszStructName, pdb.dwStructInd);
            LocalFree(lpwszStructName);

            // Iterate over each children
            pdbChild child;
            pdb.dwLastOffset = pdb.dwLastLen = pdb.dwUndefIndex = pdb.dwLastAddr = pdb.dwChildIndex = pdb.dwFixedBytes = 0;
            BOOL bFnInTheMiddle = FALSE; // Some classes like WSERCONServer comes with functions in middle of the struct, here quick fix to skip them
            for (ULONG ulChildInd = 0; ulChildInd < ulNumChildren; ++ulChildInd) {
                UTIL_ZERO_STRUCT(child);
                child.dwId = pChildrenParams->ChildId[ulChildInd];

                // Get child symtag
                ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, child.dwId, TI_GET_SYMTAG, &child.dwTag));
                if (child.dwTag == SymTagVTable) continue; // Skip to avoid name-errors

                // Get child name
                ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, child.dwId, TI_GET_SYMNAME, &child.lpcwszName));

                // Handle functions here
                if (child.dwTag == SymTagFunction) {
                    if (SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, child.dwId, TI_GET_ADDRESS, &child.ul64Address)) {
                        // Get func-child length
                        ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, child.dwId, TI_GET_LENGTH, &ul64Len));
                        child.dwLenFn = (DWORD)ul64Len;
                        PDB_ProcessSymFunctionChild(pSymInfo, &child);
                    } else {
                        SetLastError(ERROR_SUCCESS);
                    }
                    if (pdb.dwChildIndex > 0) bFnInTheMiddle = TRUE;
                }
                
                // Handle data here
                else if (child.dwTag == SymTagData) {
                    // Get child address and skip class members
                    if (SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, child.dwId, TI_GET_OFFSET, &child.dwOffset)) {
                        // Process child type
                        PDB_StructProcessChild(&child);
                        ++pdb.dwChildIndex;
                    } else {
                        // It's a C++ class member, skipping as it requires special handling
                        //wprintf(L"%s\n", child.lpcwszName);
                        SetLastError(ERROR_SUCCESS);
                    }
                }
                
                // Handle undefined regions / padding
                else if (child.dwTag == SymTagBaseClass) {
                    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, child.dwId, TI_GET_LENGTH, &ul64Len));
                    child.dwLen = (DWORD)ul64Len;
                    // Align struct with undefined region
                    if (child.dwLen >= 4) { // ??? Could not be less than 4 bytes
                        ++pdb.dwChildIndex;
                        pdb.dwLastAddr += child.dwLen;
                        pdb.dwFixedBytes = child.dwLen;
                        ENSURE_WPRINTF_PDB_STRUCT_CHILD(PDB_CHILD_WFIXPREFIX(1) L"%s %s_%d[%lu];", L"byte", L"undef", child.dwOffset, child.dwLen, pdb.dwUndefIndex++, child.dwLen);
                    }
                }

                // Free the name when done
                if (child.lpcwszName != NULL) LocalFree((HLOCAL)child.lpcwszName); 
                if (!bFnInTheMiddle) {
                    pdb.dwLastOffset = child.dwOffset;
                    pdb.dwLastLen = child.dwLen;
                }
                //ENSURE_WPRINTF_PDB_STRUCT(L"!!!\n");
            }

            // Fix for empty structs
            if (pSymInfo->Size == 1) {
                if (pdb.dwLastAddr == 0) ENSURE_WPRINTF_PDB_STRUCT_CHILD(PDB_CHILD_WFIXPREFIX(2) L"%s %s;", L"byte", L"undef", 0, sizeof(BYTE));
            }
            // Fix end of struct
            else if ( (pdb.dwLastAddr) && (pdb.dwLastAddr < pSymInfo->Size) ) {
                DWORD dwExtraGap = pSymInfo->Size - pdb.dwLastAddr;
                ENSURE_WPRINTF_PDB_STRUCT_CHILD(PDB_CHILD_WFIXPREFIX(3) L"%s %s_%d[%lu];", L"byte", L"undef", pSymInfo->Size - dwExtraGap, dwExtraGap, pdb.dwUndefIndex++, dwExtraGap);
            }

            // Print the struct ending
            ENSURE_WPRINTF_PDB_STRUCT(L"}; // $%X ", pSymInfo->Size);
            INT iCurListInd = pdb.pStructs[pdb.dwStructInd].dwReqDefListInd;
            // Check if there are any required definitions
            if (iCurListInd > 0) {
                // Print the required IDs for this struct
                ENSURE_WPRINTF_PDB_STRUCT(L"[ ");
                for (INT i = 0; i < iCurListInd; ++i) ENSURE_WPRINTF_PDB_STRUCT(L"#%lu ", pdb.pStructs[pdb.dwStructInd].dwReqDefList[i]);
                ENSURE_WPRINTF_PDB_STRUCT(L"]");
            }
            ENSURE_WPRINTF_PDB_STRUCT(L"\n\n");

            pdb.pStructs[pdb.dwStructInd].bUsed = TRUE; // Mark this index as being used.
            pdb.pStructs[pdb.dwStructInd].dwSize = pSymInfo->Size; // Save the size of this struct.
            if (pChildrenParams != NULL) free(pChildrenParams);
            return TRUE;
        } 
    }

    return FALSE;
}


VOID PDB_StructProcessChild(pdbChild *pChild)
{
    ENSURE(warp.dw64ModBase && pChild);
    pChild->eFix = ef_None;
    
    // Get child type
    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwId, TI_GET_TYPEID, &pChild->dwTypeId[0]));
    
    // Get child type symtag
    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[0], TI_GET_SYMTAG, &pChild->dwTypeTag[0]));
        
    // Get child type length
    ULONG64 ul64Len = 0;
    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[0], TI_GET_LENGTH, &ul64Len));
    pChild->dwLen = (DWORD)ul64Len;

    // Fill empty gaps to align struct
    if ( (pdb.dwLastOffset || pdb.dwChildIndex < 2) && ((pdb.dwLastOffset + pdb.dwLastLen) < pChild->dwOffset) ) {
        DWORD dwExtraGap = pChild->dwOffset - (pdb.dwLastOffset + pdb.dwLastLen);
        if (pdb.dwFixedBytes < dwExtraGap) { // Workaround for gap calculation alignment (4RESEARCH)
            dwExtraGap -= pdb.dwFixedBytes;
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(PDB_CHILD_WFIXPREFIX(4) L"%s %s_%d[%lu];", L"byte", L"undef", pChild->dwOffset - dwExtraGap, dwExtraGap, pdb.dwUndefIndex++, dwExtraGap);
        }
    }
    pdb.dwLastAddr = pChild->dwOffset + pChild->dwLen;
    pdb.dwFixedBytes = 0;

    //ENSURE_WPRINTF_PDB_STRUCT(L"%llu|", ul64Len);
                        
    // Base type
    if (pChild->dwTypeTag[0] == SymTagBaseType) {
        DWORD dwBaseTypeId = 0;
        ENSURE(PDBC_TypeGetBaseType(pChild->dwTypeId[0], pChild->dwLen, 1, &dwBaseTypeId));
        ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s %s;", PDBC_BT_NAMES[dwBaseTypeId], pChild->lpcwszName, pChild->dwOffset, pChild->dwLen);
    }

    // Pointer or array
    else if ( (pChild->dwTypeTag[0] == SymTagPointerType) || (pChild->dwTypeTag[0] == SymTagArrayType) ) {
        ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[0], TI_GET_TYPEID, &pChild->dwTypeId[1]));
        ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[1], TI_GET_SYMTAG, &pChild->dwTypeTag[1]));
    
        // Iterate over nested types (TODO: Refactor nested type handling logic)
        LPWSTR lpwszUdtName = NULL;
        for (INT iDepth = 1; iDepth < PDB_CHILD_TYPE_DEPTH; ++iDepth) {
            SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[iDepth-1], TI_GET_COUNT, &pChild->dwTypeArrSz[iDepth-1]);
            if (!SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[iDepth], TI_GET_SYMNAME, &lpwszUdtName)) {
                SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[iDepth], TI_GET_TYPEID, &pChild->dwTypeId[iDepth+1]);
                SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[iDepth+1], TI_GET_SYMTAG, &pChild->dwTypeTag[iDepth+1]);
            } else {
                PDBC_SanitizeSymbolName(lpwszUdtName);
                break;
            }
        }
        SetLastError(ERROR_SUCCESS);
        if (lpwszUdtName == NULL) PDBC_AllocWideSymbolNameW(L"INVALID_NAME");

        // Find the actual type depth
        INT dwBaseTypeDepth = -1;
        for (DWORD iDepth = 0; iDepth < PDB_CHILD_TYPE_DEPTH; ++iDepth) {
            if (pChild->dwTypeId[iDepth] == 0) break;
            if (pChild->dwTypeTag[iDepth] == SymTagBaseType) dwBaseTypeDepth = iDepth;
            pChild->dwTypeDepth = iDepth;
        }

        // Compute total size for array (num elements)
        pChild->dwTypeArrSzAll = pChild->dwTypeArrSz[0];
        for (INT iDepth = 1; iDepth < PDB_CHILD_TYPE_DEPTH; ++iDepth) {
            if (!pChild->dwTypeArrSz[iDepth]) break;
            pChild->dwTypeArrSzAll *= pChild->dwTypeArrSz[iDepth];
        }

        // Handle function pointers (temp fix)
        if (pChild->dwTypeTag[1] == SymTagFunctionType) { // Pointer to function
            lpwszUdtName = UTIL_ReallocStringW(lpwszUdtName, PDB_CHILD_WFIXPREFIX(5) L"void");
            pChild->eFix = ef_pFunction;
            PDB_StructPrintChild(pChild, lpwszUdtName);
        }

        // Handle array or pointer to base type
        else if (dwBaseTypeDepth > 0) {
            DWORD dwBaseTypeId = 0;
            ENSURE(PDBC_TypeGetBaseType(pChild->dwTypeId[dwBaseTypeDepth], pChild->dwLen, pChild->dwTypeArrSzAll, &dwBaseTypeId));
            PDB_StructPrintChild(pChild, PDBC_BT_NAMES[dwBaseTypeId]);
        }
        // Handle array or pointer to complex type
        else {
            PDB_StructAddUndefList(pChild, lpwszUdtName);
            PDB_StructPrintChild(pChild, lpwszUdtName);
        }

        if (lpwszUdtName != NULL) LocalFree(lpwszUdtName);
    }

    // User-defined type
    else if ( (pChild->dwTypeTag[0] == SymTagUDT) || (pChild->dwTypeTag[0] == SymTagEnum) ) {
        LPWSTR lpwszUdtName = NULL;
        ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, pChild->dwTypeId[0], TI_GET_SYMNAME, &lpwszUdtName));
        PDBC_SanitizeSymbolName(lpwszUdtName);
        PDB_StructAddUndefList(pChild, lpwszUdtName);
        ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s %s;", lpwszUdtName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen);
        PDB_StructAddDefList(lpwszUdtName);
        if (lpwszUdtName != NULL) LocalFree(lpwszUdtName);
    }
    
    // Undefined type
    else {
        printf("WARNING: undefined type %lu\n", pChild->dwTypeTag[0]);
    }
}


VOID PDB_StructPrintChild(pdbChild *pChild, LPCWSTR lpcwszName)
{
    // Print the child element
    ENSURE(pChild && lpcwszName);

    // Function with fixup
    if (pChild->eFix == ef_pFunction) {
        ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s *%s;", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen);
    }

    // Array of 4 dimensions
    else if (pChild->dwTypeArrSz[3]) {
        if (pChild->dwTypeTag[4] == SymTagPointerType) {
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s *%s[%lu][%lu][%lu][%lu];", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen, pChild->dwTypeArrSz[0], pChild->dwTypeArrSz[1], pChild->dwTypeArrSz[2], pChild->dwTypeArrSz[3]);
        } else {
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s %s[%lu][%lu][%lu][%lu];", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen, pChild->dwTypeArrSz[0], pChild->dwTypeArrSz[1], pChild->dwTypeArrSz[2], pChild->dwTypeArrSz[3]);
            PDB_StructAddDefList(lpcwszName);
        }
    } 
    
    // Array of 3 dimensions
    else if (pChild->dwTypeArrSz[2]) {
        if (pChild->dwTypeTag[3] == SymTagPointerType) {
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s *%s[%lu][%lu][%lu];", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen, pChild->dwTypeArrSz[0], pChild->dwTypeArrSz[1], pChild->dwTypeArrSz[2]);
        } else {
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s %s[%lu][%lu][%lu];", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen, pChild->dwTypeArrSz[0], pChild->dwTypeArrSz[1], pChild->dwTypeArrSz[2]);
            PDB_StructAddDefList(lpcwszName);
        }
    }
    
    // Array of 2 dimensions
    else if (pChild->dwTypeArrSz[1]) {
        if (pChild->dwTypeTag[2] == SymTagPointerType) {
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s *%s[%lu][%lu];", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen, pChild->dwTypeArrSz[0], pChild->dwTypeArrSz[1]);
        } else {
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s %s[%lu][%lu];", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen, pChild->dwTypeArrSz[0], pChild->dwTypeArrSz[1]);
            PDB_StructAddDefList(lpcwszName);
        }
    } 
    
    // Array of 1 dimension
    else if (pChild->dwTypeArrSz[0]) {
        if (pChild->dwTypeTag[1] == SymTagPointerType) {
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s *%s[%lu];", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen, pChild->dwTypeArrSz[0]);
        } else {
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s %s[%lu];", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen, pChild->dwTypeArrSz[0]);
            PDB_StructAddDefList(lpcwszName);
        }
    } 
    
    // Simple pointer
    else if (pChild->dwTypeTag[0] == SymTagPointerType) {
        if (pChild->dwTypeTag[1] == SymTagPointerType) { // Not so simple pointer
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s **%s;", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen);
        } else if (pChild->dwTypeTag[2] == SymTagPointerType) { // Triple pointer?!
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s ***%s;", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen);
        } else { // A "true" simple pointer
            ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s *%s;", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen);
        }
    }

    // Base type or UDT or enum
    else if ( (pChild->dwTypeTag[0] == SymTagBaseType) || \
              (pChild->dwTypeTag[0] == SymTagUDT) || \
              (pChild->dwTypeTag[0] == SymTagEnum) ) {
        ENSURE_WPRINTF_PDB_STRUCT_CHILD(L"%s %s;", lpcwszName, pChild->lpcwszName, pChild->dwOffset, pChild->dwLen);
        if (pChild->dwTypeTag[0] = SymTagUDT) PDB_StructAddDefList(lpcwszName);
    }

    // Unknown type
    else {
        printf("WARNING: unable to print child with tag %lu\n", pChild->dwTypeTag[0]);
    }
}


VOID PDB_StructAddUndefList(pdbChild *pChild, LPCWSTR lpcwszUdtName)
{
    ENSURE(pChild && lpcwszUdtName);

    DWORD dwCurTypeId = pChild->dwTypeId[pChild->dwTypeDepth];
    ENSURE(dwCurTypeId != 0);

    // Prevent duplicates
    for (DWORD i = 0; i < pdb.dwUndefListInd; i++) {
        if (dwCurTypeId == pdb.dwUndefList[i]) return;
    }

    // Check list of defined types
    LPSTR lpszUdtName = UTIL_AllocCharStringW(lpcwszUdtName);
    BOOL bDefName = FALSE;
    for (INT i = 0; i < COMM_GetConfigSize(cid_Structs); i++) {
        bDefName = (strcmp(COMM_GetConfigString(cid_Structs, i), lpszUdtName) == 0) ? TRUE : FALSE;
        if (bDefName) break;
    } 

    if (!bDefName) {
        DWORD dwTypeLen = pChild->dwLen;
        // If it is a pointer AGAIN, retrive the actual type length
        if (pChild->dwTypeDepth > 0) {
            ULONG64 ul64Len = 0;
            ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwCurTypeId, TI_GET_LENGTH, &ul64Len));
            dwTypeLen = (DWORD)ul64Len;
        }

        WCHAR pwszDummyDef[UTIL_MAXLINE];
        snwprintf(pwszDummyDef, UTIL_MAXLINE, L"typedef struct ALIGN(1) { byte undef[%lu]; } %s;\n", dwTypeLen, lpcwszUdtName);
        DynBuff_Append(&pdb.sUndefData, pwszDummyDef);

        pdb.dwUndefList[pdb.dwUndefListInd++] = dwCurTypeId;
        ENSURE(pdb.dwUndefListInd < PDB_URLSZ); // Prevent overflow
    }

    LocalFree(lpszUdtName);
}


VOID PDB_StructAddDefList(LPCWSTR lpcwszName)
{
    ENSURE(lpcwszName != NULL);
    LPSTR lpszName = UTIL_AllocCharStringW(lpcwszName);
    INT iCurInd = pdb.dwStructInd;
    
    FOR_I_CONFIG(cid_Structs) {
        if (i == iCurInd) {
            continue; // Skip current struct
        } 
        
        // Check if name is from user's struct list
        else if (strcmp(COMM_GetConfigString(cid_Structs, i), lpszName) == 0) {
            // If index is already in list, no need to add again
            for (INT j = 0; j < pdb.pStructs[iCurInd].dwReqDefListInd; j++) {
                if (pdb.pStructs[iCurInd].dwReqDefList[j] == i) goto L_exit;
            }

            // Add to required list
            INT iCurListInd = pdb.pStructs[iCurInd].dwReqDefListInd;
            pdb.pStructs[iCurInd].dwReqDefList[iCurListInd] = i;
            pdb.pStructs[iCurInd].dwReqDefListInd++;
            // Overall this line looks cooler...
            // pdb.pStructs[pdb.dwStructInd].dwReqDefList[pdb.pStructs[pdb.dwStructInd].dwReqDefListInd++] = i;
            goto L_exit;
        }
    }

L_exit:
    LocalFree(lpszName);
}


VOID PDB_StructSortAndPrint(VOID)
{
    // Check out the size of the config array
    ENSURE(COMM_GetConfigSize(cid_Structs) < PDB_RDLSZ_FULL);

    // Sort and generate structs
    DWORD dwDefList[PDB_RDLSZ_FULL], dwDefListInd = 0;
    UTIL_ZERO_STRUCT(dwDefList);

    // Firstly check and print all simple structs
    printf("Printing all simple structs...\n");
    FOR_I_CONFIG(cid_Structs) {
        // Check if struct is invalid
        if (!pdb.pStructs[i].bUsed) { 
            printf("WARNING: struct not found: %s\n", COMM_GetConfigString(cid_Structs, i));
            pdb.pStructs[i].bInvalid = TRUE;
        }

        // Print simple struct
        else if (pdb.pStructs[i].dwReqDefListInd == 0) {
            dwDefList[dwDefListInd++] = i; // Add to list of defined structs
            ENSURE_FWPRINTF(L"%s", pdb.pStructs[i].sData.buffer); // Print struct definition
            pdb.pStructs[i].bPrinted = TRUE; // Mark as printed
            //printf("Added simple struct: %s\n", COMM_GetConfigString(cid_Struct, i));
        } 
    }

    // Now brute sorting for rest of structs (needs to be improved)
    printf("Sorting complex structs...\n"); 
    DWORD dwSortCounter = 0;
    do { FOR_I_CONFIG(cid_Structs) {
        // Skip invalid and already printed structs
        if ( (pdb.pStructs[i].bPrinted) || (pdb.pStructs[i].bInvalid) ) { 
            continue; 
        } 

        // Check if any of the required structs have been printed
        else {
            // Iterate over each required child-struct
            BOOL bAllStructDefined = TRUE;
            for (DWORD j = 0; j < pdb.pStructs[i].dwReqDefListInd; ++j) {
                // Iterate over list of already defined structs
                BOOL bStructDefined = FALSE;
                for (DWORD k = 0; k < dwDefListInd; ++k) {
                    if (dwDefList[k] == pdb.pStructs[i].dwReqDefList[j]) { // Check if the required child-struct is defined
                        bStructDefined = TRUE;
                        break;
                    }
                }
                if (!bStructDefined) {
                    bAllStructDefined = FALSE; // It's still not defined yet
                    break;
                }
            }

            // If all required child-structs are defined, add to the list
            if (bAllStructDefined) {
                dwDefList[dwDefListInd++] = i; // Add to list of defined structs
                ENSURE_FWPRINTF(L"%s", pdb.pStructs[i].sData.buffer); // Print struct definition
                pdb.pStructs[i].bPrinted = TRUE; // Mark as printed
                //printf("Added complex struct: %s\n", COMM_GetConfigString(cid_Structs, i));
            }
        }

        // If all structs are printed, we're done
        if (dwDefListInd >= COMM_GetConfigSize(cid_Structs)) {
            printf("All structs sorted and printed (i: %lu)\n", dwSortCounter);
            return; // No more to do
        }

        // Prevent too many iterations
        if (dwSortCounter++ > PDB_RDLSZ_FULL) goto L_error;
    } } while (TRUE);

    return;

L_error:
    printf("ERROR: Unable to print all functions\n"); 
    FOR_I_CONFIG(cid_Structs) { 
        if (pdb.pStructs[i].bPrinted == FALSE) {
            printf("Failed to print struct: %s\n", COMM_GetConfigString(cid_Structs, i));
            ENSURE_FWPRINTF(L"// INVALID STRUCT:\n%s", pdb.pStructs[i].sData.buffer); 
        }
        flushall();
    }
    ENSURE(FALSE); // Break point
}