#include "dyn_buffer.h"

// Initialize the buffer
VOID DynBuff_Init(dynBuff *pBuff)
{
    ENSURE_EX(pBuff != NULL);

    pBuff->capacity = DYNBUFF_INIT_CAP; // Initial capacity
    pBuff->buffer = (PWCHAR)calloc(pBuff->capacity, sizeof(WCHAR));
    ENSURE_EX(pBuff->buffer != NULL);

    pBuff->size = 0;
    pBuff->buffer[0] = L'\0';
}


// Resize the buffer as needed
VOID DynBuff_Resize(dynBuff *pBuff, SIZE_T szNewCap)
{
    ENSURE_EX(pBuff != NULL);

    PWCHAR pNewBuff = (PWCHAR)realloc(pBuff->buffer, szNewCap * sizeof(WCHAR));
    ENSURE_EX(pNewBuff != NULL);

    pBuff->buffer = pNewBuff;
    pBuff->capacity = szNewCap;
}


// Append text to the buffer
VOID DynBuff_Append(dynBuff *pBuff, LPCWSTR lpcwszSrc)
{
    ENSURE_EX(pBuff && lpcwszSrc);

    SIZE_T szSrcLen = wcslen(lpcwszSrc);
    // If there is not enough space, allocate more memory
    if (szSrcLen + pBuff->size + 1 > pBuff->capacity) {
        SIZE_T szNewCap = pBuff->capacity;
        // Grow exponentially
        while (szSrcLen + pBuff->size + 1 > szNewCap) {
            szNewCap *= 2; // Double the capacity
        }
        DynBuff_Resize(pBuff, szNewCap);
    }

    wcscpy(pBuff->buffer + pBuff->size, lpcwszSrc);
    pBuff->size += szSrcLen;
}


// Free the buffer
VOID DynBuff_Free(dynBuff *pBuff)
{
    ENSURE_EX(pBuff != NULL);

    free(pBuff->buffer);
    UTIL_ZERO_STRUCT(*pBuff);
}
