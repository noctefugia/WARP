/*
    Project: WARP | (C) Noctefugia, March 2024
    File: loader.c
    Description: simple DLL-injector
*/

#define APP_NAME TEXT("Loader")
#include "..\\common.h"
		
HANDLE hProcess = NULL, hThread = NULL;
LPVOID lpRemoteMemory = NULL;


void WARP_HandleError(LPCSTR message)
{
    printf("ERROR: %s (code: 0x%lX)\n", message,  GetLastError());
    if (hProcess) {
        if (lpRemoteMemory) {
            VirtualFreeEx(hProcess, lpRemoteMemory, 0, MEM_RELEASE);
        }
        TerminateProcess(hProcess, 0);
        CloseHandle(hProcess);
    }
    if (hThread) {
        CloseHandle(hThread);
    }
    system("pause");
    exit(1);
}


int main(INT argc, CHAR **argv)
{
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    ZeroMemory(&pi, sizeof(pi));
    si.cb = sizeof(si);

    // Make game is not running
    ENSURE(!UTIL_ProcessIsRunning(BINNAME_WSE2), "WSE2 is already running");

    // Copy libtcc.dll to root directory
    CHAR pszSrcFile[MAX_PATH], pszDstFile[MAX_PATH];
    ENSURE(GetFullPathName(TEXT(FILEPATH_TCCLIB), MAX_PATH, pszSrcFile, NULL), "Failed to get tcclib src path");
    ENSURE(GetFullPathName(TEXT(BINNAME_TCCLIB), MAX_PATH, pszDstFile, NULL), "Failed to get tcclib dst path");
    ENSURE(CopyFile(pszSrcFile, pszDstFile, FALSE), "Failed to copy tcclib");

    // Customize console window
    ENSURE(SetConsoleTitle(PROJNAME_TITLE) != FALSE, "Failed to set title");
    printf(PROJNAME_CAPTION);

    // Pre-init checks
    ENSURE(UTIL_FileExists(BINNAME_WSE2), BINNAME_WSE2 " not found");
    ENSURE(UTIL_FileExists(BINNAME_WARPLIB), BINNAME_WARPLIB " not found");
    ENSURE(!UTIL_ProcessIsRunning(BINNAME_WSE2), BINNAME_WSE2 " is already running");

    // Start the process
    ENSURE(CreateProcess(BINNAME_WSE2, NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi), "Failed to start process");
    hProcess = pi.hProcess; // Assign global variable

	// Wait for the main window to be created by the target process
    UTIL_WaitForMainWindow(pi.dwProcessId);
	
    // Freeze all threads in the target process
    // UTIL_SuspendProcessThreads(pi.dwProcessId);
	
    // Allocate memory in the target process for the DLL path
    lpRemoteMemory = VirtualAllocEx(hProcess, NULL, strlen(BINNAME_WARPLIB) + 1, MEM_COMMIT, PAGE_READWRITE);
    ENSURE(lpRemoteMemory != NULL, "Failed to allocate memory");

    // Write the DLL path to the allocated memory
    ENSURE(WriteProcessMemory(hProcess, lpRemoteMemory, (LPVOID)BINNAME_WARPLIB, strlen(BINNAME_WARPLIB) + 1, NULL), "Failed to write process memory");
    
	// Get a handle to the Kernel32 module in the target process
	HMODULE hModule = GetModuleHandle("kernel32.dll");
	ENSURE(hModule != NULL, "Failed to get module handle");
	
	// Retrieve the address of the LoadLibraryA function from the Kernel32 module
	FARPROC lpStartAddress = GetProcAddress(hModule, "LoadLibraryA");
	ENSURE(lpStartAddress != NULL, "Failed to get procedure address");
	
	// Create a remote thread to load our DLL
    hThread = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)lpStartAddress, lpRemoteMemory, 0, NULL);
    ENSURE(hThread != NULL, "Failed to create remote thread");

    // Wait for the remote thread to terminate
    WaitForSingleObject(hThread, INFINITE);

    // Clean up
    VirtualFreeEx(hProcess, lpRemoteMemory, 0, MEM_RELEASE);
    CloseHandle(hThread);
    CloseHandle(hProcess);
    CloseHandle(pi.hThread);

    printf("DLL injected successfully.\n");
    return 0;
}