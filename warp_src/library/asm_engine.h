/*
    Project: WARP | (C) Noctefugia, April 2024
    File: asm_engine.h
    Description: Simple hooking engine for 32-bit processes
*/

#ifndef _ASM_ENGINE_H_
#define _ASM_ENGINE_H_

#include "lib_common.h"

BYTE *ASM_InstallHook(DWORD dwInstOffset, BYTE btTrampSz, WORD wCodeSz, BYTE *pbtAsmProg, WORD wDataSz, VOID *pData, BYTE *pbtOrigTramp);
VOID ASM_ModifyMem(DWORD dwRelAddr, VOID *pBuff, DWORD dwBuffSz);
DWORD ASM_SearchMemPattern(DWORD dwStartAddr, DWORD dwRegionSize, BYTE *pPattern, DWORD dwPatternSz);
DWORD ASM_PatchMemPattern(DWORD dwStartAddr, DWORD dwRegionSize, DWORD dwOffset, BYTE *pbtPattern, DWORD dwPatternSz, BYTE *pbtNewPattern, DWORD dwNewPatternSz);

extern BYTE ASM_CALL_CUSTOM_SUB[];
extern const BYTE ASM_CALL_CUSTOM_SUB_SZ;

#define ASM_SAVE_REGS asm("pusha")
#define ASM_RESTORE_REGS asm("popa")

#define ASM_GET_EAX_VALUE(var) \
    ASM_SAVE_REGS; \
    __asm__ __volatile__( \
        "movl %%eax, %0" \
        : "=r" (var) \
        : \
        : "eax" \
    ); \
    ASM_RESTORE_REGS

#define ASM_GET_ECX_VALUE(var) \
    ASM_SAVE_REGS; \
    __asm__ __volatile__( \
        "movl %%ecx, %0" \
        : "=r" (var) \
        : \
        : "ecx" \
    ); \
    ASM_RESTORE_REGS

#define ASM_GET_EDI_VALUE(var) \
    ASM_SAVE_REGS; \
    __asm__ __volatile__( \
        "movl %%edi, %0" \
        : "=r" (var) \
        : \
        : "edi" \
    ); \
    ASM_RESTORE_REGS

#endif /* _ASM_ENGINE_H_ */
