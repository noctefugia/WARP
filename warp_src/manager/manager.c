/*
    Project: WARP | (C) Noctefugia, April 2024
    File: manager.c
    Description: simple GUI manager for plugins
*/

#define APP_NAME TEXT("Manager")
#define EXT_ERRORS
#include "..\\common.h"
#include <commctrl.h>
#include <sys/stat.h>

#define APP_WIDTH   640 // Window width (px)
#define APP_HEIGHT  480 // Window height (px)
#define APP_TIMER   100 // Timer period (ms)
#define APP_SHIFT   -50 // Window shift from center (px)

enum UI_MSGBOX_MODE {
    UMM_WARN,
    UMM_INFO,
    UMM_QYN,
    UMM_QYNC
};
#define UI_MSGBOX(mode, format, ...)        do { CHAR pszMsg[UTIL_MAXLINE]; snprintf(pszMsg, UTIL_MAXLINE, format, ## __VA_ARGS__); MessageBox(man.ctrl[MC_MAIN].hw, pszMsg, (mode == UMM_INFO ? "Info" : "Warning"), MB_OK|(mode == UMM_INFO ? MB_ICONINFORMATION : MB_ICONWARNING)); } while(0)
#define UI_MSGBOXQ(ret, mode, format, ...)  do { CHAR pszMsg[UTIL_MAXLINE]; snprintf(pszMsg, UTIL_MAXLINE, format, ## __VA_ARGS__); *(ret) = MessageBox(man.ctrl[MC_MAIN].hw, pszMsg, "Question", (mode == UMM_QYN ? MB_YESNO : MB_YESNOCANCEL)|MB_ICONQUESTION); } while(0)
#define UI_SYSTEM(ret, format, ...)         do { CHAR pszMsg[UTIL_MAXLINE]; snprintf(pszMsg, UTIL_MAXLINE, format, ## __VA_ARGS__); *(ret) = system(pszMsg); } while(0)

typedef enum {
    MC_MAIN = 0,    // Main window (HARDCODED)
    MC_TAB0,        // Main tab control
    MC_LBL0,        // Author name label
    MC_LBL1,        // Plugin codename label
    MC_EDT0,        // Plugin name edit box
    MC_BTN0,        // Plugin create button
    MC_BTN1,        // Plugin update button
    MC_BTN2,        // Plugin load button
    MC_BTN3,        // Plugin delete button
    MC_LBL2,        // Plugin full name label
    MC_EDT1,        // Plugin full name edit box
    MC_LBL3,        // Plugin version label
    MC_NUM0,        // Plugin ver major num box
    MC_NUM1,        // Plugin ver minor num box
    MC_NUM2,        // Plugin ver build num box
    MC_LBL4,        // Plugin author label
    MC_EDT2,        // Plugin author edit box
    MC_LBL5,        // Plugin description label
    MC_EDT3,        // Plugin description edit box
    MC_BTN4,        // Form clear button
    MC_LBX0,        // Plugin list box
    MC_BTN5,        // User readme button
    MC_BTN6,        // User delete button
    MC_LBL6,        // About label
    MC_BTN7,        // Learn more button
    MC_COUNT        // Total number of controls
} MAN_CONTROL;

typedef enum {
    MT_FNT0 = 0,    // Default font
    MT_FNT1,        // Small font
    MT_FNT2,        // Medium font
    MT_COUNT        // Total number of fonts
} MAN_FONT;
INT MAN_FONT_SZ[MT_COUNT] = {16, 13, 14};

#define MAN_TAB_NUM 3
LPSTR  MAN_TAB[MAN_TAB_NUM] = {"User", "Dev", "About"};

#define PLUGSZ_NAME 32
#define PLUGSZ_AUTHOR 16
typedef struct ALIGN(4) {
    DWORD64 dwCodename;
    BOOL bEnabled;
    BYTE btVer[3];
    CHAR pszCodename[10], pszFullName[PLUGSZ_NAME + 1], pszAuthor[PLUGSZ_AUTHOR + 1]; 
} plugDef;

typedef struct {
    HWND hw, hwChild;
    INT iPage;
} ctrlDef;

typedef struct {
    BOOL bLauncher, bUpdate;
    HFONT hFont[MT_COUNT];
    ctrlDef ctrl[MC_COUNT];
    UINT uNumPlugs;
    CRITICAL_SECTION cs;
} manDef;
manDef man = {0};

typedef enum  {
    UIN_CODENAME = 0,
    UIN_FULLNAME,
    UIN_AUTHOR,
    UIN_VERSION,
    UIN_README,
} UI_COLUMN;

typedef enum  {
    UIC_BUTTON = 1,
    UIC_EDIT,
    UIC_LABEL,
    UIC_NUMBER,
    UIC_TAB,
    UIC_TEXT,
    UIC_LISTBOX,
    UIC_INVALID
} UI_CONTROL;


