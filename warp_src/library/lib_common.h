/*
    Project: WARP | (C) Noctefugia, March 2024
    File: lib_common.h
    Description: library common header file for all components
*/

#ifndef _LIB_COMMON_H_
#define _LIB_COMMON_H_

#define APP_NAME TEXT("Library")
#define EXT_ERRORS
#include "..\\common.h"

// Some manual WinAPI definitions to avoid bloatware with tons of headers
#define LWSTDAPI_(type) EXTERN_C DECLSPEC_IMPORT type WINAPI
LWSTDAPI_(WINBOOL) PathRemoveFileSpecA(LPSTR pszPath);
LWSTDAPI_(WINBOOL) PathRemoveFileSpecW(LPWSTR pszPath);
LWSTDAPI_(WINBOOL) PathFileExistsA(LPCSTR pszPath);
LWSTDAPI_(WINBOOL) PathFileExistsW(LPCWSTR pszPath);
#ifdef UNICODE
    #define PathRemoveFileSpec PathRemoveFileSpecW
    #define PathFileExists PathFileExistsW
#else
    #define PathRemoveFileSpec PathRemoveFileSpecA
    #define PathFileExists PathFileExistsA
#endif

typedef enum {
    wfn_MissionFrameMove = 0,
    wfn_MissionStart,
    wfn_MissionFinish,
    wfn_MissionClear,
    wfn_ExecuteWSE,
    wfn_Count   // Total number of functions to warp
} WARP_FuncIds;
extern LPCWSTR WARP_FN_NAMES[wfn_Count];
extern PBYTE WARP_FN_PATTERNS[wfn_Count];
typedef struct {
    DWORD dwAddr, dwSz;
    VOID *pHookFn;
} warpFunc;

#define WARP_CONFCNT 5
typedef struct {
    HANDLE hThread, hProcess;
    HINSTANCE hInstDLL;
    HWND hwndConsole;
    DWORD dwModBase, dwProcessId, dwBaseAddr, dwPageSz;
    DWORD64 dw64ModBase;
    BOOL bExitRequested, bCompileJit, bRuntimeOk;
    FILE *pMainFile;
    INT iConfigSz[WARP_CONFCNT];
    CHAR** ppszConfig[WARP_CONFCNT];
    TCHAR ptszPath[MAX_PATH];
    warpFunc func[wfn_Count];
} warpDef;
extern warpDef warp;
typedef enum {
    cid_Settings    = 0, // may be used by WARP core in future versions
    cid_Structs     = 1,
    cid_Enums       = 2,
    cid_Globals     = 3,
    cid_Functions    = 4,
    cid_Invalid     = WARP_CONFCNT
} WARP_ConfigIds;

#define ENSURE_FPRINTF(format, ...) ENSURE(warp.pMainFile && (fprintf(warp.pMainFile, format, ## __VA_ARGS__) > 0) )
#define ENSURE_FWPRINTF(format, ...) ENSURE(warp.pMainFile && (fwprintf(warp.pMainFile, format, ## __VA_ARGS__) > 0) )
#define ENSURE_GENFILE_CAPTION(filename, desc) ENSURE_FPRINTF(UTIL_FILEGEN_TITLE(filename, desc))
#define PRINTF_FILEGEN(filename) printf("File " filename " generated.\n")
#define FOR_I_CONFIG(index) for (INT i = 0; i < COMM_GetConfigSize(index); ++i)

#if PROJMODE_DEBUG
    #define COMM_FDEBUGF(format, ...) do { CHAR pszMsg[UTIL_MAXLINE]; snprintf(pszMsg, UTIL_MAXLINE, format, ## __VA_ARGS__); COMM_DebugToFile(pszMsg); } while(0)
    #define COMM_DEBUGF(format, ...) printf(format, ## __VA_ARGS__)
#else
    #define COMM_FDEBUGF(format, ...)
    #define COMM_DEBUGF(format, ...)
#endif

VOID COMM_DebugToFile(LPCSTR lpszTxt);
VOID COMM_OpenFile(LPCSTR lpcszFilename, LPCSTR lpcszMode);
VOID COMM_CloseFile(VOID);

VOID COMM_GetMyPath(LPTSTR lptszBuff, DWORD dwBuffSize);
INT COMM_LineIsEmptyOrWhitespace(CONST CHAR* lpcszLine);

VOID COMM_ReadConfigIntoArray(DWORD dwConfId, LPCSTR lpcszFilename, LPCSTR lpcszSection);
VOID COMM_FreeConfigArray(DWORD dwConfId);
CHAR* COMM_GetConfigString(DWORD dwConfId, INT iIndex);
INT COMM_GetConfigSize(DWORD dwConfId);
#endif /* _LIB_COMMON_H_ */

