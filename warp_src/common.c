#include "common.h"

BOOL CALLBACK wfmwEnumWindowsProc(HWND hwnd, LPARAM lParam);


PCHAR UTIL_SearchBinary(LPCSTR haystack, LPCSTR needle, SIZE_T haystack_len, SIZE_T needle_len)
{
    ENSURE(haystack && needle, "SearchBinary nullptr");

    for (SIZE_T i = 0; i <= haystack_len - needle_len; i++) {
        if (memcmp(haystack + i, needle, needle_len) == 0) {
            return (PCHAR)(haystack + i);
        }
    }
    return NULL;
}


BOOL UTIL_PatchMemory(HANDLE process, LPCSTR needle, SIZE_T needle_len, LPCSTR newString) 
{
    ENSURE(needle && newString, "PatchMemory nullptr");

    SIZE_T bytesWritten;
    PCHAR baseAddress = NULL;
    MEMORY_BASIC_INFORMATION mbi = {0};
    BOOL isFound = FALSE;

    while (VirtualQueryEx(process, baseAddress, &mbi, sizeof(mbi)) && !isFound) {
        if ((mbi.State == MEM_COMMIT) && (mbi.Protect == PAGE_READONLY)) {
            PCHAR buffer = (PCHAR)malloc(mbi.RegionSize); 
            ENSURE(buffer, "Memory allocation failed");

            SIZE_T bytesRead;
            BOOL readSuccess = ReadProcessMemory(process, mbi.BaseAddress, buffer, mbi.RegionSize, &bytesRead);
            ENSURE(readSuccess, "Failed to read process memory");

            PCHAR location = UTIL_SearchBinary(buffer, needle, bytesRead, needle_len);
            if (location) {
                PCHAR writeAddress = (PCHAR)mbi.BaseAddress + (location - buffer);
                DWORD oldProtect, newProtect = PAGE_EXECUTE_READWRITE;
                BOOL protectSuccess = VirtualProtectEx(process, writeAddress, needle_len, newProtect, &oldProtect);
                ENSURE(protectSuccess, "Failed to change memory protection");

                BOOL writeSuccess = WriteProcessMemory(process, writeAddress, newString, needle_len, &bytesWritten);
                ENSURE(writeSuccess, "Failed to write process memory");

                protectSuccess = VirtualProtectEx(process, writeAddress, needle_len, oldProtect, &newProtect);
                ENSURE(protectSuccess, "Failed to restore memory protection");

                isFound = TRUE;
            }

            free(buffer);
        }
        baseAddress = (PCHAR)mbi.BaseAddress + mbi.RegionSize;
    }

    return isFound;
}


BOOL UTIL_FileExists(LPCSTR lpcszFilename)
{
    ENSURE(lpcszFilename, "FileExists nullptr");
    return GetFileAttributes(lpcszFilename) != INVALID_FILE_ATTRIBUTES;
}


LPSTR UTIL_PathFile(LPCSTR path, LPCSTR file)
{
    ENSURE(path && file, "PathFile nullptr arg");

    LPSTR lpszFilename = (LPSTR)LocalAlloc(LPTR, MAX_PATH * sizeof(CHAR));
    ENSURE(GetFullPathName(path, MAX_PATH, lpszFilename, NULL), "PathFileExists failed");
    strcat(lpszFilename, "\\");
    strcat(lpszFilename, file);

    return lpszFilename;
}


BOOL UTIL_ProcessIsRunning(LPCSTR processName)
{
    BOOL isRunning = FALSE;
    HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
    ENSURE(hProcessSnap != INVALID_HANDLE_VALUE, "Failed to create process snapshot");

    PROCESSENTRY32 pe32;
    pe32.dwSize = sizeof(PROCESSENTRY32);

    if (Process32First(hProcessSnap, &pe32)) {
        do {
            if (strcmp(pe32.szExeFile, processName) == 0) {
                isRunning = TRUE;
                break;
            }
        } while (Process32Next(hProcessSnap, &pe32));
    }

    CloseHandle(hProcessSnap);
    return isRunning;
}


void UTIL_SuspendProcessThreads(DWORD processId)
{
    HANDLE hThreadSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    ENSURE(hThreadSnapshot != INVALID_HANDLE_VALUE, "Failed to create thread snapshot");

    THREADENTRY32 te32;
    te32.dwSize = sizeof(THREADENTRY32);

    BOOL bResult = Thread32First(hThreadSnapshot, &te32);
    ENSURE(bResult != FALSE, "Failed to enumerate threads");

    do {
        if (te32.th32OwnerProcessID == processId) {
            HANDLE hThread = OpenThread(THREAD_SUSPEND_RESUME, FALSE, te32.th32ThreadID);
            ENSURE(hThread != NULL, "Failed to open thread");
            DWORD dwSuspendCount = SuspendThread(hThread);
            ENSURE(dwSuspendCount != (DWORD)-1, "Failed to suspend thread");
            CloseHandle(hThread);
        }
    } while (Thread32Next(hThreadSnapshot, &te32));

    CloseHandle(hThreadSnapshot);
}


