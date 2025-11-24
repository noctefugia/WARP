/*
    Project: WARP | (C) Noctefugia, March 2024
    File: common.h
    Description: common header file for all project
*/

#ifndef _COMMON_H_
#define _COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <direct.h>
#include <time.h>
#include <windows.h>
#include <tlhelp32.h>

#include "dyn_buffer.h"

#ifndef APP_NAME
    #define APP_NAME TEXT("Default")
#endif
#undef  UNICODE
#define ALIGN(val)  __attribute__((aligned(val)))
#define DLL_EXPORT  __declspec(dllexport)
#define DLL_IMPORT  __declspec(dllimport)

#define UTIL_STR_HELPER(x) #x
#define UTIL_STR(x) UTIL_STR_HELPER(x)
#define UTIL_IDENT(x) x
#define UTIL_ZERO_STRUCT(MyStruct) ZeroMemory(&MyStruct, sizeof(MyStruct))
#define UTIL_MAXLINE 512
#define UTIL_LOCATION __FILE__ ":" UTIL_STR(__LINE__) ":" UTIL_STR(__FUNCTION__)

#define VERSION_MAJOR 0
#define VERSION_MINOR 1
#define VERSION_PATCH 0
#define VERSION_STRING UTIL_STR(VERSION_MAJOR) "." UTIL_STR(VERSION_MINOR) "." UTIL_STR(VERSION_PATCH)

#define PROJMODE_DEBUG      0

#define PROJNAME_FULL       "Warband Advanced Runtime Patcher"
#define PROJNAME_SHORT      "WARP"
#define PROJNAME_AUTHOR     "Noctefugia"
#define PROJNAME_CAPTION    " * " PROJNAME_FULL " * \n" "(C)" PROJNAME_AUTHOR ", build " __DATE__" " __TIME__ "\n\n"
#define PROJNAME_TITLE      PROJNAME_SHORT  " v" VERSION_STRING " (" APP_NAME ")"
#define PROJNAME_REMARK     "(C)" PROJNAME_AUTHOR ", build " __DATE__" " __TIME__

#define PROJDESC_ABOUT      PROJNAME_SHORT " (" PROJNAME_FULL ") is   an  experimental  tool that  pushes the\nboundaries of modding for Mount and Blade: Warband with WSE2. It allows you to modify\nthe game engine in real-time, essentially changing how the game functions on the fly.\n\n" PROJNAME_SHORT " achieves this by utilizing  a lightweight compiler (TCC) to  compile itself from\nsources  and  execute C-code  dynamically,   a  process known as  JIT-compilation. By\nanalyzing debug information (a *.pdb file that comes with each version of WSE2), " PROJNAME_SHORT "\ncan  partially reconstruct the   game's  source  code.  This,  combined  with dynamic\ncompilation, enables deep-level alterations to the engine's behavior.\n\nThe  plugin system makes it easy to  manage  these  modifications. Each  \"patch\" is a\nseparate plugin, allowing you  to enable, disable, and  configure  them independently\nthrough a user-friendly GUI manager.\n\n"
#define PROJDESC_FEEDBACK   "\n\nTCC compiler homepage: https://bellard.org/tcc/"
#define PROJDESC_FULL       PROJDESC_ABOUT PROJDESC_FEEDBACK

#define BINNAME_WSE2        "mb_warband_wse2.exe"
#define BINNAME_WSE2LAUNCH  "wse2_launcher.exe"
#define BINNAME_WARPLIB     "WARP_library.dll"
#define BINNAME_WARPLAUNCH  "WARP_launcher.exe"
#define BINNAME_WARPLOADER  "WARP_loader.exe"
#define BINNAME_WARPMANAGR  "WARP_manager.exe"
#define BINNAME_TCCLIB      "libtcc.dll"

#define FOLDNAME_PLUGINS    "warp_plugins"
#define FOLDNAME_TOOLS      "warp_tool"
#define FOLDNAME_TINYCC     "tcc"
#define FOLDNAME_MB_API     "mb_api"
#define FOLDNAME_CUSTOM     "custom"
#define FOLDNAME_DOCUMENT   "doc"

#define FILENAME_DEBUG      "warp_debug.txt"
#define FILENAME_MB_DEFSH   "mb_defs.h"
#define FILENAME_MB_DEFSC   "mb_defs.c"
#define FILENAME_MB_UNDEFSH "mb_undefs.h"
#define FILENAME_MB_ENUMSH  "mb_enums.h"
#define FILENAME_MB_NAMES   "mb_names.ini"
#define FILENAME_MB_MAINC   "mb_core.c"
#define FILENAME_P_PARAMS   "params.dat"
#define FILENAME_P_README   "description.txt"
#define FILENAME_P_ENTRY    "init.c"
#define FILENAME_PLUGINS    "list.c"
#define FILENAME_TEMPLATE   "template.dat"
#define FILENAME_DOCINDEX   "index.html"

