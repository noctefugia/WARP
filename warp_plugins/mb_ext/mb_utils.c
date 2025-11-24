/*
    Project: WARP | (C) Noctefugia, April 2024
    File: mb_utils.c
    Description: M&B utility functions
*/

// Convert a uint64 into a string of exactly 8 characters
MB_ERROR MB_DecodePluginName(MB_CODENAME cname, char *name)
{
    ENSURE(cname && name);
	
    for(int i = 7; i >= 0; i--) {
        // Get the last 8 bits of the uint64
        byte b = cname & 0xFF;
        // Shift the uint64 by 8 bits to the right
        cname >>= 8;
        // Convert the byte to a character and add it to the string
        name[i] = (char)b;
    }
    // Ensure the string is null-terminated
    name[8] = '\0';

	return 0;
}


// Memory free function from engine
typedef void (*MB_F_free)(void *);
MB_ERROR MB_Free(void *pData)
{
	ENSURE(pData != NULL);
    MB_F_free I_free = (MB_F_free)A_free;
    I_free(pData);
    return 0;
}

// Report error to game engine
typedef void (*MB_F_rglError)(const char *);
MB_ERROR MB_RglError(const char *pMsg)
{
	ENSURE(pMsg != NULL);
    MB_F_rglError I_rglError = (MB_F_rglError)A_rglError;
    I_rglError(pMsg);
    return 0;
}

// Report warning to game engine
typedef void (*MB_F_rglWarning)(const char *);
MB_ERROR MB_RglWarning(const char *pMsg)
{
	ENSURE(pMsg != NULL);
    MB_F_rglWarning I_rglWarning = (MB_F_rglWarning)A_rglError;
    I_rglWarning(pMsg);
    return 0;
}


// Check if agent is valid
typedef bool (*MB_F_mbCheckAgent)(int);
bool MB_CheckAgent(int id)
{
    MB_F_mbCheckAgent I_mbCheckAgent = (MB_F_rglError)A_mbCheckAgent;
    return I_mbCheckAgent(id);
}


// Write const string to rglString buffer
MB_ERROR MB_rglStringStr(rglString *pDesc, const char *pSrc)
{
    ENSURE(pDesc && pSrc);
    THISCALL2(rglString_A_rglString_0, pDesc, pSrc);
    return 0;
}


MB_ERROR MB_rglStringFree(rglString* pStr)
{
	ENSURE(pStr != NULL);
	
	if (pStr->m_buffer != pStr->m_staticBuffer)
		MB_Free(pStr->m_buffer);

	return 0;
}

// Formatted version of classic DisplayMessage
#define MB_MESSAGE_F(color, format, ...) do { char tmpdmBuff[PRINT_BUFF_SZ]; snprintf(tmpdmBuff, PRINT_BUFF_SZ, format, ## __VA_ARGS__); ENSURE_FN(MB_Message(tmpdmBuff, color)); } while(0)

// Classic DisplayMessage routine
MB_ERROR MB_Message(const char *pMsg, uint color)
{
    ENSURE(pMsg != NULL);

    rglString rstr;
    ENSURE_FN(MB_rglStringStr(&rstr, pMsg));
    THISCALL3(rglWindowManager_A_displayMessage, TSC_CAST(pg_windowManager), &rstr, color);
    ENSURE_FN(MB_rglStringFree(&rstr));

    return 0;
}