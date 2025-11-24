#include "jit_compiler.h"

static VOID JIT_CheckCompilerLog(VOID);
static BOOL JIT_Compile(LPCSTR pszTccStr, VOID (*pfnAddSymbolCallback)(VOID), bool (*pfnGetSymbolCallback)(VOID));
static VOID JIT_ErrorHandler(PVOID pOpaque, LPCSTR pszMsg);

#define JIT_SET_PATH(target, base, subpath) \
    strcpy(target, base); \
    strcat(target, subpath); \
    ENSURE(PathFileExists(target));

tccDef tcc = {0};


BOOL JIT_CompileFile(LPCSTR lpcszName, VOID (*pfnAddSymbolCallback)(VOID), bool (*pfnGetSymbolCallback)(void))
{
    ENSURE(lpcszName && pfnAddSymbolCallback && pfnGetSymbolCallback);

    CHAR pszFilename[MAX_PATH];
    strcpy(pszFilename, tcc.lpszPathPlg);
    strcat(pszFilename, "\\");
    strcat(pszFilename, lpcszName);
    printf("\n[JIT] Target: '%s'\n", pszFilename);

    FILE *pFile = fopen(pszFilename, "rb");
    ENSURE(pFile != NULL);

    SIZE_T szFileSize = UTIL_GetFileSizeInside(pFile);
    ENSURE(szFileSize > 0);

    LPSTR lpszFileData = malloc(szFileSize + 1);
    ENSURE(lpszFileData != NULL);

    fread(lpszFileData, szFileSize, 1, pFile);
    fclose(pFile);

    lpszFileData[szFileSize] = '\0'; // Null-terminate the string
    BOOL bResult = JIT_Compile(lpszFileData, pfnAddSymbolCallback, pfnGetSymbolCallback);
    free(lpszFileData);

    printf("\n");
    return bResult;
}


VOID JIT_Init(LPCSTR lpcszDll, LPCSTR lpcszLib, LPCSTR lpcszInc, LPCSTR lpcszPlg)
{
    ENSURE(lpcszDll && lpcszLib && lpcszInc && lpcszPlg);
    UTIL_ZERO_STRUCT(tcc);

    // Get the base path
    CHAR pszBasePath[MAX_PATH];
    COMM_GetMyPath(pszBasePath, sizeof(pszBasePath));
    strcat(pszBasePath, "\\");

    // Set the subpaths
    JIT_SET_PATH(tcc.lpszPathDll, pszBasePath, lpcszDll);
    JIT_SET_PATH(tcc.lpszPathLib, pszBasePath, lpcszLib);
    JIT_SET_PATH(tcc.lpszPathInc, pszBasePath, lpcszInc);
    JIT_SET_PATH(tcc.lpszPathPlg, pszBasePath, lpcszPlg);
}


VOID JIT_Delete(VOID)
{
    if (tcc.pState != NULL) {
        tcc_delete(tcc.pState);
        tcc.pState = NULL;
    }
}


BOOL JIT_State(VOID)
{
    return (tcc.pState != NULL) ? TRUE : FALSE;
}


VOID JIT_AddSymbol(LPCSTR lcpszName, const PVOID pVal)
{
    ENSURE(tcc.pState && lcpszName && pVal);
    tcc_add_symbol(tcc.pState, lcpszName, pVal);
}


PVOID JIT_GetSymbol(LPCSTR lcpszName)
{
    ENSURE(tcc.pState && lcpszName);
    PVOID pSymbol = tcc_get_symbol(tcc.pState, lcpszName);
    ENSURE(pSymbol != NULL);
    return pSymbol;
}


static BOOL JIT_Compile(LPCSTR lpcszTccStr, VOID (*pfnAddSymbolCallback)(VOID), bool (*pfnGetSymbolCallback)(VOID))
{
    DWORD dwStartTime = GetTickCount();
    static BOOL bFirstStart = TRUE;

    // Ensure prevous state is deleted
    JIT_Delete();

    tcc.pState = tcc_new();
    ENSURE(tcc.pState != NULL);

    tcc_set_options(tcc.pState, "-Werror -Wall");

    INT iDummy = 0;
    tcc_set_error_func(tcc.pState, &iDummy, JIT_ErrorHandler);

    // Set up library paths and include paths
    tcc_set_lib_path(tcc.pState, tcc.lpszPathDll);
    tcc_add_library_path(tcc.pState, tcc.lpszPathLib);
    tcc_add_include_path(tcc.pState, tcc.lpszPathInc);
    tcc_add_include_path(tcc.pState, tcc.lpszPathPlg);
    if (bFirstStart) {
        printf( "[JIT] Added DLL subfolder: '%s'\n", tcc.lpszPathDll);
        printf( "[JIT] Added library subfolder: '%s'\n", tcc.lpszPathLib);
        printf( "[JIT] Added include subfolder: '%s'\n", tcc.lpszPathInc);
        printf( "[JIT] Added plugins subfolder: '%s'\n", tcc.lpszPathPlg);
    } 

    CHAR pszSubfolderBuff[MAX_PATH];
    LPCSTR lpcszIncSubFolder[] = {"\\sec_api", "\\sys", "\\tcc", "\\winapi", "\0"};
    for (INT i = 0; lpcszIncSubFolder[i][0] != '\0'; ++i) {
        strcpy(pszSubfolderBuff, tcc.lpszPathInc);
        ENSURE(strcat(pszSubfolderBuff, lpcszIncSubFolder[i]));
        tcc_add_include_path(tcc.pState, pszSubfolderBuff);
        if (bFirstStart) printf("[JIT] Added include subfolder: '%s'\n", pszSubfolderBuff);
    }
    bFirstStart = FALSE;

    // Run output in memory
    tcc_set_output_type(tcc.pState, TCC_OUTPUT_MEMORY);

    // Compile code
    printf("[JIT] Compilation started\n");
    if (tcc_compile_string(tcc.pState, lpcszTccStr) == -1) goto L_error;

    // Add symbols to code
    pfnAddSymbolCallback();

    // Relocate code
    if (tcc_relocate(tcc.pState, TCC_RELOCATE_AUTO) < 0) goto L_error;

    // Get symbols from code
    if (!pfnGetSymbolCallback()) goto L_error;

    // Write compilation time
    DWORD dwDuration = GetTickCount() - dwStartTime;
    printf("[JIT] Compilation finished. Duration: %lu ms\n", dwDuration);
    return TRUE;

L_error:
    JIT_Delete();
    printf("[JIT] Compilation failed\n");
    return FALSE;
}


static VOID JIT_ErrorHandler(PVOID pOpaque, LPCSTR pszMsg)
{
    ENSURE(pszMsg != NULL);
    printf("[JIT] %s\n", pszMsg);
}