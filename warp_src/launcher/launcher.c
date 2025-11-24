/*
    Project: WARP | (C) Noctefugia, March 2024
    File: launcher.c
    Description: custom game launcher
*/

#define APP_NAME TEXT("Launcher")
#include "..\\common.h"


void WARP_HandleError(LPCSTR message)
{
    printf("ERROR: %s (code: 0x%lX)\n", message,  GetLastError());
    system("pause");
    exit(1);
}


int main(INT argc, CHAR **argv)
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;
    BOOL result;

    UTIL_ZERO_STRUCT(si); UTIL_ZERO_STRUCT(pi);
    si.cb = sizeof(si);
    
    // Make sure the launcher is not running
    ENSURE(!UTIL_ProcessIsRunning(BINNAME_WSE2LAUNCH), "WSE2 launcher is already running");

    // Set window title and print header
    ENSURE(SetConsoleTitle(PROJNAME_TITLE) != FALSE, "Failed to set title");
    printf(PROJNAME_CAPTION);

    // Start the target executable
    ENSURE(CreateProcess(BINNAME_WSE2LAUNCH, NULL, NULL, NULL, FALSE, CREATE_SUSPENDED, NULL, NULL, &si, &pi), "Failed to start target executable");

    // Patch the process memory
    result = UTIL_PatchMemory(pi.hProcess, BINNAME_WSE2, strlen(BINNAME_WSE2), BINNAME_WARPLOADER);
    ENSURE(result, "Failed to patch process memory");

    // Resume the main thread
    ENSURE(ResumeThread(pi.hThread) != (DWORD)-1, "Failed to resume main thread");

    // Close handles
    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);

    printf("Patched process memory successfully.\n");

    // Start manager executable
    UTIL_ZERO_STRUCT(si); UTIL_ZERO_STRUCT(pi);
    ENSURE(CreateProcess(BINNAME_WARPMANAGR, NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi), "Failed to start manager executable");

    return 0;
}