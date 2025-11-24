/*
    Project: WARP | (C) Noctefugia, March 2024
    File: pdb_symbol_com.h
    Description: PDB common definitions and routines
*/

#ifndef _PDB_COMMON_H_
#define _PDB_COMMON_H_

#include "lib_common.h"

#include <dbghelp.h>
#include <psapi.h>

// necessary crap from winSDK - not implemented in tcc's dbghelp.h version
enum PDBC_SymTagEnum {
    SymTagNull,
    SymTagExe,
    SymTagCompiland,
    SymTagCompilandDetails,
    SymTagCompilandEnv,
    SymTagFunction,
    SymTagBlock,
    SymTagData,
    SymTagAnnotation,
    SymTagLabel,
    SymTagPublicSymbol,
    SymTagUDT,
    SymTagEnum,
    SymTagFunctionType,
    SymTagPointerType,
    SymTagArrayType,
    SymTagBaseType,
    SymTagTypedef,
    SymTagBaseClass,
    SymTagFriend,
    SymTagFunctionArgType,
    SymTagFuncDebugStart,
    SymTagFuncDebugEnd,
    SymTagUsingNamespace,
    SymTagVTableShape,
    SymTagVTable,
    SymTagCustom,
    SymTagThunk,
    SymTagCustomType,
    SymTagManagedType,
    SymTagDimension,
    SymTagCallSite,
    SymTagInlineSite,
    SymTagBaseInterface,
    SymTagVectorType,
    SymTagMatrixType,
    SymTagHLSLType
};

enum PDBC_BasicTypeEnum {
    btNoType   = 0,
    btVoid     = 1,
    btChar     = 2,
    btWChar    = 3,
    btInt      = 6,
    btUInt     = 7,
    btFloat    = 8,
    btBCD      = 9,
    btBool     = 10,
    btLong     = 13,
    btULong    = 14,
    btCurrency = 25,
    btDate     = 26,
    btVariant  = 27,
    btComplex  = 28,
    btBit      = 29,
    btBSTR     = 30,
    btHresult  = 31,
    btChar16   = 32,    // char16_t
    btChar32   = 33,    // char32_t
    btChar8    = 34,    // char8_t
    btUnknown  = 35,    // custom, not a real type
    btLong64   = 36,    // custom, fake type
    btULong64  = 37,    // custom, fake type
    btDouble   = 38,    // custom, fake type
    btUChar    = 39,    // custom, fake type
    btShort    = 40,    // custom, fake type
    btUShort   = 41,    // custom, fake type
    btNONE
};

enum PDBC_CV_CALL {
    CV_CALL_NEAR_C      = 0x00,
    CV_CALL_FAR_C       = 0x01,
    CV_CALL_NEAR_PASCAL = 0x02,
    CV_CALL_FAR_PASCAL  = 0x03,
    CV_CALL_NEAR_FAST   = 0x04,
    CV_CALL_FAR_FAST    = 0x05,
    CV_CALL_SKIPPED     = 0x06,
    CV_CALL_NEAR_STD    = 0x07,
    CV_CALL_FAR_STD     = 0x08,
    CV_CALL_NEAR_SYS    = 0x09,
    CV_CALL_FAR_SYS     = 0x0a,
    CV_CALL_THISCALL    = 0x0b,
    CV_CALL_MIPSCALL    = 0x0c,
    CV_CALL_GENERIC     = 0x0d,
    CV_CALL_ALPHACALL   = 0x0e,
    CV_CALL_PPCCALL     = 0x0f,
    CV_CALL_SHCALL      = 0x10,
    CV_CALL_ARMCALL     = 0x11,
    CV_CALL_AM33CALL    = 0x12,
    CV_CALL_TRICALL     = 0x13,
    CV_CALL_SH5CALL     = 0x14,
    CV_CALL_M32RCALL    = 0x15
};


extern LPCWSTR PDBC_BT_NAMES[];

LPWSTR PDBC_AllocWideSymbolNameA(LPCSTR lpcszName);
LPWSTR PDBC_AllocWideSymbolNameW(LPCWSTR lpcwszName);
VOID PDBC_SanitizeSymbolName(LPWSTR lpwszName);
VOID PDBC_RedefBaseTypeBySize(PDWORD pdwBaseType, DWORD dwLen, DWORD dwSizeRef);
WINBOOL PDBC_TypeGetBaseType(DWORD dwTypeId, DWORD dwLen, DWORD dwArrSize, PDWORD pdwBaseType);
WINBOOL PDBC_TypeGetChilds(DWORD dwTypeId, PULONG pulNumChilds, TI_FINDCHILDREN_PARAMS **ppChildParams);

#endif /* _PDB_COMMON_H_ */