void UTIL_WaitForMainWindow(DWORD processId)
{
    do {
        Sleep(20);
    } while (EnumWindows(wfmwEnumWindowsProc, (LPARAM)processId));
}


BOOL CALLBACK wfmwEnumWindowsProc(HWND hwnd, LPARAM lParam)
{
    DWORD lpdwProcessId;
    ENSURE(GetWindowThreadProcessId(hwnd, &lpdwProcessId), "Failed to get process ID");

    return lpdwProcessId == (DWORD)lParam ? FALSE : TRUE;
}


void UTIL_ResumeProcessThreads(DWORD dwProcessId)
{
    HANDLE hThreadSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPTHREAD, 0);
    ENSURE(hThreadSnapshot != INVALID_HANDLE_VALUE, "Failed to create thread snapshot");

    THREADENTRY32 te32;
    te32.dwSize = sizeof(THREADENTRY32);

    BOOL bResult = Thread32First(hThreadSnapshot, &te32);
    ENSURE(bResult != FALSE, "Failed to enumerate threads");

    do {
        if (te32.th32OwnerProcessID == dwProcessId) {
            HANDLE hThread = OpenThread(THREAD_SUSPEND_RESUME, FALSE, te32.th32ThreadID);
            ENSURE(hThread != NULL, "Failed to open thread");
            DWORD dwResumeCount = ResumeThread(hThread);
            ENSURE(dwResumeCount != (DWORD)-1, "Failed to resume thread");
            CloseHandle(hThread);
        }
    } while (Thread32Next(hThreadSnapshot, &te32));

    CloseHandle(hThreadSnapshot);
}


void UTIL_CenterWindow(HWND hwSelf, INT iShiftX, INT iShiftY)
{
    HWND hwParent;
    RECT rSelfW, rParentC, rParentW;
    INT iPosX, iPosY;

    hwParent = GetParent(hwSelf);
    if (hwParent == NULL) hwParent = GetDesktopWindow();

    ENSURE_EX(GetWindowRect(hwParent, &rParentW) && GetClientRect(hwParent, &rParentC) && GetWindowRect(hwSelf, &rSelfW));

    iPosX = rParentW.left + iShiftX + (rParentC.right + rSelfW.left - rSelfW.right) / 2;
    iPosY = rParentW.top + iShiftY + (rParentC.bottom + rSelfW.top - rSelfW.bottom) / 2;

    ENSURE_EX(SetWindowPos(hwSelf, NULL, iPosX, iPosY, 0, 0, SWP_NOSIZE|SWP_NOZORDER|SWP_NOACTIVATE));
}


// Returns the current timestamp as a string
PCHAR UTIL_GetTimestamp(VOID)
{
    time_t now = time(NULL);
    PCHAR date = ctime(&now);
    ENSURE_EX(date != NULL);

    return date;
}


SIZE_T UTIL_GetFileSizeInside(FILE *pStream)
{
    ENSURE_EX(pStream && fseek(pStream, 0, SEEK_END) == 0);
    SIZE_T szFileSize = ftell(pStream);
    fseek(pStream, 0, SEEK_SET);

    return szFileSize;
}


// If the AV locks files. This function will retry until it succeeds or timeout reached.
FILE* UTIL_SafeOpen(LPCSTR lpcszFilename, LPCSTR lpcszMode)
{
    ENSURE_EX(lpcszFilename && lpcszMode);
    FILE* pFile = NULL;
    clock_t lStart = clock();
    double dblDuration;

    do {
        pFile = fopen(lpcszFilename, lpcszMode);
        if (pFile == NULL) {
            Sleep(50);
            // Check if timeout has been reached
            dblDuration = (double)((clock() - lStart) / (double) CLOCKS_PER_SEC);
            if (dblDuration >= 1.0) ENSURE_EX(FALSE);
        }
    } while (pFile == NULL);

    return pFile;
}


// Allocates a wide string from constant wchar string
LPWSTR UTIL_AllocWideStringW(LPCWSTR lpcwszSrc)
{
    ENSURE_EX(lpcwszSrc != NULL);
    SIZE_T szLen = wcslen(lpcwszSrc) + 1; // +1 for null terminator

    LPWSTR lpwszDst = (LPWSTR)LocalAlloc(LPTR, szLen * sizeof(WCHAR));
    ENSURE_EX(lpwszDst != NULL);

    wcscpy(lpwszDst, lpcwszSrc);
    return lpwszDst;
}


