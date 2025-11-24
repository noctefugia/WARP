#include "lib_common.h"
#include "mb_extension.h"

warpDef warp = {0};

LPCWSTR WARP_FN_NAMES[wfn_Count] = {
    L"mbMission::frameMove",
    L"mbMission::start",
    L"mbMission::finish",
    L"mbMission::clear",
    L"mbStatement::executeWSE"
};
PBYTE WARP_FN_PATTERNS[wfn_Count] = { // MINIMUM 5 BYTES!
    (BYTE[]) {6, 0x8d, 0x8e, 0xcc, 0x00, 0x00, 0x00},   // lea ecx,[esi+000000CC]
    (BYTE[]) {0, 0x83, 0xe4, 0xf0, 0x6a, 0xff },
    (BYTE[]) {0, 0x8b, 0x8e, 0x08, 0x9b, 0x00, 0x00 },
    (BYTE[]) {0, 0xb8, 0x01, 0x01, 0x01, 0x01 }, 
    (BYTE[]) {5, 0x55, 0x8b, 0xec, 0x6a, 0xff } //(BYTE[]) {6, 0x81, 0xe1, 0xff, 0xff, 0xff, 0x0f}    // AND this,0xfffffff
};


// Write debug info to a file
VOID COMM_DebugToFile(LPCSTR lpszTxt)
{
    FILE *pFile = fopen(FILENAME_DEBUG, "a");
    ENSURE(lpszTxt && pFile);
    
    fprintf(pFile, "%s\n", lpszTxt);
    fclose(pFile);
}


// Opens the main file
VOID COMM_OpenFile(LPCSTR lpcszFilename, LPCSTR lpcszMode) 
{
    ENSURE(lpcszFilename && lpcszMode && (warp.pMainFile == NULL));

    warp.pMainFile = fopen(lpcszFilename, lpcszMode);
    ENSURE(warp.pMainFile);
}


// Closes the main file
VOID COMM_CloseFile(VOID) 
{
    ENSURE(warp.pMainFile);

    fclose(warp.pMainFile);
    warp.pMainFile = NULL;
}


VOID COMM_GetMyPath(LPTSTR lptszBuff, DWORD dwBuffSize)
{
    ENSURE(lptszBuff && dwBuffSize);
    HMODULE hMod = NULL;

    ENSURE(GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_FROM_ADDRESS | GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, (LPCSTR)&COMM_GetMyPath, &hMod));
    ENSURE(GetModuleFileName(hMod, lptszBuff, dwBuffSize));

    ENSURE(PathRemoveFileSpec(lptszBuff));
    strcat(warp.ptszPath, TEXT("\\"));

    ENSURE(PathFileExists(lptszBuff)); // Check if folder exists
}


// Checks if a line is empty or contains only whitespace.
INT COMM_LineIsEmptyOrWhitespace(CONST CHAR* lpcszLine)
{
    ENSURE(lpcszLine != NULL);

    while (*lpcszLine != '\0') {
        if (!isspace((UCHAR)*lpcszLine))
            return 0;
        lpcszLine++;
    }
    return 1;
}


// Reads a config file into an array of strings. Dynamically resizes as needed.
VOID COMM_ReadConfigIntoArray(DWORD dwConfId, LPCSTR lpcszFilename, LPCSTR lpcszSection)
{
    ENSURE( (lpcszFilename) && (lpcszSection) && (dwConfId < WARP_CONFCNT) && (warp.ppszConfig[dwConfId] == NULL) );   

    FILE* pFile;
    CHAR pszLine[UTIL_MAXLINE];
    INT iIndex = 0, iCapacity = 10;  // Initial capacity for the array of strings

    ENSURE((pFile = fopen(lpcszFilename, "r")) != NULL);

    warp.ppszConfig[dwConfId] = malloc(iCapacity * sizeof(PCHAR));
    ENSURE(warp.ppszConfig[dwConfId] != NULL);

    CHAR pszSectName[UTIL_MAXLINE];
    snprintf(pszSectName, UTIL_MAXLINE, "[%s]", lpcszSection);
    BOOL bInSection = FALSE;

    while (fgets(pszLine, sizeof(pszLine), pFile)) {
        // Remove newline character
        pszLine[strcspn(pszLine, "\r\n")] = 0;

        // Skip empty, whitespace-only lines, and section names
        if ( pszLine[0] == ';' || COMM_LineIsEmptyOrWhitespace(pszLine) ) {
            continue;
        } 
        // Check if line is a section name
        else if (strstr(pszLine, pszSectName) == pszLine) {
            bInSection = TRUE;
            continue;
        } 
        // Skip all lines until we find the section
        else if (!bInSection) { 
            continue; 
        // Stop after we find start of another section
        } else if (bInSection && pszLine[0] == '[') {
            break;
        }

        // Resize array if necessary
        if (iIndex >= iCapacity) {
            iCapacity *= 2;
            CHAR** ppTemp = realloc(warp.ppszConfig[dwConfId], iCapacity * sizeof(PCHAR));
            ENSURE(ppTemp != NULL);
            warp.ppszConfig[dwConfId] = ppTemp;
        }

        warp.ppszConfig[dwConfId][iIndex] = strdup(pszLine);
        ENSURE(warp.ppszConfig[dwConfId][iIndex] != NULL);
        iIndex++;
    }

    ENSURE(fclose(pFile) == 0);

    ENSURE(iIndex > 0);
    warp.iConfigSz[dwConfId] = iIndex; // Set the count of strings in the array
}


// Frees the array of strings
VOID COMM_FreeConfigArray(DWORD dwConfId)
{
    ENSURE( (dwConfId < WARP_CONFCNT) && (warp.ppszConfig[dwConfId] != NULL) );
    // Free the allocated memory
    for (INT i = 0; i < warp.iConfigSz[dwConfId]; ++i) {
        free(warp.ppszConfig[dwConfId][i]);
    }
    free(warp.ppszConfig[dwConfId]);
    warp.ppszConfig[dwConfId] = NULL;
}


// Accesses a string from the config array
CHAR* COMM_GetConfigString(DWORD dwConfId, INT iIndex)
{
    ENSURE( (dwConfId < WARP_CONFCNT) && (warp.ppszConfig[dwConfId] != NULL) && (iIndex < warp.iConfigSz[dwConfId]) );
    return warp.ppszConfig[dwConfId][iIndex];
}


// Returns the size of the config array
INT COMM_GetConfigSize(DWORD dwConfId)
{
    ENSURE( (dwConfId < WARP_CONFCNT) && (warp.ppszConfig[dwConfId] != NULL) );
    return warp.iConfigSz[dwConfId];
}