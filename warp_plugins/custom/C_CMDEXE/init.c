/*
	Name: C_CMDEXE | (C)COMMON
	Code: 0x435F434D44455845
	Description: custom plugin entry point.
	Timestamp: Thu Apr 18 23:30:52 2024
*/

typedef struct {
    MB_CODENAME uid;
} C_CMDEXE_t;
C_CMDEXE_t C_CMDEXE;


MB_ERROR C_CMDEXE_StatementExecute(MB_OPERATION *pOperation)
{
    //rglString *pStr;
    //THISCALL3(mbStringManager_A_getString, TSC_CAST(pg_stringManager), (int)pOperation->operands[0], 0x16);
    //THISCALL_RET(pStr, rglString*);
    //MBEX_PRINTF("EXD %s", pStr->m_buffer);
    
    int64 regNo = pOperation->operands[0];
    pg_basicGame->m_registers[0] = -1; // default return value
    if (regNo <= 0x7F) {
        char *pStr = pg_basicGame->m_stringRegisters[regNo].m_buffer;
        if (strlen(pStr) > 0) {
            pg_basicGame->m_registers[0] = system(pStr);
            MBEX_PRINTF("CMDEXE: %s", pStr);
        } else {
            ENSURE_FN(MB_RglWarning("CMDEXE: string register is empty"));
        }
    } else {
        ENSURE_FN(MB_RglWarning("CMDEXE: invalid string register"));
    }

    return 0;
}


MB_CODENAME C_CMDEXE_Init(MB_CALLBACK *pCallback)
{
    MB_PLUGIN_INIT(C_CMDEXE, 0x435F434D44455845);
    pCallback->StatementExecute = &C_CMDEXE_StatementExecute;
    return C_CMDEXE.uid;
}