// Add a new control to the UI.
VOID UI_CreateControl(HWND hWnd, UI_CONTROL tType, UINT uIndex, MAN_FONT tFont, UINT uX, UINT uY, UINT uWidth, UINT uHeight, LPCSTR lpszText, INT iPage, INT iParam)
{
    DWORD dwStyle = 0;
    LPCSTR lpszName = NULL;
    switch (tType) {
        case UIC_BUTTON:    lpszName = WC_BUTTON;       dwStyle = WS_CHILD|WS_VISIBLE|WS_TABSTOP|BS_DEFPUSHBUTTON;          break;
        case UIC_EDIT:      lpszName = WC_EDIT;         dwStyle = WS_CHILD|WS_VISIBLE|WS_BORDER;                            break;
        case UIC_LABEL:     lpszName = WC_STATIC;       dwStyle = WS_CHILD|WS_VISIBLE;                                      break;
        case UIC_NUMBER:    lpszName = WC_EDIT;         dwStyle = WS_CHILD|WS_VISIBLE|WS_BORDER|ES_AUTOHSCROLL|ES_NUMBER;   break;
        case UIC_TEXT:      lpszName = WC_EDIT;         dwStyle = WS_CHILD|WS_VISIBLE|WS_BORDER|ES_MULTILINE|WS_VSCROLL;    break;
        case UIC_TAB:       lpszName = WC_TABCONTROL;   dwStyle = WS_CHILD|WS_VISIBLE;                                      break; 
        case UIC_LISTBOX:   lpszName = WC_LISTVIEW;     dwStyle = WS_CHILD|WS_VISIBLE|WS_BORDER|LVS_REPORT;                 break; 
        default: ENSURE(FALSE); // Raise error
    }
    ENSURE(uIndex > MC_MAIN && uIndex < MC_COUNT && tFont < MT_COUNT && hWnd && lpszText && lpszName && dwStyle);
    if (man.ctrl[uIndex].hw != NULL) {
        UI_MSGBOX(UMM_WARN, "Control redefinition: %lu", uIndex);
        return;
    }

    man.ctrl[uIndex].hw = CreateWindow(lpszName, lpszText, dwStyle, (INT)uX, (INT)uY, (INT)uWidth, (INT)uHeight, hWnd, (HMENU)uIndex, GetModuleHandle(NULL), NULL);
    man.ctrl[uIndex].iPage = iPage;

    if ( (tType == UIC_NUMBER || tType == UIC_EDIT || tType == UIC_TEXT) && iParam ) { // Set max len 
        SendMessage(man.ctrl[uIndex].hw, EM_LIMITTEXT, (WPARAM)iParam, 0); 
    }
    if (tType == UIC_NUMBER) { // Set up/down buddy
        man.ctrl[uIndex].hwChild = CreateWindowEx(0, UPDOWN_CLASS, NULL, WS_CHILD|WS_VISIBLE|UDS_ALIGNRIGHT|UDS_ARROWKEYS|UDS_SETBUDDYINT, 0, 0, 0, 0, hWnd, NULL, GetModuleHandle(NULL), NULL);
        SendMessage(man.ctrl[uIndex].hwChild, UDM_SETBUDDY, (WPARAM)man.ctrl[uIndex].hw, 0);
    }
    if (tType == UIC_LISTBOX) { // Set listview style
        ListView_SetExtendedListViewStyle(man.ctrl[uIndex].hw, LVS_EX_CHECKBOXES|LVS_EX_FULLROWSELECT);
    }

    SendMessage(man.ctrl[uIndex].hw, WM_SETFONT, (WPARAM)man.hFont[tFont], TRUE); // Apply common font to control
}


// Destroy control and its child
VOID UI_DestroyControl(UINT uIndex)
{
    ENSURE(uIndex > MC_MAIN && uIndex < MC_COUNT);

    if (man.ctrl[uIndex].hw != NULL) {
        if (man.ctrl[uIndex].hwChild != NULL) {
            DestroyWindow(man.ctrl[uIndex].hwChild);
            man.ctrl[uIndex].hwChild = NULL;
        }
        DestroyWindow(man.ctrl[uIndex].hw);
        man.ctrl[uIndex].hw = NULL;
    }
}


// Add tabs to a tab control
VOID UI_AddTabs(HWND hTab, LPSTR lpszTabs[], INT iNumTabs)
{
    ENSURE(hTab && lpszTabs && iNumTabs);

    TCITEM ti; UTIL_ZERO_STRUCT(ti);
    ti.mask = TCIF_TEXT;

    // Loop through all tabs and add them to the control
    for (INT i = 0; i < iNumTabs; i++) {
        ENSURE(lpszTabs[i] != NULL);
        ti.pszText = lpszTabs[i]; // Not a const ?!
        TabCtrl_InsertItem(hTab, i, &ti);
    }

    // Set the first tab as active.
    TabCtrl_SetCurSel(man.ctrl[MC_TAB0].hw, 0);
}


// Check if the plugin name is valid.
BOOL UI_PluginNameIsValid(LPCSTR lpcszStr)
{
    ENSURE(lpcszStr);
    INT iLen = strlen(lpcszStr);
    if (iLen != 8) return FALSE; // Make sure the plugin name is exactly 8 characters long
    if (isalpha(lpcszStr[0]) == 0) return FALSE; // First character must be an alphabetic character

    for(INT i = 0; i < iLen; i++) {
        CHAR c = lpcszStr[i];
        if(isalnum(c) == 0 && c != '_') return FALSE; // Invalid character found
    }

    return TRUE; // All characters are valid
}


// Convert a string of exactly 8 characters into a DWORD64
DWORD64 UI_PluginNameConvert(LPCSTR lpcszStr)
{
    ENSURE(lpcszStr);
    INT iLen = strlen(lpcszStr);
    ENSURE(iLen == 8); // Make sure the string is exactly 8 characters long

    DWORD64 dwResult = 0;
    for(INT i = 0; i < iLen; i++) {
        // Shift the current value in the result by 8 bits to make room for the new character
        dwResult <<= 8;
        // Add the new character to the result
        dwResult |= (DWORD64)lpcszStr[i];
    }

    return dwResult;
}


