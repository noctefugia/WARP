/*
    Project: WARP | (C) Noctefugia, March 2024
    File: pdb_symbol.h
    Description: PDB-symbol routines to extract data from executable
*/

#ifndef _PDB_SYMBOL_H_
#define _PDB_SYMBOL_H_

#include "lib_common.h"
#include "pdb_symbol_com.h"

typedef enum {
    ef_None         = 0b00000000,
    ef_pFunction    = 0b00000001,
    ef_Invalid      = 0xFF
} PDB_ExtraFix;

#define PDB_CHILD_TYPE_DEPTH 5
#define PDB_CTDUB PDB_CHILD_TYPE_DEPTH + 1
typedef struct {
    DWORD dwOffset, dwTag, dwId, dwLen, dwLenFn;
    DWORD dwTypeId[PDB_CTDUB], dwTypeTag[PDB_CTDUB], dwTypeArrSz[PDB_CTDUB], dwTypeArrSzAll, dwTypeDepth;
    LPCWSTR lpcwszName;
    PDB_ExtraFix eFix;
    ULONG64 ul64Address;
} pdbChild;

#define PDB_RDLSZ 256 // May need to be increased in the future
#define PDB_RDLSZ_FULL PDB_RDLSZ * 4
typedef struct {
    BOOL bUsed, bInvalid, bPrinted;
    DWORD dwSize, dwReqDefList[PDB_RDLSZ], dwReqDefListInd;
    dynBuff sData;
} pdbStruct;

#define PDB_URLSZ 2048 // May need to be increased in the future
typedef struct {
    DWORD dwUndefList[PDB_URLSZ], dwUndefListInd, dwStructInd, dwLastOffset, dwLastLen, dwUndefIndex, dwLastAddr, dwChildIndex, dwFixedBytes;
    pdbStruct *pStructs;
    dynBuff sEnumData, sUndefData, sFuncData;
} pdbDef;
extern pdbDef pdb;

VOID PDB_Init(VOID);
VOID PDB_Close(VOID);
VOID PDB_Process(VOID);
BOOL PDB_FindSymbol(PSYMBOL_INFO pSymInfo, LPCSTR lpcszName);

#endif /* _PDB_SYMBOL_H_ */ 