#define FOLDPATH_TCC        FOLDNAME_TOOLS "\\" FOLDNAME_TINYCC
#define FOLDPATH_TCC_DEF    FOLDPATH_TCC "\\lib"
#define FOLDPATH_TCC_INC    FOLDPATH_TCC "\\include"
#define FOLDPATH_MB_API     FOLDNAME_PLUGINS "\\" FOLDNAME_MB_API
#define FOLDPATH_CUSTOM     FOLDNAME_PLUGINS "\\" FOLDNAME_CUSTOM
#define FOLDPATH_DOC        FOLDNAME_PLUGINS "\\" FOLDNAME_DOCUMENT

#define FILEPATH_TCCLIB     FOLDPATH_TCC "\\" BINNAME_TCCLIB
#define FILEPATH_MBNAMES    FOLDNAME_PLUGINS "\\" FILENAME_MB_NAMES
#define FILEPATH_MBDEFSH    FOLDPATH_MB_API "\\" FILENAME_MB_DEFSH
#define FILEPATH_MBDEFSC    FOLDPATH_MB_API "\\" FILENAME_MB_DEFSC
#define FILEPATH_MBUNDEFSH  FOLDPATH_MB_API "\\" FILENAME_MB_UNDEFSH
#define FILEPATH_MBENUMSH   FOLDPATH_MB_API "\\" FILENAME_MB_ENUMSH

#define CONFSECT_STRUCTS    "STRUCTS"
#define CONFSECT_ENUMS      "ENUMS"
#define CONFSECT_GLOBALS    "GLOBALS"
#define CONFSECT_FUNCTIONS  "FUNCTIONS"

#ifdef EXT_ERRORS
    #define ENSURE(expr) do { if (!(expr)) WARP_HandleError(__FILE__, __FUNCTION__, __LINE__, #expr); } while (0)
    extern VOID WARP_HandleError(LPCSTR file, LPCSTR func, INT line, LPCSTR expr);
#else
    #define ENSURE(expr, errorMsg) do { if (!(expr)) WARP_HandleError(errorMsg); } while (0)
    extern VOID WARP_HandleError(LPCSTR message);
#endif
#define ENSURE_EX(expr) ENSURE(expr, UTIL_LOCATION);

#define UTIL_FILEGEN_TITLE(filename, desc)                  "/*\n\tFile: " filename " | (C)" PROJNAME_AUTHOR "\n\tDescription: " desc ".\n\tTimestamp: %s\tWARNING: THIS FILE IS AUTO-GENERATED, DO NOT EDIT.\n*/\n\n", UTIL_GetTimestamp()
#define UTIL_FILEPLG_TITLE(name, author, codename, desc)    "/*\n\tName: %s | (C)%s\n\tCode: 0x%08llX\n\tDescription: " desc ".\n\tTimestamp: %s*/\n\n", name, author, codename, UTIL_GetTimestamp()

PCHAR UTIL_SearchBinary(LPCSTR haystack, LPCSTR needle, SIZE_T haystack_len, SIZE_T needle_len);
BOOL UTIL_PatchMemory(HANDLE process, LPCSTR needle, SIZE_T needle_len, LPCSTR newString);
BOOL UTIL_FileExists(LPCSTR filename);
LPSTR UTIL_PathFile(LPCSTR path, LPCSTR file);
BOOL UTIL_ProcessIsRunning(LPCSTR processName);
void UTIL_SuspendProcessThreads(DWORD processId);
void UTIL_WaitForMainWindow(DWORD processId);
void UTIL_ResumeProcessThreads(DWORD dwProcessId);
void UTIL_CenterWindow(HWND hwSelf, INT iShiftX, INT iShiftY);
PCHAR UTIL_GetTimestamp(VOID);
SIZE_T UTIL_GetFileSizeInside(FILE *pStream);
FILE* UTIL_SafeOpen(LPCSTR lpcszFilename, LPCSTR lpcszMode);

LPWSTR UTIL_AllocWideStringW(LPCWSTR lpcwszSrc);
LPWSTR UTIL_AllocWideStringA(LPCSTR lpcszSrc);
LPSTR  UTIL_AllocCharStringW(LPCWSTR lpcwszSrc);
LPSTR  UTIL_AllocCharStringA(LPCSTR lpcszSrc);
LPWSTR UTIL_ReallocStringW(LPWSTR lpwszOld, LPCWSTR lpwszSrc);
LPWSTR UTIL_AppendWideStringW(LPWSTR lpwszDst, LPCWSTR lpcwszSrc);
LPWSTR UTIL_AllocWideStringDec(INT iNum);
LPWSTR UTIL_AppendWideStringDec(LPWSTR lpwszDst, INT iNum);
VOID UTIL_ReplaceCharAll(LPSTR lpszSrc, LPCSTR lpcszOld, LPCSTR lpcszNew);

#endif /* _COMMON_H_ */