// Write a plugin by the given name
VOID UI_PluginWriteParams(plugDef *pPlugin, LPCSTR lpcszName)
{
    ENSURE(pPlugin && lpcszName && strlen(lpcszName) == 8);

    // Get the path of the plugin directory
    LPSTR lpszPath = UTIL_PathFile(FOLDPATH_CUSTOM, lpcszName);
    // Get the path of the plugin parameters file
    LPSTR lpszFileParams = UTIL_PathFile(lpszPath, FILENAME_P_PARAMS);

    // Write plugin structure to file.
    FILE *pFile = UTIL_SafeOpen(lpszFileParams, "wb"); ENSURE(pFile != NULL);
    fwrite(pPlugin, sizeof(plugDef), 1, pFile);
    fclose(pFile);

    // Clean up
    LocalFree(lpszPath);
    LocalFree(lpszFileParams);
}


// Create a plugin by the given name
#define ENSURE_PLUGIN(cond, text) do { if (!(cond)) { UI_MSGBOX(UMM_WARN, text); return; } } while(0)
VOID UI_PluginCreate(LPCSTR lpcszName, BOOL bCreate)
{
    ENSURE(lpcszName && strlen(lpcszName) == 8);

    FILE *pFile;
    plugDef plugin;
    UTIL_ZERO_STRUCT(plugin);

    // Convert the name to DWORD64
    ENSURE(plugin.dwCodename = UI_PluginNameConvert(lpcszName));
    strcpy(plugin.pszCodename, lpcszName);
    
    // Get the version
    for (INT i = 0; i < 3; ++i) plugin.btVer[i] = (BYTE)GetDlgItemInt(man.ctrl[MC_MAIN].hw, MC_NUM0 + i, NULL, FALSE);
    ENSURE_PLUGIN(plugin.btVer[0] || plugin.btVer[1] || plugin.btVer[2], "Plugin version not specified.");

    // Get the plugin full name
    GetWindowText(man.ctrl[MC_EDT1].hw, plugin.pszFullName, PLUGSZ_NAME);
    ENSURE_PLUGIN(strlen(plugin.pszFullName) > 0, "Plugin full name is empty.");

    // Get the plugin author name
    GetWindowText(man.ctrl[MC_EDT2].hw, plugin.pszAuthor, PLUGSZ_AUTHOR);
    ENSURE_PLUGIN(strlen(plugin.pszAuthor) > 0, "Plugin author name is empty.");

    // Create the plugin directory
    LPSTR lpszPath = UTIL_PathFile(FOLDPATH_CUSTOM, lpcszName);
    if (bCreate) ENSURE(mkdir(lpszPath) == 0);

    // Write plugin parameters
    UI_PluginWriteParams(&plugin, lpcszName);

    // Write plugin description to file if it exists
    INT iDescLen = GetWindowTextLength(man.ctrl[MC_EDT3].hw);
    if (iDescLen > 0) {
        // Allocate memory
        LPSTR lpszDesc = LocalAlloc(LPTR, (iDescLen + 2) * sizeof(CHAR));
        GetWindowText(man.ctrl[MC_EDT3].hw, lpszDesc, iDescLen + 1);

        // Get path of plugin info file
        LPSTR lpszFileDesc = UTIL_PathFile(lpszPath, FILENAME_P_README);

        // Write the data to the file
        pFile = UTIL_SafeOpen(lpszFileDesc, "wb"); ENSURE(pFile != NULL);
        fwrite(lpszDesc, sizeof(CHAR), iDescLen, pFile);
        fclose(pFile);

        // Free allocated memory
        LocalFree(lpszDesc);
        LocalFree(lpszFileDesc);
    }

    // Generate the plugin entry file
    if (bCreate) {
        LPSTR lpszFileEntry = UTIL_PathFile(lpszPath, FILENAME_P_ENTRY);
        LPSTR lpszFileTempl = UTIL_PathFile(FOLDPATH_CUSTOM, FILENAME_TEMPLATE);
        
        if (UTIL_FileExists(lpszFileTempl)) { 
            // Prepare template buffer
            FILE *pFile = UTIL_SafeOpen(lpszFileTempl, "r"); ENSURE(pFile != NULL);
            SIZE_T szTempl = UTIL_GetFileSizeInside(pFile);
            LPSTR pszTemplBuff = LocalAlloc(LPTR, (szTempl + 1) * sizeof(CHAR));
            ENSURE(pszTemplBuff && fread(pszTemplBuff, 1, szTempl, pFile));
            fclose(pFile);

            pFile = UTIL_SafeOpen(lpszFileEntry, "w"); ENSURE(pFile != NULL);
            fprintf(pFile, UTIL_FILEPLG_TITLE(plugin.pszCodename, plugin.pszAuthor, plugin.dwCodename, "custom plugin entry point"));
            
            // Apply template to plugin
            CHAR pszHexName[20];
            snprintf(pszHexName, sizeof(pszHexName), "0x%016llX", plugin.dwCodename);
            UTIL_ReplaceCharAll(pszTemplBuff, "0xCCCCCCCCCCCCCCCC", pszHexName);
            UTIL_ReplaceCharAll(pszTemplBuff, "SSSSSSSS", plugin.pszCodename);
            fprintf(pFile, "%s", pszTemplBuff);

            fclose(pFile);
            LocalFree(pszTemplBuff);
        } else {
            UI_MSGBOX(UMM_WARN, "Template file %s not found", lpszFileTempl);
        }

        LocalFree(lpszFileTempl);
        LocalFree(lpszFileEntry);
    }

    // Clean up
    LocalFree(lpszPath);

    // Plugin generated successfully
    if (bCreate) UI_MSGBOX(UMM_INFO, "Plugin '%s' template generated.\nCodename: 0x%016llX", lpcszName, plugin.dwCodename);
    else         UI_MSGBOX(UMM_INFO, "Plugin '%s' successfully updated.", lpcszName);
}


