The following structures have been removed from the `mb_names.ini` list for compatibility with WSE2 up to version 1.0.9.1:

```
mbEditModeOptionsWindow
mbnetDownloadToFileRequest
```

In addition, in WSE2 1.1.1.9, the number of bones for skeleton was expanded to 64. Now, in the PDB debug info, there are two variants of the same structure:

- `mbAgentActionChannel` - old version where `m_enforcedBones` represented as `int32`

- `mbAgentActionChannel.conflict` - new version where `m_enforcedBones` represented as `int64`

The difference in size results in 0x30 vs 0x38 bytes:

```c
struct ALIGN(1) mbAgentActionChannel // #4
{
    int m_actionNo;                                                  // 00000000 | 4 
    int m_nextActionNo;                                              // 00000004 | 4 
    int m_animationNo;                                               // 00000008 | 4 
/* ! */   unsigned int m_enforcedBones;                              // 0000000C | 4 
    int m_blendBoneNo;                                               // 00000010 | 4 
    unsigned int m_masterFlags;                                      // 00000014 | 4 
    unsigned int m_nextMasterFlags;                                  // 00000018 | 4 
    float m_progress;                                                // 0000001C | 4 
    float m_cyclePeriod;                                             // 00000020 | 4 
    float m_speedFactor;                                             // 00000024 | 4 
    float m_targetProgress;                                          // 00000028 | 4 
    int m_length;                                                    // 0000002C | 4 
}; // $30 
```

The debug information was not fully recompiled? As of now, `mbAgentActionChannel` has been removed from the list. (4RESEARCH)

These globals are not included as well:
```
g_vector
g_vectordConstants
g_vectorfConstants
g_strheap
g_FixedBufferCdPointCollectorAddCdPointCallbackFunc
```