// Allocates a wide string from constant char string
LPWSTR UTIL_AllocWideStringA(LPCSTR lpcszSrc)
{
    ENSURE_EX(lpcszSrc != NULL);
    SIZE_T szLen = strlen(lpcszSrc) + 1; // +1 for null terminator

    LPWSTR lpwszDst = (LPWSTR)LocalAlloc(LPTR, szLen * sizeof(WCHAR));
    ENSURE_EX(lpwszDst != NULL);

    for (SIZE_T i = 0; i < szLen; i++) {
        lpwszDst[i] = (WCHAR)lpcszSrc[i]; // Bad cast, but should work for basic ASCII chars
    }

    return lpwszDst;
}


// Allocates a char string from constant wide string
LPSTR UTIL_AllocCharStringW(LPCWSTR lpcwszSrc)
{
    ENSURE_EX(lpcwszSrc != NULL);
    SIZE_T szLen = wcslen(lpcwszSrc) + 1; // +1 for null terminator

    LPSTR lpszDst = (LPSTR)LocalAlloc(LPTR, szLen);
    ENSURE_EX(lpszDst != NULL);

    for (SIZE_T i = 0; i < szLen; i++) {
        lpszDst[i] = (CHAR)lpcwszSrc[i]; // Bad cast, but it should be safe
    }

    return lpszDst;
}


// Reallocate a wide string from constant wide string
LPWSTR UTIL_ReallocStringW(LPWSTR lpwszOld, LPCWSTR lpwszSrc)
{
    // Release old string
    if (lpwszOld != NULL) LocalFree(lpwszOld);

    // Allocate new string
    ENSURE_EX(lpwszSrc);
    LPWSTR lpwszNew = UTIL_AllocWideStringW(lpwszSrc);

    return lpwszNew;
}


// Appends a wide string to an existing wide string
LPWSTR UTIL_AppendWideStringW(LPWSTR lpwszDst, LPCWSTR lpcwszSrc)
{
    ENSURE_EX(lpwszDst && lpcwszSrc);
    SIZE_T szLen = wcslen(lpcwszSrc) + 1; // +1 for null terminator

    // Reallocate memory
    lpwszDst = (LPWSTR)LocalReAlloc(lpwszDst, (wcslen(lpwszDst) + szLen) * sizeof(WCHAR), LMEM_MOVEABLE);
    ENSURE_EX(lpwszDst != NULL);

    // Append new string
    wcscat(lpwszDst, lpcwszSrc);
    return lpwszDst;
}


// Converts a decimal number into a wide string
LPWSTR UTIL_AllocWideStringDec(INT iNum)
{
    // Calculate the length of the number
    INT length = snprintf(NULL, 0, "%d", iNum);

    // Allocate memory for the wide string
    LPWSTR lpwszDst = (LPWSTR)LocalAlloc(LPTR, (length + 1) * sizeof(WCHAR));
    ENSURE_EX(lpwszDst != NULL);

    // Convert the number into a wide string
    _ltow(iNum, lpwszDst, 10);

    return lpwszDst;
}


// Appends a decimal number to an existing wide string
LPWSTR UTIL_AppendWideStringDec(LPWSTR lpwszDst, INT iNum)
{
    ENSURE_EX(lpwszDst != NULL);
    // Convert the number into a wide string
    LPWSTR lpwszSrc = UTIL_AllocWideStringDec(iNum);

    // Append the number to the existing string
    lpwszDst = UTIL_AppendWideStringW(lpwszDst, lpwszSrc);

    // Free the memory allocated for the number
    LocalFree(lpwszSrc);

    return lpwszDst;
}


// Allocates a char string from constant char string
LPSTR UTIL_AllocCharStringA(LPCSTR lpcszSrc)
{
    ENSURE_EX(lpcszSrc != NULL);
    SIZE_T szLen = strlen(lpcszSrc) + 1; // +1 for null terminator

    LPSTR lpszDst = (LPSTR)LocalAlloc(LPTR, szLen);
    ENSURE_EX(lpszDst != NULL);

    strcpy(lpszDst, lpcszSrc);
    return lpszDst;
}


// Replaces all occurrences of lpcszOld with lpcszNew in lpszSrc
VOID UTIL_ReplaceCharAll(LPSTR lpszSrc, LPCSTR lpcszOld, LPCSTR lpcszNew)
{
    ENSURE_EX(lpszSrc && lpcszOld && lpcszNew);

    PCHAR pszPos;
    CHAR pszTemp[2048];
    INT iIndex = 0;
    INT iOldLen = strlen(lpcszOld);

    // Repeat till all occurrences are replaced.
    while ((pszPos = strstr(lpszSrc, lpcszOld)) != NULL) {
        // Backup current content
        strcpy(pszTemp, pszPos + iOldLen);

        // Copy the first part of the string
        *pszPos = '\0';

        // Concatenate the first part of the string with the new word
        strcat(lpszSrc, lpcszNew);

        // Concatenate the second part of the string
        strcat(lpszSrc, pszTemp);
    }
}