// Read a plugin by the given name
VOID UI_PluginRead(plugDef *pPlugin, LPCSTR lpcszName, BOOL *pbReadme)
{
    ENSURE(pPlugin && lpcszName && strlen(lpcszName) == 8);
    ZeroMemory(pPlugin, sizeof(plugDef));

    // Convert the name to DWORD64
    ENSURE(pPlugin->dwCodename = UI_PluginNameConvert(lpcszName));
    strcpy(pPlugin->pszCodename, lpcszName);

    // Get the path of the plugin directory
    LPSTR lpszPath = UTIL_PathFile(FOLDPATH_CUSTOM, lpcszName);

    // Get the path of the plugin parameters file
    LPSTR lpszFileParams = UTIL_PathFile(lpszPath, FILENAME_P_PARAMS);

    // Check the size of the file
    struct stat st;
    ENSURE(stat(lpszFileParams, &st) == 0);
    if(st.st_size != sizeof(plugDef)) {
        UI_MSGBOX(UMM_WARN, "Plugin '%s' is not a valid plugin.", lpcszName);
        ENSURE(FALSE); // File is not the right size.
    }

    // Read plugin structure from file.
    FILE *pFile = UTIL_SafeOpen(lpszFileParams, "rb"); ENSURE(pFile != NULL);
    fread(pPlugin, sizeof(plugDef), 1, pFile);
    fclose(pFile);

    // Check readme file.
    if (pbReadme != NULL) {
        LPSTR lpszFileReadme = UTIL_PathFile(lpszPath, FILENAME_P_README);
        *pbReadme = UTIL_FileExists(lpszFileReadme) ? TRUE : FALSE;
        LocalFree(lpszFileReadme);
    }

    // Clean up
    LocalFree(lpszPath);
    LocalFree(lpszFileParams);
}


// Add columns to the list view control
void UI_AddColumn(HWND hListView, INT iSubItem, LPSTR pszText, INT cx, INT fmt)
{
    ENSURE(hListView && pszText);

    LVCOLUMN lvc;
    lvc.mask = LVCF_FMT | LVCF_WIDTH | LVCF_TEXT | LVCF_SUBITEM;
    lvc.iSubItem = iSubItem;
    lvc.pszText = pszText;
    lvc.cx = cx;
    lvc.fmt = fmt;
    ListView_InsertColumn(hListView, iSubItem, &lvc);
}


// Add an item to the list view control
void UI_AddItem(HWND hListView, INT index, LPSTR pszText, int iSubItem)
{
    ENSURE(hListView && pszText);

    LVITEM lvi; UTIL_ZERO_STRUCT(lvi);
    lvi.mask = LVIF_TEXT;
    lvi.iItem = index;
    lvi.iSubItem = iSubItem;
    lvi.pszText = pszText;

    if (iSubItem > 0)   ListView_SetItem(hListView, &lvi);
    else                ListView_InsertItem(hListView, &lvi);
}


// Tab click handler
VOID WARP_SelChange(HWND hWnd)
{
    ENSURE(hWnd != NULL);
    // Hide all controls except the current page
    INT iSelNo = TabCtrl_GetCurSel(man.ctrl[MC_TAB0].hw);

    for (INT i = MC_MAIN + 1; i < MC_COUNT; ++i) {
        INT iCurPage = man.ctrl[i].iPage;
        // Skip controls that are not on any page
        if (man.ctrl[i].hw == NULL || iCurPage == -1) continue;

        // Show/hide control
        INT iState = (iCurPage == iSelNo) ? SW_SHOW : SW_HIDE;
        ShowWindow(man.ctrl[i].hw, iState);
        // Show/hide child
        if (man.ctrl[i].hwChild != NULL) ShowWindow(man.ctrl[i].hwChild, iState);
    }
}


// Error handling
VOID WARP_HandleError(LPCSTR file, LPCSTR func, INT line, LPCSTR expr)
{
    CHAR buff[UTIL_MAXLINE];
    snprintf(buff, 0xFF, 
        "file: '%s', func: '%s', line: %i, expr: '%s', winapi: '0x%lX'",
        file, func, line, expr, GetLastError());
	
	MessageBox(NULL, buff, "ERROR", MB_ICONERROR);
	TerminateProcess(GetCurrentProcess(), 1);
}


