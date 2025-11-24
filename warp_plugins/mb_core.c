/*
    Project: WARP | (C) Noctefugia, March 2024
    File: mb_core.c
    Description: M&B plugins core file
*/

#include "mb_ext\mb_core.h"

// Plugin callback types
typedef void (*MB_FC_Exit)(void);
typedef MB_ERROR (*MB_FC_MissionFrameMove)(void);
typedef MB_ERROR (*MB_FC_MissionStart)(void);
typedef MB_ERROR (*MB_FC_MissionFinish)(void);
typedef MB_ERROR (*MB_FC_MissionClear)(void);
typedef MB_ERROR (*MB_FC_StatementExecute)(void *);

// Plugin macros
#define MB_PLUGIN_MAX 64
#define MB_PLUGIN_NAMESZ 10
#define MB_PLUGIN_CALLBACK(cnd, brk, cbk, ...) do { \
		for (uint i = 0; i < MB_PluginCount; ++i) { \
			if (MB_Plugin[i].enabled && MB_Plugin[i].callback.cbk && (cnd)) { \
				MB_ERROR errLine = MB_Plugin[i].callback.cbk(__VA_ARGS__); \
				if (errLine != 0) { \
					MBEX_PRINTF("ERROR: Plugin %s crashed on " #cbk ", line: %lu", MB_Plugin[i].name, errLine); \
					if (MB_Plugin[i].callback.Exit != NULL) MB_Plugin[i].callback.Exit; \
					MB_Plugin[i].enabled = false; \
				} \
				if (brk) break; \
			} \
		} \
	} while (0)
#define MB_PLUGIN_INIT(name, key) do { UTIL_ZERO(name); name.uid = key; } while(0)

// Plugin callback typedef
typedef struct {
	MB_FC_MissionFrameMove FrameMove;
	MB_FC_MissionStart Start;
	MB_FC_MissionFinish Finish;
	MB_FC_MissionClear Clear;
} MB_MISSION_CALLBACK;
typedef struct {
	MB_FC_Exit Exit;
	MB_MISSION_CALLBACK mission;
    MB_FC_StatementExecute StatementExecute;
} MB_CALLBACK;

// Plugin operation typedef
typedef struct
{
	uint64 opcode;
	int64 operands[4];
	int numOperands;
} MB_OPERATION;

// Plugin typedef
typedef struct {
	MB_CODENAME id;
	bool enabled;
	char name[MB_PLUGIN_NAMESZ];
	MB_CALLBACK callback;
} MB_Plugin_t;
MB_Plugin_t MB_Plugin[MB_PLUGIN_MAX];
uint MB_PluginCount;

// Include all plugins
#include "custom\list.c"


// Main entry function
MB_API MB_Init(void)
{
	// Initialize
	MB_PluginCount = 0;
	UTIL_ZERO(MB_Plugin);
	srand(time(NULL));

	// Check generated structures
	MB_ERROR errLine = MB_TestEngineStructs();
	if (errLine == 0)
		MBEX_PRINTF("Engine structs: OK");
	else // Even in case of error we can continue, but we will have problems with the engine
		MBEX_PRINTF("ERROR: Invalid struct size, line: %d", errLine);
	
	// Temp buffers for plugin processing
	char curName[MB_PLUGIN_NAMESZ];
	uint curCount = MB_PLUGIN_MAX;
	MB_CODENAME codeList[MB_PLUGIN_MAX];
	MB_CALLBACK callList[MB_PLUGIN_MAX];
	UTIL_ZERO(codeList); UTIL_ZERO(callList);

	// Process installed plugins
	errLine = MB_InitPlugins(codeList, callList, &curCount);
	if (errLine == 0) {
		uint j = 0;
		for (uint i = 0; i < curCount; ++i) {
			// Convert plugin name into string
			if (!MB_DecodePluginName(codeList[i], curName)) {
				// Fill structure only if name is valid
				MB_Plugin[j].id = codeList[i];
				MB_Plugin[j].enabled = true;
				memcpy(MB_Plugin[j].name, curName, MB_PLUGIN_NAMESZ);
				memcpy(&MB_Plugin[j].callback, &callList[i], sizeof(MB_CALLBACK));
				MBEX_PRINTF("Plugin %s: OK", MB_Plugin[j++].name);
			} else {
				MBEX_PRINTF("ERROR: Unable to decode plugin name: %016llX", codeList[i]); // We can still continue
			}
		}
		MB_PluginCount = j;
		MBEX_PRINTF("Loaded %lu plugins", MB_PluginCount);
	} else {
		MBEX_PRINTF("ERROR: Unable to load plugins, line: %d", errLine);
		return __LINE__; // This is a fatal error, so we can't continue
	}

	return 0;
}


// Main exit function
MB_API MB_Exit(void)
{
	for (uint i = 0; i < MB_PluginCount; ++i)
		if (MB_Plugin[i].id && MB_Plugin[i].callback.Exit)
			MB_Plugin[i].callback.Exit();

	return 0;
}


// Common callbacks
MB_API MB_MissionFrameMove(void)	{ MB_PLUGIN_CALLBACK(true, false, mission.FrameMove);	return 0; }
MB_API MB_MissionStart(void)		{ MB_PLUGIN_CALLBACK(true, false, mission.Start);		return 0; }
MB_API MB_MissionFinish(void)		{ MB_PLUGIN_CALLBACK(true, false, mission.Finish);		return 0; }
MB_API MB_MissionClear(void)		{ MB_PLUGIN_CALLBACK(true, false, mission.Clear);		return 0; }


MB_API MB_StatementExecuteWSE(void *pParam, void *pData)
{
	ENSURE(pParam && pData);
	mbStatement *pStatement = (mbStatement *)pParam;
	int64 *pValues = (int64 *)pData;

	//printf("ExecuteWSE: %016llX %016llX %016llX %016llX %016llX\n", pValues[0], pValues[1], pValues[2], pValues[3], pValues[4]);

	// Check if is's a hooked opcode.
	if (pStatement->m_opcode == HOOKED_OPCODE) {
		uint64 opcodeId = (uint64)pStatement->m_operands[0];
		if (opcodeId >= MIN_USER_CODE) {
			// Initialize fake operation to pass it into plugin
			MB_OPERATION op; UTIL_ZERO(op);
			op.opcode = opcodeId;
			op.numOperands = pStatement->m_numOperands - 1;
			// Call each plugin to execute the operation.
			if (op.numOperands >= 0) {
				for (int i = 0; i < op.numOperands; i++) op.operands[i] = pValues[i + 1];
				MB_PLUGIN_CALLBACK(MB_Plugin[i].id == op.opcode, true, StatementExecute, &op);
				//MB_MESSAGE_F(0xFFFFFFFF, "MB_OPERATION: opcode=%llX, operands=[%lld, %lld, %lld, %lld], numOperands=%d\n", op.opcode, op.operands[0], op.operands[1], op.operands[2], op.operands[3], op.numOperands);
			}
		} else {
			MBEX_Sleep((uint)opcodeId); // Implement WSE2 behavior
		}
	}

	return 0;
}






