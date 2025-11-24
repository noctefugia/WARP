/*
    Project: WARP | (C) Noctefugia, March 2024
    File: jit_compiler.h
    Description: TCC JIT-Compiler extension for the WARP
*/
#ifndef _JIT_COMPILER_H_
#define _JIT_COMPILER_H_

#include "lib_common.h"
#include <libtcc.h>

typedef struct {
    TCCState *pState;
    CHAR lpszPathDll[MAX_PATH], lpszPathLib[MAX_PATH], lpszPathInc[MAX_PATH], lpszPathPlg[MAX_PATH];
} tccDef;

VOID JIT_Init(LPCSTR lpcszDll, LPCSTR lpcszLib, LPCSTR lpcszInc, LPCSTR lpcszPlg);
BOOL JIT_State(VOID);
VOID JIT_Delete(VOID);
BOOL JIT_CompileFile(LPCSTR lpcszName, VOID (*pfnAddSymbolCallback)(VOID), bool (*pfnGetSymbolCallback)(void));
PVOID JIT_GetSymbol(LPCSTR lcpszName);
VOID JIT_AddSymbol(LPCSTR lcpszName, CONST PVOID pVal);

#endif /* _JIT_COMPILER_H_ */