// List all installed plugins
VOID UI_PluginList(HWND hWnd, BOOL bRecreate)
{
    WIN32_FIND_DATA findFileData;
    HANDLE hFind;

    LPSTR lpszFolder = UTIL_PathFile(FOLDPATH_CUSTOM, "\\*.*");
    hFind = FindFirstFile(lpszFolder, &findFileData);
    ENSURE(hFind != INVALID_HANDLE_VALUE);

    // Recreate listview if requested
    if (bRecreate) {
        // Create listview control
        UI_DestroyControl(MC_LBX0); // Destroy old one if it exists
        UI_CreateControl(hWnd, UIC_LISTBOX, MC_LBX0, MT_FNT0, 10, 50, 600, 330, "", 0, 0);
        // Add columns
        UI_AddColumn(man.ctrl[MC_LBX0].hw, UIN_CODENAME, "Codename", 90, LVCFMT_LEFT);
        UI_AddColumn(man.ctrl[MC_LBX0].hw, UIN_FULLNAME, "Full name", 268, LVCFMT_LEFT);
        UI_AddColumn(man.ctrl[MC_LBX0].hw, UIN_AUTHOR, "Author", 140, LVCFMT_LEFT);
        UI_AddColumn(man.ctrl[MC_LBX0].hw, UIN_VERSION, "Version", 80, LVCFMT_LEFT);
        UI_AddColumn(man.ctrl[MC_LBX0].hw, UIN_README, "?", 20, LVCFMT_CENTER);
    }

    // Alloc dynamic buffers
    dynBuff libBuff, fnBuff;
    DynBuff_Init(&libBuff); DynBuff_Init(&fnBuff);
    
    // Create list-file of enabled plugins
    LPSTR lpszPlugins = UTIL_PathFile(FOLDPATH_CUSTOM, FILENAME_PLUGINS);
    FILE *pFile = UTIL_SafeOpen(lpszPlugins, "w"); ENSURE(pFile != NULL);
    fprintf(pFile, UTIL_FILEGEN_TITLE(FILENAME_PLUGINS, "list of enabled manager plugins"));
    DynBuff_Append(&fnBuff, L"// Entry function list\nMB_ERROR MB_InitPlugins(MB_CODENAME *pCodeList, MB_CALLBACK *pCallList, uint *pListSz)\n{\n\tENSURE(pCodeList && pCallList && pListSz && *pListSz > 0);\n\tint index = 0;\n\n");
    DynBuff_Append(&libBuff, L"// Entry file list\n");

    // Loop through all folders
    man.uNumPlugs = 0;
    do {
        // Check if folder is a plugin
        if ( (findFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY) && UI_PluginNameIsValid(findFileData.cFileName) ) {
            plugDef plugin; BOOL bReadme;
            UI_PluginRead(&plugin, findFileData.cFileName, &bReadme);

            // Add plugin info to listbox
            if (bRecreate) {
                HWND hListView = man.ctrl[MC_LBX0].hw;
                UI_AddItem(hListView, man.uNumPlugs, plugin.pszCodename, UIN_CODENAME);
                UI_AddItem(hListView, man.uNumPlugs, plugin.pszFullName, UIN_FULLNAME);
                UI_AddItem(hListView, man.uNumPlugs, plugin.pszAuthor, UIN_AUTHOR);
                CHAR pszVersion[16];
                snprintf(pszVersion, sizeof(pszVersion), "%d.%d.%d", plugin.btVer[0], plugin.btVer[1], plugin.btVer[2]);
                UI_AddItem(hListView, man.uNumPlugs, pszVersion, UIN_VERSION);
                if (bReadme) UI_AddItem(hListView, man.uNumPlugs, "+", UIN_README);
                ListView_SetCheckState(hListView, man.uNumPlugs, plugin.bEnabled);
            }

            // Add plugin to compiler list
            if (!plugin.bEnabled) {
                DynBuff_Append(&fnBuff, L"//!");
                DynBuff_Append(&libBuff, L"//!");
            }
            LPWSTR lpwszCodename = UTIL_AllocWideStringA(plugin.pszCodename);
            DYNBUFF_APPENDF(&fnBuff, UTIL_MAXLINE, L"\tENSURE_PLUGIN(%s_Init);\n", lpwszCodename);
            DYNBUFF_APPENDF(&libBuff, UTIL_MAXLINE, L"\t#include \"%s\\" TEXT(FILENAME_P_ENTRY) L"\"\n", lpwszCodename);
            LocalFree(lpwszCodename);
            ++man.uNumPlugs;
        }
    } while (FindNextFile(hFind, &findFileData));

    // Fill plugin file
    DynBuff_Append(&fnBuff, L"\n\t*pListSz = index;\n\treturn 0;\n}\n");
    fwprintf(pFile, L"%s\n\n", libBuff.buffer);
    fwprintf(pFile, L"%s", fnBuff.buffer);
    fclose(pFile);

    // Clean up
    DynBuff_Free(&libBuff);
    DynBuff_Free(&fnBuff);
    FindClose(hFind);
    LocalFree(lpszFolder);
    LocalFree(lpszPlugins);

    // Update controls visibility
    if (bRecreate) WARP_SelChange(hWnd);
}


// Timer update thread
VOID WARP_Update(VOID)
{
    // Stop manager if launcher is not running anymore
    BOOL bLastState = man.bLauncher;
	man.bLauncher = UTIL_ProcessIsRunning(BINNAME_WSE2LAUNCH);
    if (bLastState && !man.bLauncher) PostQuitMessage(0);

    // Update all stuff if needed
    if (man.bUpdate) {
        EnterCriticalSection(&man.cs);
        UI_PluginList(man.ctrl[MC_MAIN].hw, FALSE);
        LeaveCriticalSection(&man.cs);
        man.bUpdate = FALSE;
    }
}


