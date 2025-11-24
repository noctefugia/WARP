/*
    Project: WARP | (C) Noctefugia, March 2024
    File: library.c
    Description: core DLL-library
*/

#include "lib_common.h"
#include "pdb_symbol.h"
#include "jit_compiler.h"
#include "asm_engine.h"
#include "mb_extension.h"

VOID WARP_HandleError(LPCSTR file, LPCSTR func, INT line, LPCSTR expr)
{
    CHAR buff[UTIL_MAXLINE];
    snprintf(buff, 0xFF, 
        "file: '%s', func: '%s', line: %i, expr: '%s', winapi: '0x%lX'",
        file, func, line, expr, GetLastError());
	
	MessageBox(NULL, buff, "ERROR", MB_ICONERROR);
	TerminateProcess(GetCurrentProcess(), 1);
}


VOID WARP_Exit(VOID)
{
    warp.bExitRequested = TRUE;

    // Wait for the thread to finish.
    /*if (warp.hThread) {
        DWORD dwResult = WaitForSingleObject(warp.hThread, 3000);
        if (dwResult == WAIT_TIMEOUT || dwResult == WAIT_FAILED) {
            TerminateThread(warp.hThread, 0);
        }
        CloseHandle(warp.hThread);
    }*/

    // Cleanup everything
    MBEX_Exit();
    JIT_Delete();
    FreeConsole();
    if (warp.hwndConsole) {
        PostMessage(warp.hwndConsole, WM_CLOSE, 0, 0);
    }
    if (warp.hProcess) {
        CloseHandle(warp.hProcess);
    }
    /*if (warp.hInstDLL) {
        FreeLibraryAndExitThread(warp.hInstDLL, 0);
    }*/

    UTIL_ZERO_STRUCT(warp);
    TerminateProcess(GetCurrentProcess(), 1);
}


static BOOL WINAPI WARP_ConsoleHandler(DWORD dwCtrlType)
{
    switch (dwCtrlType) {
        case CTRL_CLOSE_EVENT:
        case CTRL_C_EVENT:
            warp.bCompileJit = TRUE;
            return TRUE;
        case CTRL_BREAK_EVENT:
        case CTRL_SHUTDOWN_EVENT:
            WARP_Exit();
            return FALSE;
    }

    return TRUE;
}


DWORD WINAPI WARP_Thread(LPVOID lpParam)
{
    warp.bExitRequested = FALSE;
    ENSURE(warp.hInstDLL = (HINSTANCE)lpParam);
    ENSURE(warp.dwBaseAddr = (DWORD)GetModuleHandle(NULL));
    SYSTEM_INFO si; GetSystemInfo(&si);
    warp.dwPageSz = si.dwPageSize;

    // Get true handle (not pseudohandle)
    warp.dwProcessId = GetCurrentProcessId();
    ENSURE(warp.hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, warp.dwProcessId));

    // Init console window
    ENSURE(AllocConsole() != FALSE); SetLastError(0);  // ??? raises ERROR_SEM_NOT_FOUND (0xBB)
    SetConsoleCtrlHandler(WARP_ConsoleHandler, TRUE);
    ENSURE(warp.hwndConsole = GetConsoleWindow());
 
    // Redirect standard streams to console
    FILE *fpStdin = freopen("CONIN$", "r", stdin);
    FILE *fpStdout = freopen("CONOUT$", "w", stdout);
    FILE *fpStderr = freopen("CONOUT$", "w", stderr);
    ENSURE(fpStdin && fpStdout && fpStderr);

    // Customize console window
    // ENSURE(SetWindowLong(warp.hwndConsole, GWL_STYLE, GetWindowLong(warp.hwndConsole, GWL_STYLE) & ~WS_MAXIMIZEBOX & ~WS_SIZEBOX) != 0);
    ENSURE(SetConsoleTitle(PROJNAME_TITLE) != FALSE);
    printf(PROJNAME_CAPTION);

    // Retrieve path to executable
    COMM_GetMyPath(warp.ptszPath, sizeof(warp.ptszPath));
    printf("Root path: '%s'\n", warp.ptszPath);

    // Remove old debug file
    remove(FILENAME_DEBUG);

    // Initialize modules
    JIT_Init("\0", FOLDPATH_TCC_DEF, FOLDPATH_TCC_INC, FOLDNAME_PLUGINS);
    PDB_Init();

    mkdir(FOLDPATH_MB_API);
    MBEX_AssignHookFuncs();
    PDB_Process();
    if (!MBEX_PatchHookedFuncs())
        printf("ERROR: Failed to patch hooked functions!\n");

    // UTIL_ResumeProcessThreads(warp.dwProcessId);

    warp.bCompileJit = TRUE;
    while (!warp.bExitRequested) {
        if (warp.bCompileJit) {
            warp.bRuntimeOk = FALSE;
            MBEX_Exit(); // Free plugin data before compiling new code
            if (JIT_CompileFile(FILENAME_MB_MAINC, MBEX_AddSymbolsCallback, MBEX_GetSymbolsCallback)) {
                MBEX_Init();
                warp.bRuntimeOk = TRUE;
            }
            warp.bCompileJit = FALSE;
        }
        Sleep(100);
    }

    return 0;
}


BOOL APIENTRY DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
    switch (fdwReason) {
        case DLL_PROCESS_ATTACH:
            UTIL_ZERO_STRUCT(warp);
            DisableThreadLibraryCalls(hinstDLL); // disable DLL_THREAD_ATTACH and DLL_THREAD_DETACH notifications
            warp.hThread = CreateThread(NULL, 0, WARP_Thread, hinstDLL, 0, NULL);
			ENSURE(warp.hThread != NULL);
            break;

        case DLL_PROCESS_DETACH:
            if (warp.hThread) {
                WARP_Exit();
            }
            break;
    }
	
    return TRUE;
}


//DLL_EXPORT const char *hello_data = "(not set)";

//DLL_EXPORT void hello_func(void) {
//    MessageBox(0, hello_data, "From DLL", MB_ICONINFORMATION);
//}