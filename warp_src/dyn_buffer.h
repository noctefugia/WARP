/*
    Project: WARP | (C) Noctefugia, March 2024
    File: dyn_buffer.h
    Description: simple dynamic buffer implementation for string manipulation
*/

#ifndef _DYN_BUFFER_H_
#define _DYN_BUFFER_H_

#include <windows.h>
#include "common.h"

typedef struct {
    PWCHAR buffer;
    SIZE_T size, capacity;
} dynBuff;
#define DYNBUFF_INIT_CAP 1024
#define DYNBUFF_APPENDF(buff, max_sz, format, ...) do { WCHAR pwszTemp[max_sz]; snwprintf(pwszTemp, max_sz, format, ## __VA_ARGS__); DynBuff_Append(buff, pwszTemp); } while (0)   

// Function declarations
VOID DynBuff_Init(dynBuff *pBuff);
VOID DynBuff_Resize(dynBuff *pBuff, SIZE_T szNewCap);
VOID DynBuff_Append(dynBuff *pBuff, LPCWSTR lpcwszSrc);
VOID DynBuff_Free(dynBuff *pBuff);

#endif /* _DYN_BUFFER_H_ */