// Control click handler
VOID WARP_Command(HWND hWnd, WPARAM wParam, LPARAM lParam)
{
    CHAR pszName[UTIL_MAXLINE]; pszName[0] = '\0';
    INT result = 0;
    WORD param1 = LOWORD(wParam);

    switch (param1) {
        case MC_BTN0:   // Create plugin
        case MC_BTN1:   // Update plugin
        case MC_BTN2: { // Load plugin
            EnterCriticalSection(&man.cs);
            BOOL bCreate = (param1 == MC_BTN0) ? TRUE : FALSE;
            GetWindowText(man.ctrl[MC_EDT0].hw, pszName, UTIL_MAXLINE);
            LPSTR lpszFilename = UTIL_PathFile(FOLDPATH_CUSTOM, pszName);
            // Check length
            if (strlen(pszName) < 1) {
                UI_MSGBOX(UMM_WARN, "Name not entered.");
            }
            // Check if plugin name is valid
            else if (!UI_PluginNameIsValid(pszName)) {
                UI_MSGBOX(UMM_WARN, "Invalid plugin name: '%s'\nValid characters are alphanumeric, and '_'. The first character is always letter and length should be exactly 8 characters.", pszName);
            }
            // For create operation - check if plugin is not created
            else if (bCreate && UTIL_FileExists(lpszFilename)) {
                UI_MSGBOX(UMM_WARN, "Plugin '%s' already exists.", pszName);
            } 
            // For update/load operation - check if plugin is created
            else if (!bCreate && !UTIL_FileExists(lpszFilename)) {
                UI_MSGBOX(UMM_WARN, "Plugin '%s' not exists.", pszName);
            } 
            // Load plugin
            else if (param1 == MC_BTN2) {
                plugDef plugin;
                UI_PluginRead(&plugin, pszName, NULL);
                SetWindowText(man.ctrl[MC_EDT0].hw, plugin.pszCodename);
                SetWindowText(man.ctrl[MC_EDT1].hw, plugin.pszFullName);
                SetWindowText(man.ctrl[MC_EDT2].hw, plugin.pszAuthor);
                for (INT i = 0; i < 3; ++i) SetDlgItemInt(hWnd, MC_NUM0 + i, plugin.btVer[i], FALSE);
                // Load plugin description if it exists
                LPSTR lpszFileDesc = UTIL_PathFile(lpszFilename, FILENAME_P_README);
                if (UTIL_FileExists(lpszFileDesc)) {
                    FILE *pFile = UTIL_SafeOpen(lpszFileDesc, "rb"); ENSURE(pFile != NULL);
                    SIZE_T szDesc = UTIL_GetFileSizeInside(pFile);
                    if (szDesc > 0) {
                        LPSTR lpszDesc = LocalAlloc(LPTR, (szDesc + 1) * sizeof(CHAR));
                        fread(lpszDesc, szDesc, 1, pFile);
                        SetWindowText(man.ctrl[MC_EDT3].hw, lpszDesc);
                        LocalFree(lpszDesc);
                    }
                    fclose(pFile);
                }
                LocalFree(lpszFileDesc);
                UI_MSGBOX(UMM_INFO, "Plugin '%s' loaded.", pszName);
            }
            // Create/update plugin
            else {
                if (bCreate) UI_MSGBOXQ(&result, UMM_QYN, "Create plugin '%s'?", pszName);
                else         UI_MSGBOXQ(&result, UMM_QYN, "Update plugin '%s' data?", pszName);
                if (result == IDYES) {
                    UI_PluginCreate(pszName, bCreate);  // Update/create plugin after confirmation
                    if (bCreate) man.bUpdate = TRUE;    // Update plugin list after creation
                }
            }
            LocalFree(lpszFilename);
            LeaveCriticalSection(&man.cs);
            break;
        }

        case MC_BTN4: { // Clear form
            SetWindowText(man.ctrl[MC_EDT0].hw, "");
            SetWindowText(man.ctrl[MC_EDT1].hw, "");
            SetWindowText(man.ctrl[MC_EDT2].hw, "");
            SetWindowText(man.ctrl[MC_EDT3].hw, "");
            for (INT i = 0; i < 3; ++i) SetDlgItemInt(hWnd, MC_NUM0 + i, 0, FALSE);
            break;
        }

        case MC_BTN3:   // Delete plugin
        case MC_BTN5:   // Readme (user)
        case MC_BTN6: { // Delete (user)
            EnterCriticalSection(&man.cs);
            INT iItem = -1;
            iItem = ListView_GetNextItem(man.ctrl[MC_LBX0].hw, iItem, LVNI_SELECTED);
            if ( (iItem >= 0) || (param1 == MC_BTN3) ) {
                if (param1 == MC_BTN3) GetWindowText(man.ctrl[MC_EDT0].hw, pszName, UTIL_MAXLINE);
                else                   ListView_GetItemText(man.ctrl[MC_LBX0].hw, iItem, 0, pszName, 10);
                if (UI_PluginNameIsValid(pszName)) {
                    LPSTR lpszPath = UTIL_PathFile(FOLDPATH_CUSTOM, pszName);
                    if (param1 == MC_BTN5) { // Open readme
                        LPSTR lpszReadme = UTIL_PathFile(lpszPath, FILENAME_P_README);
                        if (UTIL_FileExists(lpszReadme)) UI_SYSTEM(&result, "start notepad.exe \"%s\"", lpszReadme);
                        else                             UI_MSGBOX(UMM_WARN, "Description not found.");
                        LocalFree(lpszReadme);
                    } else if (UTIL_FileExists(lpszPath)) { // Delete folder
                        UI_MSGBOXQ(&result, UMM_QYN, "Are you sure you want to delete plugin '%s'?", pszName);
                        if (result == IDYES) {
                            UI_SYSTEM(&result, "rmdir /S /Q \"%s\"", lpszPath); // SHFileOperation workaround :(
                            if (result == 0) { if (param1 == MC_BTN3) UI_MSGBOX(UMM_INFO, "Plugin deleted."); }
                            else UI_MSGBOX(UMM_WARN, "Failed to delete plugin.\n\nMaybe some plugin file is locked?");
                            if (param1 != MC_BTN5) UI_PluginList(hWnd, (param1 == MC_BTN6 ? TRUE : FALSE));
                        }
                    } else {
                        UI_MSGBOX(UMM_WARN, "Plugin '%s' not found.", pszName);
                    }
                    LocalFree(lpszPath);
                } else {
                    UI_MSGBOX(UMM_WARN, "Invalid plugin name.");
                }
            } else {
                UI_MSGBOX(UMM_WARN, "Plugin not selected.");
            }
            LeaveCriticalSection(&man.cs);
            break;
        }

        case MC_BTN7: { // Learn more
            LPSTR lpszDoc = UTIL_PathFile(FOLDPATH_DOC, FILENAME_DOCINDEX);
            if (UTIL_FileExists(lpszDoc)) UI_SYSTEM(&result, "explorer \"%s\"", lpszDoc);
            else                          UI_MSGBOX(UMM_WARN, "Documentation file '%s' not exists", lpszDoc);
            LocalFree(lpszDoc);
            break;
        }

        default:
            break; // UI_MSGBOX(UMM_WARN, "Unhandled control: %u", param1);
    }
}


