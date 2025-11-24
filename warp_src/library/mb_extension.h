/*
    Project: WARP | (C) Noctefugia, March 2024
    File: mb_extension.h
    Description: M&B extensions
*/

#ifndef _MB_EXTENSION_H_
#define _MB_EXTENSION_H_

#include "lib_common.h"

DWORD MBEX_SearchFuncPattern(UINT uIndex);
BOOL MBEX_InjectCustomFunc(UINT uIndex, DWORD dwAddr, VOID *pFunc);

VOID MBEX_AddSymbolsCallback(VOID);
bool MBEX_GetSymbolsCallback(VOID);
VOID MBEX_Init(VOID);
VOID MBEX_Exit(VOID);
VOID MBEX_AssignHookFuncs(VOID);
BOOL MBEX_PatchHookedFuncs(void);

#endif /* _MB_EXTENSION_H_ */