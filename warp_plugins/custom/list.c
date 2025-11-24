/*
	File: list.c | (C)SHOCKERFACE
	Description: list of enabled manager plugins.
	Timestamp: Fri Apr 19 04:47:30 2024
	WARNING: THIS FILE IS AUTO-GENERATED, DO NOT EDIT.
*/

// Entry file list
	#include "C_CMDEXE\init.c"


// Entry function list
MB_ERROR MB_InitPlugins(MB_CODENAME *pCodeList, MB_CALLBACK *pCallList, uint *pListSz)
{
	ENSURE(pCodeList && pCallList && pListSz && *pListSz > 0);
	int index = 0;

	ENSURE_PLUGIN(C_CMDEXE_Init);

	*pListSz = index;
	return 0;
}