// Window event handler
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message) {
        case WM_CREATE: { // Create window (first time)
            UTIL_CenterWindow(hWnd, APP_SHIFT, APP_SHIFT);
            // Initialize fonts
            for (INT i = MT_FNT0; i < MT_COUNT; ++i) {
                man.hFont[i] = CreateFont(MAN_FONT_SZ[i], 0, 0, 0, FW_DONTCARE, FALSE, FALSE, FALSE, ANSI_CHARSET, OUT_TT_PRECIS, CLIP_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE, "Consolas");
            }
            
            // Initialize controls
            UI_CreateControl(hWnd, UIC_TAB,     MC_TAB0, MT_FNT0, 0, 0, APP_WIDTH, APP_HEIGHT, "", -1, 0);
            UI_AddTabs(man.ctrl[MC_TAB0].hw,    MAN_TAB, MAN_TAB_NUM);
            UI_CreateControl(hWnd, UIC_LABEL,   MC_LBL0, MT_FNT1, 360, 420, 600, 20,  PROJNAME_REMARK, -1, 0);
            // Plugin management
            UI_CreateControl(hWnd, UIC_LABEL,   MC_LBL1, MT_FNT0, 10,  40,  200, 20,  "Plugin codename:", 1, 0);
            UI_CreateControl(hWnd, UIC_EDIT,    MC_EDT0, MT_FNT0, 150, 40,  80,  20,  "", 1, 8);
            UI_CreateControl(hWnd, UIC_BUTTON,  MC_BTN2, MT_FNT0, 260, 40,  70,  21,  "Load", 1, 0);
            UI_CreateControl(hWnd, UIC_BUTTON,  MC_BTN1, MT_FNT0, 350, 40,  70,  21,  "Update", 1, 0);
            UI_CreateControl(hWnd, UIC_BUTTON,  MC_BTN0, MT_FNT0, 440, 40,  70,  21,  "Create", 1, 0);
            UI_CreateControl(hWnd, UIC_BUTTON,  MC_BTN3, MT_FNT0, 530, 40,  70,  21,  "Delete", 1, 0);
            // Plugin name
            UI_CreateControl(hWnd, UIC_LABEL,   MC_LBL2, MT_FNT0, 10,  80,  200, 20,  "Full name:", 1, 0);
            UI_CreateControl(hWnd, UIC_EDIT,    MC_EDT1, MT_FNT0, 100, 80,  270, 20,  "", 1, PLUGSZ_NAME);
            // Plugin version
            UI_CreateControl(hWnd, UIC_LABEL,   MC_LBL3, MT_FNT0, 380, 80,  200, 20,  "Version:", 1, 0);
            UI_CreateControl(hWnd, UIC_NUMBER,  MC_NUM0, MT_FNT0, 450, 80,  50,  20,  "0", 1, 2);
            UI_CreateControl(hWnd, UIC_NUMBER,  MC_NUM1, MT_FNT0, 500, 80,  50,  20,  "0", 1, 2);
            UI_CreateControl(hWnd, UIC_NUMBER,  MC_NUM2, MT_FNT0, 550, 80,  50,  20,  "0", 1, 2);
            // Plugin author
            UI_CreateControl(hWnd, UIC_LABEL,   MC_LBL4, MT_FNT0, 10,  120, 200, 20,  "Author:", 1, 0);
            UI_CreateControl(hWnd, UIC_EDIT,    MC_EDT2, MT_FNT0, 100, 120, 140, 20,  "", 1, PLUGSZ_AUTHOR);
            // Plugin description
            UI_CreateControl(hWnd, UIC_LABEL,   MC_LBL5, MT_FNT0, 10,  160, 200, 20,  "Description:", 1, 0);
            UI_CreateControl(hWnd, UIC_BUTTON,  MC_BTN4, MT_FNT0, 520, 160, 80,  21,  "Clear UI", 1, 0);
            UI_CreateControl(hWnd, UIC_TEXT,    MC_EDT3, MT_FNT0, 10,  200, 600, 210, "", 1, 0);
            // User UI
            UI_CreateControl(hWnd, UIC_BUTTON,  MC_BTN5, MT_FNT0, 10,  390, 110,  21,  "Description", 0, 0);
            UI_CreateControl(hWnd, UIC_BUTTON,  MC_BTN6, MT_FNT0, 540, 390, 70,  21,  "Delete", 0, 0);
            // About UI
            UI_CreateControl(hWnd, UIC_LABEL,   MC_LBL6, MT_FNT2, 10,  40,  600, 320, PROJDESC_FULL, 2, 0);
            UI_CreateControl(hWnd, UIC_BUTTON,  MC_BTN7, MT_FNT0, 250, 350, 110, 30,  "Learn more", 2, 0);

            SetTimer(hWnd, 1, APP_TIMER, NULL);
            EnterCriticalSection(&man.cs);
            UI_PluginList(hWnd, TRUE);
            LeaveCriticalSection(&man.cs);
            break;
        }

        case WM_COMMAND:    WARP_Command(hWnd, wParam, lParam); break; // Handle control clicks
        case WM_TIMER:      if (wParam == 1) WARP_Update();     break; // Timer event
        case WM_DESTROY:    PostQuitMessage(0);                 break; // Close window
        
        case WM_NOTIFY:
            EnterCriticalSection(&man.cs);
            if (((LPNMHDR)lParam)->code == TCN_SELCHANGE) { // Tab control changed
                UI_PluginList(hWnd, TRUE);
            } else if (man.ctrl[MC_LBX0].hw) { // Handle standard ListView notification
                LPNMLISTVIEW pnmv = (LPNMLISTVIEW)lParam;
                if (pnmv->uChanged & LVIF_STATE) { // Item state changed
                    INT iState = -1;
                    switch (pnmv->uNewState & LVIS_STATEIMAGEMASK) {
                        case INDEXTOSTATEIMAGEMASK(2): iState = 1; break; // Item checked
                        case INDEXTOSTATEIMAGEMASK(1): iState = 0; break; // Item unchecked
                    }
                    // Something changed ?
                    if (iState != -1) {
                        plugDef plugin; CHAR pszName[10]; pszName[0] = '\0';
                        ListView_GetItemText(man.ctrl[MC_LBX0].hw, pnmv->iItem, 0, pszName, sizeof(pszName)); pszName[9] = '\0';
                        if (UI_PluginNameIsValid(pszName)) {
                            UI_PluginRead(&plugin, pszName, NULL);
                            if (plugin.bEnabled != iState) { // Update plugin state if needed
                                plugin.bEnabled = (BOOL)iState;
                                UI_PluginWriteParams(&plugin, pszName);
                                man.bUpdate = TRUE;
                            }
                        }
                    }
                }
            }
            LeaveCriticalSection(&man.cs);
            break;

        default: return DefWindowProc(hWnd, message, wParam, lParam);
    }

    return 0;
}


