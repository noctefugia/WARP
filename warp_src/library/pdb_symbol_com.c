#include "pdb_symbol_com.h"

LPCWSTR PDBC_BT_NAMES[] = {
    L"undefined (no type)",     //btNoType = 0
    L"void",                    //btVoid = 1
    L"char",                    //btChar = 2
    L"wchar_t",                 //btWChar = 3
    L"undefined (4)",           //4
    L"undefined (5)",           //5
    L"int",                     //btInt = 6
    L"unsigned int",            //btUInt = 7
    L"float",                   //btFloat = 8
    L"undefined (BCD)",         //btBCD = 9
    L"bool",                    //btBool = 10
    L"undefined (11)",          //11
    L"undefined (12)",          //12
    L"long",                    //btLong = 13
    L"unsigned long",           //btULong = 14
    L"undefined (15)",          //15
    L"undefined (16)",          //16
    L"undefined (17)",          //17
    L"undefined (18)",          //18
    L"undefined (19)",          //19
    L"undefined (20)",          //20
    L"undefined (21)",          //21
    L"undefined (22)",          //22
    L"undefined (23)",          //23
    L"undefined (24)",          //24
    L"undefined (Currency)",    //btCurrency = 25
    L"undefined (Date)",        //btDate = 26
    L"undefined (Variant)",     //btVariant = 27
    L"undefined (Complex)",     //btComplex = 28
    L"undefined (Bit)",         //btBit = 29
    L"undefined (BSTR)",        //btBSTR = 30
    L"undefined (Hresult)",     //btHresult = 31
    L"undefined (Char16)",      //btChar16 = 32
    L"undefined (Char32)",      //btChar32 = 33
    L"char",                    //btChar8 = 34
    L"undefined (unknown)",     //btUnknown = 35
    L"long long",               //btLong64   = 36
    L"unsigned long long",      //btULong64  = 37
    L"double",                  //btDouble  = 38
    L"unsigned char",           //btUChar  = 39
    L"short",                   //btShort    = 40
    L"unsigned short",          //btUShort   = 41
    NULL
};


// Allocate wide name from ANSI-string
LPWSTR PDBC_AllocWideSymbolNameA(LPCSTR lpcszName)
{
    ENSURE(lpcszName != NULL);

    LPWSTR lpwszWideName = UTIL_AllocWideStringA(lpcszName);
    PDBC_SanitizeSymbolName(lpwszWideName);

    return lpwszWideName;
}


// Allocate wide name from WCHAR-string
LPWSTR PDBC_AllocWideSymbolNameW(LPCWSTR lpcwszName)
{
    ENSURE(lpcwszName != NULL);

    LPWSTR lpwszWideName = UTIL_AllocWideStringW(lpcwszName);
    PDBC_SanitizeSymbolName(lpwszWideName);

    return lpwszWideName;
}


// Sanitize symbol name (remove invalid characters)
VOID PDBC_SanitizeSymbolName(LPWSTR lpwszName)
{
    ENSURE(lpwszName != NULL);

    for(INT i = 0; lpwszName[i] != L'\0'; ++i) {
        switch(lpwszName[i]) {
            case L'<':
            case L'>':
            case L' ':
            case L',':
            case L':':
            case L'(':
            case L')':
            case L'+':
            case L'-':
            case L'=':
            case L'!':
            case L'[':
            case L']':
            case L'~':
                lpwszName[i] = L'_'; break;
            case L'*':
                lpwszName[i] = L'P'; break;
            default:
                break;
        }
    } 
}


VOID PDBC_RedefBaseTypeBySize(PDWORD pdwBaseType, DWORD dwLen, DWORD dwSizeRef)
{
    // Note: The 8, 4, 2 and 1-byte elements share the same type ID in PDB. (WHY?)
    ENSURE(pdwBaseType);

    // It's a 8-byte type.
    if (dwSizeRef * 8 == dwLen) {
        switch (*pdwBaseType) {
            case btInt:     *pdwBaseType = btLong64;    break;
            case btUInt:    *pdwBaseType = btULong64;   break;
            case btFloat:   *pdwBaseType = btDouble;    break;
            default: printf("WARNING: unable to find 8-byte version for base type: %lu\n", *pdwBaseType); break;
        }
    }

    // It's a 2-byte type.
    else if (dwSizeRef * 2 == dwLen) {
        switch (*pdwBaseType) {
            case btInt:     *pdwBaseType = btShort;      break;
            case btUInt:    *pdwBaseType = btUShort;     break;
            case btWChar:    break; // already 2-byte
            default: printf("WARNING: unable to find 2-byte version for base type: %lu\n", *pdwBaseType); break;
        }
    }

    // It's a 1-byte type.
    else if (dwSizeRef * 1 == dwLen) {
        switch (*pdwBaseType) {
            case btInt:     *pdwBaseType = btChar;      break;
            case btUInt:    *pdwBaseType = btUChar;     break;
            case btBool:    break; // already 1-byte
            case btChar:    break; // already 1-byte
            default: printf("WARNING: unable to find 1-byte version for base type: %lu\n", *pdwBaseType); break;
        }
    }
}


WINBOOL PDBC_TypeGetBaseType(DWORD dwTypeId, DWORD dwLen, DWORD dwArrSize, PDWORD pdwBaseType)
{
    ENSURE(pdwBaseType);

    if (!SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwTypeId, TI_GET_BASETYPE, pdwBaseType)) {
        SetLastError(ERROR_SUCCESS);
        return FALSE;
    }

    if (*pdwBaseType > btUnknown) *pdwBaseType = btUnknown;
    PDBC_RedefBaseTypeBySize(pdwBaseType, dwLen, dwArrSize);

    return TRUE;
}


WINBOOL PDBC_TypeGetChilds(DWORD dwTypeId, PULONG pulNumChilds, TI_FINDCHILDREN_PARAMS **ppChildParams)
{
    ENSURE(pulNumChilds && ppChildParams);
    *ppChildParams = NULL; // make sure we don't leak memory

    // Get num children
    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwTypeId, TI_GET_CHILDRENCOUNT, pulNumChilds));
    if (*pulNumChilds == 0) return FALSE;

    // Prepare the child array
    *ppChildParams = (TI_FINDCHILDREN_PARAMS*) malloc(sizeof(TI_FINDCHILDREN_PARAMS) + sizeof(ULONG) * (*pulNumChilds));
    ENSURE(*ppChildParams != NULL);
    (*ppChildParams)->Count = *pulNumChilds;
    (*ppChildParams)->Start = 0;

    // Get the children params
    ENSURE(SymGetTypeInfo(warp.hProcess, warp.dw64ModBase, dwTypeId, TI_FINDCHILDREN, *ppChildParams));

    return TRUE;
}