// Main window routine
INT APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, INT nCmdShow)
{
    UTIL_ZERO_STRUCT(man);
    InitializeCriticalSection(&man.cs);

    // Prevent multiple instances of the same app
    HANDLE hMutex = CreateMutex(NULL, TRUE, "warpManagerMutex");
    if (GetLastError() == ERROR_ALREADY_EXISTS) return 0;

    // Check if plugin folder is present
    if (!UTIL_FileExists(FOLDNAME_PLUGINS)) {
        UI_MSGBOX(UMM_WARN, "Wrong startup directory. The plugin folder is missing or invalid.");
        return 0;
    }
    // Create custom folder if needed
    if (!UTIL_FileExists(FOLDNAME_CUSTOM)) mkdir(FOLDPATH_CUSTOM);

    // Register the window class
    WNDCLASS wc; UTIL_ZERO_STRUCT(wc);
    wc.hInstance     = hInstance;
    wc.lpszClassName = APP_NAME;
    wc.lpfnWndProc   = (WNDPROC)WndProc;
    wc.hbrBackground = CreateSolidBrush(GetSysColor(COLOR_3DFACE));
    wc.hIcon         = LoadIcon(NULL, IDI_ASTERISK);
    wc.hCursor       = LoadCursor(NULL, IDC_ARROW);
    ENSURE(RegisterClass(&wc));

    // Create the main window
    man.ctrl[MC_MAIN].hw = CreateWindow(APP_NAME, PROJNAME_TITLE, WS_OVERLAPPEDWINDOW|WS_VISIBLE, CW_USEDEFAULT, CW_USEDEFAULT, APP_WIDTH, APP_HEIGHT, 0, 0, hInstance, 0);
    ENSURE(man.ctrl[MC_MAIN].hw != NULL);

    // Disable resizing
    SetWindowLong(man.ctrl[MC_MAIN].hw, GWL_STYLE, GetWindowLong(man.ctrl[MC_MAIN].hw, GWL_STYLE)&~WS_SIZEBOX&~WS_MAXIMIZEBOX);

    // Main message loop
    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0) > 0) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    // Clean up
    DeleteObject(wc.hbrBackground);
    for (INT i = 0; i < MT_COUNT; ++i) DeleteObject(man.hFont[i]);
    ReleaseMutex(hMutex);
    CloseHandle(hMutex);
    DeleteCriticalSection(&man.cs);
    return msg.wParam;
}




