/*
	File: mb_defs.h | (C)Noctefugia
	Description: definitions extracted from game engine's codebase.
	Timestamp: Fri Apr 19 04:39:49 2024
	WARNING: THIS FILE IS AUTO-GENERATED, DO NOT EDIT.
*/

/* Related headers */
#include "mb_undefs.h"
#include "mb_enums.h"

/* Related functions */
int WARP_TestEngineStructs(void);

/* Struct type-defs */
typedef struct mbAction mbAction;
typedef struct mbActionSet mbActionSet;
typedef struct mbActionUpdateRec mbActionUpdateRec;
typedef struct mbAgent mbAgent;
typedef struct mbAgentAi mbAgentAi;
typedef struct mbAgentAiQueuedControl mbAgentAiQueuedControl;
typedef struct mbAgentAiTracker mbAgentAiTracker;
typedef struct mbAgentAiTrackerEntry mbAgentAiTrackerEntry;
typedef struct mbAgentCdPointCollector mbAgentCdPointCollector;
typedef struct mbAgentControl mbAgentControl;
typedef struct mbAgentRagdollCollisionListener mbAgentRagdollCollisionListener;
typedef struct mbAgentUpdateRec mbAgentUpdateRec;
typedef struct mbAnimation mbAnimation;
typedef struct mbAttack mbAttack;
typedef struct mbBannerSelectionWindow mbBannerSelectionWindow;
typedef struct mbBasicGame mbBasicGame;
typedef struct mbBattleOptionsWindow mbBattleOptionsWindow;
typedef struct mbBeard mbBeard;
typedef struct mbBlow mbBlow;
typedef struct mbCallStack mbCallStack;
typedef struct mbCampaignOptionsWindow mbCampaignOptionsWindow;
typedef struct mbCharacterWindow mbCharacterWindow;
typedef struct mbCombatMessage mbCombatMessage;
typedef struct mbControlsWindow mbControlsWindow;
typedef struct mbConversationChoice mbConversationChoice;
typedef struct mbConversationManager mbConversationManager;
typedef struct mbConversationWindow mbConversationWindow;
typedef struct mbCoreGame mbCoreGame;
typedef struct mbCreditsWindow mbCreditsWindow;
typedef struct mbDeformKey mbDeformKey;
typedef struct mbDeformRec mbDeformRec;
typedef struct mbDeformRecGroup mbDeformRecGroup;
typedef struct mbDivision mbDivision;
typedef struct mbEntryPoint mbEntryPoint;
typedef struct mbEscapeWindow mbEscapeWindow;
typedef struct mbEvent mbEvent;
typedef struct mbFaceConstraint mbFaceConstraint;
typedef struct mbFaceConstraintPair mbFaceConstraintPair;
typedef struct mbFaceGenerator mbFaceGenerator;
typedef struct mbFaceGenWindow mbFaceGenWindow;
typedef struct mbFaceKeys mbFaceKeys;
typedef struct mbFaceTexture mbFaceTexture;
typedef struct mbFaction mbFaction;
typedef struct mbFadingOutEntity mbFadingOutEntity;
typedef struct mbFaunaRec mbFaunaRec;
typedef struct mbFloraKind mbFloraKind;
typedef struct mbFloraKindInstance mbFloraKindInstance;
typedef struct mbFloraRec mbFloraRec;
typedef struct mbFloraSet mbFloraSet;
typedef struct mbGame mbGame;
typedef struct mbGameKey mbGameKey;
typedef struct mbGameKeyManager mbGameKeyManager;
typedef struct mbGameLogWindow mbGameLogWindow;
typedef struct mbGameScreen mbGameScreen;
typedef struct mbGameTimer mbGameTimer;
typedef struct mbGameWeather mbGameWeather;
typedef struct mbGameWindow mbGameWindow;
typedef struct mbGraphicsOptionsWindow mbGraphicsOptionsWindow;
typedef struct mbGroundPaint mbGroundPaint;
typedef struct mbGroundPaintLayer mbGroundPaintLayer;
typedef struct mbGroundSpec mbGroundSpec;
typedef struct mbGroup mbGroup;
typedef struct mbGroupWindow mbGroupWindow;
typedef struct mbInfoPage mbInfoPage;
typedef struct mbInitialWindow mbInitialWindow;
typedef struct mbInputOptionsWindow mbInputOptionsWindow;
typedef struct mbInventoryWindow mbInventoryWindow;
typedef struct mbItem mbItem;
typedef struct mbItemKind mbItemKind;
typedef struct mbItemKindVariation mbItemKindVariation;
typedef struct mbItemModifier mbItemModifier;
typedef struct mbLanguageManager mbLanguageManager;
typedef struct mbLoadingWindow mbLoadingWindow;
typedef struct mbLoadSaveWindow mbLoadSaveWindow;
typedef struct mbLoop mbLoop;
typedef struct mbLoopManager mbLoopManager;
typedef struct mbMapIcon mbMapIcon;
typedef struct mbMapWindow mbMapWindow;
typedef struct mbMeetingRedirector mbMeetingRedirector;
typedef struct mbMenu mbMenu;
typedef struct mbMenuItem mbMenuItem;
typedef struct mbMenuWindow mbMenuWindow;
typedef struct mbMesh mbMesh;
typedef struct mbMeshManager mbMeshManager;
typedef struct mbMetaMission mbMetaMission;
typedef struct mbMissile mbMissile;
typedef struct mbMission mbMission;
typedef struct mbMissionDebugWindow mbMissionDebugWindow;
typedef struct mbMissionGrid mbMissionGrid;
typedef struct mbMissionGridAgentNode mbMissionGridAgentNode;
typedef struct mbMissionGridCell mbMissionGridCell;
typedef struct mbMissionGridIterator mbMissionGridIterator;
typedef struct mbMissionGridLocation mbMissionGridLocation;
typedef struct mbMissionObject mbMissionObject;
typedef struct mbMissionTemplate mbMissionTemplate;
typedef struct mbMissionTemplateGroup mbMissionTemplateGroup;
typedef struct mbMissionTimer mbMissionTimer;
typedef struct mbMissionToggleTimer mbMissionToggleTimer;
typedef struct mbMultiplayerClientWindow mbMultiplayerClientWindow;
typedef struct mbMultiplayerOptionsWindow mbMultiplayerOptionsWindow;
typedef struct mbMultiplayerServerWindow mbMultiplayerServerWindow;
typedef struct mbMusicManager mbMusicManager;
typedef struct mbMusicTrack mbMusicTrack;
typedef struct mbnetAddress mbnetAddress;
typedef struct mbnetBuffer mbnetBuffer;
typedef struct mbnetClientReplicationRow mbnetClientReplicationRow;
typedef struct mbnetData mbnetData;
typedef struct mbnetEvent mbnetEvent;
typedef struct mbnetHost mbnetHost;
typedef struct mbnetHttpInfoRequest mbnetHttpInfoRequest;
typedef struct mbnetHttpManager mbnetHttpManager;
typedef struct mbnetHttpRequest mbnetHttpRequest;
typedef struct mbnetNetworkClient mbnetNetworkClient;
typedef struct mbnetNetworkClientThreadArgs mbnetNetworkClientThreadArgs;
typedef struct mbnetNetworkManager mbnetNetworkManager;
typedef struct mbnetNetworkServer mbnetNetworkServer;
typedef struct mbnetPacketDeliveryControlInfo mbnetPacketDeliveryControlInfo;
typedef struct mbnetPacketDeliveryControlReplicationEntry mbnetPacketDeliveryControlReplicationEntry;
typedef struct mbnetPeer mbnetPeer;
typedef struct mbnetPlayer mbnetPlayer;
typedef struct mbnetPlayerAgentData mbnetPlayerAgentData;
typedef struct mbnetPlayerReplicationRow mbnetPlayerReplicationRow;
typedef struct mbnetPrioritySelector mbnetPrioritySelector;
typedef struct mbnetPrioritySelectorEntry mbnetPrioritySelectorEntry;
typedef struct mbnetProfile mbnetProfile;
typedef struct mbnetRandomGenerator mbnetRandomGenerator;
typedef struct mbnetServer mbnetServer;
typedef struct mbnetServerReplicationRow mbnetServerReplicationRow;
typedef struct mbnetTeam mbnetTeam;
typedef struct mbnetVector mbnetVector;
typedef struct mbNotes mbNotes;
typedef struct mbNotesWindow mbNotesWindow;
typedef struct mbOptionsWindowHelper mbOptionsWindowHelper;
typedef struct mbParticleSystem mbParticleSystem;
typedef struct mbParticleSystemManager mbParticleSystemManager;
typedef struct mbParty mbParty;
typedef struct mbPartyDnas mbPartyDnas;
typedef struct mbPartyStack mbPartyStack;
typedef struct mbPartyStackDnas mbPartyStackDnas;
typedef struct mbPartyStackTemplate mbPartyStackTemplate;
typedef struct mbPartyTemplate mbPartyTemplate;
typedef struct mbPartyWindow mbPartyWindow;
typedef struct mbPostEffect mbPostEffect;
typedef struct mbPresentation mbPresentation;
typedef struct mbPresentationContainer mbPresentationContainer;
typedef struct mbPresentationManager mbPresentationManager;
typedef struct mbPresentationWindow mbPresentationWindow;
typedef struct mbProfileWindow mbProfileWindow;
typedef struct mbQuest mbQuest;
typedef struct mbQueuedWindow mbQueuedWindow;
typedef struct mbQuickBattleWindow mbQuickBattleWindow;
typedef struct mbRegistryManager mbRegistryManager;
typedef struct mbSavegame mbSavegame;
typedef struct mbSavegamePanel mbSavegamePanel;
typedef struct mbSceneProp mbSceneProp;
typedef struct mbScript mbScript;
typedef struct mbScriptManager mbScriptManager;
typedef struct mbSelectionWindow mbSelectionWindow;
typedef struct mbSentence mbSentence;
typedef struct mbSimpleTrigger mbSimpleTrigger;
typedef struct mbSimpleTriggerManager mbSimpleTriggerManager;
typedef struct mbSite mbSite;
typedef struct mbSiteVisitor mbSiteVisitor;
typedef struct mbSkeleton mbSkeleton;
typedef struct mbSkeletonBone mbSkeletonBone;
typedef struct mbSkeletonManager mbSkeletonManager;
typedef struct mbSkill mbSkill;
typedef struct mbSkin mbSkin;
typedef struct mbSkybox mbSkybox;
typedef struct mbSlots mbSlots;
typedef struct mbSound mbSound;
typedef struct mbSoundChannel mbSoundChannel;
typedef struct mbSoundManager mbSoundManager;
typedef struct mbSoundOptionsWindow mbSoundOptionsWindow;
typedef struct mbSoundSample mbSoundSample;
typedef struct mbStartingWindow mbStartingWindow;
typedef struct mbStatement mbStatement;
typedef struct mbStatementBlock mbStatementBlock;
typedef struct mbStatsWindow mbStatsWindow;
typedef struct mbString mbString;
typedef struct mbStringManager mbStringManager;
typedef struct mbTableau mbTableau;
typedef struct mbTableauManager mbTableauManager;
typedef struct mbTableauMaterial mbTableauMaterial;
typedef struct mbTacticalWindow mbTacticalWindow;
typedef struct mbTeam mbTeam;
typedef struct mbTerrainFace mbTerrainFace;
typedef struct mbTerrainGenerator mbTerrainGenerator;
typedef struct mbTerrainGenWindow mbTerrainGenWindow;
typedef struct mbTerrainLayer mbTerrainLayer;
typedef struct mbTerrainVertex mbTerrainVertex;
typedef struct mbTrack mbTrack;
typedef struct mbTrigger mbTrigger;
typedef struct mbTriggerManager mbTriggerManager;
typedef struct mbTroop mbTroop;
typedef struct mbTroopEquipment mbTroopEquipment;
typedef struct mbTroopInventory mbTroopInventory;
typedef struct mbWeather mbWeather;
typedef struct mbYesNoWindow mbYesNoWindow;
typedef struct rglAiMesh rglAiMesh;
typedef struct rglAiMeshEdge rglAiMeshEdge;
typedef struct rglAiMeshFace rglAiMeshFace;
typedef struct rglAiMeshPathCheckingPoint rglAiMeshPathCheckingPoint;
typedef struct rglAiMeshPathFindingPoint rglAiMeshPathFindingPoint;
typedef struct rglAiMeshPathPoint rglAiMeshPathPoint;
typedef struct rglAiMeshVertex rglAiMeshVertex;
typedef struct rglAligned16 rglAligned16;
typedef struct rglAppTimer rglAppTimer;
typedef struct rglAsyncTaskPool rglAsyncTaskPool;
typedef struct rglAutoResetEvent rglAutoResetEvent;
typedef struct rglBinaryStream rglBinaryStream;
typedef struct rglBlendState rglBlendState;
typedef struct rglBoardWidget rglBoardWidget;
typedef struct rglBody rglBody;
typedef struct rglBodyPart rglBodyPart;
typedef struct rglBone rglBone;
typedef struct rglBoundingBox rglBoundingBox;
typedef struct rglButtonWidget rglButtonWidget;
typedef struct rglCamera rglCamera;
typedef struct rglCameraFrustum rglCameraFrustum;
typedef struct rglCameraPlane rglCameraPlane;
typedef struct rglCapsule rglCapsule;
typedef struct rglChannel rglChannel;
typedef struct rglCheckBoxWidget rglCheckBoxWidget;
typedef struct rglColor rglColor;
typedef struct rglComboButtonWidget rglComboButtonWidget;
typedef struct rglComboLabelWidget rglComboLabelWidget;
typedef struct rglCompositeBody rglCompositeBody;
typedef struct rglConfig rglConfig;
typedef struct rglContainerWidget rglContainerWidget;
typedef struct rglCrashLogger rglCrashLogger;
typedef struct rglCriticalSection rglCriticalSection;
typedef struct rglDepthStencilState rglDepthStencilState;
typedef struct rglDnaRandomGenerator rglDnaRandomGenerator;
typedef struct rglDynamicCapsule rglDynamicCapsule;
typedef struct rglEffectManager rglEffectManager;
typedef struct rglEffectStateManager rglEffectStateManager;
typedef struct rglEntity rglEntity;
typedef struct rglFile rglFile;
typedef struct rglFillSliderWidget rglFillSliderWidget;
typedef struct rglFont rglFont;
typedef struct rglFontGlyph rglFontGlyph;
typedef struct rglGameButtonWidget rglGameButtonWidget;
typedef struct rglGameObject rglGameObject;
typedef struct rglGraphicsBuffer rglGraphicsBuffer;
typedef struct rglGraphicsContext rglGraphicsContext;
typedef struct rglGraphicsState rglGraphicsState;
typedef struct rglHashVectorHash rglHashVectorHash;
typedef struct rglHyperlinkTextWidget rglHyperlinkTextWidget;
typedef struct rglImageButtonWidget rglImageButtonWidget;
typedef struct rglImageWidget rglImageWidget;
typedef struct rglIndexBuffer rglIndexBuffer;
typedef struct rglIni rglIni;
typedef struct rglIniValue rglIniValue;
typedef struct rglInputBinaryFileStream rglInputBinaryFileStream;
typedef struct rglInputBinaryFileStreamNoCache rglInputBinaryFileStreamNoCache;
typedef struct rglInputManager rglInputManager;
typedef struct rglInputTextFileStream rglInputTextFileStream;
typedef struct rglInterlockedCounter rglInterlockedCounter;
typedef struct rglIntersectionPoint rglIntersectionPoint;
typedef struct rglIntVector2 rglIntVector2;
typedef struct rglInventoryMenuWidget rglInventoryMenuWidget;
typedef struct rglInventorySlotWidget rglInventorySlotWidget;
typedef struct rglLight rglLight;
typedef struct rglListBoxWidget rglListBoxWidget;
typedef struct rglLog rglLog;
typedef struct rglManifold rglManifold;
typedef struct rglManifoldBody rglManifoldBody;
typedef struct rglManifoldBodyFace rglManifoldBodyFace;
typedef struct rglManifoldEdge rglManifoldEdge;
typedef struct rglManifoldFace rglManifoldFace;
typedef struct rglManifoldPathFindingPoint rglManifoldPathFindingPoint;
typedef struct rglManifoldVertex rglManifoldVertex;
typedef struct rglManualResetEvent rglManualResetEvent;
typedef struct rglMaterial rglMaterial;
typedef struct rglMenuBarWidget rglMenuBarWidget;
typedef struct rglMersenneTwister rglMersenneTwister;
typedef struct rglMesh rglMesh;
typedef struct rglMeshBufferUpdateRec rglMeshBufferUpdateRec;
typedef struct rglMeshFace rglMeshFace;
typedef struct rglMeshFaceCorner rglMeshFaceCorner;
typedef struct rglMeshSkinDataRec rglMeshSkinDataRec;
typedef struct rglMeshVertex rglMeshVertex;
typedef struct rglMeshVertexGroup rglMeshVertexGroup;
typedef struct rglMeshVertexGroupPair rglMeshVertexGroupPair;
typedef struct rglMeshVertexKey rglMeshVertexKey;
typedef struct rglMetaMesh rglMetaMesh;
typedef struct rglMetaMeshLod rglMetaMeshLod;
typedef struct rglMetaMeshWidget rglMetaMeshWidget;
typedef struct rglModuleTable rglModuleTable;
typedef struct rglNumberBoxWidget rglNumberBoxWidget;
typedef struct rglOnDemandTexture rglOnDemandTexture;
typedef struct rglOutputBinaryFileStream rglOutputBinaryFileStream;
typedef struct rglOutputBinaryFileStreamWithChecksum rglOutputBinaryFileStreamWithChecksum;
typedef struct rglOutputTextFileStream rglOutputTextFileStream;
typedef struct rglParticle rglParticle;
typedef struct rglParticleSystem rglParticleSystem;
typedef struct rglParticleSystemKey rglParticleSystemKey;
typedef struct rglPhysicsManager rglPhysicsManager;
typedef struct rglPhysicsMaterial rglPhysicsMaterial;
typedef struct rglPopupWidget rglPopupWidget;
typedef struct rglPostFxNode rglPostFxNode;
typedef struct rglProgressBarWidget rglProgressBarWidget;
typedef struct rglQuad rglQuad;
typedef struct rglQuaternion rglQuaternion;
typedef struct rglRagdollWorld rglRagdollWorld;
typedef struct rglRasterizerState rglRasterizerState;
typedef struct rglRenderContext rglRenderContext;
typedef struct rglRenderer rglRenderer;
typedef struct rglRenderMesh rglRenderMesh;
typedef struct rglRenderMeshBufferUpdateRec rglRenderMeshBufferUpdateRec;
typedef struct rglRenderMeshCollection rglRenderMeshCollection;
typedef struct rglRenderParams rglRenderParams;
typedef struct rglRenderThreadCall rglRenderThreadCall;
typedef struct rglRenderThreadManager rglRenderThreadManager;
typedef struct rglResolution rglResolution;
typedef struct rglResource rglResource;
typedef struct rglResourceManager rglResourceManager;
typedef struct rglSamplerState rglSamplerState;
typedef struct rglScene rglScene;
typedef struct rglSceneGrid rglSceneGrid;
typedef struct rglSceneGridCell rglSceneGridCell;
typedef struct rglSceneGridCellNode rglSceneGridCellNode;
typedef struct rglSceneGridEntityNode rglSceneGridEntityNode;
typedef struct rglSceneReflectionsData rglSceneReflectionsData;
typedef struct rglSceneWidget rglSceneWidget;
typedef struct rglScrollableWidget rglScrollableWidget;
typedef struct rglScrollbarWidget rglScrollbarWidget;
typedef struct rglSectionlessIni rglSectionlessIni;
typedef struct rglSemaphore rglSemaphore;
typedef struct rglShader rglShader;
typedef struct rglShadowMap rglShadowMap;
typedef struct rglSimpleButtonWidget rglSimpleButtonWidget;
typedef struct rglSimpleTextBoxWidget rglSimpleTextBoxWidget;
typedef struct rglSkeleton rglSkeleton;
typedef struct rglSkeletonAnimation rglSkeletonAnimation;
typedef struct rglSkeletonAnimationBone rglSkeletonAnimationBone;
typedef struct rglSkeletonAnimationSpec rglSkeletonAnimationSpec;
typedef struct rglSkeletonModel rglSkeletonModel;
typedef struct rglSkeletonModelBody rglSkeletonModelBody;
typedef struct rglSkeletonModelBone rglSkeletonModelBone;
typedef struct rglSkeletonModelBonePositions rglSkeletonModelBonePositions;
typedef struct rglSliderWidget rglSliderWidget;
typedef struct rglSphere rglSphere;
typedef struct rglStream rglStream;
typedef struct rglString rglString;
typedef struct rglSystemInfo rglSystemInfo;
typedef struct rglTableBoolCellWidget rglTableBoolCellWidget;
typedef struct rglTableCellWidget rglTableCellWidget;
typedef struct rglTableCountCellWidget rglTableCountCellWidget;
typedef struct rglTableIntCellWidget rglTableIntCellWidget;
typedef struct rglTableRowWidget rglTableRowWidget;
typedef struct rglTableStringCellWidget rglTableStringCellWidget;
typedef struct rglTableUInt64CellWidget rglTableUInt64CellWidget;
typedef struct rglTableWidget rglTableWidget;
typedef struct rglTabWidget rglTabWidget;
typedef struct rglTechnique rglTechnique;
typedef struct rglTerrain rglTerrain;
typedef struct rglTerrainCell rglTerrainCell;
typedef struct rglTextBoxWidget rglTextBoxWidget;
typedef struct rglTextImageData rglTextImageData;
typedef struct rglTextStream rglTextStream;
typedef struct rglTexture rglTexture;
typedef struct rglTime rglTime;
typedef struct rglTimer rglTimer;
typedef struct rglTransform rglTransform;
typedef struct rglVector2 rglVector2;
typedef struct rglVector3 rglVector3;
typedef struct rglVector4 rglVector4;
typedef struct rglVertexBuffer rglVertexBuffer;
typedef struct rglVerticalScrollableWidget rglVerticalScrollableWidget;
typedef struct rglViewport rglViewport;
typedef struct rglWidget rglWidget;
typedef struct rglWindowManager rglWindowManager;
typedef struct rglWindowManagerMessageQueue rglWindowManagerMessageQueue;
typedef struct rglWmi rglWmi;
typedef struct rglWmiClassObject rglWmiClassObject;
typedef struct rglWmiIterator rglWmiIterator;
typedef struct WSEArraySortOptions WSEArraySortOptions;
typedef struct WSEBaseArray_mbMenu_ WSEBaseArray_mbMenu_;
typedef struct WSEBaseArray_mbMenuItem_ WSEBaseArray_mbMenuItem_;
typedef struct WSEBasicDynMultiArray WSEBasicDynMultiArray;
typedef struct WSEBitStream WSEBitStream;
typedef struct WSEDynMultiArray_int_ WSEDynMultiArray_int_;
typedef struct WSEDynMultiArray_rglTransform_ WSEDynMultiArray_rglTransform_;
typedef struct WSEDynamicArray_mbMenu_ WSEDynamicArray_mbMenu_;
typedef struct WSEDynamicArray_mbMenuItem_ WSEDynamicArray_mbMenuItem_;
typedef struct WSELuaManager WSELuaManager;
typedef struct WSEOGPServer WSEOGPServer;
typedef struct WSEObjectContainer WSEObjectContainer;
typedef struct WSEObjectManager WSEObjectManager;
typedef struct WSEObjectType WSEObjectType;
typedef struct WSEProfiling WSEProfiling;
typedef struct WSEProfilingInfo WSEProfilingInfo;
typedef struct WSERCONServer WSERCONServer;
typedef struct WSESimpleCharBuff WSESimpleCharBuff;
typedef struct CD3DApplication CD3DApplication;
typedef struct hkBool hkBool;

/* Struct definitions */

struct ALIGN(1) mbActionSet // #1
{
	mbAction *m_actions;                                             // 00000000 | 4 
	int m_numActions;                                                // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbActionUpdateRec // #2
{
	unsigned long long m_time;                                       // 00000000 | 8 
	int m_actionNo;                                                  // 00000008 | 4 
	int m_channelNo;                                                 // 0000000C | 4 
	int m_prediction;                                                // 00000010 | 4 
	/* FIX-3 */ byte undef_0[4];                                     // 00000014 | 4 
}; // $18 

struct ALIGN(1) mbAgentCdPointCollector // #8
{
	/* FIX-1 */ byte undef_0[416];                                   // 00000000 | 1A0 
	bool m_isBot;                                                    // 000001A0 | 1 
	bool m_isHorse;                                                  // 000001A1 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 000001A2 | 2 
	mbAgent *m_agent;                                                // 000001A4 | 4 
	/* FIX-3 */ byte undef_2[8];                                     // 000001A8 | 8 
}; // $1B0 

struct ALIGN(1) mbAgentRagdollCollisionListener // #10
{
	/* FIX-1 */ byte undef_0[8];                                     // 00000000 | 8 
	/* FIX-1 */ byte undef_1[4];                                     // 00000000 | 4 
	hkpRigidBody *m_body;                                            // 0000000C | 4 
	bool m_isHuman;                                                  // 00000010 | 1 
	/* FIX-3 */ byte undef_2[3];                                     // 00000011 | 3 
}; // $14 

struct ALIGN(1) mbBeard // #17
{
	rglMetaMesh *m_metaMesh;                                         // 00000000 | 4 
	bool m_isAccessory;                                              // 00000004 | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 00000005 | 3 
}; // $8 

struct ALIGN(1) mbCallStack // #19
{
	int m_depth;                                                     // 00000000 | 4 
	mbStatementBlock *m_blocks[257];                                 // 00000004 | 404 
	int m_statementNos[257];                                         // 00000408 | 404 
	int m_lastStatementNo;                                           // 0000080C | 4 
}; // $810 

struct ALIGN(1) mbCombatMessage // #22
{
	int m_playerNo;                                                  // 00000000 | 4 
	int m_agentNo;                                                   // 00000004 | 4 
	int m_type;                                                      // 00000008 | 4 
	int m_values[32];                                                // 0000000C | 80 
	int m_numValues;                                                 // 0000008C | 4 
}; // $90 

struct ALIGN(1) mbFaceConstraint // #36
{
	rglVector_mbFaceConstraintPair_ m_pairs;                         // 00000000 | C 
	int m_type;                                                      // 0000000C | 4 
	float m_value;                                                   // 00000010 | 4 
}; // $14 

struct ALIGN(1) mbFaceConstraintPair // #37
{
	float m_value;                                                   // 00000000 | 4 
	int m_faceKeyNo;                                                 // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbFaceKeys // #40
{
	unsigned long long m_keys[4];                                    // 00000000 | 20 
}; // $20 

struct ALIGN(1) mbFloraSet // #48
{
	int m_maxNumFlora;                                               // 00000000 | 4 
	int m_maxNumFauna;                                               // 00000004 | 4 
	rglVector_mbFloraRec_ m_floraRecs;                               // 00000008 | C 
	rglVector_mbFaunaRec_ m_faunaRecs;                               // 00000014 | C 
}; // $20 

struct ALIGN(1) mbGameKey // #50
{
	int m_keyNo;                                                     // 00000000 | 4 
	int m_numModifierKeys;                                           // 00000004 | 4 
	int m_modifierKeyNos[2];                                         // 00000008 | 8 
}; // $10 

struct ALIGN(1) mbGameLogWindow // #52
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglHyperlinkTextWidget *m_logWidget;                             // 0000005C | 4 
	rglBoardWidget *m_boardWidget;                                   // 00000060 | 4 
	rglScrollableWidget *m_scrollableWidget;                         // 00000064 | 4 
	rglCheckBoxWidget *m_toggleBackgroundCheckBoxWidget;             // 00000068 | 4 
	rglSimpleButtonWidget *m_returnButtonWidget;                     // 0000006C | 4 
	rglSimpleButtonWidget *m_clearButtonWidget;                      // 00000070 | 4 
	rglSimpleButtonWidget *m_gameLogButtonWidget;                    // 00000074 | 4 
	rglSimpleButtonWidget *m_recentMessagesButtonWidget;             // 00000078 | 4 
	rglSimpleButtonWidget *m_troopsButtonWidget;                     // 0000007C | 4 
	rglSimpleButtonWidget *m_locationsButtonWidget;                  // 00000080 | 4 
	rglSimpleButtonWidget *m_factionsButtonWidget;                   // 00000084 | 4 
	rglSimpleButtonWidget *m_questsButtonWidget;                     // 00000088 | 4 
	rglSimpleButtonWidget *m_infoPagesButtonWidget;                  // 0000008C | 4 
}; // $90 

struct ALIGN(1) mbGameScreen // #53
{
	mbGameWindow *m_windows[38];                                     // 00000000 | 98 
	rglVector_int_ m_openWindows;                                    // 00000098 | C 
}; // $A4 

struct ALIGN(1) mbGameTimer // #54
{
	/* FIX-1 */ byte undef_0[16];                                    // 00000000 | 10 
}; // $10 

struct ALIGN(1) mbGroup // #61
{
	int m_no;                                                        // 00000000 | 4 
	rglVector_mbDivision_ m_divisions;                               // 00000004 | C 
}; // $10 

struct ALIGN(1) mbItem // #67
{
	int m_itemKindNo;                                                // 00000000 | 4 
	unsigned int m_itemFlags;                                        // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbMeetingRedirector // #78
{
	int m_eventNo;                                                   // 00000000 | 4 
	int m_menuNo;                                                    // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbMeshManager // #83
{
	mbMesh *m_meshes;                                                // 00000000 | 4 
	int m_numMeshes;                                                 // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbMetaMission // #84
{
	int m_encounteredParties[2];                                     // 00000000 | 8 
	int m_eventNo;                                                   // 00000008 | 4 
	int m_type;                                                      // 0000000C | 4 
	int m_battleAdvantage;                                           // 00000010 | 4 
	bool m_eventEnded;                                               // 00000014 | 1 
	bool m_ended;                                                    // 00000015 | 1 
	bool m_endCommitted;                                             // 00000016 | 1 
	/* FIX-4 */ byte undef_0[1];                                     // 00000017 | 1 
	int m_mainPartySide;                                             // 00000018 | 4 
	int m_resultFlags;                                               // 0000001C | 4 
	bool m_inEvent;                                                  // 00000020 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000021 | 3 
	int m_enemySide;                                                 // 00000024 | 4 
	int m_conversationPartyNo;                                       // 00000028 | 4 
	int m_conversationTroopNo;                                       // 0000002C | 4 
	bool m_enemiesPresent;                                           // 00000030 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00000031 | 3 
	int m_missionTemplateNo;                                         // 00000034 | 4 
	int m_siteNo;                                                    // 00000038 | 4 
	int m_entryPointNo;                                              // 0000003C | 4 
	int m_numUpgradeableTroops;                                      // 00000040 | 4 
	int m_sequenceNo;                                                // 00000044 | 4 
	int m_passageMenuNo;                                             // 00000048 | 4 
	bool m_inPartyBattleMode;                                        // 0000004C | 1 
	/* FIX-3 */ byte undef_3[3];                                     // 0000004D | 3 
}; // $50 

struct ALIGN(1) mbMissionGridAgentNode // #89
{
	mbMissionGridAgentNode *m_next;                                  // 00000000 | 4 
	mbAgent *m_agent;                                                // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbMissionGridCell // #90
{
	mbMissionGridAgentNode *m_nodes;                                 // 00000000 | 4 
}; // $4 

struct ALIGN(1) mbMissionTemplateGroup // #95
{
	int m_entryPointNo;                                              // 00000000 | 4 
	unsigned int m_flags;                                            // 00000004 | 4 
	unsigned int m_curAlterFlags;                                    // 00000008 | 4 
	int m_numTroops;                                                 // 0000000C | 4 
	int m_availableReinforcements;                                   // 00000010 | 4 
	int m_spawnedReinforcements;                                     // 00000014 | 4 
	unsigned int m_AIFlags;                                          // 00000018 | 4 
	int m_numCurItemOverrides;                                       // 0000001C | 4 
	int m_curItemOverrides[10];                                      // 00000020 | 28 
	unsigned int m_alterFlags;                                       // 00000048 | 4 
	int m_numItemOverrides;                                          // 0000004C | 4 
	int m_itemOverrides[10];                                         // 00000050 | 28 
}; // $78 

struct ALIGN(1) mbMissionTimer // #96
{
	/* FIX-1 */ byte undef_0[16];                                    // 00000000 | 10 
}; // $10 

struct ALIGN(1) mbMissionToggleTimer // #97
{
	/* FIX-1 */ byte undef_0[16];                                    // 00000000 | 10 
	bool m_active;                                                   // 00000010 | 1 
	/* FIX-3 */ byte undef_1[7];                                     // 00000011 | 7 
}; // $18 

struct ALIGN(1) mbnetAddress // #103
{
	in_addr m_ip;                                                    // 00000000 | 4 
	unsigned short m_port;                                           // 00000004 | 2 
	/* FIX-3 */ byte undef_0[2];                                     // 00000006 | 2 
}; // $8 

struct ALIGN(1) mbnetBuffer // #104
{
	unsigned int m_no;                                               // 00000000 | 4 
	int m_bufferSize;                                                // 00000004 | 4 
	unsigned char m_localBuffer[1500];                               // 00000008 | 5DC 
	unsigned int *m_externalBuffer;                                  // 000005E4 | 4 
	unsigned int *m_buffer;                                          // 000005E8 | 4 
	int m_size;                                                      // 000005EC | 4 
	int m_cursor;                                                    // 000005F0 | 4 
	/* FIX-4 */ byte undef_0[4];                                     // 000005F4 | 4 
	double m_time;                                                   // 000005F8 | 8 
}; // $600 

struct ALIGN(1) mbnetEvent // #107
{
	int m_no;                                                        // 00000000 | 4 
	unsigned short m_type;                                           // 00000004 | 2 
	unsigned char m_buffer[508];                                     // 00000006 | 1FC 
	/* FIX-4 */ byte undef_0[2];                                     // 00000202 | 2 
	int m_size;                                                      // 00000204 | 4 
	int m_cursor;                                                    // 00000208 | 4 
	unsigned int m_firstPacketNo;                                    // 0000020C | 4 
	unsigned int m_lastPacketNo;                                     // 00000210 | 4 
	int m_guaranteed;                                                // 00000214 | 4 
	int m_priority;                                                  // 00000218 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000021C | 4 
	double m_time;                                                   // 00000220 | 8 
}; // $228 

struct ALIGN(1) mbnetHttpInfoRequest // #109
{
	bool m_inUse;                                                    // 00000000 | 1 
	/* FIX-4 */ byte undef_0[1];                                     // 00000001 | 1 
	sockaddr m_addr;                                                 // 00000002 | 10 
	/* FIX-4 */ byte undef_1[2];                                     // 00000012 | 2 
	unsigned int m_socket;                                           // 00000014 | 4 
	fd_set m_set;                                                    // 00000018 | 104 
	int m_size;                                                      // 0000011C | 4 
	double m_time;                                                   // 00000120 | 8 
}; // $128 

struct ALIGN(1) mbnetPacketDeliveryControlReplicationEntry // #117
{
	int m_tableNo;                                                   // 00000000 | 4 
	int m_rowNo;                                                     // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbnetPlayerReplicationRow // #121
{
	unsigned int m_sentPacketNo;                                     // 00000000 | 4 
	unsigned int m_receivedPacketNo;                                 // 00000004 | 4 
	bool m_send;                                                     // 00000008 | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 00000009 | 3 
}; // $C 

struct ALIGN(1) mbnetPrioritySelectorEntry // #123
{
	float m_priority;                                                // 00000000 | 4 
	int m_size;                                                      // 00000004 | 4 
	short m_tableNo;                                                 // 00000008 | 2 
	short m_rowNo;                                                   // 0000000A | 2 
}; // $C 

struct ALIGN(1) mbnetRandomGenerator // #125
{
	int m_index;                                                     // 00000000 | 4 
	int m_seed;                                                      // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbnetTeam // #128
{
	int m_kills;                                                     // 00000000 | 4 
	int m_botKills;                                                  // 00000004 | 4 
	int m_botDeaths;                                                 // 00000008 | 4 
	int m_score;                                                     // 0000000C | 4 
	int m_factionNo;                                                 // 00000010 | 4 
}; // $14 

struct ALIGN(1) mbnetVector // #129
{
	unsigned int x;                                                  // 00000000 | 4 
	unsigned int y;                                                  // 00000004 | 4 
	unsigned int z;                                                  // 00000008 | 4 
	unsigned int w;                                                  // 0000000C | 4 
}; // $10 

struct ALIGN(1) mbNotesWindow // #131
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglWidget *m_imageWidget;                                        // 0000005C | 4 
	rglWidget *m_keysTitleWidget;                                    // 00000060 | 4 
	rglHyperlinkTextWidget *m_keysWidget;                            // 00000064 | 4 
	rglWidget *m_titleWidget;                                        // 00000068 | 4 
	rglHyperlinkTextWidget *m_dataWidget;                            // 0000006C | 4 
	rglBoardWidget *m_keysBoardWidget;                               // 00000070 | 4 
	rglBoardWidget *m_dataBoardWidget;                               // 00000074 | 4 
	rglScrollableWidget *m_keysScrollableWidget;                     // 00000078 | 4 
	rglScrollableWidget *m_dataScrollableWidget;                     // 0000007C | 4 
	rglSimpleButtonWidget *m_gameLogButtonWidget;                    // 00000080 | 4 
	rglSimpleButtonWidget *m_recentMessagesButtonWidget;             // 00000084 | 4 
	rglSimpleButtonWidget *m_troopsButtonWidget;                     // 00000088 | 4 
	rglSimpleButtonWidget *m_questsButtonWidget;                     // 0000008C | 4 
	rglSimpleButtonWidget *m_infoPagesButtonWidget;                  // 00000090 | 4 
	rglSimpleButtonWidget *m_factionsButtonWidget;                   // 00000094 | 4 
	rglSimpleButtonWidget *m_locationsButtonWidget;                  // 00000098 | 4 
	rglSimpleButtonWidget *m_returnButtonWidget;                     // 0000009C | 4 
	rglSimpleButtonWidget *m_backButtonWidget;                       // 000000A0 | 4 
	rglSimpleButtonWidget *m_forwardButtonWidget;                    // 000000A4 | 4 
	rglSimpleButtonWidget *m_followButtonWidget;                     // 000000A8 | 4 
	rglVector_int_ m_backHistory;                                    // 000000AC | C 
	rglVector_int_ m_forwardHistory;                                 // 000000B8 | C 
	int m_prevObjectType;                                            // 000000C4 | 4 
	int m_prevObjectNo;                                              // 000000C8 | 4 
	int m_nextObjectType;                                            // 000000CC | 4 
	int m_nextObjectNo;                                              // 000000D0 | 4 
	int m_objectType;                                                // 000000D4 | 4 
	int m_objectNo;                                                  // 000000D8 | 4 
	float m_storedScroll;                                            // 000000DC | 4 
}; // $E0 

struct ALIGN(1) mbParticleSystemManager // #134
{
	mbParticleSystem *m_particleSystems;                             // 00000000 | 4 
	int m_numParticleSystems;                                        // 00000004 | 4 
	int m_mappedParticleSystems[10];                                 // 00000008 | 28 
}; // $30 

struct ALIGN(1) mbPartyStack // #137
{
	int m_numTroops;                                                 // 00000000 | 4 
	int m_troopNo;                                                   // 00000004 | 4 
	unsigned int m_flags;                                            // 00000008 | 4 
	int m_numSpawned;                                                // 0000000C | 4 
	int m_numWounded;                                                // 00000010 | 4 
	int m_numUpgradeable;                                            // 00000014 | 4 
	float m_experience;                                              // 00000018 | 4 
}; // $1C 

struct ALIGN(1) mbPartyStackDnas // #138
{
	int m_troopDnas[32];                                             // 00000000 | 80 
}; // $80 

struct ALIGN(1) mbPartyStackTemplate // #139
{
	int m_troopNo;                                                   // 00000000 | 4 
	int m_min;                                                       // 00000004 | 4 
	int m_max;                                                       // 00000008 | 4 
	unsigned int m_flags;                                            // 0000000C | 4 
}; // $10 

struct ALIGN(1) mbPresentationManager // #145
{
	mbPresentation *m_presentations;                                 // 00000000 | 4 
	int m_numPresentations;                                          // 00000004 | 4 
	int m_mappedPresentations[8];                                    // 00000008 | 20 
}; // $28 

struct ALIGN(1) mbQueuedWindow // #149
{
	int m_type;                                                      // 00000000 | 4 
	int m_presentationNo;                                            // 00000004 | 4 
}; // $8 

struct ALIGN(1) mbRegistryManager // #151
{
	HKEY__ *m_hkey;                                                  // 00000000 | 4 
}; // $4 

struct ALIGN(1) mbScriptManager // #156
{
	mbScript *m_scripts;                                             // 00000000 | 4 
	int m_numScripts;                                                // 00000004 | 4 
	int m_mappedScripts[64];                                         // 00000008 | 100 
}; // $108 

struct ALIGN(1) mbSimpleTriggerManager // #160
{
	int m_numTriggers;                                               // 00000000 | 4 
	mbSimpleTrigger *m_triggers;                                     // 00000004 | 4 
	int m_defaultTimerNo;                                            // 00000008 | 4 
}; // $C 

struct ALIGN(1) mbSiteVisitor // #162
{
	rglVector_int_ m_troopNos;                                       // 00000000 | C 
	rglVector_int_ m_teamNos;                                        // 0000000C | C 
	rglVector_int_ m_groupNos;                                       // 00000018 | C 
	int m_dna;                                                       // 00000024 | 4 
}; // $28 

struct ALIGN(1) mbSkeletonManager // #165
{
	rglVector_mbSkeleton_ m_skeletons;                               // 00000000 | C 
}; // $C 

struct ALIGN(1) mbSlots // #169
{
	rglVector___int64_ m_values;                                     // 00000000 | C 
}; // $C 

struct ALIGN(1) mbStatement // #176
{
	unsigned int m_opcode;                                           // 00000000 | 4 
	int m_numOperands;                                               // 00000004 | 4 
	long long m_operands[32];                                        // 00000008 | 100 
	int m_endStatement;                                              // 00000108 | 4 
	/* FIX-3 */ byte undef_0[4];                                     // 0000010C | 4 
}; // $110 

struct ALIGN(1) mbStatsWindow // #178
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglSimpleButtonWidget *m_doneButtonWidget;                       // 0000005C | 4 
	rglSimpleButtonWidget *m_importCharacterButtonWidget;            // 00000060 | 4 
	rglSimpleButtonWidget *m_exportCharacterButtonWidget;            // 00000064 | 4 
	rglContainerWidget *m_textContainerWidget;                       // 00000068 | 4 
	int m_overwriteCharacterQuestionResult;                          // 0000006C | 4 
	int m_importCharacterQuestionResult;                             // 00000070 | 4 
}; // $74 

struct ALIGN(1) mbTableauManager // #182
{
	rglVector_mbTableauMaterial_ m_tableauMaterials;                 // 00000000 | C 
	rglVector_mbTableau_P_ m_tableaus;                               // 0000000C | C 
	int m_mappedTableauMaterials[5];                                 // 00000018 | 14 
}; // $2C 

struct ALIGN(1) mbTerrainLayer // #189
{
	int m_groundSpecNo;                                              // 00000000 | 4 
	unsigned int m_flags;                                            // 00000004 | 4 
	int m_terrainType;                                               // 00000008 | 4 
	rglMaterial *m_material;                                         // 0000000C | 4 
	rglMaterial *m_multitexMaterial;                                 // 00000010 | 4 
	float m_UVScale;                                                 // 00000014 | 4 
}; // $18 

struct ALIGN(1) mbTriggerManager // #193
{
	int m_numTriggers;                                               // 00000000 | 4 
	mbTrigger *m_triggers;                                           // 00000004 | 4 
	int m_defaultTimerNo;                                            // 00000008 | 4 
}; // $C 

struct ALIGN(1) rglAiMeshPathCheckingPoint // #202
{
	rglAiMeshFace *m_face;                                           // 00000000 | 4 
	float m_distance;                                                // 00000004 | 4 
	int m_numSteps;                                                  // 00000008 | 4 
}; // $C 

struct ALIGN(1) rglAiMeshPathFindingPoint // #203
{
	rglAiMeshFace *m_face;                                           // 00000000 | 4 
	float m_distance;                                                // 00000004 | 4 
	float m_totalDistance;                                           // 00000008 | 4 
}; // $C 

struct ALIGN(1) rglAligned16 // #206
{
	/* FIX-2 */ byte undef;                                          // 00000000 | 1 
}; // $1 

struct ALIGN(1) rglAppTimer // #207
{
	/* FIX-1 */ byte undef_0[16];                                    // 00000000 | 10 
}; // $10 

struct ALIGN(1) rglAutoResetEvent // #209
{
	void *m_handle;                                                  // 00000000 | 4 
}; // $4 

struct ALIGN(1) rglBinaryStream // #210
{
	/* FIX-1 */ byte undef_0[140];                                   // 00000000 | 8C 
}; // $8C 

struct ALIGN(1) rglBlendState // #211
{
	/* FIX-1 */ byte undef_0[4];                                     // 00000000 | 4 
	bool m_alphaBlendEnabled;                                        // 00000004 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000005 | 3 
	_D3DBLEND m_srcBlend;                                            // 00000008 | 4 
	_D3DBLEND m_destBlend;                                           // 0000000C | 4 
	_D3DBLENDOP m_blendOp;                                           // 00000010 | 4 
}; // $14 

struct ALIGN(1) rglBoardWidget // #212
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
}; // $280 

struct ALIGN(1) rglBody // #213
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	rglBodyPart *m_bodyPart;                                         // 00000050 | 4 
}; // $54 

struct ALIGN(1) rglButtonWidget // #217
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	int m_buttonState;                                               // 00000230 | 4 
	/* FIX-3 */ byte undef_1[4];                                     // 00000234 | 4 
}; // $238 

struct ALIGN(1) rglColor // #224
{
	float r;                                                         // 00000000 | 4 
	float g;                                                         // 00000004 | 4 
	float b;                                                         // 00000008 | 4 
	float a;                                                         // 0000000C | 4 
}; // $10 

struct ALIGN(1) rglComboLabelWidget // #226
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	rglSimpleButtonWidget *m_leftArrowButtonWidget;                  // 00000280 | 4 
	rglSimpleButtonWidget *m_rightArrowButtonWidget;                 // 00000284 | 4 
	rglWidget *m_labelWidget;                                        // 00000288 | 4 
	rglVector_rglString_ m_texts;                                    // 0000028C | C 
	bool m_leftToRight;                                              // 00000298 | 1 
	/* FIX-3 */ byte undef_1[7];                                     // 00000299 | 7 
}; // $2A0 

struct ALIGN(1) rglCompositeBody // #227
{
	/* FIX-1 */ byte undef_0[72];                                    // 00000000 | 48 
	rglBodyPart **m_parts;                                           // 00000048 | 4 
	int m_numParts;                                                  // 0000004C | 4 
}; // $50 

struct ALIGN(1) rglConfig // #228
{
	/* FIX-2 */ byte undef;                                          // 00000000 | 1 
}; // $1 

struct ALIGN(1) rglCriticalSection // #231
{
	_RTL_CRITICAL_SECTION m_section;                                 // 00000000 | 18 
}; // $18 

struct ALIGN(1) rglDepthStencilState // #232
{
	/* FIX-1 */ byte undef_0[4];                                     // 00000000 | 4 
	_D3DCMPFUNC m_zFunc;                                             // 00000004 | 4 
	bool m_depthTestEnabled;                                         // 00000008 | 1 
	bool m_zWriteEnabled;                                            // 00000009 | 1 
	/* FIX-3 */ byte undef_1[2];                                     // 0000000A | 2 
}; // $C 

struct ALIGN(1) rglDnaRandomGenerator // #233
{
	int m_value;                                                     // 00000000 | 4 
}; // $4 

struct ALIGN(1) rglDynamicCapsule // #234
{
	/* FIX-1 */ byte undef_0[140];                                   // 00000000 | 8C 
}; // $8C 

struct ALIGN(1) rglEffectManager // #235
{
	ID3DXEffect *m_effect;                                           // 00000000 | 4 
}; // $4 

struct ALIGN(1) rglEffectStateManager // #236
{
	/* FIX-1 */ byte undef_0[4];                                     // 00000000 | 4 
	IDirect3DDevice9 *m_device;                                      // 00000004 | 4 
	long m_refCnt;                                                   // 00000008 | 4 
	IDirect3DVertexShader9 *m_vertexShader;                          // 0000000C | 4 
	IDirect3DPixelShader9 *m_pixelShader;                            // 00000010 | 4 
	IDirect3DBaseTexture9 *m_textures[16];                           // 00000014 | 40 
}; // $54 

struct ALIGN(1) rglFile // #238
{
	std__basic_fstream_char_std__char_traits_char___ m_stream;       // 00000000 | C0 
}; // $C0 

struct ALIGN(1) rglGameButtonWidget // #242
{
	/* FIX-1 */ byte undef_0[576];                                   // 00000000 | 240 
	int m_ignoreHeight;                                              // 00000240 | 4 
	/* FIX-3 */ byte undef_1[4];                                     // 00000244 | 4 
}; // $248 

struct ALIGN(1) rglGameObject // #243
{
	/* FIX-4 */ byte undef_0[4];                                     // 00000000 | 4 
	int m_valid;                                                     // 00000004 | 4 
	int m_no;                                                        // 00000008 | 4 
}; // $C 

struct ALIGN(1) rglGraphicsContext // #245
{
	IDirect3D9 *m_system;                                            // 00000000 | 4 
	IDirect3DDevice9 *m_device;                                      // 00000004 | 4 
	bool m_isSystemEx;                                               // 00000008 | 1 
	bool m_isDeviceEx;                                               // 00000009 | 1 
	bool m_fogEnabled;                                               // 0000000A | 1 
	bool m_lightingEnabled;                                          // 0000000B | 1 
	bool m_specularEnabled;                                          // 0000000C | 1 
	bool m_normalizeNormalsEnabled;                                  // 0000000D | 1 
	/* FIX-4 */ byte undef_0[2];                                     // 0000000E | 2 
	int m_alphaTestMode;                                             // 00000010 | 4 
	int m_shadowMapTextureSize;                                      // 00000014 | 4 
	int m_materialColor;                                             // 00000018 | 4 
	int m_materialColor2;                                            // 0000001C | 4 
	int m_motionBlurState;                                           // 00000020 | 4 
	_D3DCULL m_defaultCullMode;                                      // 00000024 | 4 
	_D3DCULL m_cullMode;                                             // 00000028 | 4 
	int m_earlyZAlphaRef;                                            // 0000002C | 4 
	IDirect3DTexture9 *m_earlyZTexture;                              // 00000030 | 4 
	IDirect3DTexture9 *m_diffuseTexture1;                            // 00000034 | 4 
	IDirect3DTexture9 *m_diffuseTexture2;                            // 00000038 | 4 
	IDirect3DTexture9 *m_normalTexture;                              // 0000003C | 4 
	IDirect3DTexture9 *m_specularTexture;                            // 00000040 | 4 
	IDirect3DTexture9 *m_environmentTexture;                         // 00000044 | 4 
	IDirect3DCubeTexture9 *m_cubeTexture;                            // 00000048 | 4 
	IDirect3DTexture9 *m_shadowMapTexture;                           // 0000004C | 4 
	IDirect3DTexture9 *m_depthTexture;                               // 00000050 | 4 
	IDirect3DTexture9 *m_screenTexture;                              // 00000054 | 4 
	int m_lightPointCount;                                           // 00000058 | 4 
	int m_lightIndices[4];                                           // 0000005C | 10 
	float m_materialPower;                                           // 0000006C | 4 
	D3DXVECTOR4 m_textureOffset;                                     // 00000070 | 10 
	float m_timeVar;                                                 // 00000080 | 4 
	D3DXVECTOR4 m_specularColor;                                     // 00000084 | 10 
	unsigned int m_technique;                                        // 00000094 | 4 
	unsigned int m_earlyZTechnique;                                  // 00000098 | 4 
	unsigned int m_postFxTechnique;                                  // 0000009C | 4 
	IDirect3DVertexDeclaration9 *m_vertexDeclaration;                // 000000A0 | 4 
	IDirect3DVertexBuffer9 *m_vertexStreamBuffer;                    // 000000A4 | 4 
	unsigned int m_vertexStreamOffset;                               // 000000A8 | 4 
	unsigned int m_vertexStreamStride;                               // 000000AC | 4 
	int m_instancingStreamState;                                     // 000000B0 | 4 
	int m_numInstances;                                              // 000000B4 | 4 
	IDirect3DIndexBuffer9 *m_indexStreamBuffer;                      // 000000B8 | 4 
	bool m_firstRun;                                                 // 000000BC | 1 
	bool m_postEffectLoadingChecked;                                 // 000000BD | 1 
	bool m_canLoadPostEffects;                                       // 000000BE | 1 
	bool m_supportChecked;                                           // 000000BF | 1 
	bool m_supportsDepthOfField;                                     // 000000C0 | 1 
	bool m_supportsHighDynamicRange;                                 // 000000C1 | 1 
	bool m_supportsFxaa;                                             // 000000C2 | 1 
	bool m_supportsFastShadowMap;                                    // 000000C3 | 1 
	bool m_isNvidia;                                                 // 000000C4 | 1 
	bool m_isAti;                                                    // 000000C5 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 000000C6 | 2 
	_D3DCAPS9 m_deviceCaps;                                          // 000000C8 | 130 
	_D3DFORMAT m_adapterFormat;                                      // 000001F8 | 4 
	_D3DFORMAT m_depthFormat;                                        // 000001FC | 4 
	rglSamplerState *m_samplerStates[16];                            // 00000200 | 40 
	rglSamplerState *m_postFxSamplerStates[5];                       // 00000240 | 14 
	rglBlendState *m_blendStates[5];                                 // 00000254 | 14 
	rglDepthStencilState *m_depthStencilStates[4];                   // 00000268 | 10 
	rglRasterizerState *m_rasterizerStates[5];                       // 00000278 | 14 
	rglDepthStencilState *m_depthStencilState;                       // 0000028C | 4 
	rglBlendState *m_blendState;                                     // 00000290 | 4 
	rglRasterizerState *m_rasterizerState;                           // 00000294 | 4 
	rglVector_enum__D3DMULTISAMPLE_TYPE_ m_availableMultisampleTypes; // 00000298 | C 
	rglVector_enum__D3DMULTISAMPLE_TYPE_ m_availablePostFxMultisampleTypes; // 000002A4 | C 
	rglVector_enum__D3DMULTISAMPLE_TYPE_ m_availablePostFxHdrMultisampleTypes; // 000002B0 | C 
	unsigned int m_effectHandles[112];                               // 000002BC | 1C0 
	unsigned int m_postFxEffectHandles[7];                           // 0000047C | 1C 
	unsigned int m_earlyZEffectHandles[69];                          // 00000498 | 114 
	bool m_restoreSamplerStates;                                     // 000005AC | 1 
	bool m_deviceLost;                                               // 000005AD | 1 
	/* FIX-4 */ byte undef_2[2];                                     // 000005AE | 2 
	unsigned int m_activePostEffectFlags;                            // 000005B0 | 4 
}; // $5B4 

struct ALIGN(1) rglGraphicsState // #246
{
	IDirect3DStateBlock9 *m_stateBlock;                              // 00000000 | 4 
}; // $4 

struct ALIGN(1) rglHashVectorHash // #247
{
	int m_index;                                                     // 00000000 | 4 
	int m_rawIndex;                                                  // 00000004 | 4 
}; // $8 

struct ALIGN(1) rglImageButtonWidget // #249
{
	/* FIX-1 */ byte undef_0[576];                                   // 00000000 | 240 
}; // $240 

struct ALIGN(1) rglImageWidget // #250
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
}; // $230 

struct ALIGN(1) rglIndexBuffer // #251
{
	/* FIX-1 */ byte undef_0[108];                                   // 00000000 | 6C 
	IDirect3DIndexBuffer9 *m_indexBuffer;                            // 0000006C | 4 
}; // $70 

struct ALIGN(1) rglIni // #252
{
	rglOrderedMap_rglString_rglOrderedMap_rglString_rglIniValue___ m_values; // 00000000 | 8 
	rglOrderedMap_rglString_int_ m_files;                            // 00000008 | 8 
	int m_fileIndex;                                                 // 00000010 | 4 
}; // $14 

struct ALIGN(1) rglInputBinaryFileStream // #254
{
	/* FIX-1 */ byte undef_0[140];                                   // 00000000 | 8C 
	_iobuf *m_file;                                                  // 0000008C | 4 
	bool m_closed;                                                   // 00000090 | 1 
	/* FIX-3 */ byte undef_1[3];                                     // 00000091 | 3 
}; // $94 

struct ALIGN(1) rglInputBinaryFileStreamNoCache // #255
{
	/* FIX-1 */ byte undef_0[148];                                   // 00000000 | 94 
}; // $94 

struct ALIGN(1) rglInputTextFileStream // #257
{
	/* FIX-1 */ byte undef_0[140];                                   // 00000000 | 8C 
	_iobuf *m_file;                                                  // 0000008C | 4 
	bool m_closed;                                                   // 00000090 | 1 
	/* FIX-3 */ byte undef_1[3];                                     // 00000091 | 3 
}; // $94 

struct ALIGN(1) rglInterlockedCounter // #258
{
	long m_value;                                                    // 00000000 | 4 
}; // $4 

struct ALIGN(1) rglIntVector2 // #260
{
	int x;                                                           // 00000000 | 4 
	int y;                                                           // 00000004 | 4 
}; // $8 

struct ALIGN(1) rglInventoryMenuWidget // #261
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
}; // $280 

struct ALIGN(1) rglInventorySlotWidget // #262
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
}; // $230 

struct ALIGN(1) rglManifoldBody // #267
{
	/* FIX-1 */ byte undef_0[72];                                    // 00000000 | 48 
	rglVector_rglVector4_ m_vertices;                                // 00000048 | C 
	rglVector_rglVector4_ m_localVertices;                           // 00000054 | C 
	rglVector_rglManifoldBodyFace_ m_faces;                          // 00000060 | C 
}; // $6C 

struct ALIGN(1) rglManifoldBodyFace // #268
{
	rglPhysicsMaterial *m_material;                                  // 00000000 | 4 
	unsigned int m_flags;                                            // 00000004 | 4 
	int m_numVertices;                                               // 00000008 | 4 
	int m_vertexNos[4];                                              // 0000000C | 10 
	int m_manifoldFaceNo;                                            // 0000001C | 4 
}; // $20 

struct ALIGN(1) rglManifoldPathFindingPoint // #271
{
	int m_faceNo;                                                    // 00000000 | 4 
	float m_totalDistance;                                           // 00000004 | 4 
	float m_distance;                                                // 00000008 | 4 
}; // $C 

struct ALIGN(1) rglManualResetEvent // #273
{
	void *m_handle;                                                  // 00000000 | 4 
}; // $4 

struct ALIGN(1) rglMersenneTwister // #276
{
	std__mersenne_twister_engine_unsigned_int_32_624_397_31_2567483615_11_4294967295_7_2636928640_15_4022730752_18_1812433253_ m_engine; // 00000000 | 1388 
}; // $1388 

struct ALIGN(1) rglMeshBufferUpdateRec // #278
{
	int m_declarationType;                                           // 00000000 | 4 
	int m_registeredDeclarationType;                                 // 00000004 | 4 
	int m_bufferNo;                                                  // 00000008 | 4 
	int m_policy;                                                    // 0000000C | 4 
	int m_registeredBufferNo;                                        // 00000010 | 4 
	int m_registeredPolicy;                                          // 00000014 | 4 
	int m_numUses;                                                   // 00000018 | 4 
	int m_restoreNo;                                                 // 0000001C | 4 
	bool m_update;                                                   // 00000020 | 1 
	bool m_added;                                                    // 00000021 | 1 
	/* FIX-4 */ byte undef_0[2];                                     // 00000022 | 2 
	int m_pos;                                                       // 00000024 | 4 
}; // $28 

struct ALIGN(1) rglMeshFace // #279
{
	unsigned short m_faceCornerNos[3];                               // 00000000 | 6 
}; // $6 

struct ALIGN(1) rglMeshSkinDataRec // #281
{
	float m_weights[4];                                              // 00000000 | 10 
	unsigned char m_boneNos[4];                                      // 00000010 | 4 
	float m_indices[4];                                              // 00000014 | 10 
}; // $24 

struct ALIGN(1) rglMeshVertexGroup // #283
{
	unsigned char m_boneNo;                                          // 00000000 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000001 | 3 
	rglVector_rglMeshVertexGroupPair_ m_pairs;                       // 00000004 | C 
}; // $10 

struct ALIGN(1) rglMeshVertexGroupPair // #284
{
	unsigned short m_vertexNo;                                       // 00000000 | 2 
	/* FIX-4 */ byte undef_0[2];                                     // 00000002 | 2 
	float m_weight;                                                  // 00000004 | 4 
}; // $8 

struct ALIGN(1) rglMeshVertexKey // #285
{
	rglVector_rglVector3_ m_positions;                               // 00000000 | C 
	rglVector_rglVector3_ m_normals;                                 // 0000000C | C 
}; // $18 

struct ALIGN(1) rglMetaMeshLod // #287
{
	rglVector_rglMesh_P_ m_meshes;                                   // 00000000 | C 
}; // $C 

struct ALIGN(1) rglMetaMeshWidget // #288
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	rglMetaMesh *m_metaMesh;                                         // 00000230 | 4 
	/* FIX-3 */ byte undef_1[4];                                     // 00000234 | 4 
}; // $238 

struct ALIGN(1) rglModuleTable // #289
{
	rglVector_rglString_ m_names;                                    // 00000000 | C 
	rglVector_unsigned___int64_ m_addresses;                         // 0000000C | C 
	rglVector_unsigned_long_ m_sizes;                                // 00000018 | C 
}; // $24 

struct ALIGN(1) rglOnDemandTexture // #291
{
	bool m_loaded;                                                   // 00000000 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000001 | 3 
	void *m_buffer;                                                  // 00000004 | 4 
	int m_bufferSize;                                                // 00000008 | 4 
	rglTexture *m_texture;                                           // 0000000C | 4 
}; // $10 

struct ALIGN(1) rglOutputBinaryFileStream // #292
{
	/* FIX-1 */ byte undef_0[140];                                   // 00000000 | 8C 
	_iobuf *m_file;                                                  // 0000008C | 4 
	bool m_closed;                                                   // 00000090 | 1 
	bool m_fileOpen;                                                 // 00000091 | 1 
	/* FIX-3 */ byte undef_1[2];                                     // 00000092 | 2 
}; // $94 

struct ALIGN(1) rglOutputBinaryFileStreamWithChecksum // #293
{
	/* FIX-1 */ byte undef_0[148];                                   // 00000000 | 94 
	long long m_checksum;                                            // 00000098 | 8 
}; // $A0 

struct ALIGN(1) rglOutputTextFileStream // #294
{
	/* FIX-1 */ byte undef_0[140];                                   // 00000000 | 8C 
	_iobuf *m_file;                                                  // 0000008C | 4 
	bool m_closed;                                                   // 00000090 | 1 
	bool m_fileOpen;                                                 // 00000091 | 1 
	/* FIX-3 */ byte undef_1[2];                                     // 00000092 | 2 
}; // $94 

struct ALIGN(1) rglParticleSystemKey // #297
{
	float m_time;                                                    // 00000000 | 4 
	float m_magnitude;                                               // 00000004 | 4 
}; // $8 

struct ALIGN(1) rglPhysicsManager // #298
{
	rglVector_rglRagdollWorld_ m_worlds;                             // 00000000 | C 
	rglVector_int_ m_freeWorldNos;                                   // 0000000C | C 
	int m_numActiveWorlds;                                           // 00000018 | 4 
	int m_stepNo;                                                    // 0000001C | 4 
	hkpWorld *m_physicsWorld;                                        // 00000020 | 4 
	rglDuplexMap_void_P_hkpRigidBody_P_ m_rigidBodies;               // 00000024 | 40 
	rglVector_hkpShapePhantom_P_ m_phantoms;                         // 00000064 | C 
	float m_frameTime;                                               // 00000070 | 4 
}; // $74 

struct ALIGN(1) rglPhysicsMaterial // #299
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	float m_soundOcclusion;                                          // 00000050 | 4 
}; // $54 

struct ALIGN(1) rglPopupWidget // #300
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	bool m_closeOnClick;                                             // 00000280 | 1 
	/* FIX-3 */ byte undef_1[7];                                     // 00000281 | 7 
}; // $288 

struct ALIGN(1) rglQuaternion // #304
{
	float w;                                                         // 00000000 | 4 
	float x;                                                         // 00000004 | 4 
	float y;                                                         // 00000008 | 4 
	float z;                                                         // 0000000C | 4 
}; // $10 

struct ALIGN(1) rglRagdollWorld // #305
{
	int m_activationStatus;                                          // 00000000 | 4 
	hkpPhysicsSystem *m_physicsSystem;                               // 00000004 | 4 
	rglVector_hkpRigidBody_P_ m_boneRigidBodies;                     // 00000008 | C 
	rglVector_hkpRigidBody_P_ m_capsuleRigidBodies;                  // 00000014 | C 
	rglVector_hkReferencedObject_P_ m_referencedObjects;             // 00000020 | C 
}; // $2C 

struct ALIGN(1) rglRasterizerState // #306
{
	/* FIX-1 */ byte undef_0[4];                                     // 00000000 | 4 
	_D3DCULL m_cullMode;                                             // 00000004 | 4 
	_D3DFILLMODE m_fillMode;                                         // 00000008 | 4 
}; // $C 

struct ALIGN(1) rglRenderMeshBufferUpdateRec // #310
{
	int m_declarationType;                                           // 00000000 | 4 
	int m_bufferNo;                                                  // 00000004 | 4 
	int m_policy;                                                    // 00000008 | 4 
	int m_pos;                                                       // 0000000C | 4 
}; // $10 

struct ALIGN(1) rglResolution // #315
{
	int Width;                                                       // 00000000 | 4 
	int Height;                                                      // 00000004 | 4 
	int Depth;                                                       // 00000008 | 4 
	int RefreshRate;                                                 // 0000000C | 4 
}; // $10 

struct ALIGN(1) rglSamplerState // #318
{
	/* FIX-1 */ byte undef_0[4];                                     // 00000000 | 4 
	_D3DTEXTUREFILTERTYPE m_minFilter;                               // 00000004 | 4 
	_D3DTEXTUREFILTERTYPE m_magFilter;                               // 00000008 | 4 
	_D3DTEXTUREFILTERTYPE m_mipFilter;                               // 0000000C | 4 
	_D3DTEXTUREADDRESS m_addressMode;                                // 00000010 | 4 
	int m_maxAnisotropy;                                             // 00000014 | 4 
}; // $18 

struct ALIGN(1) rglSceneGridCell // #321
{
	rglVector_rglBodyPart_P_ m_orderedBodyParts;                     // 00000000 | C 
	rglVector_rglAiMeshFace_P_ m_aiMeshFaces;                        // 0000000C | C 
	rglSceneGridEntityNode *m_entityLinkedList;                      // 00000018 | 4 
}; // $1C 

struct ALIGN(1) rglSceneGridEntityNode // #323
{
	rglSceneGridEntityNode *m_next;                                  // 00000000 | 4 
	rglSceneGridEntityNode *m_prev;                                  // 00000004 | 4 
	rglEntity *m_entity;                                             // 00000008 | 4 
}; // $C 

struct ALIGN(1) rglSceneReflectionsData // #324
{
	bool m_hasReflections;                                           // 00000000 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000001 | 3 
	float m_waterLevel;                                              // 00000004 | 4 
}; // $8 

struct ALIGN(1) rglSectionlessIni // #328
{
	rglOrderedMap_rglString_rglString_ m_values;                     // 00000000 | 8 
}; // $8 

struct ALIGN(1) rglSemaphore // #329
{
	void *m_handle;                                                  // 00000000 | 4 
}; // $4 

struct ALIGN(1) rglSimpleButtonWidget // #332
{
	/* FIX-1 */ byte undef_0[568];                                   // 00000000 | 238 
	bool m_isDown;                                                   // 00000238 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000239 | 3 
	int m_buttonFlags;                                               // 0000023C | 4 
}; // $240 

struct ALIGN(1) rglSimpleTextBoxWidget // #333
{
	/* FIX-1 */ byte undef_0[600];                                   // 00000000 | 258 
}; // $258 

struct ALIGN(1) rglSkeletonAnimation // #335
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	rglVector_rglSkeletonAnimationBone_ m_bones;                     // 00000050 | C 
	rglIpo_rglVector3_ m_positionIpo;                                // 0000005C | C 
}; // $68 

struct ALIGN(1) rglSkeletonAnimationBone // #336
{
	rglIpo_rglQuaternion_ m_rotationIpo;                             // 00000000 | C 
}; // $C 

struct ALIGN(1) rglSkeletonAnimationSpec // #337
{
	float m_duration;                                                // 00000000 | 4 
	rglSkeletonAnimation *m_animation;                               // 00000004 | 4 
	int m_startTimePoint;                                            // 00000008 | 4 
	int m_endTimePoint;                                              // 0000000C | 4 
}; // $10 

struct ALIGN(1) rglSkeletonModelBonePositions // #341
{
	rglVector4 *m_positions;                                         // 00000000 | 4 
	int m_numPositions;                                              // 00000004 | 4 
}; // $8 

struct ALIGN(1) rglSliderWidget // #342
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	int m_direction;                                                 // 00000230 | 4 
	float m_range;                                                   // 00000234 | 4 
	int m_focused;                                                   // 00000238 | 4 
	float m_focusPoint;                                              // 0000023C | 4 
}; // $240 

struct ALIGN(1) rglString // #345
{
	int m_cursor;                                                    // 00000000 | 4 
	char *m_buffer;                                                  // 00000004 | 4 
	int m_bufferLength;                                              // 00000008 | 4 
	int m_strLength;                                                 // 0000000C | 4 
	char m_staticBuffer[48];                                         // 00000010 | 30 
}; // $40 

struct ALIGN(1) rglTableBoolCellWidget // #347
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	bool m_value;                                                    // 00000230 | 1 
	/* FIX-3 */ byte undef_1[7];                                     // 00000231 | 7 
}; // $238 

struct ALIGN(1) rglTableCellWidget // #348
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
}; // $230 

struct ALIGN(1) rglTableCountCellWidget // #349
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	int m_value;                                                     // 00000230 | 4 
	int m_maxValue;                                                  // 00000234 | 4 
}; // $238 

struct ALIGN(1) rglTableIntCellWidget // #350
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	int m_value;                                                     // 00000230 | 4 
	/* FIX-3 */ byte undef_1[4];                                     // 00000234 | 4 
}; // $238 

struct ALIGN(1) rglTableRowWidget // #351
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	int m_numCells;                                                  // 00000280 | 4 
	bool m_alternate;                                                // 00000284 | 1 
	bool m_visible;                                                  // 00000285 | 1 
	/* FIX-3 */ byte undef_1[2];                                     // 00000286 | 2 
}; // $288 

struct ALIGN(1) rglTableUInt64CellWidget // #353
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	unsigned long long m_value;                                      // 00000230 | 8 
}; // $238 

struct ALIGN(1) rglTabWidget // #355
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	rglWidget *m_panelWidget;                                        // 00000280 | 4 
	rglVector_rglSimpleButtonWidget_P_ m_buttonWidgets;              // 00000284 | C 
	rglVector_int_ m_tags;                                           // 00000290 | C 
	int m_startingTag;                                               // 0000029C | 4 
	int m_clickedTag;                                                // 000002A0 | 4 
	float m_itemSize;                                                // 000002A4 | 4 
}; // $2A8 

struct ALIGN(1) rglTechnique // #356
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	bool m_initialized;                                              // 00000050 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000051 | 3 
	unsigned int m_handles[5];                                       // 00000054 | 14 
}; // $68 

struct ALIGN(1) rglTerrainCell // #358
{
	float m_altitude;                                                // 00000000 | 4 
	unsigned int m_flags;                                            // 00000004 | 4 
	int m_manifoldFaceNos[2];                                        // 00000008 | 8 
}; // $10 

struct ALIGN(1) rglTextStream // #361
{
	/* FIX-1 */ byte undef_0[140];                                   // 00000000 | 8C 
}; // $8C 

struct ALIGN(1) rglTime // #363
{
	int m_second;                                                    // 00000000 | 4 
	int m_minute;                                                    // 00000004 | 4 
	int m_hour;                                                      // 00000008 | 4 
	int m_day;                                                       // 0000000C | 4 
	int m_month;                                                     // 00000010 | 4 
	int m_year;                                                      // 00000014 | 4 
}; // $18 

struct ALIGN(1) rglTimer // #364
{
	int m_timerNo;                                                   // 00000000 | 4 
	/* FIX-4 */ byte undef_0[4];                                     // 00000004 | 4 
	long long m_value;                                               // 00000008 | 8 
}; // $10 

struct ALIGN(1) rglVector2 // #366
{
	float x;                                                         // 00000000 | 4 
	float y;                                                         // 00000004 | 4 
}; // $8 

struct ALIGN(1) rglVector3 // #367
{
	float x;                                                         // 00000000 | 4 
	float y;                                                         // 00000004 | 4 
	float z;                                                         // 00000008 | 4 
}; // $C 

struct ALIGN(1) rglVector4 // #368
{
	float x;                                                         // 00000000 | 4 
	float y;                                                         // 00000004 | 4 
	float z;                                                         // 00000008 | 4 
	float w;                                                         // 0000000C | 4 
}; // $10 

struct ALIGN(1) rglVertexBuffer // #369
{
	/* FIX-1 */ byte undef_0[108];                                   // 00000000 | 6C 
	int m_vertexDeclarationType;                                     // 0000006C | 4 
	IDirect3DVertexBuffer9 *m_vertexBuffer;                          // 00000070 | 4 
	IDirect3DVertexDeclaration9 *m_vertexDeclaration;                // 00000074 | 4 
	IDirect3DVertexDeclaration9 *m_vertexDeclarationInstanced;       // 00000078 | 4 
}; // $7C 

struct ALIGN(1) rglVerticalScrollableWidget // #370
{
	/* FIX-1 */ byte undef_0[1680];                                  // 00000000 | 690 
}; // $690 

struct ALIGN(1) rglViewport // #371
{
	int m_x;                                                         // 00000000 | 4 
	int m_y;                                                         // 00000004 | 4 
	int m_width;                                                     // 00000008 | 4 
	int m_height;                                                    // 0000000C | 4 
	float m_zMin;                                                    // 00000010 | 4 
	float m_zMax;                                                    // 00000014 | 4 
}; // $18 

struct ALIGN(1) rglWmi // #375
{
	IWbemLocator *m_locator;                                         // 00000000 | 4 
	IWbemServices *m_services;                                       // 00000004 | 4 
	bool m_uninitialize;                                             // 00000008 | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 00000009 | 3 
}; // $C 

struct ALIGN(1) rglWmiClassObject // #376
{
	IWbemClassObject *m_classObject;                                 // 00000000 | 4 
}; // $4 

struct ALIGN(1) rglWmiIterator // #377
{
	IEnumWbemClassObject *m_enumObject;                              // 00000000 | 4 
	IWbemClassObject *m_classObject;                                 // 00000004 | 4 
}; // $8 

struct ALIGN(1) WSEArraySortOptions // #378
{
	bool sortDescending;                                             // 00000000 | 1 
	bool sortCaseInsensitive;                                        // 00000001 | 1 
	/* FIX-4 */ byte undef_0[2];                                     // 00000002 | 2 
	int sortCmpScriptNo;                                             // 00000004 | 4 
}; // $8 

struct ALIGN(1) WSEBaseArray_mbMenu_ // #379
{
	/* FIX-4 */ byte undef_0[4];                                     // 00000000 | 4 
	mbMenu *m_data;                                                  // 00000004 | 4 
	mbMenu **m_ptr;                                                  // 00000008 | 4 
	_RTL_CRITICAL_SECTION m_lock;                                    // 0000000C | 18 
	std__vector_int_P_std__allocator_int_P___ m_trackers;            // 00000024 | C 
}; // $30 

struct ALIGN(1) WSEBaseArray_mbMenuItem_ // #380
{
	/* FIX-4 */ byte undef_0[4];                                     // 00000000 | 4 
	mbMenuItem *m_data;                                              // 00000004 | 4 
	mbMenuItem **m_ptr;                                              // 00000008 | 4 
	_RTL_CRITICAL_SECTION m_lock;                                    // 0000000C | 18 
	std__vector_int_P_std__allocator_int_P___ m_trackers;            // 00000024 | C 
}; // $30 

struct ALIGN(1) WSEBasicDynMultiArray // #381
{
	/* FIX-4 */ byte undef_0[4];                                     // 00000000 | 4 
	void *data;                                                      // 00000004 | 4 
	std__vector_int_std__allocator_int___ dimSizes;                  // 00000008 | C 
	type_id dataTypeID;                                              // 00000014 | 4 
}; // $18 

struct ALIGN(1) WSEBitStream // #382
{
	std__basic_ofstream_char_std__char_traits_char___ m_stream;      // 00000000 | A8 
	unsigned int m_cursor;                                           // 000000A8 | 4 
	unsigned int m_buffer;                                           // 000000AC | 4 
	unsigned int m_mask_table[33];                                   // 000000B0 | 84 
	/* FIX-4 */ byte undef_0[4];                                     // 00000134 | 4 
	unsigned long long m_total;                                      // 00000138 | 8 
}; // $140 

struct ALIGN(1) WSEDynMultiArray_int_ // #383
{
	/* FIX-1 */ byte undef_0[24];                                    // 00000000 | 18 
}; // $18 

struct ALIGN(1) WSEDynMultiArray_rglTransform_ // #384
{
	/* FIX-1 */ byte undef_0[24];                                    // 00000000 | 18 
}; // $18 

struct ALIGN(1) WSEDynamicArray_mbMenu_ // #385
{
	/* FIX-1 */ byte undef_0[48];                                    // 00000000 | 30 
}; // $30 

struct ALIGN(1) WSEDynamicArray_mbMenuItem_ // #386
{
	/* FIX-1 */ byte undef_0[48];                                    // 00000000 | 30 
}; // $30 

struct ALIGN(1) WSELuaManager // #387
{
	lua_State *luaState;                                             // 00000000 | 4 
	std__unordered_map_std__basic_string_char_std__char_traits_char__std__allocator_char____gameOperation_std__hash_std__basic_string_char_std__char_traits_char__std__allocator_char______std__equal_to_std__basic_string_char_std__char_traits_char__std__allocator_char______std__allocator_std__pair_std__basic_string_char_std__char_traits_char__std__allocator_char____const__gameOperation_____ operationMap; // 00000004 | 20 
	std__vector_gameConstTable_std__allocator_gameConstTable___ gameConstTables; // 00000024 | C 
	int operationHookLuaRefs[5300];                                  // 00000030 | 52D0 
	std__chrono__time_point_std__chrono__system_clock_std__chrono__duration___int64_std__ratio_1_10000000_____ tStart; // 00005300 | 8 
	std__vector_bool_std__allocator_bool___ lua_call_cfResults;      // 00005308 | 10 
	int luaContext;                                                  // 00005318 | 4 
	bool luaStateIsReady;                                            // 0000531C | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 0000531D | 3 
}; // $5320 

struct ALIGN(1) WSEOGPServer // #388
{
	WSEOGPServerState m_state;                                       // 00000000 | 4 
	bool m_update;                                                   // 00000004 | 1 
	/* FIX-4 */ byte undef_0[1];                                     // 00000005 | 1 
	unsigned short m_port;                                           // 00000006 | 2 
	unsigned int m_socket;                                           // 00000008 | 4 
	char m_buffer[65536];                                            // 0000000C | 10000 
	sockaddr_in m_from;                                              // 0001000C | 10 
	int m_from_len;                                                  // 0001001C | 4 
	int m_recv_len;                                                  // 00010020 | 4 
}; // $10024 

struct ALIGN(1) WSEObjectContainer // #389
{
	WSEObjectType *m_type;                                           // 00000000 | 4 
	void *m_object;                                                  // 00000004 | 4 
}; // $8 

struct ALIGN(1) WSEObjectManager // #390
{
	std__list_WSEObjectType_P_std__allocator_WSEObjectType_P___ m_types; // 00000000 | 8 
	std__vector_WSEObjectContainer_P_std__allocator_WSEObjectContainer_P___ m_objects; // 00000008 | C 
	std__vector_int_std__allocator_int___ m_free_objects;            // 00000014 | C 
}; // $20 

struct ALIGN(1) WSEObjectType // #391
{
	std__basic_string_char_std__char_traits_char__std__allocator_char___ m_name; // 00000000 | 18 
}; // $18 

struct ALIGN(1) WSEProfilingInfo // #393
{
	long long outside;                                               // 00000000 | 8 
	_LARGE_INTEGER start;                                            // 00000008 | 8 
	_LARGE_INTEGER rec_start;                                        // 00000010 | 8 
	_LARGE_INTEGER rec_end;                                          // 00000018 | 8 
}; // $20 

struct ALIGN(1) WSESimpleCharBuff // #395
{
	std__vector_char_std__allocator_char___ buffer;                  // 00000000 | C 
	char *flatDataPtr;                                               // 0000000C | 4 
}; // $10 

struct ALIGN(1) CD3DApplication // #396
{
	bool m_quitting;                                                 // 00000000 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000001 | 3 
	CD3DEnumeration m_d3dEnumeration;                                // 00000004 | 2C 
	CD3DSettings m_d3dSettings;                                      // 00000030 | 5C 
	bool m_bWindowed;                                                // 0000008C | 1 
	bool m_bActive;                                                  // 0000008D | 1 
	bool m_bMinimized;                                               // 0000008E | 1 
	bool m_bMaximized;                                               // 0000008F | 1 
	bool m_bSizing;                                                  // 00000090 | 1 
	bool m_bIgnoreSizeChange;                                        // 00000091 | 1 
	bool m_bDeviceObjectsInited;                                     // 00000092 | 1 
	bool m_bDeviceObjectsRestored;                                   // 00000093 | 1 
	bool m_bFrameMoving;                                             // 00000094 | 1 
	bool m_bSingleStep;                                              // 00000095 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 00000096 | 2 
	_D3DPRESENT_PARAMETERS_ m_d3dpp;                                 // 00000098 | 38 
	D3DDISPLAYMODEEX m_fullscreenDisplayMode;                        // 000000D0 | 18 
	HWND__ *m_hWnd;                                                  // 000000E8 | 4 
	_D3DCAPS9 m_d3dCaps;                                             // 000000EC | 130 
	_D3DSURFACE_DESC m_backBufferDesc;                               // 0000021C | 20 
	_D3DSURFACE_DESC m_depthStencilDesc;                             // 0000023C | 20 
	_D3DDISPLAYMODE m_displayMode;                                   // 0000025C | 10 
	unsigned long m_dwWindowStyle;                                   // 0000026C | 4 
	tagRECT m_rcWindowBounds;                                        // 00000270 | 10 
	tagRECT m_rcWindowClient;                                        // 00000280 | 10 
	HIMC__ *m_immContext;                                            // 00000290 | 4 
	/* FIX-4 */ byte undef_2[4];                                     // 00000294 | 4 
	double m_minFrameTime;                                           // 00000298 | 8 
	double m_minFrameTimeForMove;                                    // 000002A0 | 8 
	float m_fFPS;                                                    // 000002A8 | 4 
	unsigned long m_dwCreationWidth;                                 // 000002AC | 4 
	unsigned long m_dwCreationHeight;                                // 000002B0 | 4 
	bool m_bStartFullscreen;                                         // 000002B4 | 1 
	/* FIX-4 */ byte undef_3[3];                                     // 000002B5 | 3 
	_D3DDISPLAYMODE m_desktopDisplayMode;                            // 000002B8 | 10 
	_D3DMULTISAMPLE_TYPE m_multisampleType;                          // 000002C8 | 4 
	bool m_reset;                                                    // 000002CC | 1 
	/* FIX-3 */ byte undef_4[3];                                     // 000002CD | 3 
}; // $2D0 

struct ALIGN(1) hkBool // #397
{
	char m_bool;                                                     // 00000000 | 1 
}; // $1 

struct ALIGN(1) mbAction // #0
{
	rglString m_id;                                                  // 00000000 | 40 
	mbAnimation *m_animations;                                       // 00000040 | 4 
	int m_numAnimations;                                             // 00000044 | 4 
	unsigned int m_flags;                                            // 00000048 | 4 
	int m_length;                                                    // 0000004C | 4 
	unsigned int m_masterFlags;                                      // 00000050 | 4 
}; // $54 [ #345 ]

struct ALIGN(1) mbAgentAiTrackerEntry // #7
{
	rglVector4 m_differenceDirection;                                // 00000000 | 10 
	bool m_directionComputed;                                        // 00000010 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000011 | 3 
	int m_agentNo;                                                   // 00000014 | 4 
	float m_distanceSquared;                                         // 00000018 | 4 
	rglVector4 m_difference;                                         // 0000001C | 10 
	rglBodyPart *m_bodyPart;                                         // 0000002C | 4 
}; // $30 [ #368 ]

struct ALIGN(1) mbAgentControl // #9
{
	float m_lookDirf;                                                // 00000000 | 4 
	rglVector4 m_lookDir;                                            // 00000004 | 10 
	float m_rotation;                                                // 00000014 | 4 
	float m_rotationTime;                                            // 00000018 | 4 
	unsigned int m_flags1;                                           // 0000001C | 4 
	unsigned int m_flags2;                                           // 00000020 | 4 
	bool m_cameraMode;                                               // 00000024 | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 00000025 | 3 
}; // $28 [ #368 ]

struct ALIGN(1) mbAnimation // #12
{
	unsigned int m_flags;                                            // 00000000 | 4 
	float m_soundTimes[4];                                           // 00000004 | 10 
	rglSkeletonAnimationSpec m_spec;                                 // 00000014 | 10 
	rglVector4 m_displace;                                           // 00000024 | 10 
	float m_ragdollDelay;                                            // 00000034 | 4 
}; // $38 [ #337 #368 ]

struct ALIGN(1) mbBlow // #18
{
	int m_type;                                                      // 00000000 | 4 
	unsigned int m_flags;                                            // 00000004 | 4 
	int m_agentNo;                                                   // 00000008 | 4 
	rglVector4 m_position;                                           // 0000000C | 10 
	rglVector4 m_rotation;                                           // 0000001C | 10 
	rglVector4 m_direction;                                          // 0000002C | 10 
	int m_boneNo;                                                    // 0000003C | 4 
	bool m_rearHorse;                                                // 00000040 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000041 | 3 
	float m_rawDamage;                                               // 00000044 | 4 
	float m_inflictedDamage;                                         // 00000048 | 4 
	int m_soakedDamage;                                              // 0000004C | 4 
	int m_damageType;                                                // 00000050 | 4 
	mbItem m_item;                                                   // 00000054 | 8 
	mbMissile *m_missile;                                            // 0000005C | 4 
	rglVector4 m_missileDirection;                                   // 00000060 | 10 
	rglVector4 m_missilePosition;                                    // 00000070 | 10 
	int m_weaponClass;                                               // 00000080 | 4 
}; // $84 [ #368 #67 ]

struct ALIGN(1) mbConversationChoice // #24
{
	int m_sentenceNo;                                                // 00000000 | 4 
	int m_repeatObject;                                              // 00000004 | 4 
	unsigned int m_flags;                                            // 00000008 | 4 
	rglString m_text;                                                // 0000000C | 40 
}; // $4C [ #345 ]

struct ALIGN(1) mbConversationManager // #25
{
	int m_numSentences;                                              // 00000000 | 4 
	mbSentence *m_sentences;                                         // 00000004 | 4 
	int m_tokenNo;                                                   // 00000008 | 4 
	int m_partnerTroopNo;                                            // 0000000C | 4 
	int m_partnerPartyNo;                                            // 00000010 | 4 
	int m_partnerAgentNo;                                            // 00000014 | 4 
	int m_speakerAgentNo;                                            // 00000018 | 4 
	int m_sentenceNo;                                                // 0000001C | 4 
	int m_repeatObject;                                              // 00000020 | 4 
	int m_numChoices;                                                // 00000024 | 4 
	mbConversationChoice m_speakerChoices[1024];                     // 00000028 | 13000 
	mbConversationChoice m_partnerChoices[1024];                     // 00013028 | 13000 
	bool m_inMetaMission;                                            // 00026028 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00026029 | 3 
	rglString m_speakerText;                                         // 0002602C | 40 
}; // $2606C [ #24 #345 ]

struct ALIGN(1) mbCoreGame // #27
{
	double m_frameTime;                                              // 00000000 | 8 
	int m_pressedKey;                                                // 00000008 | 4 
	int m_numModules;                                                // 0000000C | 4 
	rglString m_modules[32];                                         // 00000010 | 800 
	rglString m_additionalConfigPath;                                // 00000810 | 40 
	rglMap_rglString_rglString_ m_commandMap;                        // 00000850 | 20 
	rglVector_rglString_ m_moduleCommands;                           // 00000870 | C 
	rglVector_rglString_ m_moduleCompatibilityCommands;              // 0000087C | C 
	bool m_quitting;                                                 // 00000888 | 1 
	bool m_sound;                                                    // 00000889 | 1 
	bool m_music;                                                    // 0000088A | 1 
	/* FIX-4 */ byte undef_0[1];                                     // 0000088B | 1 
	rglIni m_moduleIniFile;                                          // 0000088C | 14 
	rglString m_fileNameItemKinds;                                   // 000008A0 | 40 
	rglString m_fileNameTroops;                                      // 000008E0 | 40 
	rglString m_fileNameParties;                                     // 00000920 | 40 
	int m_numWorkshopItems;                                          // 00000960 | 4 
	steamWorkshopItem *m_workshopItems[32];                          // 00000964 | 80 
	/* FIX-3 */ byte undef_1[4];                                     // 000009E4 | 4 
}; // $9E8 [ #345 #252 ]

struct ALIGN(1) mbDeformKey // #29
{
	rglString m_name;                                                // 00000000 | 40 
	rglString m_id;                                                  // 00000040 | 40 
	int m_timePoint;                                                 // 00000080 | 4 
	float m_minValue;                                                // 00000084 | 4 
	float m_maxValue;                                                // 00000088 | 4 
	unsigned int m_flags;                                            // 0000008C | 4 
	rglVector3 *m_vertices;                                          // 00000090 | 4 
	int m_group;                                                     // 00000094 | 4 
}; // $98 [ #345 ]

struct ALIGN(1) mbDeformRec // #30
{
	rglString m_meshName;                                            // 00000000 | 40 
	int m_numVertices[5];                                            // 00000040 | 14 
	rglVector_int_ m_vertexNos[5];                                   // 00000054 | 3C 
}; // $90 [ #345 ]

struct ALIGN(1) mbDeformRecGroup // #31
{
	rglString m_metaMeshName;                                        // 00000000 | 40 
	int m_morphKey;                                                  // 00000040 | 4 
	rglVector_mbDeformRec_ m_deformRecs;                             // 00000044 | C 
}; // $50 [ #345 ]

struct ALIGN(1) mbDivision // #32
{
	int m_leaderAgentNo;                                             // 00000000 | 4 
	int m_movementOrder;                                             // 00000004 | 4 
	int m_ridingOrder;                                               // 00000008 | 4 
	int m_weaponUsageOrder;                                          // 0000000C | 4 
	bool m_fireAtWill;                                               // 00000010 | 1 
	/* FIX-4 */ byte undef_0[7];                                     // 00000011 | 7 
	mbMissionTimer m_allFireTimer;                                   // 00000018 | 10 
	mbMissionTimer m_leftFireTimer;                                  // 00000028 | 10 
	mbMissionTimer m_middleFireTimer;                                // 00000038 | 10 
	mbMissionTimer m_rightFireTimer;                                 // 00000048 | 10 
	int m_attackOrder;                                               // 00000058 | 4 
	int m_targetAgentNo;                                             // 0000005C | 4 
	rglVector4 m_targetPosition;                                     // 00000060 | 10 
	rglVector4 m_targetVelocity;                                     // 00000070 | 10 
	rglAiMeshFace *m_targetAiMeshFace;                               // 00000080 | 4 
	rglVector4 m_stepSize;                                           // 00000084 | 10 
	int m_numMembers;                                                // 00000094 | 4 
	int m_agentProximity;                                            // 00000098 | 4 
	int m_formRows;                                                  // 0000009C | 4 
	rglVector4 m_centerPosition;                                     // 000000A0 | 10 
	int m_parentDivisionNo;                                          // 000000B0 | 4 
	float m_rowOffset;                                               // 000000B4 | 4 
	bool m_mountedMembers[4096];                                     // 000000B8 | 1000 
}; // $10B8 [ #96 #368 ]

struct ALIGN(1) mbEvent // #35
{
	/* FIX-1 */ byte undef_0[12];                                    // 00000000 | C 
	int m_type;                                                      // 0000000C | 4 
	rglVector2 m_position;                                           // 00000010 | 8 
	rglVector2 m_landPosition;                                       // 00000018 | 8 
	float m_height;                                                  // 00000020 | 4 
	float m_radius;                                                  // 00000024 | 4 
	float m_visibility;                                              // 00000028 | 4 
	rglQuad *m_quad;                                                 // 0000002C | 4 
	rglQuad *m_landQuad;                                             // 00000030 | 4 
	rglEntity *m_entity;                                             // 00000034 | 4 
	int m_attackerPartyNo;                                           // 00000038 | 4 
	int m_defenderPartyNo;                                           // 0000003C | 4 
	mbGameTimer m_simulationTimer;                                   // 00000040 | 10 
	float m_simulationTime;                                          // 00000050 | 4 
	int m_numTroops;                                                 // 00000054 | 4 
	rglAppTimer m_soundTimer;                                        // 00000058 | 10 
	int m_soundChannel;                                              // 00000068 | 4 
	/* FIX-3 */ byte undef_1[4];                                     // 0000006C | 4 
}; // $70 [ #366 #54 #207 ]

struct ALIGN(1) mbFaceGenerator // #38
{
	int m_beardNo;                                                   // 00000000 | 4 
	int m_hairNo;                                                    // 00000004 | 4 
	int m_skinNo;                                                    // 00000008 | 4 
	int m_hairMaterialNo;                                            // 0000000C | 4 
	int m_faceTextureNo;                                             // 00000010 | 4 
	rglVector_mbSkin_ m_skins;                                       // 00000014 | C 
	int m_numSkins;                                                  // 00000020 | 4 
	float m_deformValues[63];                                        // 00000024 | FC 
	float m_age;                                                     // 00000120 | 4 
	float m_hairColor;                                               // 00000124 | 4 
	rglMetaMesh *m_cachedMetaMeshes[32][3];                          // 00000128 | 180 
	mbFaceKeys m_cachedKeys1[32];                                    // 000002A8 | 400 
	mbFaceKeys m_cachedKeys2[32];                                    // 000006A8 | 400 
	int m_cachedDnas[16];                                            // 00000AA8 | 40 
}; // $AE8 [ #40 ]

struct ALIGN(1) mbFaceTexture // #41
{
	rglString m_materialName;                                        // 00000000 | 40 
	rglMaterial *m_material;                                         // 00000040 | 4 
	rglMaterial *m_lodMaterial;                                      // 00000044 | 4 
	unsigned int m_color;                                            // 00000048 | 4 
	rglVector_int_ m_hairMaterials;                                  // 0000004C | C 
	rglColor m_hairColorGradiants[8];                                // 00000058 | 80 
	int m_numHairColorGradiants;                                     // 000000D8 | 4 
}; // $DC [ #345 #224 ]

struct ALIGN(1) mbFadingOutEntity // #43
{
	/* FIX-1 */ byte undef_0[12];                                    // 00000000 | C 
	rglEntity *m_entity;                                             // 0000000C | 4 
	mbMissionTimer m_fadeTimer;                                      // 00000010 | 10 
	float m_fadeDuration;                                            // 00000020 | 4 
	bool m_removeEntity;                                             // 00000024 | 1 
	bool m_fadeOut;                                                  // 00000025 | 1 
	/* FIX-3 */ byte undef_1[2];                                     // 00000026 | 2 
}; // $28 [ #96 ]

struct ALIGN(1) mbFaunaRec // #44
{
	int m_floraKindNo;                                               // 00000000 | 4 
	float m_radius;                                                  // 00000004 | 4 
	float m_threshold;                                               // 00000008 | 4 
	rglVector4 m_randomness;                                         // 0000000C | 10 
	float m_density;                                                 // 0000001C | 4 
}; // $20 [ #368 ]

struct ALIGN(1) mbFloraKind // #45
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned long long m_flags;                                      // 00000040 | 8 
	int m_numInstances;                                              // 00000048 | 4 
	float m_colonyRadius;                                            // 0000004C | 4 
	float m_colonyThreshold;                                         // 00000050 | 4 
	mbFloraKindInstance *m_instances;                                // 00000054 | 4 
}; // $58 [ #345 ]

struct ALIGN(1) mbFloraKindInstance // #46
{
	rglString m_id;                                                  // 00000000 | 40 
	rglMetaMesh *m_metaMesh;                                         // 00000040 | 4 
	rglVector4 m_minBound;                                           // 00000044 | 10 
	rglVector4 m_maxBound;                                           // 00000054 | 10 
	rglBody *m_body;                                                 // 00000064 | 4 
	rglBodyPart *m_bodyPart;                                         // 00000068 | 4 
}; // $6C [ #345 #368 ]

struct ALIGN(1) mbGameKeyManager // #51
{
	mbGameKey m_keys[95][2];                                         // 00000000 | BE0 
	mbGameKey m_storedKeys[95][2];                                   // 00000BE0 | BE0 
	unsigned int m_keyFlags[95];                                     // 000017C0 | 17C 
	rglString m_keyNames[95];                                        // 0000193C | 17C0 
	rglString m_keyConfigKeys[95];                                   // 000030FC | 17C0 
}; // $48BC [ #50 #345 ]

struct ALIGN(1) mbGameWeather // #55
{
	rglVector4 m_sampleValues[4];                                    // 00000000 | 40 
	rglVector2 m_samplePoints[4];                                    // 00000040 | 20 
}; // $60 [ #368 #366 ]

struct ALIGN(1) mbGameWindow // #56
{
	/* FIX-4 */ byte undef_0[4];                                     // 00000000 | 4 
	int m_mode;                                                      // 00000004 | 4 
	int m_value;                                                     // 00000008 | 4 
	int m_object2;                                                   // 0000000C | 4 
	int m_object;                                                    // 00000010 | 4 
	int m_sourceWindowNo;                                            // 00000014 | 4 
	rglString m_text;                                                // 00000018 | 40 
}; // $58 [ #345 ]

struct ALIGN(1) mbGroundPaintLayer // #59
{
	rglString m_groundSpecId;                                        // 00000000 | 40 
	int m_groundSpecNo;                                              // 00000040 | 4 
	unsigned int *m_cells;                                           // 00000044 | 4 
}; // $48 [ #345 ]

struct ALIGN(1) mbGroundSpec // #60
{
	rglString m_id;                                                  // 00000000 | 40 
	rglPhysicsMaterial *m_physicsMaterial;                           // 00000040 | 4 
	rglMaterial *m_material;                                         // 00000044 | 4 
	rglMaterial *m_multitexMaterial;                                 // 00000048 | 4 
	rglColor m_color;                                                // 0000004C | 10 
	float m_UVScale;                                                 // 0000005C | 4 
	unsigned int m_flags;                                            // 00000060 | 4 
}; // $64 [ #345 #224 ]

struct ALIGN(1) mbGroupWindow // #62
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglListBoxWidget *m_listBoxWidget;                               // 0000005C | 4 
	rglWidget *m_infoWidget;                                         // 00000060 | 4 
	rglSimpleButtonWidget *m_renameButtonWidget;                     // 00000064 | 4 
	rglSimpleButtonWidget *m_closeButtonWidget;                      // 00000068 | 4 
	int m_selectedIndex;                                             // 0000006C | 4 
	rglString m_className;                                           // 00000070 | 40 
	int m_troopNo;                                                   // 000000B0 | 4 
	int m_classNo;                                                   // 000000B4 | 4 
}; // $B8 [ #345 ]

struct ALIGN(1) mbInventoryWindow // #66
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglInventoryMenuWidget *m_inventoryGridWidgets[2];               // 00000058 | 8 
	rglScrollableWidget *m_scrollableWidgets[2];                     // 00000060 | 8 
	rglInventoryMenuWidget *m_equipmentGridWidgets[2];               // 00000068 | 8 
	rglWidget *m_goldWidgets[2];                                     // 00000070 | 8 
	rglWidget *m_nameWidgets[2];                                     // 00000078 | 8 
	rglWidget *m_hingeWidgets[4];                                    // 00000080 | 10 
	rglInventorySlotWidget *m_inventorySlotWidgets[2][96];           // 00000090 | 300 
	unsigned int m_inventoryFlags[2][96];                            // 00000390 | 300 
	int m_inventoryPrices[2][96];                                    // 00000690 | 300 
	int m_numInventoryGrids;                                         // 00000990 | 4 
	int m_numEquipmentGrids;                                         // 00000994 | 4 
	rglPopupWidget *m_popupWidget;                                   // 00000998 | 4 
	rglInventorySlotWidget *m_equipmentSlotWidgets[2][10];           // 0000099C | 50 
	unsigned int m_equipmentFlags[2][10];                            // 000009EC | 50 
	int m_equipmentPrices[2][10];                                    // 00000A3C | 50 
	rglWidget *m_totalCostWidget;                                    // 00000A8C | 4 
	rglWidget *m_armorRatingWidgets[2][4];                           // 00000A90 | 20 
	rglImageButtonWidget *m_characterButtonWidgets[2];               // 00000AB0 | 8 
	rglImageButtonWidget *m_characterShadowButtonWidgets[2];         // 00000AB8 | 8 
	int m_totalCost;                                                 // 00000AC0 | 4 
	rglSimpleButtonWidget *m_leaveButtonWidget;                      // 00000AC4 | 4 
	int m_draggingItem;                                              // 00000AC8 | 4 
	mbItem m_draggedItem;                                            // 00000ACC | 8 
	bool m_draggedItemIsBorrowed;                                    // 00000AD4 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000AD5 | 3 
	int m_draggedItemPrice;                                          // 00000AD8 | 4 
	int m_draggedSourceGridType;                                     // 00000ADC | 4 
	int m_notEnoughMoneyQuestionResult;                              // 00000AE0 | 4 
	int m_dumpQuestionResult;                                        // 00000AE4 | 4 
	bool m_isMainPartyTroop;                                         // 00000AE8 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00000AE9 | 3 
	int m_characterRotations[2];                                     // 00000AEC | 8 
	rglWidget *m_equipmentPanelBackgroundWidget;                     // 00000AF4 | 4 
}; // $AF8 [ #67 ]

struct ALIGN(1) mbItemKindVariation // #69
{
	rglString m_meshName;                                            // 00000000 | 40 
	unsigned long long m_flags;                                      // 00000040 | 8 
}; // $48 [ #345 ]

struct ALIGN(1) mbItemModifier // #70
{
	rglString m_format;                                              // 00000000 | 40 
	rglString m_id;                                                  // 00000040 | 40 
	float m_priceFactor;                                             // 00000080 | 4 
	float m_rarity;                                                  // 00000084 | 4 
}; // $88 [ #345 ]

struct ALIGN(1) mbLanguageManager // #71
{
	rglMap_rglString_rglString_ m_items;                             // 00000000 | 20 
	rglMap_rglString_bool_ m_repeatedItems;                          // 00000020 | 20 
	rglString m_notFoundText;                                        // 00000040 | 40 
	rglString m_languageCode;                                        // 00000080 | 40 
}; // $C0 [ #345 ]

struct ALIGN(1) mbMapIcon // #76
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned int m_flags;                                            // 00000040 | 4 
	rglString m_meshName;                                            // 00000044 | 40 
	float m_scale;                                                   // 00000084 | 4 
	int m_soundNo;                                                   // 00000088 | 4 
	rglVector4 m_offset;                                             // 0000008C | 10 
	mbSimpleTriggerManager m_simpleTriggers;                         // 0000009C | C 
}; // $A8 [ #345 #368 #160 ]

struct ALIGN(1) mbMesh // #82
{
	rglString m_meshName;                                            // 00000000 | 40 
	rglMesh *m_mesh;                                                 // 00000040 | 4 
	unsigned int m_flags;                                            // 00000044 | 4 
	rglString m_id;                                                  // 00000048 | 40 
	float m_translationX;                                            // 00000088 | 4 
	float m_translationY;                                            // 0000008C | 4 
	float m_translationZ;                                            // 00000090 | 4 
	float m_rotationX;                                               // 00000094 | 4 
	float m_rotationY;                                               // 00000098 | 4 
	float m_rotationZ;                                               // 0000009C | 4 
	float m_scaleX;                                                  // 000000A0 | 4 
	float m_scaleY;                                                  // 000000A4 | 4 
	float m_scaleZ;                                                  // 000000A8 | 4 
}; // $AC [ #345 ]

struct ALIGN(1) mbMissionGrid // #88
{
	rglIntVector2 m_size;                                            // 00000000 | 8 
	rglIntVector2 m_numCells;                                        // 00000008 | 8 
	float m_cellSizeFactor;                                          // 00000010 | 4 
	rglVector2 m_cellSize;                                           // 00000014 | 8 
	mbMissionGridCell **m_cells;                                     // 0000001C | 4 
	rglIntVector2 m_cellMask;                                        // 00000020 | 8 
	rglPool_mbMissionGridAgentNode_ m_nodePool;                      // 00000028 | 10 
}; // $38 [ #260 #366 ]

struct ALIGN(1) mbMissionGridIterator // #91
{
	rglIntVector2 m_minCoords;                                       // 00000000 | 8 
	rglIntVector2 m_maxCoords;                                       // 00000008 | 8 
	rglIntVector2 m_coords;                                          // 00000010 | 8 
	mbMissionGridAgentNode *m_node;                                  // 00000018 | 4 
}; // $1C [ #260 ]

struct ALIGN(1) mbMissionGridLocation // #92
{
	rglIntVector2 m_coords;                                          // 00000000 | 8 
	mbMissionGridAgentNode *m_node;                                  // 00000008 | 4 
}; // $C [ #260 ]

struct ALIGN(1) mbMissionTemplate // #94
{
	rglString m_id;                                                  // 00000000 | 40 
	rglString m_name;                                                // 00000040 | 40 
	unsigned int m_flags;                                            // 00000080 | 4 
	rglString m_description;                                         // 00000084 | 40 
	mbMissionTemplateGroup *m_groups;                                // 000000C4 | 4 
	int m_numGroups;                                                 // 000000C8 | 4 
	mbTriggerManager m_triggers;                                     // 000000CC | C 
}; // $D8 [ #345 #193 ]

struct ALIGN(1) mbMultiplayerClientWindow // #98
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglGameButtonWidget *m_exitButtonWidget;                         // 0000005C | 4 
	rglGameButtonWidget *m_connectButtonWidget;                      // 00000060 | 4 
	rglGameButtonWidget *m_addToFavoritesButtonWidget;               // 00000064 | 4 
	rglGameButtonWidget *m_removeFromFavoritesButtonWidget;          // 00000068 | 4 
	rglSimpleTextBoxWidget *m_passwordTextBoxWidget;                 // 0000006C | 4 
	rglWidget *m_passwordLabelWidget;                                // 00000070 | 4 
	rglComboButtonWidget *m_listTypeComboButtonWidget;               // 00000074 | 4 
	rglWidget *m_listTypeLabelWidget;                                // 00000078 | 4 
	rglGameButtonWidget *m_searchButtonWidget;                       // 0000007C | 4 
	rglGameButtonWidget *m_cancelButtonWidget;                       // 00000080 | 4 
	rglWidget *m_infoLabelWidget;                                    // 00000084 | 4 
	rglTableWidget *m_serverListTableWidget;                         // 00000088 | 4 
	rglString m_selectedServerIp;                                    // 0000008C | 40 
	int m_selectedServerPort;                                        // 000000CC | 4 
	bool m_exiting;                                                  // 000000D0 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 000000D1 | 3 
	int m_connecting;                                                // 000000D4 | 4 
	int m_searchType;                                                // 000000D8 | 4 
	rglString m_switchModuleName;                                    // 000000DC | 40 
	int m_switchModuleQuestionResult;                                // 0000011C | 4 
	int m_downloadModuleQuestionResult;                              // 00000120 | 4 
	int m_downloadNewVersionQuestionResult;                          // 00000124 | 4 
	int m_actionCode;                                                // 00000128 | 4 
	int m_startDelay;                                                // 0000012C | 4 
	rglWidget *m_filterInfoLabelWidget;                              // 00000130 | 4 
	rglCheckBoxWidget *m_filterCheckBoxWidget;                       // 00000134 | 4 
	rglContainerWidget *m_filterPanelContainerWidget;                // 00000138 | 4 
	rglCheckBoxWidget *m_filterPlayerCountCheckBoxWidget;            // 0000013C | 4 
	rglCheckBoxWidget *m_filterPasswordCheckBoxWidget;               // 00000140 | 4 
	rglCheckBoxWidget *m_filterVersionCheckBoxWidget;                // 00000144 | 4 
	rglWidget *m_filterPingLabelWidget;                              // 00000148 | 4 
	rglWidget *m_filterGameTypeLabelWidget;                          // 0000014C | 4 
	rglComboLabelWidget *m_filterPingComboLabelWidget;               // 00000150 | 4 
	rglComboLabelWidget *m_filterGameTypeComboLabelWidget;           // 00000154 | 4 
	rglWidget *m_filterBackgroundWidget;                             // 00000158 | 4 
	float m_searchStartTime;                                         // 0000015C | 4 
	int m_serialKeyQuestionResult;                                   // 00000160 | 4 
	rglString m_serialKey;                                           // 00000164 | 40 
}; // $1A4 [ #345 ]

struct ALIGN(1) mbMusicManager // #101
{
	int m_numTracks;                                                 // 00000000 | 4 
	mbMusicTrack *m_tracks;                                          // 00000004 | 4 
	unsigned int m_situationFlags;                                   // 00000008 | 4 
	unsigned int m_cultureFlags;                                     // 0000000C | 4 
	float *m_playTimes;                                              // 00000010 | 4 
	bool m_active[2];                                                // 00000014 | 2 
	/* FIX-4 */ byte undef_0[2];                                     // 00000016 | 2 
	rglAppTimer m_updateTimer;                                       // 00000018 | 10 
	FMOD__Sound *m_sound[2];                                         // 00000028 | 8 
	int m_trackNo[2];                                                // 00000030 | 8 
	FMOD__Channel *m_channel[2];                                     // 00000038 | 8 
	rglAppTimer m_fadeOutTimer[2];                                   // 00000040 | 20 
	bool m_fadeOut[2];                                               // 00000060 | 2 
	bool m_startImmediately;                                         // 00000062 | 1 
	/* FIX-4 */ byte undef_1[1];                                     // 00000063 | 1 
	FMOD__System *m_soundSystem;                                     // 00000064 | 4 
}; // $68 [ #207 ]

struct ALIGN(1) mbMusicTrack // #102
{
	unsigned int m_flags;                                            // 00000000 | 4 
	unsigned int m_continueFlags;                                    // 00000004 | 4 
	unsigned int m_cultureFlags;                                     // 00000008 | 4 
	unsigned int m_continueCultureFlags;                             // 0000000C | 4 
	rglString m_file;                                                // 00000010 | 40 
}; // $50 [ #345 ]

struct ALIGN(1) mbnetClientReplicationRow // #105
{
	int m_int;                                                       // 00000000 | 4 
	float m_float;                                                   // 00000004 | 4 
	rglVector3 m_vector;                                             // 00000008 | C 
	unsigned int m_packetNo;                                         // 00000014 | 4 
	float m_missionTime;                                             // 00000018 | 4 
}; // $1C [ #367 ]

struct ALIGN(1) mbnetHost // #108
{
	unsigned int m_udpSocket;                                        // 00000000 | 4 
	unsigned int m_tcpSocket;                                        // 00000004 | 4 
	mbnetAddress m_address;                                          // 00000008 | 8 
	mbnetAddress m_receiveAddress;                                   // 00000010 | 8 
	char m_receiveBuffer[4096];                                      // 00000018 | 1000 
	int m_receivedSize;                                              // 00001018 | 4 
}; // $101C [ #103 ]

struct ALIGN(1) mbnetHttpManager // #110
{
	rglCriticalSection m_requestCriticalSection;                     // 00000000 | 18 
	std__deque_mbnetHttpRequest_P_std__allocator_mbnetHttpRequest_P___ m_requests; // 00000018 | 14 
}; // $2C [ #231 ]

struct ALIGN(1) mbnetHttpRequest // #111
{
	rglString m_url;                                                 // 00000000 | 40 
	rglString m_response;                                            // 00000040 | 40 
	bool m_raw;                                                      // 00000080 | 1 
	bool m_succeeded;                                                // 00000081 | 1 
	/* FIX-4 */ byte undef_0[2];                                     // 00000082 | 2 
	int m_successScriptNo;                                           // 00000084 | 4 
	int m_failureScriptNo;                                           // 00000088 | 4 
	int m_timeout;                                                   // 0000008C | 4 
	rglString m_user_agent;                                          // 00000090 | 40 
	bool m_post;                                                     // 000000D0 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 000000D1 | 3 
	rglString m_post_data;                                           // 000000D4 | 40 
}; // $114 [ #345 ]

struct ALIGN(1) mbnetNetworkClient // #112
{
	mbnetAddress m_address;                                          // 00000000 | 8 
	double m_lastReceiveTime;                                        // 00000008 | 8 
	bool m_kicked;                                                   // 00000010 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000011 | 3 
	rglString m_downloadSiteId;                                      // 00000014 | 40 
	rglString m_downloadSiteFile;                                    // 00000054 | 40 
	rglVector_unsigned_char_ m_downloadedChunks;                     // 00000094 | C 
	int m_maxDownloadedChunk;                                        // 000000A0 | 4 
	float m_lastChunkRequestTime;                                    // 000000A4 | 4 
	rglVector_float_ m_chunkRequestTimes;                            // 000000A8 | C 
	bool m_downloadingSite;                                          // 000000B4 | 1 
	bool m_fastDL;                                                   // 000000B5 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 000000B6 | 2 
	rglString m_fastDLUrl;                                           // 000000B8 | 40 
	void *m_fastDLThread;                                            // 000000F8 | 4 
	bool m_downloadedSiteSco;                                        // 000000FC | 1 
	bool m_downloadedSiteTxt;                                        // 000000FD | 1 
	/* FIX-4 */ byte undef_2[2];                                     // 000000FE | 2 
	unsigned long long m_textDescriptorChecksum;                     // 00000100 | 8 
	unsigned long long m_sceneObjFileChecksum;                       // 00000108 | 8 
}; // $110 [ #103 #345 ]

struct ALIGN(1) mbnetNetworkClientThreadArgs // #113
{
	rglString m_ip;                                                  // 00000000 | 40 
	int m_port;                                                      // 00000040 | 4 
	rglString m_password;                                            // 00000044 | 40 
	int m_extendedVersion;                                           // 00000084 | 4 
}; // $88 [ #345 ]

struct ALIGN(1) mbnetNetworkServer // #115
{
	mbnetAddress m_address;                                          // 00000000 | 8 
	bool m_broadcastChat;                                            // 00000008 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000009 | 3 
	int m_uploadLimit;                                               // 0000000C | 4 
	double m_lastAnnounceTime;                                       // 00000010 | 8 
	int m_lastAnnouncePlayerNo;                                      // 00000018 | 4 
	rglVector_int_ m_bannedIds;                                      // 0000001C | C 
	rglVector_float_ m_banDurations;                                 // 00000028 | C 
	int m_authKeys[10];                                              // 00000034 | 28 
	int m_curAuthkeyNo;                                              // 0000005C | 4 
	double m_sendTime;                                               // 00000060 | 8 
	rglMap_unsigned_int_rglString_ m_anonymousMap;                   // 00000068 | 20 
}; // $88 [ #103 ]

struct ALIGN(1) mbnetPacketDeliveryControlInfo // #116
{
	unsigned int m_packetNo;                                         // 00000000 | 4 
	/* FIX-4 */ byte undef_0[4];                                     // 00000004 | 4 
	double m_sendTime;                                               // 00000008 | 8 
	int m_numEventEntries;                                           // 00000010 | 4 
	int m_numReplicationEntries;                                     // 00000014 | 4 
	int m_eventEntries[250];                                         // 00000018 | 3E8 
	mbnetPacketDeliveryControlReplicationEntry m_replicationEntries[2048]; // 00000400 | 4000 
}; // $4400 [ #117 ]

struct ALIGN(1) mbnetPeer // #118
{
	int m_playerNo;                                                  // 00000000 | 4 
	int m_randomId;                                                  // 00000004 | 4 
	mbnetAddress m_address;                                          // 00000008 | 8 
	rglVector_mbnetBuffer_ m_outgoingPackets;                        // 00000010 | C 
	rglVector_mbnetBuffer_ m_incomingPackets;                        // 0000001C | C 
}; // $28 [ #103 ]

struct ALIGN(1) mbnetPlayer // #119
{
	int m_status;                                                    // 00000000 | 4 
	/* FIX-4 */ byte undef_0[4];                                     // 00000004 | 4 
	rglAppTimer m_connectDelayTimer;                                 // 00000008 | 10 
	double m_connectTime;                                            // 00000018 | 8 
	bool m_disconnecting;                                            // 00000020 | 1 
	/* FIX-4 */ byte undef_1[7];                                     // 00000021 | 7 
	rglAppTimer m_disconnectTimer;                                   // 00000028 | 10 
	long long m_sessionId;                                           // 00000038 | 8 
	double m_authTime;                                               // 00000040 | 8 
	bool m_authPassed;                                               // 00000048 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00000049 | 3 
	mbnetPeer m_peer;                                                // 0000004C | 28 
	int m_privilege;                                                 // 00000074 | 4 
	bool m_anonymous;                                                // 00000078 | 1 
	/* FIX-4 */ byte undef_3[3];                                     // 00000079 | 3 
	rglString m_anonymousName;                                       // 0000007C | 40 
	rglString m_name;                                                // 000000BC | 40 
	rglString m_nameLower;                                           // 000000FC | 40 
	int m_gender;                                                    // 0000013C | 4 
	int m_bannerNo;                                                  // 00000140 | 4 
	/* FIX-4 */ byte undef_4[4];                                     // 00000144 | 4 
	mbFaceKeys m_faceKeys;                                           // 00000148 | 20 
	int m_bloodStains;                                               // 00000168 | 4 
	bool m_particlesEnabled;                                         // 0000016C | 1 
	/* FIX-4 */ byte undef_5[3];                                     // 0000016D | 3 
	mbnetReplication_mbnetPlayerReplicationRow_ m_replication;       // 00000170 | 18 
	unsigned int m_highestReceivedPacketNo;                          // 00000188 | 4 
	unsigned int m_highestConfirmedSentPacketNo;                     // 0000018C | 4 
	bool m_useDynamicPacketSendPeriod;                               // 00000190 | 1 
	bool m_readyToSpawn;                                             // 00000191 | 1 
	/* FIX-4 */ byte undef_6[2];                                     // 00000192 | 2 
	int m_agentNo;                                                   // 00000194 | 4 
	bool m_agentIsControlled;                                        // 00000198 | 1 
	/* FIX-4 */ byte undef_7[3];                                     // 00000199 | 3 
	int m_teamNo;                                                    // 0000019C | 4 
	int m_troopNo;                                                   // 000001A0 | 4 
	int m_gold;                                                      // 000001A4 | 4 
	bool m_ready;                                                    // 000001A8 | 1 
	/* FIX-4 */ byte undef_8[3];                                     // 000001A9 | 3 
	int m_entryGroupNo;                                              // 000001AC | 4 
	bool m_isMuted;                                                  // 000001B0 | 1 
	bool m_isMutedGlobally;                                          // 000001B1 | 1 
	/* FIX-4 */ byte undef_9[2];                                     // 000001B2 | 2 
	int m_items[10];                                                 // 000001B4 | 28 
	int m_itemsPickedUp[10];                                         // 000001DC | 28 
	mbSlots m_slots;                                                 // 00000204 | C 
	rglVector_mbnetEvent_ m_events;                                  // 00000210 | C 
	rglVector_mbnetEvent_ m_oneTimeEvents;                           // 0000021C | C 
	double m_oneTimeEventSendTime;                                   // 00000228 | 8 
	rglRecycledVector_mbnetPacketDeliveryControlInfo_ m_packetDeliveryControl; // 00000230 | 18 
	rglVector_unsigned_int_ m_unconfirmedReceivedPacketNos;          // 00000248 | C 
	rglVector_unsigned_int_ m_unconfirmedSentPacketNos;              // 00000254 | C 
	rglVector_mbnetBuffer_ m_stalledPackets;                         // 00000260 | C 
	rglVector_unsigned_int_ m_stalledHighestReceivedPacketNos;       // 0000026C | C 
	double m_lastActivityTime;                                       // 00000278 | 8 
	double m_lastSendTime;                                           // 00000280 | 8 
	unsigned long long m_clientMissionTime;                          // 00000288 | 8 
	rglVector4 m_position;                                           // 00000290 | 10 
	rglVector2 m_speed;                                              // 000002A0 | 8 
	float m_movementDirf;                                            // 000002A8 | 4 
	/* FIX-4 */ byte undef_10[4];                                    // 000002AC | 4 
	unsigned long long m_serverMissionTime;                          // 000002B0 | 8 
	short m_score;                                                   // 000002B8 | 2 
	short m_kills;                                                   // 000002BA | 2 
	short m_deaths;                                                  // 000002BC | 2 
	short m_ping;                                                    // 000002BE | 2 
	int m_totalPingTime;                                             // 000002C0 | 4 
	int m_numPings;                                                  // 000002C4 | 4 
	bool m_pinging;                                                  // 000002C8 | 1 
	/* FIX-4 */ byte undef_11[7];                                    // 000002C9 | 7 
	double m_pingSendTime;                                           // 000002D0 | 8 
	double m_pingUpdateTime;                                         // 000002D8 | 8 
	float m_packetSendPeriod;                                        // 000002E0 | 4 
	int m_packetAverageSize;                                         // 000002E4 | 4 
	int m_packetMaxSize;                                             // 000002E8 | 4 
	int m_uploadLimit;                                               // 000002EC | 4 
	double m_packetSendTime;                                         // 000002F0 | 8 
	mbnetRandomGenerator m_randomGenerator;                          // 000002F8 | 8 
	bool m_inMenu;                                                   // 00000300 | 1 
	/* FIX-4 */ byte undef_12[3];                                    // 00000301 | 3 
	int m_numBytesSent;                                              // 00000304 | 4 
	int m_numBytesSentPerSec;                                        // 00000308 | 4 
	int m_numPacketSends;                                            // 0000030C | 4 
	int m_prevNumPacketSends;                                        // 00000310 | 4 
	int m_numPacketSendsFailed;                                      // 00000314 | 4 
	int m_totalNumPacketSendsFailed;                                 // 00000318 | 4 
	float m_cachedPriority;                                          // 0000031C | 4 
	bool m_hasCachedReplicationPriority;                             // 00000320 | 1 
	/* FIX-4 */ byte undef_13[3];                                    // 00000321 | 3 
	int m_agentReplicationIndex;                                     // 00000324 | 4 
	int m_playerReplicationIndex;                                    // 00000328 | 4 
	int m_extendedVersion;                                           // 0000032C | 4 
}; // $330 [ #207 #118 #345 #40 #169 #368 #366 #125 ]

struct ALIGN(1) mbnetPlayerAgentData // #120
{
	unsigned long long m_updateTime;                                 // 00000000 | 8 
	int m_update;                                                    // 00000008 | 4 
	rglVector4 m_position;                                           // 0000000C | 10 
	rglVector2 m_speed;                                              // 0000001C | 8 
	float m_movementDirf;                                            // 00000024 | 4 
	unsigned long long m_time;                                       // 00000028 | 8 
	mbAgentControl m_control;                                        // 00000030 | 28 
	unsigned long long m_interval;                                   // 00000058 | 8 
}; // $60 [ #368 #366 #9 ]

struct ALIGN(1) mbnetPrioritySelector // #122
{
	int m_cursor;                                                    // 00000000 | 4 
	mbnetPrioritySelectorEntry m_entries[10000];                     // 00000004 | 1D4C0 
}; // $1D4C4 [ #123 ]

struct ALIGN(1) mbnetProfile // #124
{
	rglString m_name;                                                // 00000000 | 40 
	int m_gender;                                                    // 00000040 | 4 
	int m_bannerNo;                                                  // 00000044 | 4 
	mbFaceKeys m_faceKeys;                                           // 00000048 | 20 
	rglVector_mbnetServer_ m_favorites;                              // 00000068 | C 
	int m_serverListType;                                            // 00000074 | 4 
	int m_filterServers;                                             // 00000078 | 4 
	int m_filterPlayerCount;                                         // 0000007C | 4 
	int m_filterPassword;                                            // 00000080 | 4 
	int m_filterPing;                                                // 00000084 | 4 
	int m_filterGameType;                                            // 00000088 | 4 
	int m_filterVersion;                                             // 0000008C | 4 
}; // $90 [ #345 #40 ]

struct ALIGN(1) mbnetServer // #126
{
	rglString m_ip;                                                  // 00000000 | 40 
	int m_ping;                                                      // 00000040 | 4 
	int m_port;                                                      // 00000044 | 4 
	int m_siteNo;                                                    // 00000048 | 4 
	int m_missionTemplateNo;                                         // 0000004C | 4 
	rglString m_name;                                                // 00000050 | 40 
	rglString m_moduleName;                                          // 00000090 | 40 
	rglString m_siteName;                                            // 000000D0 | 40 
	rglString m_gameTypeName;                                        // 00000110 | 40 
	int m_numPlayers;                                                // 00000150 | 4 
	int m_maxNumPlayers;                                             // 00000154 | 4 
	int m_passworded;                                                // 00000158 | 4 
	int m_dedicated;                                                 // 0000015C | 4 
	int m_gameVersion;                                               // 00000160 | 4 
	int m_moduleVersion;                                             // 00000164 | 4 
	rglVector_int_ m_moduleSettings;                                 // 00000168 | C 
	int m_lastTryTime;                                               // 00000174 | 4 
	int m_numTries;                                                  // 00000178 | 4 
	int m_extendedVersion;                                           // 0000017C | 4 
}; // $180 [ #345 ]

struct ALIGN(1) mbnetServerReplicationRow // #127
{
	int m_int;                                                       // 00000000 | 4 
	float m_float;                                                   // 00000004 | 4 
	rglVector3 m_vector;                                             // 00000008 | C 
	unsigned int m_packetNo;                                         // 00000014 | 4 
}; // $18 [ #367 ]

struct ALIGN(1) mbNotes // #130
{
	int m_values[16];                                                // 00000000 | 40 
	rglString m_texts[16];                                           // 00000040 | 400 
	int m_tableauMaterialNo;                                         // 00000440 | 4 
	bool m_available;                                                // 00000444 | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 00000445 | 3 
}; // $448 [ #345 ]

struct ALIGN(1) mbOptionsWindowHelper // #132
{
	rglVerticalScrollableWidget *m_scrollableWidget;                 // 00000000 | 4 
	rglTabWidget *m_tabWidget;                                       // 00000004 | 4 
	rglWidget *m_gameLogoWidget;                                     // 00000008 | 4 
	rglGameButtonWidget *m_doneButtonWidget;                         // 0000000C | 4 
	rglWidget *m_difficultyLabelWidget;                              // 00000010 | 4 
	rglWidget *m_overallQualityLabelWidget;                          // 00000014 | 4 
	rglComboButtonWidget *m_overallQualityComboButtonWidget;         // 00000018 | 4 
	int m_gameWindowNo;                                              // 0000001C | 4 
	int m_sourceWindowNo;                                            // 00000020 | 4 
	int m_nextWindowNo;                                              // 00000024 | 4 
	bool m_closing;                                                  // 00000028 | 1 
	bool m_reloading;                                                // 00000029 | 1 
	/* FIX-4 */ byte undef_0[2];                                     // 0000002A | 2 
	unsigned int m_textColor;                                        // 0000002C | 4 
	float m_labelY;                                                  // 00000030 | 4 
	float m_controlY;                                                // 00000034 | 4 
	float m_labelX;                                                  // 00000038 | 4 
	float m_checkBoxX;                                               // 0000003C | 4 
	float m_comboLabelX;                                             // 00000040 | 4 
	float m_sliderX;                                                 // 00000044 | 4 
	float m_valueLabelX;                                             // 00000048 | 4 
	float m_comboButtonX;                                            // 0000004C | 4 
	rglVector2 m_labelSize;                                          // 00000050 | 8 
	bool m_presetChanged;                                            // 00000058 | 1 
	bool m_restartRequired;                                          // 00000059 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 0000005A | 2 
	rglVector_rglString_ m_sceneRestartSettings;                     // 0000005C | C 
	rglVector_rglString_ m_gameRestartSettings;                      // 00000068 | C 
	bool m_vsync;                                                    // 00000074 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00000075 | 3 
	int m_textureQuality;                                            // 00000078 | 4 
	int m_bloodStains;                                               // 0000007C | 4 
	bool m_particleSystems;                                          // 00000080 | 1 
	/* FIX-4 */ byte undef_3[3];                                     // 00000081 | 3 
	int m_multisampleType;                                           // 00000084 | 4 
	int m_highDynamicRange;                                          // 00000088 | 4 
	int m_shaderQuality;                                             // 0000008C | 4 
	int m_fxaa;                                                      // 00000090 | 4 
	int m_postProcess;                                               // 00000094 | 4 
	bool m_depthEffects;                                             // 00000098 | 1 
	bool m_instancing;                                               // 00000099 | 1 
	/* FIX-4 */ byte undef_4[2];                                     // 0000009A | 2 
	int m_anisotropicFiltering;                                      // 0000009C | 4 
	int m_floraLodDetail;                                            // 000000A0 | 4 
	int m_maxFrameRate;                                              // 000000A4 | 4 
}; // $A8 [ #366 ]

struct ALIGN(1) mbParticleSystem // #133
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned int m_flags;                                            // 00000040 | 4 
	rglString m_particleMeshName;                                    // 00000044 | 40 
	rglMesh *m_particleMesh;                                         // 00000084 | 4 
	float m_numParticles;                                            // 00000088 | 4 
	float m_life;                                                    // 0000008C | 4 
	float m_damping;                                                 // 00000090 | 4 
	float m_gravityStrength;                                         // 00000094 | 4 
	float m_turbulenceSize;                                          // 00000098 | 4 
	float m_turbulenceStrength;                                      // 0000009C | 4 
	rglParticleSystemKey m_alphaKeys[2];                             // 000000A0 | 10 
	rglParticleSystemKey m_redKeys[2];                               // 000000B0 | 10 
	rglParticleSystemKey m_greenKeys[2];                             // 000000C0 | 10 
	rglParticleSystemKey m_blueKeys[2];                              // 000000D0 | 10 
	rglParticleSystemKey m_scaleKeys[2];                             // 000000E0 | 10 
	rglVector4 m_emitBoxSize;                                        // 000000F0 | 10 
	rglVector4 m_emitVelocity;                                       // 00000100 | 10 
	float m_emitRandomness;                                          // 00000110 | 4 
	float m_angularSpeed;                                            // 00000114 | 4 
	float m_angularDamping;                                          // 00000118 | 4 
}; // $11C [ #345 #297 #368 ]

struct ALIGN(1) mbParty // #135
{
	/* FIX-1 */ byte undef_0[12];                                    // 00000000 | C 
	rglString m_name;                                                // 0000000C | 40 
	bool m_renamed;                                                  // 0000004C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000004D | 3 
	rglString m_id;                                                  // 00000050 | 40 
	rglVector4 m_position;                                           // 00000090 | 10 
	rglVector2 m_direction;                                          // 000000A0 | 8 
	float m_bearing;                                                 // 000000A8 | 4 
	rglString m_extraText;                                           // 000000AC | 40 
	float m_radius;                                                  // 000000EC | 4 
	float m_visibility;                                              // 000000F0 | 4 
	int m_spotted;                                                   // 000000F4 | 4 
	int m_factionNo;                                                 // 000000F8 | 4 
	int m_personality;                                               // 000000FC | 4 
	int m_ignoreWithPlayerParty;                                     // 00000100 | 4 
	float m_banditAttraction;                                        // 00000104 | 4 
	float m_morale;                                                  // 00000108 | 4 
	int m_eventNo;                                                   // 0000010C | 4 
	int m_partyTemplateNo;                                           // 00000110 | 4 
	int m_menuNo;                                                    // 00000114 | 4 
	int m_bannerMapIconNo;                                           // 00000118 | 4 
	int m_extraMapIconNo;                                            // 0000011C | 4 
	float m_extraMapIconUpDownDistance;                              // 00000120 | 4 
	float m_extraMapIconUpDownFrequency;                             // 00000124 | 4 
	float m_extraMapIconRotateFrequency;                             // 00000128 | 4 
	float m_extraMapIconFadeFrequency;                               // 0000012C | 4 
	unsigned long long m_flags;                                      // 00000130 | 8 
	rglVector_mbPartyStack_ m_stacks;                                // 00000138 | C 
	int m_numStacks;                                                 // 00000144 | 4 
	int m_marshall;                                                  // 00000148 | 4 
	float m_speed;                                                   // 0000014C | 4 
	float m_speedMultiplier;                                         // 00000150 | 4 
	bool m_updateSpeed;                                              // 00000154 | 1 
	bool m_updateLabel;                                              // 00000155 | 1 
	/* FIX-4 */ byte undef_2[2];                                     // 00000156 | 2 
	rglVector_int_ m_attachedPartyNos;                               // 00000158 | C 
	int m_parentPartyNo;                                             // 00000164 | 4 
	bool m_isAttached;                                               // 00000168 | 1 
	/* FIX-4 */ byte undef_3[7];                                     // 00000169 | 7 
	mbGameTimer m_behaviorSelectTimer;                               // 00000170 | 10 
	float m_behaviorSelectTime;                                      // 00000180 | 4 
	int m_defaultBehavior;                                           // 00000184 | 4 
	int m_defaultBehaviorObject;                                     // 00000188 | 4 
	rglVector2 m_defaultBehaviorPosition;                            // 0000018C | 8 
	float m_patrolRadius;                                            // 00000194 | 4 
	bool m_patrolling;                                               // 00000198 | 1 
	/* FIX-4 */ byte undef_4[7];                                     // 00000199 | 7 
	mbGameTimer m_patrolTimer;                                       // 000001A0 | 10 
	rglAppTimer m_walkSoundTimer;                                    // 000001B0 | 10 
	int m_behavior;                                                  // 000001C0 | 4 
	int m_behaviorObject;                                            // 000001C4 | 4 
	rglVector2 m_behaviorPosition;                                   // 000001C8 | 8 
	rglVector2 m_positionRandomness;                                 // 000001D0 | 8 
	float m_behaviorUpdateTime;                                      // 000001D8 | 4 
	/* FIX-4 */ byte undef_5[4];                                     // 000001DC | 4 
	mbGameTimer m_behaviorUpdateTimer;                               // 000001E0 | 10 
	mbGameTimer m_movementUpdateTimer;                               // 000001F0 | 10 
	float m_initiative;                                              // 00000200 | 4 
	float m_helpfulness;                                             // 00000204 | 4 
	rglVector2 m_targetPosition;                                     // 00000208 | 8 
	rglVector2 m_destination;                                        // 00000210 | 8 
	int m_pathManifoldFaceNos[1024];                                 // 00000218 | 1000 
	rglVector4 m_pathPositions[1024];                                // 00001218 | 4000 
	int m_pathBegin;                                                 // 00005218 | 4 
	int m_pathEnd;                                                   // 0000521C | 4 
	rglQuad *m_quad;                                                 // 00005220 | 4 
	int m_regionType;                                                // 00005224 | 4 
	int m_pathValidity;                                              // 00005228 | 4 
	int m_targetManifoldFaceNo;                                      // 0000522C | 4 
	int m_computePath;                                               // 00005230 | 4 
	bool m_computePathFailed;                                        // 00005234 | 1 
	/* FIX-4 */ byte undef_6[3];                                     // 00005235 | 3 
	rglVector2 m_escortedPartyPosition;                              // 00005238 | 8 
	int m_moveMode;                                                  // 00005240 | 4 
	rglVector2 m_moveTargetPosition;                                 // 00005244 | 8 
	rglQuad *m_moveTargetQuad;                                       // 0000524C | 4 
	int m_moveTargetPartyNo;                                         // 00005250 | 4 
	/* FIX-4 */ byte undef_7[4];                                     // 00005254 | 4 
	mbGameTimer m_hideTimer;                                         // 00005258 | 10 
	rglEntity *m_entity;                                             // 00005268 | 4 
	float m_trackInterval;                                           // 0000526C | 4 
	rglVector4 m_trackPosition;                                      // 00005270 | 10 
	mbSlots m_slots;                                                 // 00005280 | C 
	rglMesh *m_mapLegendMesh;                                        // 0000528C | 4 
	rglMesh *m_mapIconMesh;                                          // 00005290 | 4 
	rglMesh *m_bannerMapIconMesh;                                    // 00005294 | 4 
	rglMesh *m_extraMapIconMesh;                                     // 00005298 | 4 
	rglVector_int_ m_particleSystemNos;                              // 0000529C | C 
	bool m_updateParticleSystems;                                    // 000052A8 | 1 
	/* FIX-4 */ byte undef_8[3];                                     // 000052A9 | 3 
	mbNotes m_notes;                                                 // 000052AC | 448 
	/* FIX-4 */ byte undef_9[4];                                     // 000056F4 | 4 
	mbGameTimer m_ignorePlayerTimer;                                 // 000056F8 | 10 
	int m_pathLength;                                                // 00005708 | 4 
	/* FIX-3 */ byte undef_10[4];                                    // 0000570C | 4 
}; // $5710 [ #345 #368 #366 #54 #207 #169 #130 ]

struct ALIGN(1) mbPartyDnas // #136
{
	mbPartyStackDnas m_stackDnas[32];                                // 00000000 | 1000 
}; // $1000 [ #138 ]

struct ALIGN(1) mbPartyTemplate // #140
{
	rglString m_name;                                                // 00000000 | 40 
	rglString m_id;                                                  // 00000040 | 40 
	unsigned long long m_flags;                                      // 00000080 | 8 
	int m_menuNo;                                                    // 00000088 | 4 
	int m_factionNo;                                                 // 0000008C | 4 
	int m_personality;                                               // 00000090 | 4 
	int m_numCreated;                                                // 00000094 | 4 
	int m_numDestroyed;                                              // 00000098 | 4 
	int m_numDestroyedByPlayer;                                      // 0000009C | 4 
	mbPartyStackTemplate m_stacks[6];                                // 000000A0 | 60 
	mbSlots m_slots;                                                 // 00000100 | C 
	/* FIX-3 */ byte undef_0[4];                                     // 0000010C | 4 
}; // $110 [ #345 #139 #169 ]

struct ALIGN(1) mbPartyWindow // #141
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglVector_mbPresentationContainer_P_ m_presentationContainers;   // 0000005C | C 
	rglSimpleButtonWidget *m_doneButtonWidget;                       // 00000068 | 4 
	rglSimpleButtonWidget *m_resetButtonWidget;                      // 0000006C | 4 
	rglWidget *m_upgradeLabelWidget;                                 // 00000070 | 4 
	rglWidget *m_upgradeCostWidget;                                  // 00000074 | 4 
	rglWidget *m_prisonerManagementWidget;                           // 00000078 | 4 
	rglSimpleButtonWidget *m_talkButtonWidget;                       // 0000007C | 4 
	rglSimpleButtonWidget *m_upgrade1ButtonWidget;                   // 00000080 | 4 
	rglSimpleButtonWidget *m_upgrade2ButtonWidget;                   // 00000084 | 4 
	rglSimpleButtonWidget *m_troopUpgradesButtonWidget;              // 00000088 | 4 
	rglSimpleButtonWidget *m_actionButtonWidget;                     // 0000008C | 4 
	rglSimpleButtonWidget *m_moveUpButtonWidget;                     // 00000090 | 4 
	rglSimpleButtonWidget *m_moveDownButtonWidget;                   // 00000094 | 4 
	rglWidget *m_goldWidgets[2];                                     // 00000098 | 8 
	rglWidget *m_weeklyCostWidget;                                   // 000000A0 | 4 
	rglWidget *m_maxCompanionsWidget;                                // 000000A4 | 4 
	rglWidget *m_maxPrisonersWidget;                                 // 000000A8 | 4 
	rglWidget *m_chooseCompanionsLabelWidget;                        // 000000AC | 4 
	rglWidget *m_choosePrisonersLabelWidget;                         // 000000B0 | 4 
	rglWidget *m_skillsLabelWidget;                                  // 000000B4 | 4 
	rglWidget *m_troopNameWidget;                                    // 000000B8 | 4 
	rglWidget *m_troopClassLabelWidget;                              // 000000BC | 4 
	rglWidget *m_troopMoraleWidget;                                  // 000000C0 | 4 
	rglSimpleButtonWidget *m_troopClassButtonWidget;                 // 000000C4 | 4 
	rglWidget *m_moraleWidget;                                       // 000000C8 | 4 
	rglBoardWidget *m_infoBoardWidget;                               // 000000CC | 4 
	rglBoardWidget *m_partyBoardWidgets[2];                          // 000000D0 | 8 
	rglBoardWidget *m_skillsBoardWidget;                             // 000000D8 | 4 
	rglScrollableWidget *m_skillsScrollableWidget;                   // 000000DC | 4 
	rglScrollableWidget *m_memberScrollableWidgets[2][2];            // 000000E0 | 10 
	rglContainerWidget *m_memberContainerWidgets[2][2];              // 000000F0 | 10 
	rglSimpleButtonWidget *m_memberButtonWidgets[2][2][512];         // 00000100 | 2000 
	float m_memberButtonHeight[2];                                   // 00002100 | 8 
	float m_memberButtonY[2];                                        // 00002108 | 8 
	int m_stackNos[2][2][512];                                       // 00002110 | 2000 
	int m_numPartyMenus;                                             // 00004110 | 4 
	bool m_showCompanions[2];                                        // 00004114 | 2 
	bool m_showPrisoners[2];                                         // 00004116 | 2 
	int m_selectedMenu;                                              // 00004118 | 4 
	int m_selectedSubMenu;                                           // 0000411C | 4 
	int m_selectedItem;                                              // 00004120 | 4 
	mbPartyStack m_stacks[2][512];                                   // 00004124 | 7000 
	int m_numStacks[2];                                              // 0000B124 | 8 
	int m_gold[2];                                                   // 0000B12C | 8 
	float m_morale[2];                                               // 0000B134 | 8 
	mbPartyDnas m_dnas;                                              // 0000B13C | 1000 
	bool m_noAction;                                                 // 0000C13C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000C13D | 3 
	rglWidget *m_characterImageWidget;                               // 0000C140 | 4 
	rglContainerWidget *m_presentationContainerWidget;               // 0000C144 | 4 
}; // $C148 [ #137 #136 ]

struct ALIGN(1) mbPostEffect // #142
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned int m_flags;                                            // 00000040 | 4 
	int m_tonemapOp;                                                 // 00000044 | 4 
	rglVector4 m_params1;                                            // 00000048 | 10 
	rglVector4 m_params2;                                            // 00000058 | 10 
	rglVector4 m_params3;                                            // 00000068 | 10 
}; // $78 [ #345 #368 ]

struct ALIGN(1) mbPresentation // #143
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned int m_flags;                                            // 00000040 | 4 
	mbSimpleTriggerManager m_simpleTriggers;                         // 00000044 | C 
	int m_meshNo;                                                    // 00000050 | 4 
}; // $54 [ #345 #160 ]

struct ALIGN(1) mbPresentationContainer // #144
{
	rglVector_rglWidget_P_ m_overlays;                               // 00000000 | C 
	int m_presentationNo;                                            // 0000000C | 4 
	unsigned int m_flags;                                            // 00000010 | 4 
	/* FIX-4 */ byte undef_0[4];                                     // 00000014 | 4 
	rglAppTimer m_timer;                                             // 00000018 | 10 
	float m_duration;                                                // 00000028 | 4 
	rglContainerWidget *m_containerWidget;                           // 0000002C | 4 
	int m_scrollableOverlayNo;                                       // 00000030 | 4 
	/* FIX-3 */ byte undef_1[4];                                     // 00000034 | 4 
}; // $38 [ #207 ]

struct ALIGN(1) mbPresentationWindow // #146
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
}; // $98 [ #144 ]

struct ALIGN(1) mbProfileWindow // #147
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglSimpleButtonWidget *m_exitButtonWidget;                       // 0000005C | 4 
	rglGameButtonWidget *m_createButtonWidget;                       // 00000060 | 4 
	rglSimpleButtonWidget *m_joinButtonWidget;                       // 00000064 | 4 
	rglSimpleButtonWidget *m_hostButtonWidget;                       // 00000068 | 4 
	rglGameButtonWidget *m_editButtonWidget;                         // 0000006C | 4 
	rglGameButtonWidget *m_deleteButtonWidget;                       // 00000070 | 4 
	rglComboButtonWidget *m_profilesComboButtonWidget;               // 00000074 | 4 
	rglWidget *m_chooseProfileLabelWidget;                           // 00000078 | 4 
	rglWidget *m_multiplayerLabelWidget;                             // 0000007C | 4 
	int m_createDialogResult;                                        // 00000080 | 4 
	int m_editDialogResult;                                          // 00000084 | 4 
	int m_deleteDialogResult;                                        // 00000088 | 4 
	rglString m_name;                                                // 0000008C | 40 
	int m_gender;                                                    // 000000CC | 4 
	rglWidget *m_characterImageWidget;                               // 000000D0 | 4 
	rglImageButtonWidget *m_characterImageButtonWidget;              // 000000D4 | 4 
}; // $D8 [ #345 ]

struct ALIGN(1) mbQuest // #148
{
	rglString m_baseTitle;                                           // 00000000 | 40 
	rglString m_baseText;                                            // 00000040 | 40 
	rglString m_giverName;                                           // 00000080 | 40 
	rglString m_text;                                                // 000000C0 | 40 
	rglString m_title;                                               // 00000100 | 40 
	unsigned int m_flags;                                            // 00000140 | 4 
	rglString m_id;                                                  // 00000144 | 40 
	unsigned int m_progression;                                      // 00000184 | 4 
	mbNotes m_notes;                                                 // 00000188 | 448 
	int m_troopNo;                                                   // 000005D0 | 4 
	int m_itemNo;                                                    // 000005D4 | 4 
	int m_value;                                                     // 000005D8 | 4 
	int m_giverTroopNo;                                              // 000005DC | 4 
	float m_startDate;                                               // 000005E0 | 4 
	mbSlots m_slots;                                                 // 000005E4 | C 
}; // $5F0 [ #345 #130 #169 ]

struct ALIGN(1) mbQuickBattleWindow // #150
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
}; // $98 [ #144 ]

struct ALIGN(1) mbSavegame // #152
{
	rglString m_name;                                                // 00000000 | 40 
	rglString m_playerName;                                          // 00000040 | 40 
	int m_playerLevel;                                               // 00000080 | 4 
	float m_date;                                                    // 00000084 | 4 
	int m_gameVersion;                                               // 00000088 | 4 
	unsigned int m_magic;                                            // 0000008C | 4 
	int m_moduleVersion;                                             // 00000090 | 4 
}; // $94 [ #345 ]

struct ALIGN(1) mbSavegamePanel // #153
{
	rglString m_name;                                                // 00000000 | 40 
	rglString m_date;                                                // 00000040 | 40 
	int m_active;                                                    // 00000080 | 4 
	int m_gameVersion;                                               // 00000084 | 4 
	int m_moduleVersion;                                             // 00000088 | 4 
	bool m_magicWrong;                                               // 0000008C | 1 
	bool m_gameIncompatible;                                         // 0000008D | 1 
	bool m_moduleIncompatible;                                       // 0000008E | 1 
	/* FIX-3 */ byte undef_0[1];                                     // 0000008F | 1 
}; // $90 [ #345 ]

struct ALIGN(1) mbSceneProp // #154
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned long long m_flags;                                      // 00000040 | 8 
	int m_hitPoints;                                                 // 00000048 | 4 
	rglMetaMesh *m_metaMesh;                                         // 0000004C | 4 
	rglBody *m_body;                                                 // 00000050 | 4 
	rglVector4 m_center;                                             // 00000054 | 10 
	float m_radius;                                                  // 00000064 | 4 
	mbSimpleTriggerManager m_simpleTriggers;                         // 00000068 | C 
	/* FIX-3 */ byte undef_0[4];                                     // 00000074 | 4 
}; // $78 [ #345 #368 #160 ]

struct ALIGN(1) mbSelectionWindow // #157
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglWidget *m_textWidget;                                         // 0000005C | 4 
	rglSimpleButtonWidget *m_buttonWidgets[6];                       // 00000060 | 18 
	int m_selectedIndex;                                             // 00000078 | 4 
	int m_numItems;                                                  // 0000007C | 4 
	bool m_showCursor;                                               // 00000080 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000081 | 3 
	rglString m_items[6];                                            // 00000084 | 180 
}; // $204 [ #345 ]

struct ALIGN(1) mbSite // #161
{
	unsigned long long m_textDescriptorChecksum;                     // 00000000 | 8 
	unsigned long long m_sceneObjFileChecksum;                       // 00000008 | 8 
	rglString m_id;                                                  // 00000010 | 40 
	rglString m_name;                                                // 00000050 | 40 
	rglString m_path;                                                // 00000090 | 40 
	unsigned int m_flags;                                            // 000000D0 | 4 
	rglString m_meshName;                                            // 000000D4 | 40 
	rglString m_bodyName;                                            // 00000114 | 40 
	rglVector2 m_min;                                                // 00000154 | 8 
	rglVector2 m_max;                                                // 0000015C | 8 
	float m_waterLevel;                                              // 00000164 | 4 
	rglString m_terrainCode;                                         // 00000168 | 40 
	bool m_sceneObjFileLoaded;                                       // 000001A8 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 000001A9 | 3 
	int m_chestTroopNos[16];                                         // 000001AC | 40 
	int m_numChests;                                                 // 000001EC | 4 
	rglVector_mbMissionObject_ m_missionObjects;                     // 000001F0 | C 
	mbSiteVisitor m_visitors[128];                                   // 000001FC | 1400 
	mbSlots m_slots;                                                 // 000015FC | C 
	rglString m_outerTerrainMeshName;                                // 00001608 | 40 
}; // $1648 [ #345 #366 #162 #169 ]

struct ALIGN(1) mbSkeleton // #163
{
	rglString m_name;                                                // 00000000 | 40 
	rglVector_mbSkeletonBone_ m_bones;                               // 00000040 | C 
}; // $4C [ #345 ]

struct ALIGN(1) mbSkeletonBone // #164
{
	rglString m_name;                                                // 00000000 | 40 
	float m_mass;                                                    // 00000040 | 4 
	float m_minCone;                                                 // 00000044 | 4 
	float m_maxCone;                                                 // 00000048 | 4 
	rglVector4 m_rotation;                                           // 0000004C | 10 
	rglVector4 m_socketDirection;                                    // 0000005C | 10 
	rglVector4 m_planeDirection;                                     // 0000006C | 10 
	float m_minPlane;                                                // 0000007C | 4 
	float m_maxPlane;                                                // 00000080 | 4 
	float m_minTwistLimit;                                           // 00000084 | 4 
	float m_maxTwistLimit;                                           // 00000088 | 4 
	rglVector_rglSkeletonModelBody_ m_bodies;                        // 0000008C | C 
}; // $98 [ #345 #368 ]

struct ALIGN(1) mbSkill // #166
{
	rglString m_description;                                         // 00000000 | 40 
	rglString m_name;                                                // 00000040 | 40 
	rglString m_id;                                                  // 00000080 | 40 
	int m_maxLevel;                                                  // 000000C0 | 4 
	unsigned int m_flags;                                            // 000000C4 | 4 
}; // $C8 [ #345 ]

struct ALIGN(1) mbSkin // #167
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned int m_flags;                                            // 00000040 | 4 
	rglMetaMesh *m_bodyMetaMesh;                                     // 00000044 | 4 
	rglMetaMesh *m_leftHandMetaMesh;                                 // 00000048 | 4 
	rglMetaMesh *m_rightHandMetaMesh;                                // 0000004C | 4 
	rglMetaMesh *m_leftCalfMetaMesh;                                 // 00000050 | 4 
	rglMetaMesh *m_rightCalfMetaMesh;                                // 00000054 | 4 
	rglMetaMesh *m_headMetaMesh;                                     // 00000058 | 4 
	rglVector_mbDeformKey_ m_deformKeys;                             // 0000005C | C 
	rglVector_mbDeformRecGroup_ m_beardDeformRecs;                   // 00000068 | C 
	rglVector_mbDeformRecGroup_ m_hairDeformRecs;                    // 00000074 | C 
	rglVector_mbDeformRecGroup_ m_headDeformRecs;                    // 00000080 | C 
	rglVector_mbDeformRecGroup_ m_bodyDeformRecs;                    // 0000008C | C 
	rglVector_mbFaceConstraint_ m_constraints;                       // 00000098 | C 
	rglVector_rglMetaMesh_P_ m_hairMetaMeshes;                       // 000000A4 | C 
	rglVector_mbBeard_ m_beards;                                     // 000000B0 | C 
	rglVector_rglString_ m_hairMaterialNames;                        // 000000BC | C 
	rglVector_rglString_ m_beardMaterialNames;                       // 000000C8 | C 
	int m_numHairs;                                                  // 000000D4 | 4 
	int m_numBeards;                                                 // 000000D8 | 4 
	rglVector_mbFaceTexture_ m_faceTextures;                         // 000000DC | C 
	int m_voiceSoundNos[8];                                          // 000000E8 | 20 
	rglSkeletonModel *m_skeletonModel;                               // 00000108 | 4 
	float m_scale;                                                   // 0000010C | 4 
	int m_bloodParticleSystemNos[2];                                 // 00000110 | 8 
	unsigned int m_bloodColor;                                       // 00000118 | 4 
}; // $11C [ #345 ]

struct ALIGN(1) mbSkybox // #168
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned int m_flags;                                            // 00000040 | 4 
	float m_sunHeading;                                              // 00000044 | 4 
	float m_sunAltitude;                                             // 00000048 | 4 
	float m_flareStrength;                                           // 0000004C | 4 
	rglString m_postEffectName;                                      // 00000050 | 40 
	rglColor m_sunColor;                                             // 00000090 | 10 
	rglColor m_ambientColor;                                         // 000000A0 | 10 
	float m_fogStart;                                                // 000000B0 | 4 
	unsigned int m_fogColor;                                         // 000000B4 | 4 
	float m_suitability;                                             // 000000B8 | 4 
}; // $BC [ #345 #224 ]

struct ALIGN(1) mbSound // #170
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned int m_flags;                                            // 00000040 | 4 
	int *m_sampleNos;                                                // 00000044 | 4 
	unsigned int *m_factionNos;                                      // 00000048 | 4 
	int m_numSamples;                                                // 0000004C | 4 
}; // $50 [ #345 ]

struct ALIGN(1) mbSoundChannel // #171
{
	int *m_channelNo;                                                // 00000000 | 4 
	int m_sampleNo;                                                  // 00000004 | 4 
	unsigned int m_flags;                                            // 00000008 | 4 
	rglVector4 m_position;                                           // 0000000C | 10 
	rglVector4 m_velocity;                                           // 0000001C | 10 
	float m_frequency;                                               // 0000002C | 4 
	int m_priority;                                                  // 00000030 | 4 
}; // $34 [ #368 ]

struct ALIGN(1) mbSoundOptionsWindow // #173
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	mbOptionsWindowHelper m_helper;                                  // 0000005C | A8 
	rglCheckBoxWidget *m_soundCheckBoxWidget;                        // 00000104 | 4 
	rglCheckBoxWidget *m_musicCheckBoxWidget;                        // 00000108 | 4 
	rglWidget *m_musicVolumeLabelWidget;                             // 0000010C | 4 
	rglSliderWidget *m_musicVolumeSliderWidget;                      // 00000110 | 4 
	rglWidget *m_soundVolumeLabelWidget;                             // 00000114 | 4 
	rglSliderWidget *m_soundVolumeSliderWidget;                      // 00000118 | 4 
	rglCheckBoxWidget *m_occlusionCheckBoxWidget;                    // 0000011C | 4 
	rglCheckBoxWidget *m_occlusionFilterCheckBoxWidget;              // 00000120 | 4 
	rglCheckBoxWidget *m_hrtfFilterCheckBoxWidget;                   // 00000124 | 4 
	rglCheckBoxWidget *m_distanceFilterCheckBoxWidget;               // 00000128 | 4 
}; // $12C [ #132 ]

struct ALIGN(1) mbSoundSample // #174
{
	FMOD__Sound *m_sound;                                            // 00000000 | 4 
	unsigned int m_flags;                                            // 00000004 | 4 
	rglString m_file;                                                // 00000008 | 40 
	float m_length;                                                  // 00000048 | 4 
	float m_frequency;                                               // 0000004C | 4 
	unsigned int m_pcmSamples;                                       // 00000050 | 4 
}; // $54 [ #345 ]

struct ALIGN(1) mbStartingWindow // #175
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglWidget *m_textWidget;                                         // 0000005C | 4 
	rglProgressBarWidget *m_progressBarWidget;                       // 00000060 | 4 
	rglWidget *m_logoWidget;                                         // 00000064 | 4 
	rglString m_text;                                                // 00000068 | 40 
	int m_stage;                                                     // 000000A8 | 4 
	int m_step;                                                      // 000000AC | 4 
	int m_numSteps;                                                  // 000000B0 | 4 
	int m_loadingTime;                                               // 000000B4 | 4 
	double m_storedMinFrameTime;                                     // 000000B8 | 8 
	bool m_storedForceVSync;                                         // 000000C0 | 1 
	/* FIX-3 */ byte undef_1[7];                                     // 000000C1 | 7 
}; // $C8 [ #345 ]

struct ALIGN(1) mbStatementBlock // #177
{
	mbStatement *m_statements;                                       // 00000000 | 4 
	int m_numStatements;                                             // 00000004 | 4 
	bool m_analyzed;                                                 // 00000008 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000009 | 3 
	rglString m_id;                                                  // 0000000C | 40 
}; // $4C [ #345 ]

struct ALIGN(1) mbString // #179
{
	rglString m_text;                                                // 00000000 | 40 
	rglString m_id;                                                  // 00000040 | 40 
}; // $80 [ #345 ]

struct ALIGN(1) mbStringManager // #180
{
	mbString *m_strings;                                             // 00000000 | 4 
	mbString *m_quickStrings;                                        // 00000004 | 4 
	int m_numStrings;                                                // 00000008 | 4 
	int m_numQuickStrings;                                           // 0000000C | 4 
	rglString m_invalidString;                                       // 00000010 | 40 
	rglString m_invalidQuickString;                                  // 00000050 | 40 
	rglString m_invalidStringRegister;                               // 00000090 | 40 
}; // $D0 [ #345 ]

struct ALIGN(1) mbTableauMaterial // #183
{
	rglString m_id;                                                  // 00000000 | 40 
	unsigned int m_flags;                                            // 00000040 | 4 
	int m_width;                                                     // 00000044 | 4 
	int m_height;                                                    // 00000048 | 4 
	int m_textureWidth;                                              // 0000004C | 4 
	int m_textureHeight;                                             // 00000050 | 4 
	rglVector2 m_min;                                                // 00000054 | 8 
	rglVector2 m_max;                                                // 0000005C | 8 
	mbStatementBlock m_statementBlock;                               // 00000064 | 4C 
	rglVector_rglMaterial_P_ m_materials;                            // 000000B0 | C 
	rglMaterial *m_material;                                         // 000000BC | 4 
}; // $C0 [ #345 #366 #177 ]

struct ALIGN(1) mbTeam // #185
{
	int m_no;                                                        // 00000000 | 4 
	int m_relations[8];                                              // 00000004 | 20 
	mbSlots m_slots;                                                 // 00000024 | C 
}; // $30 [ #169 ]

struct ALIGN(1) mbTerrainFace // #186
{
	int m_orientation;                                               // 00000000 | 4 
	int m_layerNos[2];                                               // 00000004 | 8 
	rglVector4 m_normals[2];                                         // 0000000C | 20 
	float m_layerIntensities[15];                                    // 0000002C | 3C 
}; // $68 [ #368 ]

struct ALIGN(1) mbTerrainVertex // #190
{
	rglVector4 m_position;                                           // 00000000 | 10 
	int m_meshFaceCornerNo;                                          // 00000010 | 4 
	int m_manifoldVertexNo;                                          // 00000014 | 4 
	float m_slope;                                                   // 00000018 | 4 
	unsigned int m_terrainLayerFlags;                                // 0000001C | 4 
	rglVector4 m_normal;                                             // 00000020 | 10 
	rglVector2 m_UV;                                                 // 00000030 | 8 
	rglVector2 m_riverDirection;                                     // 00000038 | 8 
	int m_riverCurveNo;                                              // 00000040 | 4 
	float m_layerIntensities[15];                                    // 00000044 | 3C 
	float m_altitude;                                                // 00000080 | 4 
	float m_altitudeIncrease;                                        // 00000084 | 4 
	unsigned int m_color;                                            // 00000088 | 4 
	float m_transparency;                                            // 0000008C | 4 
}; // $90 [ #368 #366 ]

struct ALIGN(1) mbTrigger // #192
{
	float m_checkInterval;                                           // 00000000 | 4 
	float m_delayInterval;                                           // 00000004 | 4 
	float m_rearmInterval;                                           // 00000008 | 4 
	int m_status;                                                    // 0000000C | 4 
	mbStatementBlock m_conditionsStatementBlock;                     // 00000010 | 4C 
	mbStatementBlock m_consequencesStatementBlock;                   // 0000005C | 4C 
	rglAppTimer m_checkTimer;                                        // 000000A8 | 10 
	rglAppTimer m_delayTimer;                                        // 000000B8 | 10 
	rglAppTimer m_rearmTimer;                                        // 000000C8 | 10 
}; // $D8 [ #177 #207 ]

struct ALIGN(1) mbTroopEquipment // #195
{
	mbItem m_items[10];                                              // 00000000 | 50 
}; // $50 [ #67 ]

struct ALIGN(1) mbTroopInventory // #196
{
	mbItem m_items[96];                                              // 00000000 | 300 
}; // $300 [ #67 ]

struct ALIGN(1) mbWeather // #197
{
	float m_dayTime;                                                 // 00000000 | 4 
	int m_manifoldFaceNo;                                            // 00000004 | 4 
	float m_temperature;                                             // 00000008 | 4 
	float m_humidity;                                                // 0000000C | 4 
	float m_height;                                                  // 00000010 | 4 
	int m_cloudType;                                                 // 00000014 | 4 
	float m_precipitationStrength;                                   // 00000018 | 4 
	int m_precipitationType;                                         // 0000001C | 4 
	int m_regionType;                                                // 00000020 | 4 
	int m_skyboxNo;                                                  // 00000024 | 4 
	float m_fogFar;                                                  // 00000028 | 4 
	float m_fogDensity;                                              // 0000002C | 4 
	rglVector2 m_precipitationDirection;                             // 00000030 | 8 
}; // $38 [ #366 ]

struct ALIGN(1) mbYesNoWindow // #198
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglWidget *m_titleWidget;                                        // 0000005C | 4 
	rglWidget *m_textWidget;                                         // 00000060 | 4 
	rglTextBoxWidget *m_textBoxWidget;                               // 00000064 | 4 
	rglWidget *m_labelWidget;                                        // 00000068 | 4 
	rglComboButtonWidget *m_comboButtonWidget;                       // 0000006C | 4 
	rglGameButtonWidget *m_buttonWidget1;                            // 00000070 | 4 
	rglGameButtonWidget *m_buttonWidget2;                            // 00000074 | 4 
	rglSimpleTextBoxWidget *m_simpleTextBoxWidget1;                  // 00000078 | 4 
	rglSimpleTextBoxWidget *m_simpleTextBoxWidget2;                  // 0000007C | 4 
	int *m_outputValue;                                              // 00000080 | 4 
	rglString *m_outputText;                                         // 00000084 | 4 
	rglString *m_outputSimpleText1;                                  // 00000088 | 4 
	rglString *m_outputSimpleText2;                                  // 0000008C | 4 
	int *m_outputIndex;                                              // 00000090 | 4 
	rglString m_textBoxText;                                         // 00000094 | 40 
	rglString m_labelText;                                           // 000000D4 | 40 
	rglString *m_comboItems;                                         // 00000114 | 4 
	int m_numComboItems;                                             // 00000118 | 4 
	bool m_showCursor;                                               // 0000011C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000011D | 3 
	rglString m_title;                                               // 00000120 | 40 
	rglString m_buttonText1;                                         // 00000160 | 40 
	rglString m_buttonText2;                                         // 000001A0 | 40 
}; // $1E0 [ #345 ]

struct ALIGN(1) rglAiMesh // #199
{
	int m_whitePoint;                                                // 00000000 | 4 
	std__priority_queue_rglAiMeshPathFindingPoint_std__vector_rglAiMeshPathFindingPoint_std__allocator_rglAiMeshPathFindingPoint____std__less_rglAiMeshPathFindingPoint___ m_pathFindingPoints; // 00000004 | 10 
	std__priority_queue_rglAiMeshPathCheckingPoint_std__vector_rglAiMeshPathCheckingPoint_std__allocator_rglAiMeshPathCheckingPoint____std__less_rglAiMeshPathCheckingPoint___ m_pathCheckingPoints; // 00000014 | 10 
	rglAiMeshContainer_rglAiMeshVertex_ m_vertices;                  // 00000024 | 10 
	rglAiMeshContainer_rglAiMeshEdge_ m_edges;                       // 00000034 | 10 
	rglAiMeshContainer_rglAiMeshFace_ m_faces;                       // 00000044 | 10 
	int m_selectionType;                                             // 00000054 | 4 
	int m_selectionObject;                                           // 00000058 | 4 
	rglVector4 u10;                                                  // 0000005C | 10 
	int m_detail;                                                    // 0000006C | 4 
}; // $70 [ #368 ]

struct ALIGN(1) rglAiMeshEdge // #200
{
	rglAiMeshEdge *m_next;                                           // 00000000 | 4 
	rglAiMeshVertex *m_vertices[2];                                  // 00000004 | 8 
	rglAiMeshFace *m_faces[2];                                       // 0000000C | 8 
	int m_numFaces;                                                  // 00000014 | 4 
	bool m_selected;                                                 // 00000018 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000019 | 3 
	float m_steepness[2];                                            // 0000001C | 8 
	float m_traverseCost[2][2];                                      // 00000024 | 10 
	int m_value;                                                     // 00000034 | 4 
	rglVector4 m_center;                                             // 00000038 | 10 
}; // $48 [ #368 ]

struct ALIGN(1) rglAiMeshFace // #201
{
	rglAiMeshEdge *m_edges[4];                                       // 00000000 | 10 
	rglAiMeshFace *m_next;                                           // 00000010 | 4 
	int m_color;                                                     // 00000014 | 4 
	rglAiMeshFace *m_prevPathFace;                                   // 00000018 | 4 
	rglVector4 m_center;                                             // 0000001C | 10 
	rglVector4 m_normal;                                             // 0000002C | 10 
	rglAiMeshVertex *m_vertices[4];                                  // 0000003C | 10 
	int m_numVertices;                                               // 0000004C | 4 
	rglAiMeshFace *m_neighborFaces[4];                               // 00000050 | 10 
	bool m_selected;                                                 // 00000060 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000061 | 3 
	int m_value;                                                     // 00000064 | 4 
	bool m_visible;                                                  // 00000068 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000069 | 3 
	int m_debugValue;                                                // 0000006C | 4 
}; // $70 [ #368 ]

struct ALIGN(1) rglAiMeshPathPoint // #204
{
	rglVector4 m_position;                                           // 00000000 | 10 
	rglAiMeshEdge *m_edge;                                           // 00000010 | 4 
}; // $14 [ #368 ]

struct ALIGN(1) rglAiMeshVertex // #205
{
	rglAiMeshVertex *m_next;                                         // 00000000 | 4 
	rglVector4 m_position;                                           // 00000004 | 10 
	bool m_selected;                                                 // 00000014 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000015 | 3 
	int m_value;                                                     // 00000018 | 4 
}; // $1C [ #368 ]

struct ALIGN(1) rglAsyncTaskPool // #208
{
	rglVector_void_P_ m_threads;                                     // 00000000 | C 
	rglVector_void_P_ m_objects;                                     // 0000000C | C 
	rglVector_void____cdeclP__void_P__ m_callbacks;                  // 00000018 | C 
	rglSemaphore m_semaphore;                                        // 00000024 | 4 
	rglCriticalSection m_criticalSection;                            // 00000028 | 18 
	int m_tasksAdded;                                                // 00000040 | 4 
	rglInterlockedCounter m_tasksStarted;                            // 00000044 | 4 
	rglInterlockedCounter m_tasksCompleted;                          // 00000048 | 4 
	bool m_inBatch;                                                  // 0000004C | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 0000004D | 3 
}; // $50 [ #329 #231 #258 ]

struct ALIGN(1) rglBodyPart // #214
{
	/* FIX-4 */ byte undef_0[4];                                     // 00000000 | 4 
	rglPhysicsMaterial *m_material;                                  // 00000004 | 4 
	int m_manifoldFaceNo;                                            // 00000008 | 4 
	unsigned int m_flags;                                            // 0000000C | 4 
	int m_entityNo;                                                  // 00000010 | 4 
	rglIntVector2 m_minGridCoords;                                   // 00000014 | 8 
	rglIntVector2 m_maxGridCoords;                                   // 0000001C | 8 
	rglBodyPart *m_parent;                                           // 00000024 | 4 
	rglVector4 m_minBound;                                           // 00000028 | 10 
	rglVector4 m_maxBound;                                           // 00000038 | 10 
}; // $48 [ #260 #368 ]

struct ALIGN(1) rglBoundingBox // #216
{
	rglVector4 m_min;                                                // 00000000 | 10 
	rglVector4 m_max;                                                // 00000010 | 10 
	rglVector4 m_center;                                             // 00000020 | 10 
	float m_radius;                                                  // 00000030 | 4 
}; // $34 [ #368 ]

struct ALIGN(1) rglCameraPlane // #220
{
	rglVector4 m_position;                                           // 00000000 | 10 
	rglVector4 m_normal;                                             // 00000010 | 10 
}; // $20 [ #368 ]

struct ALIGN(1) rglCapsule // #221
{
	/* FIX-1 */ byte undef_0[72];                                    // 00000000 | 48 
	rglVector4 m_pointA;                                             // 00000048 | 10 
	rglVector4 m_pointB;                                             // 00000058 | 10 
	rglVector4 m_localPointA;                                        // 00000068 | 10 
	rglVector4 m_localPointB;                                        // 00000078 | 10 
	float m_radius;                                                  // 00000088 | 4 
}; // $8C [ #368 ]

struct ALIGN(1) rglChannel // #222
{
	float m_blendFactor;                                             // 00000000 | 4 
	unsigned int m_enforcedBones;                                    // 00000004 | 4 
	unsigned int m_rotatedBones;                                     // 00000008 | 4 
	float m_parameter;                                               // 0000000C | 4 
	bool m_startInstantly;                                           // 00000010 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000011 | 3 
	float m_totalProgress;                                           // 00000014 | 4 
	float m_cycleProgress;                                           // 00000018 | 4 
	float m_blendThreshold;                                          // 0000001C | 4 
	float m_unblendSpeed;                                            // 00000020 | 4 
	float m_blendSpeed;                                              // 00000024 | 4 
	int m_blendBoneNo;                                               // 00000028 | 4 
	rglSkeletonAnimation *m_animation;                               // 0000002C | 4 
	rglQuaternion *m_boneRotations;                                  // 00000030 | 4 
	rglVector4 m_displace;                                           // 00000034 | 10 
	rglSkeletonAnimationSpec *m_animationSpec;                       // 00000044 | 4 
	float m_duration;                                                // 00000048 | 4 
	bool m_cyclic;                                                   // 0000004C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000004D | 3 
	float m_parallelBlendFactor[2];                                  // 00000050 | 8 
	int m_parallelTimePointOffset;                                   // 00000058 | 4 
}; // $5C [ #368 ]

struct ALIGN(1) rglCheckBoxWidget // #223
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	rglSimpleButtonWidget *m_boxWidget;                              // 00000280 | 4 
	rglWidget *m_labelWidget;                                        // 00000284 | 4 
	float m_boxScale;                                                // 00000288 | 4 
	rglString m_labelText;                                           // 0000028C | 40 
	/* FIX-3 */ byte undef_1[4];                                     // 000002CC | 4 
}; // $2D0 [ #345 ]

struct ALIGN(1) rglComboButtonWidget // #225
{
	/* FIX-1 */ byte undef_0[568];                                   // 00000000 | 238 
	bool m_open;                                                     // 00000238 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000239 | 3 
	rglPopupWidget *m_popupWidget;                                   // 0000023C | 4 
	rglVector_rglString_ m_buttonTexts;                              // 00000240 | C 
	rglMesh *m_buttonMeshes[10];                                     // 0000024C | 28 
	rglVector2 m_buttonSize;                                         // 00000274 | 8 
	float m_buttonPosition;                                          // 0000027C | 4 
	rglVector2 m_buttonTextSize;                                     // 00000280 | 8 
	rglVector2 m_buttonTextPosition;                                 // 00000288 | 8 
	rglVector2 m_baseTextPosition;                                   // 00000290 | 8 
	rglContainerWidget *m_comboContainerWidget;                      // 00000298 | 4 
	rglScrollableWidget *m_scrollableWidget;                         // 0000029C | 4 
}; // $2A0 [ #366 ]

struct ALIGN(1) rglContainerWidget // #229
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	rglString m_containerName;                                       // 00000230 | 40 
	rglVector_rglWidget_P_ m_childWigets;                            // 00000270 | C 
	float m_containerZOffset;                                        // 0000027C | 4 
}; // $280 [ #345 ]

struct ALIGN(1) rglCrashLogger // #230
{
	rglString m_customException;                                     // 00000000 | 40 
	bool m_suppressLogging;                                          // 00000040 | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 00000041 | 3 
}; // $44 [ #345 ]

struct ALIGN(1) rglFillSliderWidget // #239
{
	/* FIX-1 */ byte undef_0[576];                                   // 00000000 | 240 
	rglMesh *m_handleMesh;                                           // 00000240 | 4 
	bool m_redrawMesh;                                               // 00000244 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000245 | 3 
	float m_drawnProgress;                                           // 00000248 | 4 
	rglVector4 m_meshScale;                                          // 0000024C | 10 
	unsigned int m_alpha;                                            // 0000025C | 4 
}; // $260 [ #368 ]

struct ALIGN(1) rglFontGlyph // #241
{
	rglVector2 m_uv;                                                 // 00000000 | 8 
	rglVector2 m_size;                                               // 00000008 | 8 
	float m_preShift;                                                // 00000010 | 4 
	float m_yAdjust;                                                 // 00000014 | 4 
	float m_postShift;                                               // 00000018 | 4 
}; // $1C [ #366 ]

struct ALIGN(1) rglGraphicsBuffer // #244
{
	int m_vertexSize;                                                // 00000000 | 4 
	int m_lastPos;                                                   // 00000004 | 4 
	int m_numUses;                                                   // 00000008 | 4 
	int m_restoreNo;                                                 // 0000000C | 4 
	rglString m_description;                                         // 00000010 | 40 
	int m_capacity;                                                  // 00000050 | 4 
	int m_policy;                                                    // 00000054 | 4 
	rglVector_rglMesh_P_ m_meshes;                                   // 00000058 | C 
	int m_totalUsedCapacity;                                         // 00000064 | 4 
	int m_lastFrameUsedCapacity;                                     // 00000068 | 4 
}; // $6C [ #345 ]

struct ALIGN(1) rglIniValue // #253
{
	rglString m_value;                                               // 00000000 | 40 
	int m_fileIndex;                                                 // 00000040 | 4 
}; // $44 [ #345 ]

struct ALIGN(1) rglInputManager // #256
{
	IDirectInput8A *m_di8;                                           // 00000000 | 4 
	IDirectInputDevice8A *m_keyboard;                                // 00000004 | 4 
	IDirectInputDevice8A *m_mouse;                                   // 00000008 | 4 
	int m_curKeys[256];                                              // 0000000C | 400 
	int m_prevKeys[256];                                             // 0000040C | 400 
	int m_storedKeys[256];                                           // 0000080C | 400 
	float m_mouseAccelerationX;                                      // 00000C0C | 4 
	float m_mouseAccelerationY;                                      // 00000C10 | 4 
	int m_mouseMovementX;                                            // 00000C14 | 4 
	int m_mouseMovementY;                                            // 00000C18 | 4 
	/* FIX-4 */ byte undef_0[4];                                     // 00000C1C | 4 
	rglAppTimer m_scrollTimer;                                       // 00000C20 | 10 
	int m_numMouseDecays;                                            // 00000C30 | 4 
	rglVector_unsigned_int_ m_omittedKeys;                           // 00000C34 | C 
	int m_mouseAxisX;                                                // 00000C40 | 4 
	int m_mouseAxisY;                                                // 00000C44 | 4 
	int m_mouseAxisZ;                                                // 00000C48 | 4 
	/* FIX-3 */ byte undef_1[4];                                     // 00000C4C | 4 
}; // $C50 [ #207 ]

struct ALIGN(1) rglIntersectionPoint // #259
{
	rglVector4 m_normal;                                             // 00000000 | 10 
	rglVector4 m_position;                                           // 00000010 | 10 
	float m_depth;                                                   // 00000020 | 4 
}; // $24 [ #368 ]

struct ALIGN(1) rglLight // #263
{
	int m_type;                                                      // 00000000 | 4 
	rglColor m_diffuseColor;                                         // 00000004 | 10 
	rglColor m_specularColor;                                        // 00000014 | 10 
	rglVector4 m_position;                                           // 00000024 | 10 
	rglVector4 m_localPosition;                                      // 00000034 | 10 
	rglVector4 m_direction;                                          // 00000044 | 10 
	float m_range;                                                   // 00000054 | 4 
	float m_attenuation_0;                                           // 00000058 | 4 
	float m_attenuation_1;                                           // 0000005C | 4 
	float m_attenuation_2;                                           // 00000060 | 4 
	float m_theta;                                                   // 00000064 | 4 
	float m_phi;                                                     // 00000068 | 4 
	unsigned int m_flags;                                            // 0000006C | 4 
	float m_flickerMagnitude;                                        // 00000070 | 4 
	float m_flickerInterval;                                         // 00000074 | 4 
	int m_flickerSeed;                                               // 00000078 | 4 
}; // $7C [ #224 #368 ]

struct ALIGN(1) rglListBoxWidget // #264
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	rglVector_rglString_ m_buttonTexts;                              // 00000280 | C 
	rglMesh *m_buttonMeshes[10];                                     // 0000028C | 28 
	rglVector2 m_buttonSize;                                         // 000002B4 | 8 
	float m_buttonPosition;                                          // 000002BC | 4 
	rglVector2 m_buttonTextSize;                                     // 000002C0 | 8 
	rglVector2 m_buttonTextPosition;                                 // 000002C8 | 8 
	bool m_meshesUpdated;                                            // 000002D0 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 000002D1 | 3 
	unsigned int m_alpha;                                            // 000002D4 | 4 
}; // $2D8 [ #366 ]

struct ALIGN(1) rglLog // #265
{
	rglCriticalSection m_criticalSection;                            // 00000000 | 18 
	rglManualResetEvent m_event;                                     // 00000018 | 4 
	std__deque_rglString_std__allocator_rglString___ m_entries;      // 0000001C | 14 
	bool m_started;                                                  // 00000030 | 1 
	bool m_threaded;                                                 // 00000031 | 1 
	bool m_stopping;                                                 // 00000032 | 1 
	bool m_autoFlush;                                                // 00000033 | 1 
	bool m_rotating;                                                 // 00000034 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000035 | 3 
	int m_day;                                                       // 00000038 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000003C | 4 
	std__basic_ofstream_char_std__char_traits_char___ m_stream;      // 00000040 | A8 
	rglString m_path;                                                // 000000E8 | 40 
	rglString m_basePath;                                            // 00000128 | 40 
	rglString m_basePathWithoutExtension;                            // 00000168 | 40 
	rglVector_rglString_ m_queuedEntries;                            // 000001A8 | C 
	/* FIX-3 */ byte undef_2[4];                                     // 000001B4 | 4 
}; // $1B8 [ #231 #273 #345 ]

struct ALIGN(1) rglManifold // #266
{
	rglVector_rglManifoldVertex_ m_vertices;                         // 00000000 | C 
	rglVector_rglManifoldFace_ m_faces;                              // 0000000C | C 
	rglVector_rglManifoldEdge_ m_edges;                              // 00000018 | C 
	std__priority_queue_rglManifoldPathFindingPoint_std__vector_rglManifoldPathFindingPoint_std__allocator_rglManifoldPathFindingPoint____std__less_rglManifoldPathFindingPoint___ m_pathFindingPoints; // 00000024 | 10 
	rglVector4 m_min;                                                // 00000034 | 10 
	rglVector4 m_max;                                                // 00000044 | 10 
	int m_whitePoint;                                                // 00000054 | 4 
}; // $58 [ #368 ]

struct ALIGN(1) rglManifoldEdge // #269
{
	int m_numFaces;                                                  // 00000000 | 4 
	int m_faceNos[2];                                                // 00000004 | 8 
	int m_vertexNos[2];                                              // 0000000C | 8 
	rglVector3 m_center;                                             // 00000014 | C 
}; // $20 [ #367 ]

struct ALIGN(1) rglManifoldFace // #270
{
	int m_numVertices;                                               // 00000000 | 4 
	int m_vertexNos[4];                                              // 00000004 | 10 
	int m_edgeNos[4];                                                // 00000014 | 10 
	int m_neighborFaceNos[4];                                        // 00000024 | 10 
	float m_neighborDistances[4];                                    // 00000034 | 10 
	short m_regionType;                                              // 00000044 | 2 
	short m_groupNo;                                                 // 00000046 | 2 
	short m_adjoiningGroupNo1;                                       // 00000048 | 2 
	short m_adjoiningGroupNo2;                                       // 0000004A | 2 
	rglVector3 m_normal;                                             // 0000004C | C 
	float m_normalFactor;                                            // 00000058 | 4 
	rglPhysicsMaterial *m_material;                                  // 0000005C | 4 
	unsigned int m_flags;                                            // 00000060 | 4 
	int m_pathColor;                                                 // 00000064 | 4 
	int m_prevPathFaceNo;                                            // 00000068 | 4 
	rglVector3 m_center;                                             // 0000006C | C 
	rglQuad *m_quad;                                                 // 00000078 | 4 
}; // $7C [ #367 ]

struct ALIGN(1) rglManifoldVertex // #272
{
	rglVector3 m_position;                                           // 00000000 | C 
	rglVector3 m_normal;                                             // 0000000C | C 
	float m_lightAmount;                                             // 00000018 | 4 
}; // $1C [ #367 ]

struct ALIGN(1) rglMaterial // #274
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	int m_sequenceNo;                                                // 00000050 | 4 
	rglString m_shaderName;                                          // 00000054 | 40 
	rglVector4 m_specularColor;                                      // 00000094 | 10 
	float m_specularPower;                                           // 000000A4 | 4 
	rglShader *m_shader;                                             // 000000A8 | 4 
	rglString m_textureNames[5];                                     // 000000AC | 140 
	rglTexture *m_textures[5];                                       // 000001EC | 14 
	int m_tableauMaterialNo;                                         // 00000200 | 4 
	int m_tableauParam;                                              // 00000204 | 4 
	/* FIX-5 */ void *m_tableauFunc;                                 // 00000208 | 4 
	int m_numUses;                                                   // 0000020C | 4 
}; // $210 [ #345 #368 ]

struct ALIGN(1) rglMenuBarWidget // #275
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	rglSimpleButtonWidget *m_buttonWidgets[8];                       // 00000280 | 20 
	rglString m_menuTexts[8];                                        // 000002A0 | 200 
	rglVector_rglString_ m_menuItemTexts[8];                         // 000004A0 | 60 
	int m_numItems;                                                  // 00000500 | 4 
	bool m_open;                                                     // 00000504 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000505 | 3 
	int m_selectedMenu;                                              // 00000508 | 4 
	int m_selectedSubMenu;                                           // 0000050C | 4 
	rglPopupWidget *m_popupWidget;                                   // 00000510 | 4 
	/* FIX-3 */ byte undef_2[4];                                     // 00000514 | 4 
}; // $518 [ #345 ]

struct ALIGN(1) rglMeshFaceCorner // #280
{
	rglVector3 m_normal;                                             // 00000000 | C 
	rglVector3 m_tangent;                                            // 0000000C | C 
	rglVector3 m_binormal;                                           // 00000018 | C 
	rglVector3 m_deformedNormal;                                     // 00000024 | C 
	rglVector2 m_UV;                                                 // 00000030 | 8 
	unsigned int m_color;                                            // 00000038 | 4 
	unsigned int m_specularColor;                                    // 0000003C | 4 
	unsigned short m_vertexNo;                                       // 00000040 | 2 
	/* FIX-3 */ byte undef_0[2];                                     // 00000042 | 2 
}; // $44 [ #367 #366 ]

struct ALIGN(1) rglMeshVertex // #282
{
	rglVector3 m_position;                                           // 00000000 | C 
	rglVector3 m_deformedPosition;                                   // 0000000C | C 
}; // $18 [ #367 ]

struct ALIGN(1) rglNumberBoxWidget // #290
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	rglSimpleTextBoxWidget *m_textBoxWidget;                         // 00000280 | 4 
	rglSimpleButtonWidget *m_upArrowButtonWidget;                    // 00000284 | 4 
	rglSimpleButtonWidget *m_downArrowButtonWidget;                  // 00000288 | 4 
	bool m_holding;                                                  // 0000028C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000028D | 3 
	rglAppTimer m_holdTimer;                                         // 00000290 | 10 
	float m_lastHoldCheck;                                           // 000002A0 | 4 
	/* FIX-3 */ byte undef_2[4];                                     // 000002A4 | 4 
}; // $2A8 [ #207 ]

struct ALIGN(1) rglPostFxNode // #301
{
	rglTexture *m_renderTarget;                                      // 00000000 | 4 
	int m_viewportWidth;                                             // 00000004 | 4 
	int m_viewportHeight;                                            // 00000008 | 4 
	rglString m_techniqueName;                                       // 0000000C | 40 
	unsigned int m_technique;                                        // 0000004C | 4 
	int m_passes[5];                                                 // 00000050 | 14 
	int m_numFramesToSkip;                                           // 00000064 | 4 
	int m_numPasses;                                                 // 00000068 | 4 
}; // $6C [ #345 ]

struct ALIGN(1) rglProgressBarWidget // #302
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	int m_direction;                                                 // 00000230 | 4 
	rglMesh *m_handleMesh;                                           // 00000234 | 4 
	bool m_redrawMesh;                                               // 00000238 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000239 | 3 
	rglVector4 m_meshScale;                                          // 0000023C | 10 
	/* FIX-3 */ byte undef_2[4];                                     // 0000024C | 4 
}; // $250 [ #368 ]

struct ALIGN(1) rglQuad // #303
{
	/* FIX-1 */ byte undef_0[72];                                    // 00000000 | 48 
	rglVector4 m_vertices[4];                                        // 00000048 | 40 
	rglVector4 m_localVertices[4];                                   // 00000088 | 40 
	rglVector4 m_normal;                                             // 000000C8 | 10 
	rglVector4 m_edgeNormals[4];                                     // 000000D8 | 40 
	int m_numEdges;                                                  // 00000118 | 4 
}; // $11C [ #368 ]

struct ALIGN(1) rglRenderThreadCall // #313
{
	int m_type;                                                      // 00000000 | 4 
	rglString m_text;                                                // 00000004 | 40 
	int m_value;                                                     // 00000044 | 4 
	void *m_object;                                                  // 00000048 | 4 
	float m_float;                                                   // 0000004C | 4 
	D3DXVECTOR4 m_vector;                                            // 00000050 | 10 
	D3DXMATRIX m_matrix;                                             // 00000060 | 40 
}; // $A0 [ #345 ]

struct ALIGN(1) rglRenderThreadManager // #314
{
	rglVector_rglRenderThreadCall_ m_asyncCalls;                     // 00000000 | C 
	bool m_skipFrame;                                                // 0000000C | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 0000000D | 3 
	rglCriticalSection m_callCriticalSection;                        // 00000010 | 18 
	rglCriticalSection m_threadCriticalSection;                      // 00000028 | 18 
	rglCriticalSection m_bufferCriticalSection;                      // 00000040 | 18 
	rglManualResetEvent m_bufferEvent;                               // 00000058 | 4 
	rglAutoResetEvent m_renderEvent;                                 // 0000005C | 4 
	unsigned long m_threadId;                                        // 00000060 | 4 
}; // $64 [ #231 #273 #209 ]

struct ALIGN(1) rglResource // #316
{
	/* FIX-4 */ byte undef_0[4];                                     // 00000000 | 4 
	rglString m_name;                                                // 00000004 | 40 
	int m_inUse;                                                     // 00000044 | 4 
	int m_fileNo;                                                    // 00000048 | 4 
	unsigned int m_flags;                                            // 0000004C | 4 
}; // $50 [ #345 ]

struct ALIGN(1) rglResourceManager // #317
{
	rglVector_rglString_ m_resourceFiles;                            // 00000000 | C 
	int m_materialSequenceNo;                                        // 0000000C | 4 
	int m_shaderSequenceNo;                                          // 00000010 | 4 
	rglVector_rglMetaMesh_P_ m_metaMeshes;                           // 00000014 | C 
	rglVector_rglMesh_P_ m_meshes;                                   // 00000020 | C 
	rglVector_rglMesh_P_ m_orderedMeshes;                            // 0000002C | C 
	int m_orderedMeshBounds[256];                                    // 00000038 | 400 
	bool m_meshesOrdered;                                            // 00000438 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000439 | 3 
	rglVector_rglTexture_P_ m_textures;                              // 0000043C | C 
	rglVector_rglTexture_P_ m_renderTargetTextures;                  // 00000448 | C 
	rglVector_rglShader_P_ m_shaders;                                // 00000454 | C 
	rglVector_rglMaterial_P_ m_renderTargetMaterials;                // 00000460 | C 
	rglVector_rglMaterial_P_ m_materials;                            // 0000046C | C 
	rglVector_rglTechnique_P_ m_techniques;                          // 00000478 | C 
	rglVector_rglBody_P_ m_bodies;                                   // 00000484 | C 
	rglVector_rglSkeletonModel_P_ m_skeletonModels;                  // 00000490 | C 
	rglVector_rglSkeletonAnimation_P_ m_skeletonAnimations;          // 0000049C | C 
	rglVector_rglPhysicsMaterial_P_ m_physicsMaterials;              // 000004A8 | C 
	rglPhysicsMaterial *m_defaultPhysicsMaterial;                    // 000004B4 | 4 
	rglMap_int_rglVector_rglString___ m_resourceBlacklist;           // 000004B8 | 20 
	rglShader *m_defaultShader;                                      // 000004D8 | 4 
	rglMaterial *m_defaultMaterial;                                  // 000004DC | 4 
	rglMaterial *m_defaultFontMaterial;                              // 000004E0 | 4 
	rglMaterial *m_defaultFontOutlineMaterial;                       // 000004E4 | 4 
	rglMaterial *m_defaultFontBackgroundMaterial;                    // 000004E8 | 4 
	rglMaterial *m_defaultMatteMaterial;                             // 000004EC | 4 
	rglMaterial *m_defaultShadowMaterial;                            // 000004F0 | 4 
	rglTexture *m_defaultCursorTexture;                              // 000004F4 | 4 
	rglMesh *m_defaultTrackMesh;                                     // 000004F8 | 4 
	rglMesh *m_defaultBattleTrackMesh;                               // 000004FC | 4 
	rglMesh *m_defaultTroopLabelBannerMesh;                          // 00000500 | 4 
	rglMesh *m_defaultTroopLabelBannerHighlightMesh;                 // 00000504 | 4 
	rglVector_rglTexture_P_ m_loadedOnDemandTextures;                // 00000508 | C 
	rglVector_rglOnDemandTexture_P_ m_onDemandLoadQueue;             // 00000514 | C 
	rglVector_rglOnDemandTexture_P_ m_onDemandCreateQueue;           // 00000520 | C 
	rglCriticalSection m_onDemandLoadCriticalSection;                // 0000052C | 18 
	rglCriticalSection m_onDemandCreateCriticalSection;              // 00000544 | 18 
	rglCriticalSection m_onDemandUseCriticalSection;                 // 0000055C | 18 
	rglManualResetEvent m_onDemandTexturesEvent;                     // 00000574 | 4 
	rglInterlockedCounter m_onDemandCount;                           // 00000578 | 4 
	bool m_useOnDemandTextures;                                      // 0000057C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000057D | 3 
	rglVector_rglRenderContext_P_ m_freeRenderContexts;              // 00000580 | C 
	rglVector_rglRenderContext_P_ m_freedRenderContexts;             // 0000058C | C 
	rglCriticalSection m_renderContextCriticalSection;               // 00000598 | 18 
}; // $5B0 [ #231 #273 #258 ]

struct ALIGN(1) rglSceneGrid // #320
{
	rglIntVector2 m_size;                                            // 00000000 | 8 
	rglIntVector2 m_numCells;                                        // 00000008 | 8 
	rglVector2 m_min;                                                // 00000010 | 8 
	rglVector2 m_max;                                                // 00000018 | 8 
	rglVector2 m_cellSize;                                           // 00000020 | 8 
	rglSceneGridCell **m_cells;                                      // 00000028 | 4 
	rglPool_rglSceneGridEntityNode_ m_entityPool;                    // 0000002C | 10 
	rglPool_rglSceneGridCellNode_ m_cellPool;                        // 0000003C | 10 
	rglVector_rglBodyPart_P_ m_bodies;                               // 0000004C | C 
}; // $58 [ #260 #366 ]

struct ALIGN(1) rglSceneGridCellNode // #322
{
	rglSceneGridCellNode *m_next;                                    // 00000000 | 4 
	rglSceneGridEntityNode *m_entityNode;                            // 00000004 | 4 
	rglIntVector2 m_coords;                                          // 00000008 | 8 
}; // $10 [ #260 ]

struct ALIGN(1) rglScrollbarWidget // #327
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	float m_handleThickness;                                         // 00000230 | 4 
	rglString m_slidebarLightMeshName;                               // 00000234 | 40 
	rglString m_slidebarMidMeshName;                                 // 00000274 | 40 
	rglString m_slidebarDarkMeshName;                                // 000002B4 | 40 
	rglString m_scrollbarLightMeshName;                              // 000002F4 | 40 
	rglString m_scrollbarMidMeshName;                                // 00000334 | 40 
	rglString m_scrollbarDarkMeshName;                               // 00000374 | 40 
	int m_direction;                                                 // 000003B4 | 4 
	float m_range;                                                   // 000003B8 | 4 
	float m_handleSize;                                              // 000003BC | 4 
	int m_focused;                                                   // 000003C0 | 4 
	float m_focusPoint;                                              // 000003C4 | 4 
}; // $3C8 [ #345 ]

struct ALIGN(1) rglShader // #330
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	int m_sequenceNo;                                                // 00000050 | 4 
	unsigned int m_requirementFlags;                                 // 00000054 | 4 
	int m_numAlternatives;                                           // 00000058 | 4 
	rglString m_alternatives[3];                                     // 0000005C | C0 
	rglString m_techniqueName;                                       // 0000011C | 40 
	rglTechnique *m_technique;                                       // 0000015C | 4 
}; // $160 [ #345 ]

struct ALIGN(1) rglSkeletonModel // #338
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	int m_numBones;                                                  // 00000050 | 4 
	rglSkeletonModelBone *m_bones;                                   // 00000054 | 4 
	rglSkeletonModelBonePositions m_bonePositions;                   // 00000058 | 8 
	unsigned long long m_lowerBodyBones;                             // 00000060 | 8 
	unsigned long long m_rightSideBones;                             // 00000068 | 8 
	unsigned long long m_allBones;                                   // 00000070 | 8 
}; // $78 [ #341 ]

struct ALIGN(1) rglSkeletonModelBody // #339
{
	unsigned int m_flags;                                            // 00000000 | 4 
	rglVector4 m_position;                                           // 00000004 | 10 
	rglVector4 m_position2;                                          // 00000014 | 10 
	float m_radius;                                                  // 00000024 | 4 
}; // $28 [ #368 ]

struct ALIGN(1) rglSphere // #343
{
	/* FIX-1 */ byte undef_0[72];                                    // 00000000 | 48 
	rglVector4 m_localOrigin;                                        // 00000048 | 10 
	rglVector4 m_origin;                                             // 00000058 | 10 
	float m_radius;                                                  // 00000068 | 4 
}; // $6C [ #368 ]

struct ALIGN(1) rglStream // #344
{
	/* FIX-4 */ byte undef_0[4];                                     // 00000000 | 4 
	rglString m_path;                                                // 00000004 | 40 
	bool m_autoFlush;                                                // 00000044 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000045 | 3 
	int m_cursor;                                                    // 00000048 | 4 
	rglString m_contents;                                            // 0000004C | 40 
}; // $8C [ #345 ]

struct ALIGN(1) rglSystemInfo // #346
{
	rglString m_cpuInfo;                                             // 00000000 | 40 
	int m_numCpuCores;                                               // 00000040 | 4 
	bool m_hasHyperThreading;                                        // 00000044 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000045 | 3 
	int m_totalMemory;                                               // 00000048 | 4 
	int m_availableMemory;                                           // 0000004C | 4 
	rglString m_osInfo;                                              // 00000050 | 40 
	int m_osMajorVersion;                                            // 00000090 | 4 
	int m_osMinorVersion;                                            // 00000094 | 4 
	int m_osBuildVersion;                                            // 00000098 | 4 
	bool m_x64;                                                      // 0000009C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000009D | 3 
	rglString m_wineInfo;                                            // 000000A0 | 40 
	bool m_runningUnderWine;                                         // 000000E0 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 000000E1 | 3 
	rglVector_rglString_ m_gpuInfo;                                  // 000000E4 | C 
	rglVector_int_ m_gpuMemory;                                      // 000000F0 | C 
	rglVector_rglString_ m_gpuDriverInfo;                            // 000000FC | C 
}; // $108 [ #345 ]

struct ALIGN(1) rglTableStringCellWidget // #352
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	rglString m_value;                                               // 00000230 | 40 
}; // $270 [ #345 ]

struct ALIGN(1) rglTableWidget // #354
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	rglScrollableWidget *m_scrollableWidget;                         // 00000280 | 4 
	int m_numColumns;                                                // 00000284 | 4 
	rglString m_columnHeaderTexts[16];                               // 00000288 | 400 
	rglString m_columnHeaderMeshNames[16];                           // 00000688 | 400 
	int m_columnTypes[16];                                           // 00000A88 | 40 
	bool m_columnVisibilities[16];                                   // 00000AC8 | 10 
	float m_columnWidths[16];                                        // 00000AD8 | 40 
	rglVector_rglTableRowWidget_P_ m_rows;                           // 00000B18 | C 
	int m_sortColumnNo;                                              // 00000B24 | 4 
	bool m_sortDirection;                                            // 00000B28 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000B29 | 3 
	float m_scrollbarThickness;                                      // 00000B2C | 4 
	float m_frameThickness;                                          // 00000B30 | 4 
	rglSimpleButtonWidget *m_columnHeaderButtonWidgets[16];          // 00000B34 | 40 
	rglWidget *m_sortArrowWidget;                                    // 00000B74 | 4 
	float m_sortArrowHeight;                                         // 00000B78 | 4 
	/* FIX-3 */ byte undef_2[4];                                     // 00000B7C | 4 
}; // $B80 [ #345 ]

struct ALIGN(1) rglTerrain // #357
{
	rglTerrainCell **m_cells;                                        // 00000000 | 4 
	rglVector4 m_origin;                                             // 00000004 | 10 
	rglIntVector2 m_numCells;                                        // 00000014 | 8 
	float m_cellSize;                                                // 0000001C | 4 
}; // $20 [ #368 #260 ]

struct ALIGN(1) rglTextBoxWidget // #359
{
	/* FIX-1 */ byte undef_0[568];                                   // 00000000 | 238 
	rglAppTimer m_focusTimer;                                        // 00000238 | 10 
	bool m_mouseInside;                                              // 00000248 | 1 
	bool m_focused;                                                  // 00000249 | 1 
	bool m_clearOnFirstClick;                                        // 0000024A | 1 
	/* FIX-4 */ byte undef_1[1];                                     // 0000024B | 1 
	int m_maxLength;                                                 // 0000024C | 4 
	bool m_isNumeric;                                                // 00000250 | 1 
	/* FIX-3 */ byte undef_2[7];                                     // 00000251 | 7 
}; // $258 [ #207 ]

struct ALIGN(1) rglTextImageData // #360
{
	rglVector2 Position;                                             // 00000000 | 8 
	rglMesh *Mesh;                                                   // 00000008 | 4 
}; // $C [ #366 ]

struct ALIGN(1) rglTexture // #362
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	bool m_valid;                                                    // 00000050 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000051 | 3 
	int m_type;                                                      // 00000054 | 4 
	int m_numFrames;                                                 // 00000058 | 4 
	int m_width;                                                     // 0000005C | 4 
	int m_height;                                                    // 00000060 | 4 
	int m_generateMipMapSublevels;                                   // 00000064 | 4 
	_D3DFORMAT m_renderTargetFormat;                                 // 00000068 | 4 
	_D3DFORMAT m_depthStencilFormat;                                 // 0000006C | 4 
	_D3DMULTISAMPLE_TYPE m_multisampleType;                          // 00000070 | 4 
	IDirect3DTexture9 **m_textures;                                  // 00000074 | 4 
	IDirect3DSurface9 *m_depthStencilSurface;                        // 00000078 | 4 
	IDirect3DSurface9 *m_renderTargetSurface;                        // 0000007C | 4 
	IDirect3DCubeTexture9 *m_cubeTexture;                            // 00000080 | 4 
	int m_onDemandState;                                             // 00000084 | 4 
	IDirect3DTexture9 *m_onDemandTexture;                            // 00000088 | 4 
	/* FIX-4 */ byte undef_2[4];                                     // 0000008C | 4 
	unsigned long long m_onDemandLoadTime;                           // 00000090 | 8 
	int m_numTableauRenders;                                         // 00000098 | 4 
	int m_restoreNo;                                                 // 0000009C | 4 
	rglString m_path;                                                // 000000A0 | 40 
	unsigned int m_fillColor;                                        // 000000E0 | 4 
	bool m_managed;                                                  // 000000E4 | 1 
	/* FIX-3 */ byte undef_3[3];                                     // 000000E5 | 3 
}; // $E8 [ #345 ]

struct ALIGN(1) rglTransform // #365
{
	rglVector4 s;                                                    // 00000000 | 10 
	rglVector4 f;                                                    // 00000010 | 10 
	rglVector4 u;                                                    // 00000020 | 10 
	rglVector4 o;                                                    // 00000030 | 10 
}; // $40 [ #368 ]

struct ALIGN(1) rglWidget // #372
{
	/* FIX-4 */ byte undef_0[8];                                     // 00000000 | 8 
	rglAppTimer m_clickTimer;                                        // 00000008 | 10 
	rglAppTimer m_animateToColorTimer;                               // 00000018 | 10 
	rglAppTimer m_animateToAlphaTimer;                               // 00000028 | 10 
	rglAppTimer m_animateToHighlightColorTimer;                      // 00000038 | 10 
	rglAppTimer m_animateToHighlightAlphaTimer;                      // 00000048 | 10 
	rglAppTimer m_animateToScaleTimer;                               // 00000058 | 10 
	rglAppTimer m_animateToPositionTimer;                            // 00000068 | 10 
	float m_animateToColorDuration;                                  // 00000078 | 4 
	float m_animateToAlphaDuration;                                  // 0000007C | 4 
	float m_animateToHighlightColorDuration;                         // 00000080 | 4 
	float m_animateToHighlightAlphaDuration;                         // 00000084 | 4 
	float m_animateToScaleDuration;                                  // 00000088 | 4 
	float m_animateToPositionDuration;                               // 0000008C | 4 
	rglVector2 m_animateToPositionTarget;                            // 00000090 | 8 
	rglVector2 m_animateToScaleTarget;                               // 00000098 | 8 
	unsigned int m_animateToColorTarget;                             // 000000A0 | 4 
	unsigned int m_animateToAlphaTarget;                             // 000000A4 | 4 
	unsigned int m_animateToHighlightColorTarget;                    // 000000A8 | 4 
	unsigned int m_animateToHighlightAlphaTarget;                    // 000000AC | 4 
	rglVector2 m_animateToPositionStart;                             // 000000B0 | 8 
	rglVector2 m_animateToScaleStart;                                // 000000B8 | 8 
	unsigned int m_animateToColorStart;                              // 000000C0 | 4 
	unsigned int m_animateToAlphaStart;                              // 000000C4 | 4 
	unsigned int m_animateToHighlightColorStart;                     // 000000C8 | 4 
	unsigned int m_animateToHighlightAlphaStart;                     // 000000CC | 4 
	bool m_animateToColor;                                           // 000000D0 | 1 
	bool m_animateToAlpha;                                           // 000000D1 | 1 
	bool m_animateToHighlightColor;                                  // 000000D2 | 1 
	bool m_animateToHighlightAlpha;                                  // 000000D3 | 1 
	bool m_animateToScale;                                           // 000000D4 | 1 
	bool m_animateToPosition;                                        // 000000D5 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 000000D6 | 2 
	unsigned int m_stateFlags;                                       // 000000D8 | 4 
	unsigned int m_triggerStateFlags;                                // 000000DC | 4 
	unsigned int m_triggerStateMask;                                 // 000000E0 | 4 
	unsigned int m_triggerFlags;                                     // 000000E4 | 4 
	rglString m_tooltipText;                                         // 000000E8 | 40 
	bool m_tooltipCentered;                                          // 00000128 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00000129 | 3 
	int m_tooltipState;                                              // 0000012C | 4 
	rglAppTimer m_tooltipTimer;                                      // 00000130 | 10 
	bool m_vertexKeyed;                                              // 00000140 | 1 
	/* FIX-4 */ byte undef_3[3];                                     // 00000141 | 3 
	rglVector2 m_scale;                                              // 00000144 | 8 
	rglVector2 m_absolutePosition;                                   // 0000014C | 8 
	rglVector2 m_relativePosition;                                   // 00000154 | 8 
	rglVector2 m_upperRight;                                         // 0000015C | 8 
	rglVector2 m_lowerLeft;                                          // 00000164 | 8 
	unsigned int m_flags;                                            // 0000016C | 4 
	rglMesh *m_meshes[10];                                           // 00000170 | 28 
	bool m_meshesInUse[10];                                          // 00000198 | A 
	bool m_highlighted;                                              // 000001A2 | 1 
	bool m_dynamic;                                                  // 000001A3 | 1 
	rglFont *m_textFont;                                             // 000001A4 | 4 
	rglString m_text;                                                // 000001A8 | 40 
	rglVector2 m_textPosition;                                       // 000001E8 | 8 
	rglVector2 m_textSize;                                           // 000001F0 | 8 
	bool m_textPassworded;                                           // 000001F8 | 1 
	/* FIX-4 */ byte undef_4[3];                                     // 000001F9 | 3 
	unsigned int m_textFlags;                                        // 000001FC | 4 
	unsigned int m_textColor;                                        // 00000200 | 4 
	unsigned int m_textHighlightColor;                               // 00000204 | 4 
	rglContainerWidget *m_containerWidget;                           // 00000208 | 4 
	rglWidget *m_parentWidget;                                       // 0000020C | 4 
	int m_intValue;                                                  // 00000210 | 4 
	int m_intValueMin;                                               // 00000214 | 4 
	int m_intValueMax;                                               // 00000218 | 4 
	float m_floatValue;                                              // 0000021C | 4 
	float m_floatValueMin;                                           // 00000220 | 4 
	float m_floatValueMax;                                           // 00000224 | 4 
	float m_zOffset;                                                 // 00000228 | 4 
	/* FIX-3 */ byte undef_5[4];                                     // 0000022C | 4 
}; // $230 [ #207 #366 #345 ]

struct ALIGN(1) rglWindowManagerMessageQueue // #374
{
	int m_size;                                                      // 00000000 | 4 
	int m_head;                                                      // 00000004 | 4 
	rglString m_texts[32];                                           // 00000008 | 800 
	unsigned int m_colors[32];                                       // 00000808 | 80 
}; // $888 [ #345 ]

struct ALIGN(1) WSEProfiling // #392
{
	bool m_enabled;                                                  // 00000000 | 1 
	/* FIX-4 */ byte undef_0[7];                                     // 00000001 | 7 
	WSEBitStream m_profile_stream;                                   // 00000008 | 140 
	std__map_rglString_P_int_std__less_rglString_P__std__allocator_std__pair_rglString_P_const_int_____ m_profile_types; // 00000148 | 8 
	WSEProfilingInfo m_infos[300];                                   // 00000150 | 2580 
	int m_cur_info;                                                  // 000026D0 | 4 
	int m_cur_profile_type;                                          // 000026D4 | 4 
	long long m_flush_interval;                                      // 000026D8 | 8 
	_LARGE_INTEGER m_frequency;                                      // 000026E0 | 8 
	_LARGE_INTEGER m_last_flush;                                     // 000026E8 | 8 
}; // $26F0 [ #382 #393 ]

struct ALIGN(1) WSERCONServer // #394
{
	rglString m_password;                                            // 00000000 | 40 
	WSERCONServerState m_state;                                      // 00000040 | 4 
	unsigned short m_port;                                           // 00000044 | 2 
	unsigned int m_socket;                                           // 00000048 | 4 
	unsigned int m_clientsCnt;                                       // 0000004C | 4 
}; // $50 [ #345 ]

struct ALIGN(1) mbAgentAiQueuedControl // #5
{
	mbAgentControl m_control;                                        // 00000000 | 28 
	long long m_time;                                                // 00000028 | 8 
}; // $30 [ #9 ]

struct ALIGN(1) mbAgentAiTracker // #6
{
	mbAgentAiTrackerEntry m_entries[16];                             // 00000000 | 300 
	int m_numEntries;                                                // 00000300 | 4 
}; // $304 [ #7 ]

struct ALIGN(1) mbAgentUpdateRec // #11
{
	int m_type;                                                      // 00000000 | 4 
	mbAgentControl m_control;                                        // 00000004 | 28 
	float m_frameTime;                                               // 0000002C | 4 
	unsigned long long m_time;                                       // 00000030 | 8 
	rglVector2 m_speed;                                              // 00000038 | 8 
	float m_movementDirf;                                            // 00000040 | 4 
	rglVector4 m_position;                                           // 00000044 | 10 
	float m_horseTurnSpeed;                                          // 00000054 | 4 
	bool m_isOnGround;                                               // 00000058 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000059 | 3 
	int m_walkState;                                                 // 0000005C | 4 
	rglQuad *m_groundQuad;                                           // 00000060 | 4 
	rglTransform m_entityTransform;                                  // 00000064 | 40 
	rglVector4 m_friction;                                           // 000000A4 | 10 
	rglVector4 m_acceleration;                                       // 000000B4 | 10 
	rglVector4 m_velocity;                                           // 000000C4 | 10 
	float m_tilt;                                                    // 000000D4 | 4 
	float m_tiltChange;                                              // 000000D8 | 4 
	int m_movementTime;                                              // 000000DC | 4 
	int m_actionCooldownTime;                                        // 000000E0 | 4 
	int m_channel0ActionNo;                                          // 000000E4 | 4 
	int m_channel0AnimationNo;                                       // 000000E8 | 4 
	unsigned int m_channel0MasterFlags;                              // 000000EC | 4 
	int m_channel1ActionNo;                                          // 000000F0 | 4 
	float m_channel1BlendFactor;                                     // 000000F4 | 4 
	int m_itemWeight;                                                // 000000F8 | 4 
	int m_riderAgentNo;                                              // 000000FC | 4 
	float m_forwardSpeedChange;                                      // 00000100 | 4 
	float m_rotationSpeed;                                           // 00000104 | 4 
	float m_rotationDamping;                                         // 00000108 | 4 
	/* FIX-3 */ byte undef_1[4];                                     // 0000010C | 4 
}; // $110 [ #9 #366 #368 #365 ]

struct ALIGN(1) mbAttack // #13
{
	int m_type;                                                      // 00000000 | 4 
	bool m_hitAgent;                                                 // 00000004 | 1 
	bool m_hitHorse;                                                 // 00000005 | 1 
	bool m_hitMissionObject;                                         // 00000006 | 1 
	/* FIX-4 */ byte undef_0[1];                                     // 00000007 | 1 
	float m_power;                                                   // 00000008 | 4 
	float m_holdTime;                                                // 0000000C | 4 
	bool m_crushthrough;                                             // 00000010 | 1 
	bool m_blocked;                                                  // 00000011 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 00000012 | 2 
	rglTransform m_prevSwordTransform;                               // 00000014 | 40 
	rglTransform m_curSwordTransform;                                // 00000054 | 40 
}; // $94 [ #365 ]

struct ALIGN(1) mbBannerSelectionWindow // #14
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
}; // $98 [ #144 ]

struct ALIGN(1) mbBasicGame // #15
{
	rglString m_name;                                                // 00000000 | 40 
	rglString m_mainServerHttp;                                      // 00000040 | 40 
	rglString m_mainServer;                                          // 00000080 | 40 
	rglString m_gameDownloadURL;                                     // 000000C0 | 40 
	rglString m_moduleDownloadURL;                                   // 00000100 | 40 
	int m_screenshotIndex;                                           // 00000140 | 4 
	/* FIX-4 */ byte undef_0[4];                                     // 00000144 | 4 
	long long m_triggerParams[16];                                   // 00000148 | 80 
	long long m_triggerResult;                                       // 000001C8 | 8 
	int m_fixedPointMultiplier;                                      // 000001D0 | 4 
	rglString m_resultString;                                        // 000001D4 | 40 
	int m_trackNo;                                                   // 00000214 | 4 
	int m_trackOptions;                                              // 00000218 | 4 
	int m_cueTrackNo;                                                // 0000021C | 4 
	mbSlots m_globalVariables;                                       // 00000220 | C 
	/* FIX-4 */ byte undef_1[4];                                     // 0000022C | 4 
	long long m_registers[128];                                      // 00000230 | 400 
	rglTransform m_positionRegisters[128];                           // 00000630 | 2000 
	rglString m_stringRegisters[128];                                // 00002630 | 2000 
	bool m_gameLaunched;                                             // 00004630 | 1 
	bool m_updatePlayerItems;                                        // 00004631 | 1 
	/* FIX-4 */ byte undef_2[2];                                     // 00004632 | 2 
	rglEntity *m_usedMapEntities[8][8];                              // 00004634 | 100 
	rglEntity *m_storedMapEntities[8][8];                            // 00004734 | 100 
	int m_numMapEntities[2];                                         // 00004834 | 8 
	rglVector2 m_mapMin;                                             // 0000483C | 8 
	rglVector2 m_mapMax;                                             // 00004844 | 8 
	rglVector2 m_mapSize;                                            // 0000484C | 8 
	rglScene *m_mapScene;                                            // 00004854 | 4 
	rglManifold *m_mapManifold;                                      // 00004858 | 4 
	rglVector_rglMesh_P_ m_mapSeaMeshes;                             // 0000485C | C 
	rglVector_rglMesh_P_ m_mapRiverMeshes;                           // 00004868 | C 
	rglVector_rglMesh_P_ m_mapFoamMeshes;                            // 00004874 | C 
	rglVector_rglMesh_P_ m_mapWaveMeshes;                            // 00004880 | C 
	rglPool_rglAiMeshVertex_ m_aiMeshVertexPool;                     // 0000488C | 10 
	rglPool_rglAiMeshEdge_ m_aiMeshEdgePool;                         // 0000489C | 10 
	rglPool_rglAiMeshFace_ m_aiMeshFacePool;                         // 000048AC | 10 
	int m_gameType;                                                  // 000048BC | 4 
	unsigned int m_bitMaskTable[33];                                 // 000048C0 | 84 
	rglString m_tooltipText;                                         // 00004944 | 40 
	/* FIX-4 */ byte undef_3[4];                                     // 00004984 | 4 
	rglAppTimer m_multiplayerMissionStartTimer;                      // 00004988 | 10 
	bool m_multiplayerMissionStarting;                               // 00004998 | 1 
	bool m_slowMotionToggle;                                         // 00004999 | 1 
	bool m_walkToggle;                                               // 0000499A | 1 
	/* FIX-4 */ byte undef_4[1];                                     // 0000499B | 1 
	int m_conversationSpeakerTroopNo;                                // 0000499C | 4 
	float m_cameraDistance;                                          // 000049A0 | 4 
	bool m_switchModule;                                             // 000049A4 | 1 
	bool m_switchingModule;                                          // 000049A5 | 1 
	bool m_connectToServer;                                          // 000049A6 | 1 
	/* FIX-4 */ byte undef_5[1];                                     // 000049A7 | 1 
	rglString m_storedModule;                                        // 000049A8 | 40 
	rglString m_storedAddress;                                       // 000049E8 | 40 
	rglString m_storedPassword;                                      // 00004A28 | 40 
	rglVector_rglString_ m_consoleCommands;                          // 00004A68 | C 
	int m_curConsoleCommandNo;                                       // 00004A74 | 4 
	MumbleLinkedMem *m_mumble;                                       // 00004A78 | 4 
	/* FIX-4 */ byte undef_6[4];                                     // 00004A7C | 4 
	rglAppTimer m_TimerRegisters[128];                               // 00004A80 | 800 
	mbnetBuffer m_NetworkBufferRegisters[128];                       // 00005280 | 30000 
	float m_floatRegisters[128];                                     // 00035280 | 200 
	mu__Parser m_parser;                                             // 00035480 | D4 
	WSEObjectManager m_wseObjects;                                   // 00035554 | 20 
	WSEObjectType *m_dictionaryType;                                 // 00035574 | 4 
	WSEObjectType *m_arrayType;                                      // 00035578 | 4 
	WSEArraySortOptions m_sortOptions;                               // 0003557C | 8 
	int m_numReturnValues;                                           // 00035584 | 4 
	long long m_returnValues[16];                                    // 00035588 | 80 
}; // $35608 [ #345 #169 #365 #366 #207 #104 #390 #378 ]

struct ALIGN(1) mbBattleOptionsWindow // #16
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	mbOptionsWindowHelper m_helper;                                  // 0000005C | A8 
	rglWidget *m_firstPersonFieldOfViewLabelWidget;                  // 00000104 | 4 
	rglWidget *m_firstPersonFieldOfViewValueLabelWidget;             // 00000108 | 4 
	rglSliderWidget *m_firstPersonFieldOfViewSliderWidget;           // 0000010C | 4 
	rglWidget *m_thirdPersonFieldOfViewLabelWidget;                  // 00000110 | 4 
	rglWidget *m_thirdPersonFieldOfViewValueLabelWidget;             // 00000114 | 4 
	rglSliderWidget *m_thirdPersonFieldOfViewSliderWidget;           // 00000118 | 4 
	rglWidget *m_controlBlockDirLabelWidget;                         // 0000011C | 4 
	rglComboLabelWidget *m_controlBlockDirComboLabelWidget;          // 00000120 | 4 
	rglWidget *m_controlBlockDirMountedLabelWidget;                  // 00000124 | 4 
	rglComboLabelWidget *m_controlBlockDirMountedComboLabelWidget;   // 00000128 | 4 
	rglWidget *m_controlAttackDirLabelWidget;                        // 0000012C | 4 
	rglComboLabelWidget *m_controlAttackDirComboLabelWidget;         // 00000130 | 4 
	rglWidget *m_controlAttackDirMountedLabelWidget;                 // 00000134 | 4 
	rglComboLabelWidget *m_controlAttackDirMountedComboLabelWidget;  // 00000138 | 4 
	rglWidget *m_lanceControlLabelWidget;                            // 0000013C | 4 
	rglComboLabelWidget *m_lanceControlComboLabelWidget;             // 00000140 | 4 
	rglWidget *m_damageToPlayerLabelWidget;                          // 00000144 | 4 
	rglWidget *m_damageToPlayerValueLabelWidget;                     // 00000148 | 4 
	rglSliderWidget *m_damageToPlayerSliderWidget;                   // 0000014C | 4 
	rglWidget *m_damageToFriendsLabelWidget;                         // 00000150 | 4 
	rglWidget *m_damageToFriendsValueLabelWidget;                    // 00000154 | 4 
	rglSliderWidget *m_damageToFriendsSliderWidget;                  // 00000158 | 4 
	rglWidget *m_combatAiLabelWidget;                                // 0000015C | 4 
	rglComboLabelWidget *m_combatAiComboLabelWidget;                 // 00000160 | 4 
	rglWidget *m_combatSpeedLabelWidget;                             // 00000164 | 4 
	rglComboLabelWidget *m_combatSpeedComboLabelWidget;              // 00000168 | 4 
	rglWidget *m_battleSizeLabelWidget;                              // 0000016C | 4 
	rglWidget *m_battleSizeValueLabelWidget;                         // 00000170 | 4 
	rglSliderWidget *m_battleSizeSliderWidget;                       // 00000174 | 4 
	rglWidget *m_bloodAmountLabelWidget;                             // 00000178 | 4 
	rglSliderWidget *m_bloodAmountSliderWidget;                      // 0000017C | 4 
	rglWidget *m_horseCameraLabelWidget;                             // 00000180 | 4 
	rglComboButtonWidget *m_horseCameraComboButtonWidget;            // 00000184 | 4 
	rglWidget *m_corpsesLabelWidget;                                 // 00000188 | 4 
	rglNumberBoxWidget *m_corpsesNumberBoxWidget;                    // 0000018C | 4 
	rglWidget *m_ragdollsLabelWidget;                                // 00000190 | 4 
	rglNumberBoxWidget *m_ragdollsNumberBoxWidget;                   // 00000194 | 4 
	rglCheckBoxWidget *m_ragdollSoakCheckBoxWidget;                  // 00000198 | 4 
	rglCheckBoxWidget *m_ragdollSoakApplyForceCheckBoxWidget;        // 0000019C | 4 
	rglCheckBoxWidget *m_showAttackDirCheckBoxWidget;                // 000001A0 | 4 
	rglCheckBoxWidget *m_showReticuleCheckBoxWidget;                 // 000001A4 | 4 
	rglWidget *m_bannerModeLabelWidget;                              // 000001A8 | 4 
	rglComboLabelWidget *m_bannerModeComboLabelWidget;               // 000001AC | 4 
	rglWidget *m_bannerOutlineModeLabelWidget;                       // 000001B0 | 4 
	rglComboLabelWidget *m_bannerOutlineModeComboLabelWidget;        // 000001B4 | 4 
	rglCheckBoxWidget *m_dynamicBannerTransparencyCheckBoxWidget;    // 000001B8 | 4 
	rglCheckBoxWidget *m_showDamageCheckBoxWidget;                   // 000001BC | 4 
	rglCheckBoxWidget *m_showShotDifficultyCheckBoxWidget;           // 000001C0 | 4 
	rglCheckBoxWidget *m_showCasualtiesCheckBoxWidget;               // 000001C4 | 4 
	rglCheckBoxWidget *m_showExperienceCheckBoxWidget;               // 000001C8 | 4 
	rglCheckBoxWidget *m_showProficiencyCheckBoxWidget;              // 000001CC | 4 
	rglCheckBoxWidget *m_dismountHorseOnUseCheckBoxWidget;           // 000001D0 | 4 
}; // $1D4 [ #132 ]

struct ALIGN(1) mbCampaignOptionsWindow // #20
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	mbOptionsWindowHelper m_helper;                                  // 0000005C | A8 
	rglWidget *m_campaignAiLabelWidget;                              // 00000104 | 4 
	rglComboLabelWidget *m_campaignAiComboLabelWidget;               // 00000108 | 4 
	rglCheckBoxWidget *m_enableCheatsCheckBoxWidget;                 // 0000010C | 4 
}; // $110 [ #132 ]

struct ALIGN(1) mbControlsWindow // #23
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	mbOptionsWindowHelper m_helper;                                  // 0000005C | A8 
	rglGameButtonWidget *m_undoButtonWidget;                         // 00000104 | 4 
	rglGameButtonWidget *m_defaultButtonWidget;                      // 00000108 | 4 
	rglWidget *m_gameKeyLabelWidgets[95];                            // 0000010C | 17C 
	rglSimpleButtonWidget *m_gameKeyButtonWidgets[95][2];            // 00000288 | 2F8 
	rglWidget *m_pressKeyLabelWidget;                                // 00000580 | 4 
	rglWidget *m_battleControlsLabelWidget;                          // 00000584 | 4 
	rglWidget *m_spectatorCameraControlsLabelWidget;                 // 00000588 | 4 
	rglWidget *m_mapControlsLabelWidget;                             // 0000058C | 4 
	rglWidget *m_generalControlsLabelWidget;                         // 00000590 | 4 
	bool m_changesMade;                                              // 00000594 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000595 | 3 
	int m_clickedKey;                                                // 00000598 | 4 
	int m_clickedIndex;                                              // 0000059C | 4 
	bool m_skippedMouseOnce;                                         // 000005A0 | 1 
	/* FIX-3 */ byte undef_2[3];                                     // 000005A1 | 3 
}; // $5A4 [ #132 ]

struct ALIGN(1) mbCreditsWindow // #28
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
}; // $98 [ #144 ]

struct ALIGN(1) mbEntryPoint // #33
{
	rglTransform m_sceneTransform;                                   // 00000000 | 40 
	rglTransform m_transform;                                        // 00000040 | 40 
	rglTransform m_startingTransform;                                // 00000080 | 40 
	rglTransform m_moveStartingTransform;                            // 000000C0 | 40 
	int m_numXMoves;                                                 // 00000100 | 4 
	int m_numYMoves;                                                 // 00000104 | 4 
	mbMissionTimer m_moveTimer;                                      // 00000108 | 10 
	bool m_isAutoGenerated;                                          // 00000118 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000119 | 3 
	rglQuad *m_groundQuad;                                           // 0000011C | 4 
}; // $120 [ #365 #96 ]

struct ALIGN(1) mbEscapeWindow // #34
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
	rglSimpleButtonWidget *m_returnButtonWidget;                     // 00000098 | 4 
	rglSimpleButtonWidget *m_saveAndExitButtonWidget;                // 0000009C | 4 
	rglSimpleButtonWidget *m_optionsButtonWidget;                    // 000000A0 | 4 
	rglSimpleButtonWidget *m_saveButtonWidget;                       // 000000A4 | 4 
	rglSimpleButtonWidget *m_saveAsButtonWidget;                     // 000000A8 | 4 
	rglSimpleButtonWidget *m_exitButtonWidget;                       // 000000AC | 4 
	rglSimpleButtonWidget *m_creditsButtonWidget;                    // 000000B0 | 4 
	rglSimpleButtonWidget *m_quitButtonWidget;                       // 000000B4 | 4 
	rglWidget *m_imageLogoWidget;                                    // 000000B8 | 4 
	/* FIX-3 */ byte undef_2[4];                                     // 000000BC | 4 
}; // $C0 [ #144 ]

struct ALIGN(1) mbFaction // #42
{
	rglString m_name;                                                // 00000000 | 40 
	bool m_renamed;                                                  // 00000040 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000041 | 3 
	rglString m_id;                                                  // 00000044 | 40 
	unsigned int m_flags;                                            // 00000084 | 4 
	unsigned int m_color;                                            // 00000088 | 4 
	float m_relations[128];                                          // 0000008C | 200 
	int m_numRanks;                                                  // 0000028C | 4 
	rglVector_rglString_ m_ranks;                                    // 00000290 | C 
	float m_maxPlayerRelation;                                       // 0000029C | 4 
	mbSlots m_slots;                                                 // 000002A0 | C 
	mbNotes m_notes;                                                 // 000002AC | 448 
}; // $6F4 [ #345 #169 #130 ]

struct ALIGN(1) mbFloraRec // #47
{
	int m_floraKindNo;                                               // 00000000 | 4 
	rglIntVector2 m_faceCoords;                                      // 00000004 | 8 
	int m_faceTriangle;                                              // 0000000C | 4 
	rglTransform m_transform;                                        // 00000010 | 40 
	rglVector4 m_scale;                                              // 00000050 | 10 
	int m_floraKindInstanceNo;                                       // 00000060 | 4 
	rglMesh *m_meshes[4];                                            // 00000064 | 10 
	int m_firstFaceCorner[4];                                        // 00000074 | 10 
	int m_lastFaceCorner[4];                                         // 00000084 | 10 
	int m_numMeshes;                                                 // 00000094 | 4 
	bool m_entityCreated;                                            // 00000098 | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 00000099 | 3 
}; // $9C [ #260 #365 #368 ]

struct ALIGN(1) mbGame // #49
{
	int m_savegameNo;                                                // 00000000 | 4 
	int m_seed;                                                      // 00000004 | 4 
	rglString m_savegameName;                                        // 00000008 | 40 
	bool m_savingDisabled;                                           // 00000048 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000049 | 3 
	rglString m_moduleName;                                          // 0000004C | 40 
	rglString m_modulePath;                                          // 0000008C | 40 
	rglEntity *m_trackEntity;                                        // 000000CC | 4 
	rglMesh *m_trackMesh;                                            // 000000D0 | 4 
	rglVector_rglMesh_P_ m_treeMeshes;                               // 000000D4 | C 
	rglMesh *m_skyboxMesh;                                           // 000000E0 | 4 
	rglColor m_sunColor;                                             // 000000E4 | 10 
	rglColor m_fogColor;                                             // 000000F4 | 10 
	rglColor m_ambientColor;                                         // 00000104 | 10 
	int m_sceneHdrSkyboxNo;                                          // 00000114 | 4 
	int m_sceneSkyboxNo;                                             // 00000118 | 4 
	float m_sceneFogDistance;                                        // 0000011C | 4 
	unsigned int m_sceneFogColor;                                    // 00000120 | 4 
	rglColor m_sceneSunColor;                                        // 00000124 | 10 
	rglColor m_sceneAmbientColor;                                    // 00000134 | 10 
	rglColor m_sceneGroundAmbientColor;                              // 00000144 | 10 
	rglString m_classNames[9];                                       // 00000154 | 240 
	int m_mainPartyNo;                                               // 00000394 | 4 
	int m_tempPartyNo;                                               // 00000398 | 4 
	int m_campBanditsPartyNo;                                        // 0000039C | 4 
	int m_cameraPartyNo;                                             // 000003A0 | 4 
	bool m_cameraFollowingParty;                                     // 000003A4 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 000003A5 | 3 
	int m_playerTroopNo;                                             // 000003A8 | 4 
	int m_tempTroopNo;                                               // 000003AC | 4 
	bool m_paused;                                                   // 000003B0 | 1 
	bool m_unlimitedSpottingRange;                                   // 000003B1 | 1 
	/* FIX-4 */ byte undef_2[2];                                     // 000003B2 | 2 
	int m_playerKillCount;                                           // 000003B4 | 4 
	int m_playerTeamkillCount;                                       // 000003B8 | 4 
	int m_playerWoundCount;                                          // 000003BC | 4 
	int m_playerTeamwoundCount;                                      // 000003C0 | 4 
	bool m_missionObjectInUse;                                       // 000003C4 | 1 
	/* FIX-4 */ byte undef_3[3];                                     // 000003C5 | 3 
	unsigned int m_encounterFlags;                                   // 000003C8 | 4 
	int m_backgroundPresentationNo;                                  // 000003CC | 4 
	int m_saveMode;                                                  // 000003D0 | 4 
	int m_ironman;                                                   // 000003D4 | 4 
	rglString m_menuText;                                            // 000003D8 | 40 
	rglVector_mbQueuedWindow_ m_queuedWindows;                       // 00000418 | C 
	rglStableVector_mbEvent_ m_events;                               // 00000424 | 20 
	rglHashVector_mbParty_ m_parties;                                // 00000444 | 138DC 
	rglLight *m_sunLight;                                            // 00013D20 | 4 
	int m_cameraMode;                                                // 00013D24 | 4 
	mbTriggerManager m_triggers;                                     // 00013D28 | C 
	mbSimpleTriggerManager m_simpleTriggers;                         // 00013D34 | C 
	mbTroop *m_troops;                                               // 00013D40 | 4 
	int m_numTroops;                                                 // 00013D44 | 4 
	int m_encounteredPartyNo;                                        // 00013D48 | 4 
	int m_encounteredPartyNo2;                                       // 00013D4C | 4 
	int m_encounteredPartyIsAttacker;                                // 00013D50 | 4 
	bool m_metaMissionActive;                                        // 00013D54 | 1 
	/* FIX-4 */ byte undef_4[3];                                     // 00013D55 | 3 
	int m_repeatObject;                                              // 00013D58 | 4 
	int m_defaultPrisonerPrice;                                      // 00013D5C | 4 
	int m_mercenarySourcePartyNo;                                    // 00013D60 | 4 
	bool m_started;                                                  // 00013D64 | 1 
	/* FIX-4 */ byte undef_5[3];                                     // 00013D65 | 3 
	float m_merchandiseModifierQuality;                              // 00013D68 | 4 
	bool m_startMapConversation;                                     // 00013D6C | 1 
	bool m_startMapConversationFromPresentation;                     // 00013D6D | 1 
	/* FIX-4 */ byte undef_6[2];                                     // 00013D6E | 2 
	int m_mapConversationToken;                                      // 00013D70 | 4 
	int m_mapConversationTroopNo;                                    // 00013D74 | 4 
	int m_mapConversationTroopDna;                                   // 00013D78 | 4 
	mbFaction *m_factions;                                           // 00013D7C | 4 
	int m_numFactions;                                               // 00013D80 | 4 
	mbSite *m_sites;                                                 // 00013D84 | 4 
	int m_numSites;                                                  // 00013D88 | 4 
	bool m_tempSiteInUse;                                            // 00013D8C | 1 
	/* FIX-4 */ byte undef_7[3];                                     // 00013D8D | 3 
	mbQuest *m_quests;                                               // 00013D90 | 4 
	int m_numQuests;                                                 // 00013D94 | 4 
	mbInfoPage *m_infoPages;                                         // 00013D98 | 4 
	int m_numInfoPages;                                              // 00013D9C | 4 
	rglVector_mbTrack_ m_tracks;                                     // 00013DA0 | C 
	/* FIX-4 */ byte undef_8[4];                                     // 00013DAC | 4 
	mbGameTimer m_lastDisembarkCheckTimer;                           // 00013DB0 | 10 
	int m_mainPartyAction;                                           // 00013DC0 | 4 
	rglString m_dialogBoxText;                                       // 00013DC4 | 40 
	rglString m_dialogBoxTitle;                                      // 00013E04 | 40 
	bool m_showDialogBox;                                            // 00013E44 | 1 
	/* FIX-4 */ byte undef_9[3];                                     // 00013E45 | 3 
	float m_mapLegendZoom;                                           // 00013E48 | 4 
	float m_restPeriod;                                              // 00013E4C | 4 
	int m_restNoAttack;                                              // 00013E50 | 4 
	int m_restIsInteractive;                                         // 00013E54 | 4 
	int m_restTimeSpeed;                                             // 00013E58 | 4 
	int m_minPartyCreationRandomValue;                               // 00013E5C | 4 
	int m_maxPartyCreationRandomValue;                               // 00013E60 | 4 
	unsigned int m_tutorialFlags;                                    // 00013E64 | 4 
	int m_menuNo;                                                    // 00013E68 | 4 
	int m_screenTroopNo;                                             // 00013E6C | 4 
	int m_siteNo;                                                    // 00013E70 | 4 
	int m_entryPointNo;                                              // 00013E74 | 4 
	int m_missionTemplateNo;                                         // 00013E78 | 4 
	int m_screenPartyNo;                                             // 00013E7C | 4 
	int m_screenNoteType;                                            // 00013E80 | 4 
	int m_screenNoteObject;                                          // 00013E84 | 4 
	bool m_enableMissionConversation;                                // 00013E88 | 1 
	bool m_disableMissionConversation;                               // 00013E89 | 1 
	/* FIX-4 */ byte undef_10[6];                                    // 00013E8A | 6 
	mbGameTimer m_dateTimer;                                         // 00013E90 | 10 
	int m_hour;                                                      // 00013EA0 | 4 
	int m_day;                                                       // 00013EA4 | 4 
	int m_week;                                                      // 00013EA8 | 4 
	int m_month;                                                     // 00013EAC | 4 
	int m_year;                                                      // 00013EB0 | 4 
	float m_cloudAmount;                                             // 00013EB4 | 4 
	float m_hazeAmount;                                              // 00013EB8 | 4 
	float m_averageDifficulty;                                       // 00013EBC | 4 
	float m_totalDifficultyTime;                                     // 00013EC0 | 4 
	float m_lastDifficultyCheck;                                     // 00013EC4 | 4 
	rglString m_log;                                                 // 00013EC8 | 40 
	mbGameWeather m_weather;                                         // 00013F08 | 60 
	int m_numContextMenuItems;                                       // 00013F68 | 4 
	int m_selectedContextMenuNo;                                     // 00013F6C | 4 
	rglString m_contextMenuTexts[100];                               // 00013F70 | 1900 
	int m_contextMenuValues[100];                                    // 00015870 | 190 
	rglColor m_triggerColor;                                         // 00015A00 | 10 
	rglVector4 m_triggerPositionDelta;                               // 00015A10 | 10 
	rglTransform m_triggerTransform;                                 // 00015A20 | 40 
	bool m_menuItemDisabled;                                         // 00015A60 | 1 
	/* FIX-4 */ byte undef_11[3];                                    // 00015A61 | 3 
	float m_frameTime;                                               // 00015A64 | 4 
	mbPartyDnas m_mainPartyDnas;                                     // 00015A68 | 1000 
	bool m_active;                                                   // 00016A68 | 1 
	/* FIX-4 */ byte undef_12[3];                                    // 00016A69 | 3 
	int m_consoleMode;                                               // 00016A6C | 4 
	bool m_editModeActive;                                           // 00016A70 | 1 
	bool m_editModeDialogOpen;                                       // 00016A71 | 1 
	/* FIX-4 */ byte undef_13[2];                                    // 00016A72 | 2 
	int m_triggerMissionObjectNo;                                    // 00016A74 | 4 
	int m_triggerAgentNo;                                            // 00016A78 | 4 
	rglMetaMesh *m_triggerMetaMesh;                                  // 00016A7C | 4 
	rglMesh *m_triggerMesh;                                          // 00016A80 | 4 
	int m_triggerItemSlotNo;                                         // 00016A84 | 4 
	int m_questionAnswer;                                            // 00016A88 | 4 
	rglString m_backgroundMeshName;                                  // 00016A8C | 40 
	int m_menuTableauMaterialNo;                                     // 00016ACC | 4 
	int m_menuTableauParam;                                          // 00016AD0 | 4 
	rglVector4 m_menuTableauPosition;                                // 00016AD4 | 10 
	int m_talkInfoRelationValue;                                     // 00016AE4 | 4 
	bool m_showTalkInfo;                                             // 00016AE8 | 1 
	/* FIX-4 */ byte undef_14[3];                                    // 00016AE9 | 3 
	rglString m_talkInfoLines[5];                                    // 00016AEC | 140 
	bool m_updateTalkInfo;                                           // 00016C2C | 1 
	/* FIX-4 */ byte undef_15[3];                                    // 00016C2D | 3 
	rglEntity *m_compassEntity;                                      // 00016C30 | 4 
	mbnetBuffer *m_triggerMbnetBuffer;                               // 00016C34 | 4 
}; // $16C38 [ #345 #224 #193 #160 #54 #55 #368 #365 #136 ]

struct ALIGN(1) mbGraphicsOptionsWindow // #57
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	mbOptionsWindowHelper m_helper;                                  // 0000005C | A8 
	rglWidget *m_resolutionLabelWidget;                              // 00000104 | 4 
	rglComboButtonWidget *m_resolutionComboButtonWidget;             // 00000108 | 4 
	rglCheckBoxWidget *m_windowedCheckBoxWidget;                     // 0000010C | 4 
	rglCheckBoxWidget *m_vsyncCheckBoxWidget;                        // 00000110 | 4 
	rglWidget *m_multisampleTypeLabelWidget;                         // 00000114 | 4 
	rglComboLabelWidget *m_multisampleTypeComboLabelWidget;          // 00000118 | 4 
	rglComboLabelWidget *m_postFxMultisampleTypeComboLabelWidget;    // 0000011C | 4 
	rglComboLabelWidget *m_postFxHdrMultisampleTypeComboLabelWidget; // 00000120 | 4 
	rglCheckBoxWidget *m_alphaToCoverageCheckBoxWidget;              // 00000124 | 4 
	rglWidget *m_fxaaLabelWidget;                                    // 00000128 | 4 
	rglComboLabelWidget *m_fxaaComboLabelWidget;                     // 0000012C | 4 
	rglWidget *m_postProcessLabelWidget;                             // 00000130 | 4 
	rglComboLabelWidget *m_postProcessComboLabelWidget;              // 00000134 | 4 
	rglWidget *m_anisotropyLabelWidget;                              // 00000138 | 4 
	rglComboLabelWidget *m_anisotropyComboLabelWidget;               // 0000013C | 4 
	rglWidget *m_gammaLabelWidget;                                   // 00000140 | 4 
	rglWidget *m_gammaValueLabelWidget;                              // 00000144 | 4 
	rglSliderWidget *m_gammaSliderWidget;                            // 00000148 | 4 
	rglWidget *m_fontScaleLabelWidget;                               // 0000014C | 4 
	rglWidget *m_fontScaleValueLabelWidget;                          // 00000150 | 4 
	rglSliderWidget *m_fontScaleSliderWidget;                        // 00000154 | 4 
	rglWidget *m_shadowQualityLabelWidget;                           // 00000158 | 4 
	rglComboLabelWidget *m_shadowQualityComboLabelWidget;            // 0000015C | 4 
	rglCheckBoxWidget *m_onDemandTexturesCheckBoxWidget;             // 00000160 | 4 
	rglWidget *m_textureQualityLabelWidget;                          // 00000164 | 4 
	rglComboLabelWidget *m_textureQualityComboLabelWidget;           // 00000168 | 4 
	rglWidget *m_shaderQualityLabelWidget;                           // 0000016C | 4 
	rglComboLabelWidget *m_shaderQualityComboLabelWidget;            // 00000170 | 4 
	rglCheckBoxWidget *m_dynamicBatchingCheckBoxWidget;              // 00000174 | 4 
	rglWidget *m_highDynamicRangeLabelWidget;                        // 00000178 | 4 
	rglComboLabelWidget *m_highDynamicRangeComboLabelWidget;         // 0000017C | 4 
	rglCheckBoxWidget *m_autoExposureCheckBoxWidget;                 // 00000180 | 4 
	rglCheckBoxWidget *m_depthOfFieldCheckBoxWidget;                 // 00000184 | 4 
	rglCheckBoxWidget *m_instancingCheckBoxWidget;                   // 00000188 | 4 
	rglWidget *m_grassDensityLabelWidget;                            // 0000018C | 4 
	rglWidget *m_grassDensityValueLabelWidget;                       // 00000190 | 4 
	rglSliderWidget *m_grassDensitySliderWidget;                     // 00000194 | 4 
	rglWidget *m_plantShadowsLabelWidget;                            // 00000198 | 4 
	rglComboLabelWidget *m_plantShadowsComboLabelWidget;             // 0000019C | 4 
	rglWidget *m_floraLodDetailLabelWidget;                          // 000001A0 | 4 
	rglComboLabelWidget *m_floraLodDetailComboLabelWidget;           // 000001A4 | 4 
	rglWidget *m_floraDegradeDistanceLabelWidget;                    // 000001A8 | 4 
	rglWidget *m_floraDegradeDistanceValueLabelWidget;               // 000001AC | 4 
	rglSliderWidget *m_floraDegradeDistanceSliderWidget;             // 000001B0 | 4 
	rglWidget *m_characterDetailLabelWidget;                         // 000001B4 | 4 
	rglWidget *m_characterDetailLowLabelWidget;                      // 000001B8 | 4 
	rglWidget *m_characterDetailHighLabelWidget;                     // 000001BC | 4 
	rglSliderWidget *m_characterDetailSliderWidget;                  // 000001C0 | 4 
	rglWidget *m_characterShadowDetailLabelWidget;                   // 000001C4 | 4 
	rglWidget *m_characterShadowDetailLowLabelWidget;                // 000001C8 | 4 
	rglWidget *m_characterShadowDetailHighLabelWidget;               // 000001CC | 4 
	rglSliderWidget *m_characterShadowDetailSliderWidget;            // 000001D0 | 4 
	rglWidget *m_bloodStainsLabelWidget;                             // 000001D4 | 4 
	rglComboLabelWidget *m_bloodStainsComboLabelWidget;              // 000001D8 | 4 
	rglCheckBoxWidget *m_dynamicLightingCheckBoxWidget;              // 000001DC | 4 
	rglCheckBoxWidget *m_characterShadowsCheckBoxWidget;             // 000001E0 | 4 
	rglCheckBoxWidget *m_environmentShadowsCheckBoxWidget;           // 000001E4 | 4 
	rglCheckBoxWidget *m_particlesCheckBoxWidget;                    // 000001E8 | 4 
	rglWidget *m_particleDegradeDistanceLabelWidget;                 // 000001EC | 4 
	rglWidget *m_particleDegradeDistanceValueLabelWidget;            // 000001F0 | 4 
	rglSliderWidget *m_particleDegradeDistanceSliderWidget;          // 000001F4 | 4 
	rglWidget *m_weaponTrailsLabelWidget;                            // 000001F8 | 4 
	rglComboLabelWidget *m_weaponTrailsComboLabelWidget;             // 000001FC | 4 
	rglCheckBoxWidget *m_sunFlareCheckBoxWidget;                     // 00000200 | 4 
	rglWidget *m_reflectionsLabelWidget;                             // 00000204 | 4 
	rglComboLabelWidget *m_reflectionsComboLabelWidget;              // 00000208 | 4 
	rglWidget *m_reflectionsTextureQualityLabelWidget;               // 0000020C | 4 
	rglComboLabelWidget *m_reflectionsTextureQualityComboLabelWidget; // 00000210 | 4 
	rglWidget *m_maxFrameRateLabelWidget;                            // 00000214 | 4 
	rglNumberBoxWidget *m_maxFrameRateNumberBoxWidget;               // 00000218 | 4 
	rglCheckBoxWidget *m_showFrameRateCheckBoxWidget;                // 0000021C | 4 
	rglWidget *m_screenshotFormatLabelWidget;                        // 00000220 | 4 
	rglComboLabelWidget *m_screenshotFormatComboLabelWidget;         // 00000224 | 4 
	rglVector_rglResolution_ m_availableResolutions;                 // 00000228 | C 
}; // $234 [ #132 ]

struct ALIGN(1) mbGroundPaint // #58
{
	int m_numLayers;                                                 // 00000000 | 4 
	int m_elevationLayerNo;                                          // 00000004 | 4 
	int m_colorLayerNo;                                              // 00000008 | 4 
	mbGroundPaintLayer m_layers[13];                                 // 0000000C | 3A8 
	rglIntVector2 m_size;                                            // 000003B4 | 8 
}; // $3BC [ #59 #260 ]

struct ALIGN(1) mbInfoPage // #63
{
	rglString m_title;                                               // 00000000 | 40 
	rglString m_text;                                                // 00000040 | 40 
	rglString m_id;                                                  // 00000080 | 40 
	mbNotes m_notes;                                                 // 000000C0 | 448 
}; // $508 [ #345 #130 ]

struct ALIGN(1) mbInputOptionsWindow // #65
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	mbOptionsWindowHelper m_helper;                                  // 0000005C | A8 
	rglWidget *m_languageLabelWidget;                                // 00000104 | 4 
	rglComboButtonWidget *m_languageComboButtonWidget;               // 00000108 | 4 
	rglWidget *m_mouseSensitivityLabelWidget;                        // 0000010C | 4 
	rglSliderWidget *m_mouseSensitivitySliderWidget;                 // 00000110 | 4 
	rglCheckBoxWidget *m_invertMouseXCheckBoxWidget;                 // 00000114 | 4 
	rglCheckBoxWidget *m_invertMouseYCheckBoxWidget;                 // 00000118 | 4 
	rglCheckBoxWidget *m_altF4CheckBoxWidget;                        // 0000011C | 4 
}; // $120 [ #132 ]

struct ALIGN(1) mbItemKind // #68
{
	rglString m_pluralName;                                          // 00000000 | 40 
	rglString m_name;                                                // 00000040 | 40 
	rglString m_id;                                                  // 00000080 | 40 
	int m_factionNos[16];                                            // 000000C0 | 40 
	int m_numFactions;                                               // 00000100 | 4 
	mbSlots m_slots;                                                 // 00000104 | C 
	int m_numVariations;                                             // 00000110 | 4 
	rglMetaMesh *m_variationMetaMeshes[16];                          // 00000114 | 40 
	/* FIX-4 */ byte undef_0[4];                                     // 00000154 | 4 
	mbItemKindVariation m_variations[16];                            // 00000158 | 480 
	unsigned long long m_properties;                                 // 000005D8 | 8 
	unsigned long long m_capabilities;                               // 000005E0 | 8 
	int m_value;                                                     // 000005E8 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 000005EC | 4 
	unsigned long long m_modifiers;                                  // 000005F0 | 8 
	int m_hitPoints;                                                 // 000005F8 | 4 
	int m_difficulty;                                                // 000005FC | 4 
	int m_speedRating;                                               // 00000600 | 4 
	int m_missileSpeed;                                              // 00000604 | 4 
	int m_headArmor;                                                 // 00000608 | 4 
	int m_bodyArmor;                                                 // 0000060C | 4 
	int m_legArmor;                                                  // 00000610 | 4 
	float m_weight;                                                  // 00000614 | 4 
	int m_weaponLength;                                              // 00000618 | 4 
	int m_maxAmmo;                                                   // 0000061C | 4 
	int m_thrustDamage;                                              // 00000620 | 4 
	int m_swingDamage;                                               // 00000624 | 4 
	float m_priceRate;                                               // 00000628 | 4 
	int m_abundance;                                                 // 0000062C | 4 
	float m_probability;                                             // 00000630 | 4 
	mbSimpleTriggerManager m_simpleTriggers;                         // 00000634 | C 
	int m_bloodParticleSystemNos[2];                                 // 00000640 | 8 
	unsigned int m_bloodColor;                                       // 00000648 | 4 
	rglSkeletonModel *m_skeletonModel;                               // 0000064C | 4 
}; // $650 [ #345 #169 #69 #160 ]

struct ALIGN(1) mbLoadingWindow // #72
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglWidget *m_textWidget;                                         // 0000005C | 4 
	rglWidget *m_hintWidget;                                         // 00000060 | 4 
	rglWidget *m_logoWidget;                                         // 00000064 | 4 
	int m_stage;                                                     // 00000068 | 4 
	int m_step;                                                      // 0000006C | 4 
	rglInputBinaryFileStream *m_savegameStream;                      // 00000070 | 4 
	rglString m_savegamePath;                                        // 00000074 | 40 
	mbSavegame m_savegame;                                           // 000000B4 | 94 
	int m_savegameNo;                                                // 00000148 | 4 
}; // $14C [ #345 #152 ]

struct ALIGN(1) mbLoadSaveWindow // #73
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	mbSavegamePanel m_panels[9];                                     // 00000058 | 510 
	rglPopupWidget *m_popupWidget;                                   // 00000568 | 4 
	rglSimpleButtonWidget *m_panelButtonWidgets[9];                  // 0000056C | 24 
	rglSimpleButtonWidget *m_saveRestoreButtonWidget;                // 00000590 | 4 
	rglSimpleButtonWidget *m_cancelButtonWidget;                     // 00000594 | 4 
	rglSimpleButtonWidget *m_deleteButtonWidget;                     // 00000598 | 4 
	int m_selectedPanelNo;                                           // 0000059C | 4 
	int m_deleteDialogResult;                                        // 000005A0 | 4 
	int m_saveDialogResult;                                          // 000005A4 | 4 
	rglString m_saveName;                                            // 000005A8 | 40 
	bool m_saving;                                                   // 000005E8 | 1 
	/* FIX-3 */ byte undef_1[3];                                     // 000005E9 | 3 
}; // $5EC [ #153 #345 ]

struct ALIGN(1) mbLoop // #74
{
	int m_statementNo;                                               // 00000000 | 4 
	int m_value;                                                     // 00000004 | 4 
	mbMissionGridIterator m_missionGridIterator;                     // 00000008 | 1C 
	rglOrderedMapIterator_rglString_rglString_ m_dictIterator;       // 00000024 | 4 
	rglOrderedMapIterator_rglString_rglString_ m_dictEndIterator;    // 00000028 | 4 
}; // $2C [ #91 ]

struct ALIGN(1) mbLoopManager // #75
{
	mbLoop m_loops[128];                                             // 00000000 | 1600 
	int m_numLoops;                                                  // 00001600 | 4 
}; // $1604 [ #74 ]

struct ALIGN(1) mbMenu // #79
{
	rglString m_text;                                                // 00000000 | 40 
	rglString m_id;                                                  // 00000040 | 40 
	unsigned long long m_flags;                                      // 00000080 | 8 
	rglString m_meshName;                                            // 00000088 | 40 
	mbStatementBlock m_statementBlock;                               // 000000C8 | 4C 
	int m_numItems;                                                  // 00000114 | 4 
	mbMenuItem *m_items;                                             // 00000118 | 4 
	/* FIX-3 */ byte undef_0[4];                                     // 0000011C | 4 
}; // $120 [ #345 #177 ]

struct ALIGN(1) mbMenuItem // #80
{
	rglString m_text;                                                // 00000000 | 40 
	rglString m_doorName;                                            // 00000040 | 40 
	rglString m_id;                                                  // 00000080 | 40 
	mbStatementBlock m_conditionsStatementBlock;                     // 000000C0 | 4C 
	mbStatementBlock m_consequencesStatementBlock;                   // 0000010C | 4C 
}; // $158 [ #345 #177 ]

struct ALIGN(1) mbMenuWindow // #81
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
	rglSimpleButtonWidget *m_buttons[16];                            // 00000098 | 40 
	int m_numButtons;                                                // 000000D8 | 4 
	int m_menuItemNos[16];                                           // 000000DC | 40 
	rglWidget *m_textWidget;                                         // 0000011C | 4 
	rglScrollableWidget *m_textScrollableWidget;                     // 00000120 | 4 
	rglScrollableWidget *m_buttonsScrollableWidget;                  // 00000124 | 4 
	rglWidget *m_tableauWidget;                                      // 00000128 | 4 
	/* FIX-3 */ byte undef_2[4];                                     // 0000012C | 4 
}; // $130 [ #144 ]

struct ALIGN(1) mbMissile // #85
{
	/* FIX-1 */ byte undef_0[12];                                    // 00000000 | C 
	int m_prevPath;                                                  // 0000000C | 4 
	int m_curPath;                                                   // 00000010 | 4 
	bool m_isClient;                                                 // 00000014 | 1 
	bool m_aboveWaterLevel;                                          // 00000015 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 00000016 | 2 
	int m_hitType;                                                   // 00000018 | 4 
	int m_hitMissionObjectNo;                                        // 0000001C | 4 
	int m_hitAgentNo;                                                // 00000020 | 4 
	int m_hitBoneNo;                                                 // 00000024 | 4 
	rglTransform m_hitTransform;                                     // 00000028 | 40 
	rglVector4 m_startingClientPosition;                             // 00000068 | 10 
	rglVector4 m_startingPosition;                                   // 00000078 | 10 
	rglVector4 m_curPosition;                                        // 00000088 | 10 
	rglVector4 m_prevPosition;                                       // 00000098 | 10 
	rglVector4 m_startingDirection;                                  // 000000A8 | 10 
	rglVector4 m_startingClientVelocity;                             // 000000B8 | 10 
	rglVector4 m_path[500];                                          // 000000C8 | 1F40 
	int m_shooterAgentNo;                                            // 00002008 | 4 
	float m_speed;                                                   // 0000200C | 4 
	float m_missileSpeed;                                            // 00002010 | 4 
	float m_damage;                                                  // 00002014 | 4 
	mbMissionTimer m_creationTimer;                                  // 00002018 | 10 
	mbItem m_weaponItem;                                             // 00002028 | 8 
	mbItem m_missileItem;                                            // 00002030 | 8 
	bool m_hitHorse;                                                 // 00002038 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00002039 | 3 
	float m_soundStartTime;                                          // 0000203C | 4 
	int m_invalidateDelay;                                           // 00002040 | 4 
	mbAttack m_attack;                                               // 00002044 | 94 
	float m_rotationFactor;                                          // 000020D8 | 4 
	int m_screenState;                                               // 000020DC | 4 
	int m_passBySoundNo;                                             // 000020E0 | 4 
	int m_incomingHitSoundNo;                                        // 000020E4 | 4 
	int m_outgoingHitSoundNo;                                        // 000020E8 | 4 
	rglEntity *m_entity;                                             // 000020EC | 4 
	int m_soundChannel;                                              // 000020F0 | 4 
	/* FIX-3 */ byte undef_3[4];                                     // 000020F4 | 4 
}; // $20F8 [ #365 #368 #96 #67 #13 ]

struct ALIGN(1) mbMission // #86
{
	rglScene *m_scene;                                               // 00000000 | 4 
	rglStableVector_mbAgent_ m_agents;                               // 00000004 | 20 
	rglVector_mbMissile_ m_clientMissiles;                           // 00000024 | C 
	rglStableVector_mbMissile_ m_missiles;                           // 00000030 | 20 
	rglVector_int_ m_attachedMissileMissionObjectNos;                // 00000050 | C 
	rglVector_rglMetaMesh_P_ m_attachedMissileMetaMeshes;            // 0000005C | C 
	int m_playerAgentNo;                                             // 00000068 | 4 
	int m_playerHorseAgentNo;                                        // 0000006C | 4 
	mbTroopInventory m_startingInventory;                            // 00000070 | 300 
	mbTroopEquipment m_startingEquipment;                            // 00000370 | 50 
	float m_zoomAmount;                                              // 000003C0 | 4 
	int m_spawnEffectorScenePropKinds[8];                            // 000003C4 | 20 
	int m_spawnEffectorMissionObjectNos[20];                         // 000003E4 | 50 
	/* FIX-4 */ byte undef_0[4];                                     // 00000434 | 4 
	mbMissionTimer m_missileShotTimer;                               // 00000438 | 10 
	bool m_resetPlayerCamera;                                        // 00000448 | 1 
	/* FIX-4 */ byte undef_1[7];                                     // 00000449 | 7 
	mbEntryPoint m_entryPoints[128];                                 // 00000450 | 9000 
	int m_sequenceNo;                                                // 00009450 | 4 
	int m_numShortAiMeshPathReusesSucceeded;                         // 00009454 | 4 
	int m_numShortAiMeshPathReusesFailed;                            // 00009458 | 4 
	int m_numLongAiMeshPathReusesSucceeded;                          // 0000945C | 4 
	int m_numLongAiMeshPathReusesFailed;                             // 00009460 | 4 
	rglVector_mbGroup_ m_groups;                                     // 00009464 | C 
	mbTeam m_teams[8];                                               // 00009470 | 180 
	mbMissionTimer m_divisionUpdateTimer;                            // 000095F0 | 10 
	int m_missionTemplateNo;                                         // 00009600 | 4 
	int m_siteNo;                                                    // 00009604 | 4 
	int m_entryPointNo;                                              // 00009608 | 4 
	bool m_cheerAtNoEnemy;                                           // 0000960C | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 0000960D | 3 
	int m_involvedPartyNos[2][128];                                  // 00009610 | 400 
	int m_numInvolvedParties[2];                                     // 00009A10 | 8 
	int m_mainPartySide;                                             // 00009A18 | 4 
	int m_enemySide;                                                 // 00009A1C | 4 
	int m_agentStatuses[8][5];                                       // 00009A20 | A0 
	float m_lastAgentStatusChangeTime;                               // 00009AC0 | 4 
	/* FIX-4 */ byte undef_3[4];                                     // 00009AC4 | 4 
	mbMissionTimer m_startTimer;                                     // 00009AC8 | 10 
	mbMissionTimer m_missionTimerA;                                  // 00009AD8 | 10 
	mbMissionTimer m_missionTimerB;                                  // 00009AE8 | 10 
	mbMissionTimer m_missionTimerC;                                  // 00009AF8 | 10 
	mbMissionTimer m_endTimer;                                       // 00009B08 | 10 
	bool m_isEnded;                                                  // 00009B18 | 1 
	bool m_isMultiplayer;                                            // 00009B19 | 1 
	/* FIX-4 */ byte undef_4[6];                                     // 00009B1A | 6 
	mbMissionTimer m_roundStartTimer;                                // 00009B20 | 10 
	rglVector_rglMesh_P_ m_interiorMeshes;                           // 00009B30 | C 
	mbGroundPaint m_groundPaint;                                     // 00009B3C | 3BC 
	int m_editModeGroundPaintLayerNo;                                // 00009EF8 | 4 
	int m_editWeatherType;                                           // 00009EFC | 4 
	int m_battleAdvantage;                                           // 00009F00 | 4 
	int m_result;                                                    // 00009F04 | 4 
	unsigned int m_flags;                                            // 00009F08 | 4 
	rglVector2 m_minPosition;                                        // 00009F0C | 8 
	rglVector2 m_maxPosition;                                        // 00009F14 | 8 
	rglVector2 m_minBorderPosition;                                  // 00009F1C | 8 
	rglVector2 m_maxBorderPosition;                                  // 00009F24 | 8 
	float m_waterLevel;                                              // 00009F2C | 4 
	int m_frameNo;                                                   // 00009F30 | 4 
	bool m_isConversation;                                           // 00009F34 | 1 
	bool m_isPreparing;                                              // 00009F35 | 1 
	/* FIX-4 */ byte undef_5[2];                                     // 00009F36 | 2 
	int m_conversationTroopNos[16];                                  // 00009F38 | 40 
	rglVector4 m_playerOriginPosition;                               // 00009F78 | 10 
	rglMesh *m_riverMesh;                                            // 00009F88 | 4 
	float m_riverWaveRotation;                                       // 00009F8C | 4 
	rglLight *m_sunLight;                                            // 00009F90 | 4 
	rglLight *m_ambientLight;                                        // 00009F94 | 4 
	rglEntity *m_precipitationEntity;                                // 00009F98 | 4 
	rglEntity *m_flareEntity;                                        // 00009F9C | 4 
	rglMesh *m_flareMesh;                                            // 00009FA0 | 4 
	rglEntity *m_editCursorEntity;                                   // 00009FA4 | 4 
	rglMesh *m_editCursorMesh;                                       // 00009FA8 | 4 
	rglMesh *m_editCursorHighlightMesh;                              // 00009FAC | 4 
	rglEntity *m_editModeMouseoverEntity;                            // 00009FB0 | 4 
	rglMesh *m_editModeMouseoverMesh;                                // 00009FB4 | 4 
	rglEntity *m_editModePreviewEntity;                              // 00009FB8 | 4 
	rglEntity *m_crosshairEntities[3];                               // 00009FBC | C 
	rglEntity *m_attackArrowEntities[4];                             // 00009FC8 | 10 
	int m_rainSoundChannel;                                          // 00009FD8 | 4 
	mbWeather m_weather;                                             // 00009FDC | 38 
	int m_conversationAgentNo;                                       // 0000A014 | 4 
	rglTransform m_cameraTransform;                                  // 0000A018 | 40 
	bool m_announceAlliesArrival;                                    // 0000A058 | 1 
	bool m_announceEnemiesArrival;                                   // 0000A059 | 1 
	/* FIX-4 */ byte undef_6[2];                                     // 0000A05A | 2 
	rglStableVector_mbMissionObject_ m_missionObjects;               // 0000A05C | 20 
	rglAiMesh m_aiMesh;                                              // 0000A07C | 70 
	rglStableVector_mbFadingOutEntity_ m_fadingOutEntities;          // 0000A0EC | 20 
	rglVector_rglEntity_P_ m_corpseEntities;                         // 0000A10C | C 
	rglMesh *m_aiMeshFacesMesh;                                      // 0000A118 | 4 
	rglMesh *m_aiMeshVerticesMesh;                                   // 0000A11C | 4 
	rglMesh *m_aiMeshEdgesMesh;                                      // 0000A120 | 4 
	rglEntity *m_aiMeshEntity;                                       // 0000A124 | 4 
	rglMesh *m_aiMeshPlaneMesh;                                      // 0000A128 | 4 
	rglEntity *m_aiMeshPlaneEntity;                                  // 0000A12C | 4 
	bool m_aiMeshRedrawMeshes[3];                                    // 0000A130 | 3 
	/* FIX-4 */ byte undef_7[1];                                     // 0000A133 | 1 
	rglString m_outerTerrainMeshName;                                // 0000A134 | 40 
	int m_customCameraMode;                                          // 0000A174 | 4 
	rglTransform m_customCameraTransform;                            // 0000A178 | 40 
	rglTransform m_customCameraTransformChangeTarget;                // 0000A1B8 | 40 
	int m_customCameraActionNo;                                      // 0000A1F8 | 4 
	float m_customCameraAperture;                                    // 0000A1FC | 4 
	float m_customCameraApertureChangeTarget;                        // 0000A200 | 4 
	float m_customCameraChangeDuration;                              // 0000A204 | 4 
	mbMissionTimer m_customCameraChangeTimer;                        // 0000A208 | 10 
	int m_customCameraAgentNo;                                       // 0000A218 | 4 
	int m_customUseAgentRotation;                                    // 0000A21C | 4 
	int m_customCameraVelocityType;                                  // 0000A220 | 4 
	unsigned int m_customCameraColor;                                // 0000A224 | 4 
	unsigned int m_customCameraColorChangeTarget;                    // 0000A228 | 4 
	float m_customCameraColorChangeDuration;                         // 0000A22C | 4 
	mbMissionTimer m_customCameraColorChangeTimer;                   // 0000A230 | 10 
	float m_timeSpeed;                                               // 0000A240 | 4 
	float m_timeSpeedChangeTarget;                                   // 0000A244 | 4 
	mbMissionTimer m_timeSpeedChangeTimer;                           // 0000A248 | 10 
	float m_timeSpeedChangeDuration;                                 // 0000A258 | 4 
	bool m_inDuelMode;                                               // 0000A25C | 1 
	/* FIX-4 */ byte undef_8[3];                                     // 0000A25D | 3 
	rglStaticDeque_mbAgentUpdateRec_ m_agentUpdateQueue;             // 0000A260 | 44008 
	rglStaticDeque_mbActionUpdateRec_ m_actionUpdateQueue;           // 0004E268 | 6008 
	bool m_usedEntries[128];                                         // 00054270 | 80 
	bool m_usePlayerNetworkCorrection;                               // 000542F0 | 1 
	bool m_firstUse;                                                 // 000542F1 | 1 
	/* FIX-4 */ byte undef_9[6];                                     // 000542F2 | 6 
	unsigned long long m_time;                                       // 000542F8 | 8 
	mbMissionGrid m_grid;                                            // 00054300 | 38 
	int m_keyboardControlDirection;                                  // 00054338 | 4 
	mbMissile *m_curMissile;                                         // 0005433C | 4 
	bool m_useObjectsTooltipEnabled[11];                             // 00054340 | B 
	/* FIX-3 */ byte undef_10[5];                                    // 0005434B | 5 
}; // $54350 [ #196 #195 #96 #33 #185 #58 #366 #368 #197 #365 #199 #345 #88 ]

struct ALIGN(1) mbMissionObject // #93
{
	/* FIX-1 */ byte undef_0[12];                                    // 00000000 | C 
	rglTransform m_transform;                                        // 0000000C | 40 
	rglTransform m_startingTransform;                                // 0000004C | 40 
	rglTransform m_animateTargetTransform;                           // 0000008C | 40 
	rglTransform m_animateStartingTransform;                         // 000000CC | 40 
	rglVector4 m_scale;                                              // 0000010C | 10 
	int m_animateState;                                              // 0000011C | 4 
	float m_animateDuration;                                         // 00000120 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 00000124 | 4 
	mbMissionTimer m_animateTimer;                                   // 00000128 | 10 
	float m_animateProgress;                                         // 00000138 | 4 
	float m_totalRotationAngle;                                      // 0000013C | 4 
	float m_rotationAngle;                                           // 00000140 | 4 
	bool m_isRotating;                                               // 00000144 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00000145 | 3 
	float m_totalRotation;                                           // 00000148 | 4 
	float m_rotation;                                                // 0000014C | 4 
	mbMissionTimer m_enableTimer;                                    // 00000150 | 10 
	int m_metaType;                                                  // 00000160 | 4 
	int m_subKindNo;                                                 // 00000164 | 4 
	rglString m_id;                                                  // 00000168 | 40 
	int m_variationNo;                                               // 000001A8 | 4 
	int m_variationNo2;                                              // 000001AC | 4 
	rglEntity *m_entity;                                             // 000001B0 | 4 
	float m_maxHitPoints;                                            // 000001B4 | 4 
	float m_hitPoints;                                               // 000001B8 | 4 
	int m_teamNo;                                                    // 000001BC | 4 
	bool m_spawned;                                                  // 000001C0 | 1 
	bool m_enablePruning;                                            // 000001C1 | 1 
	/* FIX-4 */ byte undef_3[6];                                     // 000001C2 | 6 
	mbMissionTimer m_pruneTimer;                                     // 000001C8 | 10 
	mbMissionTimer m_destructibleDamageTimer;                        // 000001D8 | 10 
	mbSlots m_slots;                                                 // 000001E8 | C 
	int m_soundChannel;                                              // 000001F4 | 4 
	FMOD__Geometry *m_soundBody;                                     // 000001F8 | 4 
	/* FIX-3 */ byte undef_4[4];                                     // 000001FC | 4 
}; // $200 [ #365 #368 #96 #345 #169 ]

struct ALIGN(1) mbMultiplayerOptionsWindow // #99
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	mbOptionsWindowHelper m_helper;                                  // 0000005C | A8 
	rglCheckBoxWidget *m_showChatCheckBoxWidget;                     // 00000104 | 4 
	rglCheckBoxWidget *m_showTeamChatCheckBoxWidget;                 // 00000108 | 4 
	rglWidget *m_killsLabelWidget;                                   // 0000010C | 4 
	rglComboLabelWidget *m_killsComboLabelWidget;                    // 00000110 | 4 
	rglCheckBoxWidget *m_clientPortCheckboxWidget;                   // 00000114 | 4 
	rglWidget *m_clientPortLabelWidget;                              // 00000118 | 4 
	rglNumberBoxWidget *m_clientPortNumberBoxWidget;                 // 0000011C | 4 
	rglWidget *m_serverPortLabelWidget;                              // 00000120 | 4 
	rglNumberBoxWidget *m_serverPortNumberBoxWidget;                 // 00000124 | 4 
}; // $128 [ #132 ]

struct ALIGN(1) mbMultiplayerServerWindow // #100
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
}; // $98 [ #144 ]

struct ALIGN(1) mbnetData // #106
{
	int m_profileNo;                                                 // 00000000 | 4 
	rglVector_mbnetProfile_ m_profiles;                              // 00000004 | C 
	rglVector_mbnetServer_ m_serverList;                             // 00000010 | C 
	rglVector_mbnetServer_ m_serverQueue;                            // 0000001C | C 
	bool m_serverSearchEnded;                                        // 00000028 | 1 
	bool m_searchingServers;                                         // 00000029 | 1 
	/* FIX-4 */ byte undef_0[2];                                     // 0000002A | 2 
	rglString m_welcomeMessage;                                      // 0000002C | 40 
	int m_myPlayerNo;                                                // 0000006C | 4 
	int m_numActivePlayers;                                          // 00000070 | 4 
	int m_numPlayers;                                                // 00000074 | 4 
	int m_maxNumPlayers;                                             // 00000078 | 4 
	int m_maxNumPrivatePlayers;                                      // 0000007C | 4 
	mbnetTeam m_teams[4];                                            // 00000080 | 50 
	rglVector_mbnetPlayer_ m_players;                                // 000000D0 | C 
	rglString m_siteName;                                            // 000000DC | 40 
	rglString m_missionTemplateName;                                 // 0000011C | 40 
	int m_siteNo;                                                    // 0000015C | 4 
	int m_seed;                                                      // 00000160 | 4 
	bool m_startedManually;                                          // 00000164 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000165 | 3 
	int m_missionTemplateNo;                                         // 00000168 | 4 
	int m_nextSiteNo;                                                // 0000016C | 4 
	int m_nextSeed;                                                  // 00000170 | 4 
	int m_nextMissionTemplateNo;                                     // 00000174 | 4 
	int m_nextTeam0FactionNo;                                        // 00000178 | 4 
	int m_nextTeam1FactionNo;                                        // 0000017C | 4 
	bool m_missionStarting;                                          // 00000180 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00000181 | 3 
	float m_healthBarValue;                                          // 00000184 | 4 
	float m_useBarValue;                                             // 00000188 | 4 
	/* FIX-4 */ byte undef_3[4];                                     // 0000018C | 4 
	rglAppTimer m_healthBarTimer;                                    // 00000190 | 10 
	rglAppTimer m_useBarTimer;                                       // 000001A0 | 10 
	mbnetReplication_mbnetServerReplicationRow_ m_serverReplication; // 000001B0 | 18 
	mbnetReplication_mbnetClientReplicationRow_ m_clientReplication; // 000001C8 | 18 
	rglString m_serverName;                                          // 000001E0 | 40 
	rglString m_serverPassword;                                      // 00000220 | 40 
	rglString m_serverPrivatePassword;                               // 00000260 | 40 
	rglString m_serverAdminPassword;                                 // 000002A0 | 40 
	bool m_packetSentThisFrame;                                      // 000002E0 | 1 
	/* FIX-4 */ byte undef_4[3];                                     // 000002E1 | 3 
	unsigned int m_packetNo;                                         // 000002E4 | 4 
	bool m_finishedListening;                                        // 000002E8 | 1 
	/* FIX-4 */ byte undef_5[7];                                     // 000002E9 | 7 
	mbnetPlayerAgentData m_playerAgentData;                          // 000002F0 | 60 
	rglVector_int_ m_disconnectedPlayerNos;                          // 00000350 | C 
	rglVector_int_ m_bannedPlayerNos;                                // 0000035C | C 
	rglVector___int64_ m_bannedSessionIds;                           // 00000368 | C 
	rglVector_char_ m_bannedStatuses;                                // 00000374 | C 
	int m_storedBanPlayerNo;                                         // 00000380 | 4 
	int m_storedBanPlayerUniqueId;                                   // 00000384 | 4 
	long long m_storedBanPlayerSessionId;                            // 00000388 | 8 
	rglString m_storedBanPlayerName;                                 // 00000390 | 40 
	bool m_isBanStored;                                              // 000003D0 | 1 
	/* FIX-4 */ byte undef_6[3];                                     // 000003D1 | 3 
	rglMersenneTwister m_peerRandomGenerator;                        // 000003D4 | 1388 
	mbnetAddress m_serverAddress;                                    // 0000175C | 8 
	/* FIX-3 */ byte undef_7[4];                                     // 00001764 | 4 
}; // $1768 [ #345 #128 #207 #120 #276 #103 ]

struct ALIGN(1) mbnetNetworkManager // #114
{
	int m_ghostMode;                                                 // 00000000 | 4 
	float m_ghostModeDeathDelay;                                     // 00000004 | 4 
	int m_friendlyFire;                                              // 00000008 | 4 
	int m_friendlyFireDamageFriend;                                  // 0000000C | 4 
	int m_friendlyFireDamageSelf;                                    // 00000010 | 4 
	int m_controlBlockDir;                                           // 00000014 | 4 
	int m_addToServerList;                                           // 00000018 | 4 
	int m_combatSpeed;                                               // 0000001C | 4 
	int m_renamingAllowed;                                           // 00000020 | 4 
	int m_changingModeAllowed;                                       // 00000024 | 4 
	int m_meleeFriendlyFire;                                         // 00000028 | 4 
	int m_numBitsPlayer;                                             // 0000002C | 4 
	int m_numBitsTeam;                                               // 00000030 | 4 
	int m_numBitsFaction;                                            // 00000034 | 4 
	int m_numBitsTroop;                                              // 00000038 | 4 
	int m_numBitsItemKind;                                           // 0000003C | 4 
	int m_numBitsSceneProp;                                          // 00000040 | 4 
	int m_numBitsSound;                                              // 00000044 | 4 
	int m_numBitsNumUnconfirmedPacketNos;                            // 00000048 | 4 
	int m_numBitsEvent;                                              // 0000004C | 4 
	int m_numBitsSkin;                                               // 00000050 | 4 
	bool m_winsockStarted;                                           // 00000054 | 1 
	bool m_networkActive;                                            // 00000055 | 1 
	/* FIX-4 */ byte undef_0[2];                                     // 00000056 | 2 
	rglCriticalSection m_networkCriticalSection;                     // 00000058 | 18 
	mbnetHost *m_host;                                               // 00000070 | 4 
	int m_errorCode;                                                 // 00000074 | 4 
	int m_actionCode;                                                // 00000078 | 4 
	int m_curDownloadedObjects;                                      // 0000007C | 4 
	int m_prevDownloadedObjects;                                     // 00000080 | 4 
	void *m_networkThread;                                           // 00000084 | 4 
	mbnetNetworkServer m_server;                                     // 00000088 | 88 
	mbnetNetworkClient m_client;                                     // 00000110 | 110 
	double m_lastTraffickCheckTime;                                  // 00000220 | 8 
	int m_eventNo;                                                   // 00000228 | 4 
	int m_numBytesSent;                                              // 0000022C | 4 
	int m_numBytesReceived;                                          // 00000230 | 4 
	int m_uploadBps;                                                 // 00000234 | 4 
	int m_downloadBps;                                               // 00000238 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000023C | 4 
	mbnetHttpInfoRequest m_httpInfoRequests[10];                     // 00000240 | B90 
	int m_numHttpInfoRequests;                                       // 00000DD0 | 4 
	/* FIX-4 */ byte undef_2[4];                                     // 00000DD4 | 4 
	double m_lastHttpInfoRequestCheckTime;                           // 00000DD8 | 8 
	bool m_hasCachedHttpResponse;                                    // 00000DE0 | 1 
	/* FIX-4 */ byte undef_3[3];                                     // 00000DE1 | 3 
	rglString m_cachedHttpResponse;                                  // 00000DE4 | 40 
	rglString m_mainServerResponse;                                  // 00000E24 | 40 
	bool m_horseFriendlyFire;                                        // 00000E64 | 1 
	bool m_showCrosshair;                                            // 00000E65 | 1 
	bool m_lockFov;                                                  // 00000E66 | 1 
	bool m_ghostModeAdvanced;                                        // 00000E67 | 1 
	bool m_ghostModeCantBeFree;                                      // 00000E68 | 1 
	bool m_ghostModeTeam;                                            // 00000E69 | 1 
	bool m_ghostModeLockToView;                                      // 00000E6A | 1 
	bool m_ghostModeOnlyPlayers;                                     // 00000E6B | 1 
	WSEOGPServer *m_OGPServer;                                       // 00000E6C | 4 
	WSERCONServer *m_RCONServer;                                     // 00000E70 | 4 
	int m_extendedVersion;                                           // 00000E74 | 4 
}; // $E78 [ #231 #115 #112 #109 #345 ]

struct ALIGN(1) mbScript // #155
{
	rglString m_id;                                                  // 00000000 | 40 
	float m_interval;                                                // 00000040 | 4 
	mbStatementBlock m_statementBlock;                               // 00000044 | 4C 
}; // $90 [ #345 #177 ]

struct ALIGN(1) mbSentence // #158
{
	rglString m_text;                                                // 00000000 | 40 
	rglString m_id;                                                  // 00000040 | 40 
	unsigned int m_flags;                                            // 00000080 | 4 
	int m_inputTokenNo;                                              // 00000084 | 4 
	mbStatementBlock m_conditionsStatementBlock;                     // 00000088 | 4C 
	mbStatementBlock m_consequencesStatementBlock;                   // 000000D4 | 4C 
	int m_outputTokenNo;                                             // 00000120 | 4 
}; // $124 [ #345 #177 ]

struct ALIGN(1) mbSimpleTrigger // #159
{
	float m_interval;                                                // 00000000 | 4 
	mbStatementBlock m_statementBlock;                               // 00000004 | 4C 
	rglAppTimer m_timer;                                             // 00000050 | 10 
}; // $60 [ #177 #207 ]

struct ALIGN(1) mbSoundManager // #172
{
	int m_numSamples;                                                // 00000000 | 4 
	mbSoundSample *m_samples;                                        // 00000004 | 4 
	int m_numSounds;                                                 // 00000008 | 4 
	mbSound *m_sounds;                                               // 0000000C | 4 
	rglTransform m_transform;                                        // 00000010 | 40 
	int m_mappedSounds[130];                                         // 00000050 | 208 
	float m_soundDistances[130];                                     // 00000258 | 208 
	rglDuplexMap_rglBodyPart_P_FMOD__Geometry_P_ m_soundBodies;      // 00000460 | 40 
	rglCriticalSection m_soundCriticalSection;                       // 000004A0 | 18 
	mbSoundChannel m_soundStreams[100];                              // 000004B8 | 1450 
	FMOD__Sound *m_soundsForStreams[100];                            // 00001908 | 190 
}; // $1A98 [ #365 #231 #171 ]

struct ALIGN(1) mbTerrainGenerator // #187
{
	unsigned int m_keys[6];                                          // 00000000 | 18 
	mbTerrainLayer m_layers[15];                                     // 00000018 | 168 
	rglVector2 m_size;                                               // 00000180 | 8 
	rglIntVector2 m_numFaces;                                        // 00000188 | 8 
	int m_numRiverPasses;                                            // 00000190 | 4 
	mbTerrainVertex **m_vertices;                                    // 00000194 | 4 
	mbTerrainFace **m_faces;                                         // 00000198 | 4 
	rglScene *m_scene;                                               // 0000019C | 4 
	float m_cellSize;                                                // 000001A0 | 4 
	mbFloraSet m_rockFloraSet;                                       // 000001A4 | 20 
	mbFloraSet m_treeFloraSet;                                       // 000001C4 | 20 
	mbFloraSet m_grassFloraSet;                                      // 000001E4 | 20 
	float m_barrenness;                                              // 00000204 | 4 
	rglVector4 m_globalLightDirection;                               // 00000208 | 10 
	rglColor m_globalLightColor;                                     // 00000218 | 10 
	rglColor m_ambientColor;                                         // 00000228 | 10 
	rglColor m_groundAmbientColor;                                   // 00000238 | 10 
	rglColor m_sunColor;                                             // 00000248 | 10 
	float m_noiseFrequency;                                          // 00000258 | 4 
	rglVector4 m_positionNoiseRandomness;                            // 0000025C | 10 
	rglVector4 m_positionColorNoiseRandomness;                       // 0000026C | 10 
	int m_terrainBlockSize;                                          // 0000027C | 4 
	bool m_placeRiver;                                               // 00000280 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000281 | 3 
	rglEntity *m_grassEntities[48][48];                              // 00000284 | 2400 
	bool m_grassEntitiesPopulated[48][48];                           // 00002684 | 900 
	rglBoundingBox m_grassBoundingBoxes[48][48];                     // 00002F84 | 1D400 
	rglIntVector2 m_numGrassEntities;                                // 00020384 | 8 
	rglIntVector2 m_numTerrainEntities;                              // 0002038C | 8 
	rglEntity *m_terrainEntities[5][5];                              // 00020394 | 64 
	rglEntity *m_lowDetailMeshesEntity;                              // 000203F8 | 4 
	rglMesh *m_terrainMeshes[15][5][5];                              // 000203FC | 5DC 
	rglString m_outerTerrainMeshName;                                // 000209D8 | 40 
	rglEntity *m_outerTerrainEntities[3][3];                         // 00020A18 | 24 
	rglVector_rglMesh_P_ m_outerTerrainMeshes;                       // 00020A3C | C 
	rglMesh *m_riverMesh;                                            // 00020A48 | 4 
	rglManifold *m_manifold;                                         // 00020A4C | 4 
	rglVector_rglVector4_ m_havokVertices;                           // 00020A50 | C 
	rglVector_int_ m_havokIndices;                                   // 00020A5C | C 
}; // $20A68 [ #189 #366 #260 #48 #368 #224 #216 #345 ]

struct ALIGN(1) mbTrack // #191
{
	rglVector4 m_position;                                           // 00000000 | 10 
	float m_rotation;                                                // 00000010 | 4 
	float m_visibility;                                              // 00000014 | 4 
	unsigned int m_flags;                                            // 00000018 | 4 
	rglTransform m_transform;                                        // 0000001C | 40 
}; // $5C [ #368 #365 ]

struct ALIGN(1) mbTroop // #194
{
	bool m_renamed;                                                  // 00000000 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000001 | 3 
	rglString m_name;                                                // 00000004 | 40 
	rglString m_pluralName;                                          // 00000044 | 40 
	rglString m_imageMeshName;                                       // 00000084 | 40 
	rglString m_id;                                                  // 000000C4 | 40 
	/* FIX-4 */ byte undef_1[4];                                     // 00000104 | 4 
	unsigned long long m_flags;                                      // 00000108 | 8 
	int m_type;                                                      // 00000110 | 4 
	int m_factionNo;                                                 // 00000114 | 4 
	int m_upgradeTroopNos[2];                                        // 00000118 | 8 
	int m_attributes[4];                                             // 00000120 | 10 
	unsigned int m_skills[6];                                        // 00000130 | 18 
	float m_proficiencies[7];                                        // 00000148 | 1C 
	int m_experience;                                                // 00000164 | 4 
	float m_hitPoints;                                               // 00000168 | 4 
	int m_skillPoints;                                               // 0000016C | 4 
	int m_attributePoints;                                           // 00000170 | 4 
	int m_proficiencyPoints;                                         // 00000174 | 4 
	int m_level;                                                     // 00000178 | 4 
	int m_classNo;                                                   // 0000017C | 4 
	mbTroopInventory m_inventory;                                    // 00000180 | 300 
	int m_gold;                                                      // 00000480 | 4 
	int m_siteNo;                                                    // 00000484 | 4 
	int m_entryNo;                                                   // 00000488 | 4 
	int m_spawned;                                                   // 0000048C | 4 
	mbFaceKeys m_faceKeys1;                                          // 00000490 | 20 
	mbFaceKeys m_faceKeys2;                                          // 000004B0 | 20 
	mbNotes m_notes;                                                 // 000004D0 | 448 
	mbTroopEquipment m_equipment;                                    // 00000918 | 50 
	mbSlots m_slots;                                                 // 00000968 | C 
	int m_skinNo;                                                    // 00000974 | 4 
}; // $978 [ #345 #196 #40 #130 #195 #169 ]

struct ALIGN(1) rglBone // #215
{
	rglTransform m_startingTransform;                                // 00000000 | 40 
	rglTransform m_localTransform;                                   // 00000040 | 40 
	rglTransform m_transform;                                        // 00000080 | 40 
	rglTransform m_skinningTransform;                                // 000000C0 | 40 
	bool m_skinningNeedsUpdate;                                      // 00000100 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000101 | 3 
	rglQuaternion m_localRotation;                                   // 00000104 | 10 
	rglQuaternion m_rotation;                                        // 00000114 | 10 
	rglQuaternion m_rotationDifference;                              // 00000124 | 10 
	rglVector4 m_angularVelocity;                                    // 00000134 | 10 
	rglTransform m_externalRotation;                                 // 00000144 | 40 
	bool m_hasExternalRotation;                                      // 00000184 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000185 | 3 
	int m_IPOkeys[2][2];                                             // 00000188 | 10 
	rglSkeletonAnimation *m_animations[2];                           // 00000198 | 8 
	rglQuaternion m_startRotations[2][2];                            // 000001A0 | 40 
	rglQuaternion m_endRotations[2][2];                              // 000001E0 | 40 
	rglVector_rglMetaMesh_P_ m_metaMeshes;                           // 00000220 | C 
	int m_parentBoneNo;                                              // 0000022C | 4 
	int m_numAttachedBones;                                          // 00000230 | 4 
	int *m_attachedBoneNos;                                          // 00000234 | 4 
	rglSkeletonModelBone *m_modelBone;                               // 00000238 | 4 
	float m_blendFactor;                                             // 0000023C | 4 
	float m_blendStrength;                                           // 00000240 | 4 
	hkpRigidBody *m_havokBody;                                       // 00000244 | 4 
}; // $248 [ #365 #304 #368 ]

struct ALIGN(1) rglCameraFrustum // #219
{
	int m_numPlanes;                                                 // 00000000 | 4 
	rglCameraPlane m_planes[6];                                      // 00000004 | C0 
}; // $C4 [ #220 ]

struct ALIGN(1) rglEntity // #237
{
	rglScene *m_scene;                                               // 00000000 | 4 
	int m_sequenceNo;                                                // 00000004 | 4 
	int m_objectNo;                                                  // 00000008 | 4 
	int m_objectType;                                                // 0000000C | 4 
	rglSceneGridCellNode *m_gridCellLinkedList;                      // 00000010 | 4 
	rglTransform m_prevTransform;                                    // 00000014 | 40 
	rglTransform m_transform;                                        // 00000054 | 40 
	rglBodyPart *m_collisionBody;                                    // 00000094 | 4 
	rglVector4 m_minBound;                                           // 00000098 | 10 
	rglVector4 m_maxBound;                                           // 000000A8 | 10 
	bool m_dynamicPhysics;                                           // 000000B8 | 1 
	bool m_visible;                                                  // 000000B9 | 1 
	bool m_movedInCurFrame;                                          // 000000BA | 1 
	bool m_movedInPrevFrame;                                         // 000000BB | 1 
	bool m_collisionBodyMovedInCurFrame;                             // 000000BC | 1 
	bool m_collisionBodyMovedInPrevFrame;                            // 000000BD | 1 
	/* FIX-4 */ byte undef_0[2];                                     // 000000BE | 2 
	unsigned int m_flags;                                            // 000000C0 | 4 
	rglVector4 m_scale;                                              // 000000C4 | 10 
	rglEntity *m_parentEntity;                                       // 000000D4 | 4 
	rglBodyPart *m_bodyPart;                                         // 000000D8 | 4 
	hkpRigidBody *m_havokBody;                                       // 000000DC | 4 
	bool m_havokBodyMoved;                                           // 000000E0 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 000000E1 | 3 
	rglSkeleton *m_skeleton;                                         // 000000E4 | 4 
	rglBoundingBox m_meshBoundingBox;                                // 000000E8 | 34 
	rglVector_rglMetaMesh_P_ m_metaMeshes;                           // 0000011C | C 
	rglVector_rglMesh_P_ m_meshes;                                   // 00000128 | C 
	float m_detail;                                                  // 00000134 | 4 
	float m_shadowDetail;                                            // 00000138 | 4 
	float m_shadowUpdateRange;                                       // 0000013C | 4 
	float m_preciseShadowDetail;                                     // 00000140 | 4 
	float m_smoothShadowDetail;                                      // 00000144 | 4 
	rglAppTimer m_shadowTimer;                                       // 00000148 | 10 
	rglAppTimer m_preciseShadowTimer;                                // 00000158 | 10 
	bool m_preciseShadowRendered;                                    // 00000168 | 1 
	bool m_preciseShadowChecked;                                     // 00000169 | 1 
	/* FIX-4 */ byte undef_2[2];                                     // 0000016A | 2 
	int m_shadowCastFaces[64];                                       // 0000016C | 100 
	int m_numShadowCastFaces;                                        // 0000026C | 4 
	rglVector4 m_lastShadowPosition;                                 // 00000270 | 10 
	rglMesh *m_preciseShadowMesh;                                    // 00000280 | 4 
	rglMesh *m_smoothShadowMesh;                                     // 00000284 | 4 
	rglMaterial *m_shadowMaterial;                                   // 00000288 | 4 
	rglRenderContext *m_shadowRenderContext;                         // 0000028C | 4 
	float m_shadowTransparency;                                      // 00000290 | 4 
	int m_shadowPairedEntityNo;                                      // 00000294 | 4 
	rglLight *m_light;                                               // 00000298 | 4 
	rglVector_rglParticleSystem_P_ m_particleSystems;                // 0000029C | C 
}; // $2A8 [ #365 #368 #216 #207 ]

struct ALIGN(1) rglFont // #240
{
	int m_width;                                                     // 00000000 | 4 
	int m_height;                                                    // 00000004 | 4 
	int m_padding;                                                   // 00000008 | 4 
	int m_fontSize;                                                  // 0000000C | 4 
	float m_fontWidth;                                               // 00000010 | 4 
	float m_fontHeight;                                              // 00000014 | 4 
	float m_fontScale;                                               // 00000018 | 4 
	float m_lineSpacing;                                             // 0000001C | 4 
	int m_baseSize;                                                  // 00000020 | 4 
	int m_baseScale;                                                 // 00000024 | 4 
	rglFontGlyph m_defaultGlyph;                                     // 00000028 | 1C 
	rglMap_int_rglFontGlyph_ m_unicodeGlyphs;                        // 00000044 | 20 
	rglFontGlyph m_glyphs[512];                                      // 00000064 | 3800 
	float m_tabSize;                                                 // 00003864 | 4 
}; // $3868 [ #241 ]

struct ALIGN(1) rglMesh // #277
{
	/* FIX-1 */ byte undef_0[80];                                    // 00000000 | 50 
	rglMesh *m_baseMesh;                                             // 00000050 | 4 
	rglString m_materialName;                                        // 00000054 | 40 
	rglMaterial *m_material;                                         // 00000094 | 4 
	int m_billboard;                                                 // 00000098 | 4 
	bool m_isCollection;                                             // 0000009C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000009D | 3 
	unsigned int m_materialColor;                                    // 000000A0 | 4 
	unsigned int m_materialColor2;                                   // 000000A4 | 4 
	float m_frameTime;                                               // 000000A8 | 4 
	int m_cullMode;                                                  // 000000AC | 4 
	bool m_useMotionBlur;                                            // 000000B0 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 000000B1 | 3 
	rglVector_rglMeshFaceCorner_ m_faceCorners;                      // 000000B4 | C 
	rglVector_rglMeshSkinDataRec_ m_skinDataRecs;                    // 000000C0 | C 
	rglVector_rglMeshVertex_ m_vertices;                             // 000000CC | C 
	rglVector_rglMeshVertexGroup_ m_vertexGroups;                    // 000000D8 | C 
	rglVector_rglMeshFace_ m_faces;                                  // 000000E4 | C 
	bool m_hasUniqueFaces;                                           // 000000F0 | 1 
	bool m_hasUniqueVertexData;                                      // 000000F1 | 1 
	/* FIX-4 */ byte undef_3[2];                                     // 000000F2 | 2 
	rglVector_rglParticleSystem_P_ m_particleSystems;                // 000000F4 | C 
	rglLight *m_light;                                               // 00000100 | 4 
	float m_curVertexKeysTimePoint;                                  // 00000104 | 4 
	float m_nextVertexKeysTimePoint;                                 // 00000108 | 4 
	rglIpo_rglMeshVertexKey_ m_vertexKeys;                           // 0000010C | C 
	rglTransform m_localTransform;                                   // 00000118 | 40 
	unsigned int m_visibilityFlags;                                  // 00000158 | 4 
	rglMeshBufferUpdateRec m_bufferUpdateRecs[2];                    // 0000015C | 50 
	rglTransform m_parentTransform;                                  // 000001AC | 40 
	rglVector2 m_textureOffset;                                      // 000001EC | 8 
	rglTransform m_motionBlurTransform;                              // 000001F4 | 40 
	int m_renderOrder;                                               // 00000234 | 4 
	unsigned int m_renderOrderFlags;                                 // 00000238 | 4 
	rglTransform *m_boneTransforms;                                  // 0000023C | 4 
	int m_numBones;                                                  // 00000240 | 4 
	/* FIX-4 */ byte undef_4[4];                                     // 00000244 | 4 
	unsigned long long m_activeBones;                                // 00000248 | 8 
	rglBoundingBox m_boundingBox;                                    // 00000250 | 34 
	bool m_original;                                                 // 00000284 | 1 
	bool m_renderOrderUpdated;                                       // 00000285 | 1 
	/* FIX-4 */ byte undef_5[2];                                     // 00000286 | 2 
	char *m_asyncBuffer;                                             // 00000288 | 4 
	int m_asyncVertexDeclarationType;                                // 0000028C | 4 
}; // $290 [ #345 #365 #278 #366 #216 ]

struct ALIGN(1) rglMetaMesh // #286
{
	float m_deformStartFrame;                                        // 00000000 | 4 
	float m_deformEndFrame;                                          // 00000004 | 4 
	float m_deformDuration;                                          // 00000008 | 4 
	int m_deformMode;                                                // 0000000C | 4 
	float m_deformStartTime;                                         // 00000010 | 4 
	rglBoundingBox m_boundingBox;                                    // 00000014 | 34 
	rglMetaMeshLod m_lods[5];                                        // 00000048 | 3C 
	int m_numLods;                                                   // 00000084 | 4 
	int m_curLod;                                                    // 00000088 | 4 
	rglTransform m_localTransform;                                   // 0000008C | 40 
	unsigned int m_visibilityFlags;                                  // 000000CC | 4 
	rglString m_meshName;                                            // 000000D0 | 40 
}; // $110 [ #216 #287 #365 #345 ]

struct ALIGN(1) rglParticle // #295
{
	rglTransform m_transform;                                        // 00000000 | 40 
	rglVector4 m_velocity;                                           // 00000040 | 10 
	float m_time;                                                    // 00000050 | 4 
	float m_rotation;                                                // 00000054 | 4 
	float m_angularSpeed;                                            // 00000058 | 4 
	float m_size;                                                    // 0000005C | 4 
}; // $60 [ #365 #368 ]

struct ALIGN(1) rglParticleSystem // #296
{
	rglMesh *m_particleMesh;                                         // 00000000 | 4 
	rglMesh *m_mesh;                                                 // 00000004 | 4 
	rglVector_rglParticle_ m_particles;                              // 00000008 | C 
	float m_turbulenceSize;                                          // 00000014 | 4 
	float m_turbulenceStrength;                                      // 00000018 | 4 
	float m_damping;                                                 // 0000001C | 4 
	rglParticleSystemKey m_alphaKeys[2];                             // 00000020 | 10 
	rglParticleSystemKey m_redKeys[2];                               // 00000030 | 10 
	rglParticleSystemKey m_greenKeys[2];                             // 00000040 | 10 
	rglParticleSystemKey m_blueKeys[2];                              // 00000050 | 10 
	rglParticleSystemKey m_scaleKeys[2];                             // 00000060 | 10 
	float m_life;                                                    // 00000070 | 4 
	rglVector4 m_rotation;                                           // 00000074 | 10 
	rglVector4 m_gravity;                                            // 00000084 | 10 
	float m_gravityStrength;                                         // 00000094 | 4 
	rglColor m_color;                                                // 00000098 | 10 
	unsigned int m_flags;                                            // 000000A8 | 4 
	float m_waterLevel;                                              // 000000AC | 4 
	rglTransform m_localTransform;                                   // 000000B0 | 40 
	rglTransform m_emitBoxTransform;                                 // 000000F0 | 40 
	rglVector4 m_emitBoxSize;                                        // 00000130 | 10 
	rglVector4 m_emitVelocity;                                       // 00000140 | 10 
	float m_emitRandomness;                                          // 00000150 | 4 
	float m_numParticles;                                            // 00000154 | 4 
	int m_numBurstsLeft;                                             // 00000158 | 4 
	int m_burstStrength;                                             // 0000015C | 4 
	float m_numBurstParticles;                                       // 00000160 | 4 
	int m_particleSystemNo;                                          // 00000164 | 4 
	float m_radius;                                                  // 00000168 | 4 
	float m_angularSpeed;                                            // 0000016C | 4 
	float m_angularDamping;                                          // 00000170 | 4 
	int m_timerNo;                                                   // 00000174 | 4 
	rglVector4 m_cameraPosition;                                     // 00000178 | 10 
	float m_accumulatedFrameTime;                                    // 00000188 | 4 
	bool m_updateMesh;                                               // 0000018C | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 0000018D | 3 
}; // $190 [ #297 #368 #224 #365 ]

struct ALIGN(1) rglRenderMesh // #309
{
	rglMesh *m_baseMesh;                                             // 00000000 | 4 
	rglMaterial *m_material;                                         // 00000004 | 4 
	unsigned int m_flags;                                            // 00000008 | 4 
	int m_billboard;                                                 // 0000000C | 4 
	bool m_isCollection;                                             // 00000010 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000011 | 3 
	unsigned int m_materialColor;                                    // 00000014 | 4 
	unsigned int m_materialColor2;                                   // 00000018 | 4 
	float m_radius;                                                  // 0000001C | 4 
	float m_frameTime;                                               // 00000020 | 4 
	int m_cullMode;                                                  // 00000024 | 4 
	bool m_useMotionBlur;                                            // 00000028 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000029 | 3 
	unsigned int m_visibilityFlags;                                  // 0000002C | 4 
	rglRenderMeshBufferUpdateRec m_bufferUpdateRecs[2];              // 00000030 | 20 
	rglTransform m_parentTransform;                                  // 00000050 | 40 
	rglVector2 m_textureOffset;                                      // 00000090 | 8 
	rglTransform m_motionBlurTransform;                              // 00000098 | 40 
	int m_numBones;                                                  // 000000D8 | 4 
	/* FIX-4 */ byte undef_2[4];                                     // 000000DC | 4 
	unsigned long long m_activeBones;                                // 000000E0 | 8 
	_D3DXMATRIXA16 *m_boneTransforms;                                // 000000E8 | 4 
	/* FIX-4 */ byte undef_3[4];                                     // 000000EC | 4 
	_D3DXMATRIXA16 m_boneTransformsBuffer[64];                       // 000000F0 | 1000 
	int m_numVertices;                                               // 000010F0 | 4 
	int m_numFaces;                                                  // 000010F4 | 4 
	bool m_hasUniqueFaces;                                           // 000010F8 | 1 
	bool m_hasUniqueVertexData;                                      // 000010F9 | 1 
	/* FIX-4 */ byte undef_4[2];                                     // 000010FA | 2 
	float m_curVertexKeysTimePoint;                                  // 000010FC | 4 
	rglMesh *m_mesh;                                                 // 00001100 | 4 
	rglVector_char_P_ m_instances;                                   // 00001104 | C 
}; // $1110 [ #310 #365 #366 ]

struct ALIGN(1) rglRenderMeshCollection // #311
{
	rglRenderMesh m_meshes[256];                                     // 00000000 | 111000 
}; // $111000 [ #309 ]

struct ALIGN(1) rglSkeleton // #334
{
	int m_numBones;                                                  // 00000000 | 4 
	rglBone *m_bones;                                                // 00000004 | 4 
	rglSkeletonModel *m_model;                                       // 00000008 | 4 
	rglVector4 m_nextOffset;                                         // 0000000C | 10 
	rglVector4 m_prevOffset;                                         // 0000001C | 10 
	int m_IPOkey;                                                    // 0000002C | 4 
	rglVector_rglMetaMesh_P_ m_metaMeshes;                           // 00000030 | C 
	rglChannel *m_channels;                                          // 0000003C | 4 
	int m_numChannels;                                               // 00000040 | 4 
	bool m_bonesUpdated;                                             // 00000044 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000045 | 3 
	float m_frameTime;                                               // 00000048 | 4 
	float m_prevFrameTime;                                           // 0000004C | 4 
	bool m_skinningFrozen;                                           // 00000050 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000051 | 3 
	int m_timerNo;                                                   // 00000054 | 4 
	bool m_isRagdoll;                                                // 00000058 | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 00000059 | 3 
	rglVector4 m_linearVelocity;                                     // 0000005C | 10 
	float m_asyncFrameTime;                                          // 0000006C | 4 
	rglTransform m_asyncTransform;                                   // 00000070 | 40 
	rglVector4 m_asyncCameraPosition;                                // 000000B0 | 10 
}; // $C0 [ #368 #365 ]

struct ALIGN(1) rglSkeletonModelBone // #340
{
	int m_parentBoneNo;                                              // 00000000 | 4 
	unsigned int m_flags;                                            // 00000004 | 4 
	rglTransform m_transform;                                        // 00000008 | 40 
	rglTransform m_parentTransform;                                  // 00000048 | 40 
	rglString m_name;                                                // 00000088 | 40 
	float m_mass;                                                    // 000000C8 | 4 
	float m_minCone;                                                 // 000000CC | 4 
	float m_maxCone;                                                 // 000000D0 | 4 
	rglVector4 m_rotation;                                           // 000000D4 | 10 
	rglVector4 m_socketDirection;                                    // 000000E4 | 10 
	float m_minPlane;                                                // 000000F4 | 4 
	float m_maxPlane;                                                // 000000F8 | 4 
	rglVector4 m_planeDirection;                                     // 000000FC | 10 
	float m_minTwistLimit;                                           // 0000010C | 4 
	float m_maxTwistLimit;                                           // 00000110 | 4 
	rglVector_rglSkeletonModelBody_ m_bodies;                        // 00000114 | C 
	rglVector_rglSkeletonModelBody_P_ m_ragdollBodies;               // 00000120 | C 
	rglVector_rglSkeletonModelBody_P_ m_collisionBodies;             // 0000012C | C 
}; // $138 [ #365 #345 #368 ]

struct ALIGN(1) mbAgentAi // #4
{
	unsigned int m_flags;                                            // 00000000 | 4 
	rglVector4 m_targetPosition;                                     // 00000004 | 10 
	rglVector4 m_targetVelocity;                                     // 00000014 | 10 
	rglAiMeshFace *m_targetAiMeshFace;                               // 00000024 | 4 
	rglAiMeshFace *m_pathTargetAiMeshFace;                           // 00000028 | 4 
	int m_computePath;                                               // 0000002C | 4 
	float m_range;                                                   // 00000030 | 4 
	rglVector4 m_lookDir;                                            // 00000034 | 10 
	/* FIX-4 */ byte undef_0[4];                                     // 00000044 | 4 
	mbMissionTimer m_weaponClassChangeTimer;                         // 00000048 | 10 
	mbMissionTimer m_behaviorTimer;                                  // 00000058 | 10 
	float m_behaviorUpdateTime;                                      // 00000068 | 4 
	bool m_noTimeToReload;                                           // 0000006C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000006D | 3 
	unsigned int m_behaviorFlags;                                    // 00000070 | 4 
	int m_behavior;                                                  // 00000074 | 4 
	int m_behaviorTargetAgentNo;                                     // 00000078 | 4 
	rglVector4 m_behaviorTargetPosition;                             // 0000007C | 10 
	bool m_rangedTargetNearAllies;                                   // 0000008C | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 0000008D | 3 
	int m_meleeMovementStatus;                                       // 00000090 | 4 
	int m_prevMeleeMovementStatus;                                   // 00000094 | 4 
	float m_movementUpdateTime;                                      // 00000098 | 4 
	/* FIX-4 */ byte undef_3[4];                                     // 0000009C | 4 
	mbMissionTimer m_movementTimer;                                  // 000000A0 | 10 
	mbMissionTimer m_actionTimer;                                    // 000000B0 | 10 
	float m_actionUpdateTime;                                        // 000000C0 | 4 
	/* FIX-4 */ byte undef_4[4];                                     // 000000C4 | 4 
	mbMissionTimer m_avoidAllyTimer;                                 // 000000C8 | 10 
	float m_avoidMeleeFactor;                                        // 000000D8 | 4 
	int m_moveTargetAgentNo;                                         // 000000DC | 4 
	int m_lookTargetAgentNo;                                         // 000000E0 | 4 
	rglAiMeshFace *m_pathAiMeshFaces[1024];                          // 000000E4 | 1000 
	rglAiMeshPathPoint m_pathPoints[1024];                           // 000010E4 | 5000 
	int m_pathValidity;                                              // 000060E4 | 4 
	int m_pathBegin;                                                 // 000060E8 | 4 
	int m_pathEnd;                                                   // 000060EC | 4 
	bool m_notOnPath;                                                // 000060F0 | 1 
	/* FIX-4 */ byte undef_5[3];                                     // 000060F1 | 3 
	int m_pathLength;                                                // 000060F4 | 4 
	unsigned int m_moveTargetFlags;                                  // 000060F8 | 4 
	unsigned int m_lookTargetFlags;                                  // 000060FC | 4 
	float m_formationLineOffset;                                     // 00006100 | 4 
	float m_formationRowOffset;                                      // 00006104 | 4 
	rglVector2 m_formationOffset;                                    // 00006108 | 8 
	rglVector4 m_lookTargetPosition;                                 // 00006110 | 10 
	float m_idealHorseSpeed;                                         // 00006120 | 4 
	float m_obstruction;                                             // 00006124 | 4 
	rglVector2 m_movementDir2;                                       // 00006128 | 8 
	mbMissionTimer m_attackTimer;                                    // 00006130 | 10 
	mbMissionTimer m_defendTimer;                                    // 00006140 | 10 
	int m_movementFlags;                                             // 00006150 | 4 
	bool m_horseTurning;                                             // 00006154 | 1 
	/* FIX-4 */ byte undef_6[3];                                     // 00006155 | 3 
	int m_combatState;                                               // 00006158 | 4 
	int m_rangedTargetStatus;                                        // 0000615C | 4 
	mbAgentControl m_control;                                        // 00006160 | 28 
	unsigned int m_combatControlFlags;                               // 00006188 | 4 
	std__deque_mbAgentAiQueuedControl_std__allocator_mbAgentAiQueuedControl___ m_queuedControls; // 0000618C | 14 
	mbAgentControl m_actionControl;                                  // 000061A0 | 28 
	mbAgentAiTracker m_tracker;                                      // 000061C8 | 304 
	float m_movementFreedom;                                         // 000064CC | 4 
	rglTransform m_scriptedDestination;                              // 000064D0 | 40 
	int m_scriptedMode;                                              // 00006510 | 4 
	int m_alwaysAttackInMelee;                                       // 00006514 | 4 
	int m_damagerAgentNo;                                            // 00006518 | 4 
	int m_lookPositionRandomness;                                    // 0000651C | 4 
	float m_speedLimit;                                              // 00006520 | 4 
	float m_aggressiveness;                                          // 00006524 | 4 
	bool m_interactWithPlayer;                                       // 00006528 | 1 
	bool m_canCrouch;                                                // 00006529 | 1 
	/* FIX-4 */ byte undef_7[6];                                     // 0000652A | 6 
	mbMissionTimer m_crouchTimer;                                    // 00006530 | 10 
}; // $6540 [ #368 #96 #204 #366 #9 #6 #365 ]

struct ALIGN(1) rglCamera // #218
{
	bool m_isPerspective;                                            // 00000000 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000001 | 3 
	rglCameraFrustum m_frustum;                                      // 00000004 | C4 
	rglTransform m_transform;                                        // 000000C8 | 40 
	float m_left;                                                    // 00000108 | 4 
	float m_right;                                                   // 0000010C | 4 
	float m_top;                                                     // 00000110 | 4 
	float m_bottom;                                                  // 00000114 | 4 
	float m_near;                                                    // 00000118 | 4 
	float m_far;                                                     // 0000011C | 4 
	float m_aperture;                                                // 00000120 | 4 
}; // $124 [ #219 #365 ]

struct ALIGN(1) rglHyperlinkTextWidget // #248
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	rglVector_rglVector4_ m_linkLowerLefts;                          // 00000230 | C 
	rglVector_rglVector4_ m_linkUpperRights;                         // 0000023C | C 
	rglVector_int_ m_linkObjectTypes;                                // 00000248 | C 
	rglVector_int_ m_linkObjectNos;                                  // 00000254 | C 
	rglVector_int_ m_linkNos;                                        // 00000260 | C 
	int m_hoveredLinkNo;                                             // 0000026C | 4 
	int m_clickedIndex;                                              // 00000270 | 4 
	rglMetaMesh m_textMetaMesh;                                      // 00000274 | 110 
	bool m_decorated;                                                // 00000384 | 1 
	/* FIX-3 */ byte undef_1[3];                                     // 00000385 | 3 
}; // $388 [ #286 ]

struct ALIGN(1) rglRenderContext // #307
{
	rglTexture *m_renderTarget;                                      // 00000000 | 4 
	rglTexture *m_depthOfFieldRenderTarget;                          // 00000004 | 4 
	rglTexture *m_postFxMultisampledRenderTarget;                    // 00000008 | 4 
	rglTexture *m_postFxMultisampledDepthStencil;                    // 0000000C | 4 
	rglVector_rglPostFxNode_P_ m_postFxNodes;                        // 00000010 | C 
	rglTexture *m_activeRenderTarget;                                // 0000001C | 4 
	rglTexture *m_waterReflectionRenderTarget;                       // 00000020 | 4 
	rglTexture *m_waterReflectionDepthStencil;                       // 00000024 | 4 
	rglTexture *m_activeDepthStencil;                                // 00000028 | 4 
	_D3DCUBEMAP_FACES m_cubeRenderTargetFace;                        // 0000002C | 4 
	bool m_postFxEnabled;                                            // 00000030 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000031 | 3 
	rglRenderContext *m_waterReflectionRenderContext;                // 00000034 | 4 
	float m_depthOfFieldRange;                                       // 00000038 | 4 
	float m_depthOfFieldFocalPoint;                                  // 0000003C | 4 
	rglViewport m_viewport;                                          // 00000040 | 18 
	rglCamera m_camera;                                              // 00000058 | 124 
	bool m_lightingEnabled;                                          // 0000017C | 1 
	bool m_useClipPlane;                                             // 0000017D | 1 
	bool m_forceShadowShader;                                        // 0000017E | 1 
	bool m_forceCharacterShadowShader;                               // 0000017F | 1 
	bool m_invertCulling;                                            // 00000180 | 1 
	bool m_invertWaterFog;                                           // 00000181 | 1 
	bool m_isFinalRender;                                            // 00000182 | 1 
	/* FIX-4 */ byte undef_1[1];                                     // 00000183 | 1 
	D3DXPLANE m_clipPlane;                                           // 00000184 | 10 
	rglColor m_ambientColor;                                         // 00000194 | 10 
	rglColor m_groundAmbientColor;                                   // 000001A4 | 10 
	unsigned int m_flags;                                            // 000001B4 | 4 
	unsigned int m_backgroundColor;                                  // 000001B8 | 4 
	rglColor m_screenColor;                                          // 000001BC | 10 
	bool m_hasScreenColor;                                           // 000001CC | 1 
	/* FIX-4 */ byte undef_2[3];                                     // 000001CD | 3 
	rglVector_rglLight_P_ m_lights;                                  // 000001D0 | C 
	bool m_queuedForRendering;                                       // 000001DC | 1 
	/* FIX-4 */ byte undef_3[3];                                     // 000001DD | 3 
	unsigned int m_visibilityFlags;                                  // 000001E0 | 4 
	bool m_allowRendering;                                           // 000001E4 | 1 
	bool m_entityDegradingEnabled;                                   // 000001E5 | 1 
	/* FIX-4 */ byte undef_4[2];                                     // 000001E6 | 2 
	rglRenderParams *m_params;                                       // 000001E8 | 4 
	rglVector_rglRenderMesh_P_ m_renderMeshes;                       // 000001EC | C 
	rglScene *m_scene;                                               // 000001F8 | 4 
	rglVector_rglMesh_P_ m_collectionMeshes;                         // 000001FC | C 
	float m_flareStrength;                                           // 00000208 | 4 
	rglVector4 m_flareDirection;                                     // 0000020C | 10 
	/* FIX-4 */ byte undef_5[4];                                     // 0000021C | 4 
	_D3DXMATRIXA16 m_waterReflectionProjectionMatrix;                // 00000220 | 40 
	_D3DXMATRIXA16 m_waterReflectionViewMatrix;                      // 00000260 | 40 
	float m_depthBias;                                               // 000002A0 | 4 
	float m_slopeScaledDepthBias;                                    // 000002A4 | 4 
	rglRenderContext *m_source;                                      // 000002A8 | 4 
	/* FIX-3 */ byte undef_6[4];                                     // 000002AC | 4 
}; // $2B0 [ #371 #218 #224 #368 ]

struct ALIGN(1) rglRenderer // #308
{
	_D3DXMATRIXA16 m_identityMatrix;                                 // 00000000 | 40 
	IDirect3DVertexDeclaration9 *m_vertexDeclarations[6];            // 00000040 | 18 
	bool m_enableInstancing;                                         // 00000058 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 00000059 | 3 
	char *m_instanceBuffer;                                          // 0000005C | 4 
	int m_instanceBufferPos;                                         // 00000060 | 4 
	int m_instanceBufferSize;                                        // 00000064 | 4 
	int m_instanceBufferMaxSize;                                     // 00000068 | 4 
	IDirect3DVertexBuffer9 *m_instancingVertexBuffer;                // 0000006C | 4 
	char *m_graphicsBuffer;                                          // 00000070 | 4 
	int m_graphicsBufferSize;                                        // 00000074 | 4 
	rglVector_rglVertexBuffer_P_ m_vertexBuffers[5];                 // 00000078 | 3C 
	rglIndexBuffer m_indexBuffers[2];                                // 000000B4 | E0 
	int m_vertexBufferSizes[5][2];                                   // 00000194 | 28 
	unsigned int m_numRenders;                                       // 000001BC | 4 
	rglMaterial *m_activeMaterial;                                   // 000001C0 | 4 
	rglShader *m_renderToDepthShader;                                // 000001C4 | 4 
	rglShader *m_renderToDepthSkinShader;                            // 000001C8 | 4 
	rglShader *m_renderToDepthBiasedShader;                          // 000001CC | 4 
	rglShader *m_renderCharacterShadowShader;                        // 000001D0 | 4 
	rglShader *m_renderCharacterShadowWithSkinShader;                // 000001D4 | 4 
	rglTexture *m_screenTexture;                                     // 000001D8 | 4 
	int m_reflectionsDepthRenderNo;                                  // 000001DC | 4 
	unsigned int m_earlyZTechniqueHandles[8];                        // 000001E0 | 20 
	rglRenderContext m_activeRenderContexts[64];                     // 00000200 | AC00 
	rglVector_rglRenderMeshCollection_P_ m_meshCollections;          // 0000AE00 | C 
	int m_meshCollectionNo;                                          // 0000AE0C | 4 
	int m_meshCollectionMeshNo;                                      // 0000AE10 | 4 
	rglVector_rglRenderContext_P_ m_renderContexts;                  // 0000AE14 | C 
	int m_numRestores;                                               // 0000AE20 | 4 
	ID3DXEffect *m_earlyZEffect;                                     // 0000AE24 | 4 
	ID3DXEffect *m_postFxEffect;                                     // 0000AE28 | 4 
	unsigned int m_postFxTrueColorTechniqueHandle;                   // 0000AE2C | 4 
	IDirect3DVertexDeclaration9 *m_postFxVertexDeclaration;          // 0000AE30 | 4 
	unsigned int m_postFxTextureHandles[5];                          // 0000AE34 | 14 
	int m_postFxNeedsRestore;                                        // 0000AE48 | 4 
	rglPostFxNode m_sceneConvertedNode;                              // 0000AE4C | 6C 
	rglPostFxNode m_brightPassNode;                                  // 0000AEB8 | 6C 
	rglPostFxNode m_blurX1Node;                                      // 0000AF24 | 6C 
	rglPostFxNode m_blurY1Node;                                      // 0000AF90 | 6C 
	rglPostFxNode m_blurX2Node;                                      // 0000AFFC | 6C 
	rglPostFxNode m_blurY2Node;                                      // 0000B068 | 6C 
	int m_highDynamicRangeNodes[7];                                  // 0000B0D4 | 1C 
	rglPostFxNode m_depthOfFieldBlurNode;                            // 0000B0F0 | 6C 
	rglPostFxNode m_averageNode64;                                   // 0000B15C | 6C 
	rglPostFxNode m_averageNode16;                                   // 0000B1C8 | 6C 
	rglPostFxNode m_averageNode4;                                    // 0000B234 | 6C 
	rglPostFxNode m_luminanceNodes[2];                               // 0000B2A0 | D8 
	rglPostFxNode m_finalNode;                                       // 0000B378 | 6C 
	rglPostFxNode m_postProcessNode;                                 // 0000B3E4 | 6C 
	rglString m_finalNodeTechniqueWithDepthName;                     // 0000B450 | 40 
	rglString m_finalNodeTechniqueWithoutDepthName;                  // 0000B490 | 40 
	int m_autoExposureNodes[7];                                      // 0000B4D0 | 1C 
	int m_activeLuminanceNode;                                       // 0000B4EC | 4 
	rglVector_rglPostFxNode_P_ m_postFxNodes;                        // 0000B4F0 | C 
	int m_numPostFxRestoreFrames;                                    // 0000B4FC | 4 
	_D3DMULTISAMPLE_TYPE m_postFxMultisampleType;                    // 0000B500 | 4 
	bool m_inPostFxRenderingMode;                                    // 0000B504 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000B505 | 3 
	IDirect3DSurface9 *m_renderTargetSurface;                        // 0000B508 | 4 
	IDirect3DSurface9 *m_depthStencilSurface;                        // 0000B50C | 4 
	rglTexture *m_renderTarget;                                      // 0000B510 | 4 
	rglTexture *m_depthStencil;                                      // 0000B514 | 4 
	_D3DCUBEMAP_FACES m_cubeRenderTargetFace;                        // 0000B518 | 4 
	/* FIX-3 */ byte undef_2[4];                                     // 0000B51C | 4 
}; // $B520 [ #251 #307 #301 #345 ]

struct ALIGN(1) rglRenderParams // #312
{
	float m_fogTableStart;                                           // 00000000 | 4 
	float m_fogTableEnd;                                             // 00000004 | 4 
	unsigned int m_fogColor;                                         // 00000008 | 4 
	bool m_fogEnabled;                                               // 0000000C | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 0000000D | 3 
	float m_fogDensity;                                              // 00000010 | 4 
	float m_underwaterFogTableStart;                                 // 00000014 | 4 
	float m_underwaterFogTableEnd;                                   // 00000018 | 4 
	unsigned int m_underwaterFogColor;                               // 0000001C | 4 
	float m_fogWaterLevel;                                           // 00000020 | 4 
	float m_underwaterFogDensity;                                    // 00000024 | 4 
	bool m_shadowMapEnabled;                                         // 00000028 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000029 | 3 
	rglTexture *m_shadowMapTexture;                                  // 0000002C | 4 
	rglCamera m_shadowMapCamera;                                     // 00000030 | 124 
	rglVector4 m_shadowMapLocalMin;                                  // 00000154 | 10 
	rglVector4 m_shadowMapLocalMax;                                  // 00000164 | 10 
	rglVector4 m_shadowMapSize;                                      // 00000174 | 10 
	rglVector4 m_shadowMapLocalCenter;                               // 00000184 | 10 
	rglVector4 m_shadowMapCenter;                                    // 00000194 | 10 
	rglTransform m_shadowMapTransform;                               // 000001A4 | 40 
	rglTransform m_shadowMapCameraTransform;                         // 000001E4 | 40 
}; // $224 [ #218 #368 #365 ]

struct ALIGN(1) rglScene // #319
{
	rglSceneGrid m_grid;                                             // 00000000 | 58 
	rglTerrain *m_terrain;                                           // 00000058 | 4 
	rglMap_int_rglEntity_P_ m_entities;                              // 0000005C | 20 
	rglVector_rglEntity_P_ m_createdEntities;                        // 0000007C | C 
	rglVector_rglEntity_P_ m_queuedEntities;                         // 00000088 | C 
	int m_entitySequenceNo;                                          // 00000094 | 4 
	rglManifold *m_manifold;                                         // 00000098 | 4 
	rglAiMesh *m_aiMesh;                                             // 0000009C | 4 
	int m_timerNo;                                                   // 000000A0 | 4 
	rglVector_rglEntity_P_ m_degradingEntities;                      // 000000A4 | C 
	rglColor m_ambientColor;                                         // 000000B0 | 10 
	rglColor m_groundAmbientColor;                                   // 000000C0 | 10 
	rglEntity *m_skyboxEntity;                                       // 000000D0 | 4 
	bool m_hasScreenColor;                                           // 000000D4 | 1 
	/* FIX-4 */ byte undef_0[3];                                     // 000000D5 | 3 
	rglColor m_screenColor;                                          // 000000D8 | 10 
	rglEntity *m_lowDetailMeshesEntity;                              // 000000E8 | 4 
	int m_numCharacterShadows;                                       // 000000EC | 4 
	float m_characterShadowsRange;                                   // 000000F0 | 4 
	rglVector_rglLight_P_ m_lights;                                  // 000000F4 | C 
	rglVector_rglParticleSystem_P_ m_particleSystems;                // 00000100 | C 
	int m_numParticleSystemsInUse;                                   // 0000010C | 4 
	rglRenderParams m_renderParams;                                  // 00000110 | 224 
	float m_characterDetail;                                         // 00000334 | 4 
	bool m_flareEnabled;                                             // 00000338 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000339 | 3 
	rglColor m_globalLightColor;                                     // 0000033C | 10 
	rglVector4 m_cameraRotation;                                     // 0000034C | 10 
	rglVector4 m_cameraPosition;                                     // 0000035C | 10 
}; // $36C [ #320 #224 #312 #368 ]

struct ALIGN(1) rglSceneWidget // #325
{
	/* FIX-1 */ byte undef_0[560];                                   // 00000000 | 230 
	rglScene *m_scene;                                               // 00000230 | 4 
	/* FIX-4 */ byte undef_1[12];                                    // 00000234 | C 
	rglRenderContext m_renderContext;                                // 00000240 | 2B0 
	bool m_skipFrame;                                                // 000004F0 | 1 
	/* FIX-3 */ byte undef_2[15];                                    // 000004F1 | F 
}; // $500 [ #307 ]

struct ALIGN(1) rglScrollableWidget // #326
{
	/* FIX-1 */ byte undef_0[640];                                   // 00000000 | 280 
	/* FIX-4 */ byte undef_1[15];                                    // 00000281 | F 
	rglRenderContext m_renderContext;                                // 00000290 | 2B0 
	rglCamera m_camera;                                              // 00000540 | 124 
	rglScrollbarWidget *m_scrollbarWidgets[2];                       // 00000664 | 8 
	int m_scrollbarsActive[2];                                       // 0000066C | 8 
	rglContainerWidget *m_scrollPlate;                               // 00000674 | 4 
	rglVector2 m_scrollPosition;                                     // 00000678 | 8 
	rglVector2 m_areaSize;                                           // 00000680 | 8 
	/* FIX-3 */ byte undef_2[8];                                     // 00000688 | 8 
}; // $690 [ #307 #218 #366 ]

struct ALIGN(1) rglShadowMap // #331
{
	rglMaterial *m_material;                                         // 00000000 | 4 
	rglTexture *m_texture;                                           // 00000004 | 4 
	IDirect3DSurface9 *m_surface;                                    // 00000008 | 4 
	int m_textureSize;                                               // 0000000C | 4 
	rglRenderContext m_renderContext;                                // 00000010 | 2B0 
	rglScene *m_scene;                                               // 000002C0 | 4 
	bool m_needsRestore;                                             // 000002C4 | 1 
	/* FIX-3 */ byte undef_0[11];                                    // 000002C5 | B 
}; // $2D0 [ #307 ]

struct ALIGN(1) rglWindowManager // #373
{
	rglVector_rglPopupWidget_P_ m_popups;                            // 00000000 | C 
	rglWidget *m_focusedWidget;                                      // 0000000C | 4 
	rglVector2 m_cursorPosition;                                     // 00000010 | 8 
	rglVector2 m_mouseMovement;                                      // 00000018 | 8 
	rglVector2 m_totalMouseMovement;                                 // 00000020 | 8 
	rglVector2 m_prevCursorPosition;                                 // 00000028 | 8 
	tagPOINT m_prevScreenCursorPosition;                             // 00000030 | 8 
	/* FIX-4 */ byte undef_0[8];                                     // 00000038 | 8 
	rglRenderContext m_widgetRenderContext;                          // 00000040 | 2B0 
	rglRenderContext m_overlayRenderContext;                         // 000002F0 | 2B0 
	rglRenderContext m_tooltipRenderContext;                         // 000005A0 | 2B0 
	rglCamera m_camera;                                              // 00000850 | 124 
	rglCamera m_tooltipCamera;                                       // 00000974 | 124 
	float m_multipleScreenModeAspectRatio;                           // 00000A98 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 00000A9C | 4 
	rglAppTimer m_leftMouseDownTimer;                                // 00000AA0 | 10 
	rglAppTimer m_rightMouseDownTimer;                               // 00000AB0 | 10 
	rglAppTimer m_middleMouseDownTimer;                              // 00000AC0 | 10 
	int m_windowWidth;                                               // 00000AD0 | 4 
	int m_windowHeight;                                              // 00000AD4 | 4 
	float m_aspectRatioSqrtInv;                                      // 00000AD8 | 4 
	float m_aspectRatioSqrt;                                         // 00000ADC | 4 
	bool m_showCursor;                                               // 00000AE0 | 1 
	bool m_blockCursor;                                              // 00000AE1 | 1 
	/* FIX-4 */ byte undef_2[2];                                     // 00000AE2 | 2 
	rglMetaMesh *m_cursorOverlayMetaMesh;                            // 00000AE4 | 4 
	rglMesh *m_tooltipMesh;                                          // 00000AE8 | 4 
	/* FIX-4 */ byte undef_3[4];                                     // 00000AEC | 4 
	rglAppTimer m_tooltipTimer;                                      // 00000AF0 | 10 
	rglMesh *m_contextMenuMesh;                                      // 00000B00 | 4 
	/* FIX-4 */ byte undef_4[4];                                     // 00000B04 | 4 
	rglMesh m_contextMenuFrameMesh;                                  // 00000B08 | 290 
	rglString m_tooltipTexts[80];                                    // 00000D98 | 1400 
	bool m_tooltipCentered[80];                                      // 00002198 | 50 
	float m_tooltipSizes[80];                                        // 000021E8 | 140 
	unsigned int m_tooltipColors[80];                                // 00002328 | 140 
	int m_tooltipCurLine;                                            // 00002468 | 4 
	float m_tooltipMaxWidth;                                         // 0000246C | 4 
	float m_tooltipLeftOffset;                                       // 00002470 | 4 
	/* FIX-4 */ byte undef_5[4];                                     // 00002474 | 4 
	rglMesh m_tooltipFrameMesh;                                      // 00002478 | 290 
	rglMesh *m_tooltipFrameCornerMeshes[4];                          // 00002708 | 10 
	rglMesh m_messageBoxBackgroundMesh;                              // 00002718 | 290 
	rglMesh m_messageBoxMesh;                                        // 000029A8 | 290 
	rglVector2 m_messageBoxPosition;                                 // 00002C38 | 8 
	rglVector2 m_messageBoxSize;                                     // 00002C40 | 8 
	bool m_messageBoxCenterJustify;                                  // 00002C48 | 1 
	/* FIX-4 */ byte undef_6[7];                                     // 00002C49 | 7 
	rglAppTimer m_messageBoxTimer;                                   // 00002C50 | 10 
	bool m_messageBoxIsTimed;                                        // 00002C60 | 1 
	/* FIX-4 */ byte undef_7[3];                                     // 00002C61 | 3 
	unsigned int m_tooltipTextColor;                                 // 00002C64 | 4 
	unsigned int m_tooltipBackgroundColor;                           // 00002C68 | 4 
	bool m_tooltipOpen;                                              // 00002C6C | 1 
	/* FIX-4 */ byte undef_8[3];                                     // 00002C6D | 3 
	rglVector2 m_tooltipPosition;                                    // 00002C70 | 8 
	float m_tooltipScale;                                            // 00002C78 | 4 
	rglVector2 m_contextMenuPosition;                                // 00002C7C | 8 
	float m_tooltipCurY;                                             // 00002C84 | 4 
	float m_contextMenuCurY;                                         // 00002C88 | 4 
	bool m_popupChanging;                                            // 00002C8C | 1 
	bool m_closePopup;                                               // 00002C8D | 1 
	/* FIX-4 */ byte undef_9[2];                                     // 00002C8E | 2 
	int m_clickSound;                                                // 00002C90 | 4 
	bool m_aspectRatioControlEnabled;                                // 00002C94 | 1 
	bool m_forceMultipleScreenMode;                                  // 00002C95 | 1 
	bool m_forceStandardAspectRatio;                                 // 00002C96 | 1 
	bool m_multipleScreenScrolling;                                  // 00002C97 | 1 
	bool m_typing;                                                   // 00002C98 | 1 
	/* FIX-4 */ byte undef_10[3];                                    // 00002C99 | 3 
	int m_scrollAmount;                                              // 00002C9C | 4 
	int m_pressedKey;                                                // 00002CA0 | 4 
	bool m_skipNextKeyPress;                                         // 00002CA4 | 1 
	/* FIX-4 */ byte undef_11[3];                                    // 00002CA5 | 3 
	float m_messageRenderQueueCurY;                                  // 00002CA8 | 4 
	int m_messageRenderQueueHead;                                    // 00002CAC | 4 
	rglMetaMesh m_messageRenderQueueMetaMeshes[32];                  // 00002CB0 | 2200 
	rglMesh m_messageRenderQueueMeshes[32];                          // 00004EB0 | 5200 
	float m_messageRenderQueueTransparencies[32];                    // 0000A0B0 | 80 
	float m_messageRenderQueueYPositions[32];                        // 0000A130 | 80 
	float m_aspectRatio;                                             // 0000A1B0 | 4 
	unsigned int m_messageRenderQueueColors[32];                     // 0000A1B4 | 80 
	bool m_clearDepthBuffer;                                         // 0000A234 | 1 
	bool m_clearRenderTarget;                                        // 0000A235 | 1 
	/* FIX-4 */ byte undef_12[2];                                    // 0000A236 | 2 
	tagPOINT m_screenCursorPosition;                                 // 0000A238 | 8 
	rglWindowManagerMessageQueue m_messageQueue;                     // 0000A240 | 888 
	std__deque_rglString_std__allocator_rglString___ m_messageLog;   // 0000AAC8 | 14 
	int m_pingSamples[25];                                           // 0000AADC | 64 
	int m_pingSampleNo;                                              // 0000AB40 | 4 
	bool m_showPingSamples;                                          // 0000AB44 | 1 
	/* FIX-4 */ byte undef_13[3];                                    // 0000AB45 | 3 
	rglMesh m_pingSamplesMesh;                                       // 0000AB48 | 290 
	rglMesh m_frameRateMesh;                                         // 0000ADD8 | 290 
	int m_frameRate;                                                 // 0000B068 | 4 
	/* FIX-4 */ byte undef_14[4];                                    // 0000B06C | 4 
	rglMesh m_watermarkMesh;                                         // 0000B070 | 290 
	bool m_showCursorPosition;                                       // 0000B300 | 1 
	/* FIX-4 */ byte undef_15[7];                                    // 0000B301 | 7 
	rglMesh m_cursorPositionMesh;                                    // 0000B308 | 290 
	rglString m_messageBoxCurText;                                   // 0000B598 | 40 
	unsigned int m_messageBoxCurColor;                               // 0000B5D8 | 4 
	rglVector2 m_messageBoxCurSize;                                  // 0000B5DC | 8 
	wchar_t m_imeBuffer[50];                                         // 0000B5E4 | 64 
	bool m_hideUi;                                                   // 0000B648 | 1 
	bool m_hideTooltips;                                             // 0000B649 | 1 
	bool m_hideMessages;                                             // 0000B64A | 1 
	bool m_displayMessages;                                          // 0000B64B | 1 
	bool m_hideWidgetTooltips;                                       // 0000B64C | 1 
	/* FIX-3 */ byte undef_16[3];                                    // 0000B64D | 3 
}; // $B650 [ #366 #307 #218 #207 #277 #345 #286 #374 ]

struct ALIGN(1) mbAgent // #3
{
	/* FIX-1 */ byte undef_0[12];                                    // 00000000 | C 
	rglVector4 m_movementDir;                                        // 0000000C | 10 
	float m_movementDirf;                                            // 0000001C | 4 
	int m_useObjectNo;                                               // 00000020 | 4 
	int m_type;                                                      // 00000024 | 4 
	int m_skinNo;                                                    // 00000028 | 4 
	int m_status;                                                    // 0000002C | 4 
	int m_playerNo;                                                  // 00000030 | 4 
	bool m_fireRanged;                                               // 00000034 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 00000035 | 3 
	rglVector4 m_position;                                           // 00000038 | 10 
	rglVector4 m_positionChange;                                     // 00000048 | 10 
	float m_positionChangeDamping;                                   // 00000058 | 4 
	int m_approximateX;                                              // 0000005C | 4 
	int m_approximateY;                                              // 00000060 | 4 
	int m_approximateZ;                                              // 00000064 | 4 
	float m_movementDirfChange;                                      // 00000068 | 4 
	float m_lookDirfChange;                                          // 0000006C | 4 
	float m_lookHeightChange;                                        // 00000070 | 4 
	rglTransform m_scaledTransform;                                  // 00000074 | 40 
	rglTransform m_rotatedTransform;                                 // 000000B4 | 40 
	mbSlots m_slots;                                                 // 000000F4 | C 
	int m_horseAgentNo;                                              // 00000100 | 4 
	int m_riderAgentNo;                                              // 00000104 | 4 
	int m_spawnRiderAgentNo;                                         // 00000108 | 4 
	int m_standActionNo;                                             // 0000010C | 4 
	int m_walkActionNo;                                              // 00000110 | 4 
	bool m_isOnGround;                                               // 00000114 | 1 
	bool m_isCrouching;                                              // 00000115 | 1 
	/* FIX-4 */ byte undef_2[2];                                     // 00000116 | 2 
	mbMissionTimer m_movementTimer;                                  // 00000118 | 10 
	int m_lastHitAgentNo;                                            // 00000128 | 4 
	rglVector_int_ m_offerAgentNos;                                  // 0000012C | C 
	rglVector_float_ m_offerTimeouts;                                // 00000138 | C 
	bool m_hasRelations;                                             // 00000144 | 1 
	/* FIX-4 */ byte undef_3[3];                                     // 00000145 | 3 
	rglVector_int_ m_relationAgentNos;                               // 00000148 | C 
	rglVector_int_ m_relationValues;                                 // 00000154 | C 
	mbMissionTimer m_useTimer;                                       // 00000160 | 10 
	mbAttack m_attack;                                               // 00000170 | 94 
	/* FIX-4 */ byte undef_4[4];                                     // 00000204 | 4 
	mbMissionTimer m_defendTimer;                                    // 00000208 | 10 
	mbMissionTimer m_attackTimer;                                    // 00000218 | 10 
	mbMissionTimer m_cancelTimer;                                    // 00000228 | 10 
	float m_tilt;                                                    // 00000238 | 4 
	float m_tiltChange;                                              // 0000023C | 4 
	int m_controller;                                                // 00000240 | 4 
	int m_strafeDirection;                                           // 00000244 | 4 
	mbMissionTimer m_strafeTimer;                                    // 00000248 | 10 
	float m_scale;                                                   // 00000258 | 4 
	float m_itemOffset;                                              // 0000025C | 4 
	float m_deathOscillation;                                        // 00000260 | 4 
	float m_rotationDamping;                                         // 00000264 | 4 
	int m_troopNo;                                                   // 00000268 | 4 
	mbItem m_horseItem;                                              // 0000026C | 8 
	float m_horseTurn;                                               // 00000274 | 4 
	int m_dna;                                                       // 00000278 | 4 
	rglVector4 m_friction;                                           // 0000027C | 10 
	rglVector2 m_speed;                                              // 0000028C | 8 
	rglVector2 m_maxSpeed;                                           // 00000294 | 8 
	float m_walkTimeStep;                                            // 0000029C | 4 
	int m_walkState;                                                 // 000002A0 | 4 
	bool m_wasSprinting;                                             // 000002A4 | 1 
	bool m_isSprinting;                                              // 000002A5 | 1 
	bool m_yell;                                                     // 000002A6 | 1 
	/* FIX-4 */ byte undef_5[1];                                     // 000002A7 | 1 
	mbMissionTimer m_yellTimer;                                      // 000002A8 | 10 
	mbMissionTimer m_sprintTimer;                                    // 000002B8 | 10 
	mbMissionTimer m_stunTimer;                                      // 000002C8 | 10 
	mbMissionTimer m_keepStartTimer;                                 // 000002D8 | 10 
	mbMissionTimer m_keepTimer;                                      // 000002E8 | 10 
	mbMissionTimer m_parryTimer;                                     // 000002F8 | 10 
	bool m_isParry;                                                  // 00000308 | 1 
	/* FIX-4 */ byte undef_6[3];                                     // 00000309 | 3 
	float m_couchDuration;                                           // 0000030C | 4 
	int m_couchState;                                                // 00000310 | 4 
	rglQuad *m_groundQuad;                                           // 00000314 | 4 
	float m_rotationSpeed;                                           // 00000318 | 4 
	rglVector4 m_aiMeshUpdatePosition;                               // 0000031C | 10 
	/* FIX-4 */ byte undef_7[4];                                     // 0000032C | 4 
	mbAgentCdPointCollector m_castCollector;                         // 00000330 | 1B0 
	mbAgentCdPointCollector m_startCollector;                        // 000004E0 | 1B0 
	hkpCharacterProxy *m_havokProxy;                                 // 00000690 | 4 
	/* FIX-4 */ byte undef_8[4];                                     // 00000694 | 4 
	mbAgentActionChannel m_actionChannels[2];                        // 00000698 | 70 
	mbActionSet *m_actionSet;                                        // 00000708 | 4 
	bool m_personalActionSetEnabled;                                 // 0000070C | 1 
	/* FIX-4 */ byte undef_9[3];                                     // 0000070D | 3 
	mbActionSet m_personalActionSet;                                 // 00000710 | 8 
	rglOrderedMap_int_int_ m_personalAnimations;                     // 00000718 | 8 
	bool m_weaponUsageOrdered;                                       // 00000720 | 1 
	/* FIX-4 */ byte undef_10[3];                                    // 00000721 | 3 
	unsigned int m_wieldedItemFlags;                                 // 00000724 | 4 
	int m_operationLastWieldedItemSlotNo;                            // 00000728 | 4 
	bool m_showBanner;                                               // 0000072C | 1 
	/* FIX-4 */ byte undef_11[3];                                    // 0000072D | 3 
	rglMetaMesh *m_metaMeshes[28];                                   // 00000730 | 70 
	rglParticleSystem *m_hoofDustParticleSystem;                     // 000007A0 | 4 
	rglParticleSystem *m_waterSplashParticleSystems[3];              // 000007A4 | C 
	int m_partyNo;                                                   // 000007B0 | 4 
	int m_partyStackNo;                                              // 000007B4 | 4 
	int m_teamNo;                                                    // 000007B8 | 4 
	int m_groupNo;                                                   // 000007BC | 4 
	int m_divisionNo;                                                // 000007C0 | 4 
	/* FIX-4 */ byte undef_12[4];                                    // 000007C4 | 4 
	mbMissionTimer m_divisionChangeTimer;                            // 000007C8 | 10 
	int m_divisionMemberNo;                                          // 000007D8 | 4 
	mbItem m_items[10];                                              // 000007DC | 50 
	bool m_itemsNotPickedUp[10];                                     // 0000082C | A 
	/* FIX-4 */ byte undef_13[2];                                    // 00000836 | 2 
	int m_wieldedItems[2];                                           // 00000838 | 8 
	int m_wieldedEquippedItems[2];                                   // 00000840 | 8 
	bool m_bothHandsOccupied;                                        // 00000848 | 1 
	/* FIX-4 */ byte undef_14[3];                                    // 00000849 | 3 
	int m_itemAlternativeUsages[4];                                  // 0000084C | 10 
	int m_armor[3];                                                  // 0000085C | C 
	float m_itemWeight;                                              // 00000868 | 4 
	float m_horseSpeedFactor;                                        // 0000086C | 4 
	rglEntity *m_entity;                                             // 00000870 | 4 
	/* FIX-4 */ byte undef_15[4];                                    // 00000874 | 4 
	mbAgentAi m_ai;                                                  // 00000878 | 6540 
	int m_attackOverrideType;                                        // 00006DB8 | 4 
	int m_attackOverrideHold;                                        // 00006DBC | 4 
	int m_defendOverrideType;                                        // 00006DC0 | 4 
	float m_defendOverrideDuration;                                  // 00006DC4 | 4 
	mbMissionTimer m_defendOverrideTimer;                            // 00006DC8 | 10 
	int m_numAgentsLookingAt;                                        // 00006DD8 | 4 
	int m_readyActionNo;                                             // 00006DDC | 4 
	int m_releaseActionNo;                                           // 00006DE0 | 4 
	int m_attackAction;                                              // 00006DE4 | 4 
	int m_defendAction;                                              // 00006DE8 | 4 
	int m_parryAction;                                               // 00006DEC | 4 
	mbMissionTimer m_attackSwitchTimer;                              // 00006DF0 | 10 
	bool m_noAmmoMessageDisplayed;                                   // 00006E00 | 1 
	/* FIX-4 */ byte undef_16[3];                                    // 00006E01 | 3 
	int m_defendActionNo;                                            // 00006E04 | 4 
	int m_keepActionNo;                                              // 00006E08 | 4 
	int m_nextDefendActionNo;                                        // 00006E0C | 4 
	int m_nextKeepActionNo;                                          // 00006E10 | 4 
	int m_nextReadyActionNo;                                         // 00006E14 | 4 
	int m_nextReleaseActionNo;                                       // 00006E18 | 4 
	int m_nextAttackType;                                            // 00006E1C | 4 
	float m_defendActionCharge;                                      // 00006E20 | 4 
	int m_kickState;                                                 // 00006E24 | 4 
	bool m_canKick;                                                  // 00006E28 | 1 
	/* FIX-4 */ byte undef_17[3];                                    // 00006E29 | 3 
	int m_reloadActionNo;                                            // 00006E2C | 4 
	float m_inaccuracy;                                              // 00006E30 | 4 
	float m_accuracyNoise;                                           // 00006E34 | 4 
	rglVector4 m_predictionPosition;                                 // 00006E38 | 10 
	mbMissionTimer m_predictionTimer;                                // 00006E48 | 10 
	rglVector4 m_predictedPosition;                                  // 00006E58 | 10 
	rglVector4 m_predictedVelocity;                                  // 00006E68 | 10 
	bool m_hasBlow;                                                  // 00006E78 | 1 
	/* FIX-4 */ byte undef_18[3];                                    // 00006E79 | 3 
	mbBlow m_blow;                                                   // 00006E7C | 84 
	bool m_wasTouched;                                               // 00006F00 | 1 
	/* FIX-4 */ byte undef_19[3];                                    // 00006F01 | 3 
	int m_hitBoneNo;                                                 // 00006F04 | 4 
	rglVector4 m_hitForce;                                           // 00006F08 | 10 
	float m_modifiers[7];                                            // 00006F18 | 1C 
	rglVector4 m_acceleration;                                       // 00006F34 | 10 
	rglVector4 m_velocity;                                           // 00006F44 | 10 
	rglVector4 m_smoothVelocity;                                     // 00006F54 | 10 
	float m_turnInaccuracy;                                          // 00006F64 | 4 
	int m_riderRotationType;                                         // 00006F68 | 4 
	float m_riderRotation;                                           // 00006F6C | 4 
	bool m_riderRotating;                                            // 00006F70 | 1 
	/* FIX-4 */ byte undef_20[3];                                    // 00006F71 | 3 
	float m_slope;                                                   // 00006F74 | 4 
	int m_weaponClass;                                               // 00006F78 | 4 
	float m_actionSoundProgress;                                     // 00006F7C | 4 
	float m_prevActionSoundProgress;                                 // 00006F80 | 4 
	float m_horseTurnSpeed;                                          // 00006F84 | 4 
	int m_horseTurnState;                                            // 00006F88 | 4 
	int m_accelerationState;                                         // 00006F8C | 4 
	int m_strafeState;                                               // 00006F90 | 4 
	unsigned int m_alterFlags;                                       // 00006F94 | 4 
	int m_itemOverrides[10];                                         // 00006F98 | 28 
	int m_numItemOverrides;                                          // 00006FC0 | 4 
	int m_entryGroupNo;                                              // 00006FC4 | 4 
	bool m_noDynamics;                                               // 00006FC8 | 1 
	/* FIX-4 */ byte undef_21[3];                                    // 00006FC9 | 3 
	float m_spawnHitPoints;                                          // 00006FCC | 4 
	float m_maxHitPoints;                                            // 00006FD0 | 4 
	float m_floatHitPoints;                                          // 00006FD4 | 4 
	int m_intHitPoints;                                              // 00006FD8 | 4 
	bool m_noDeathKnockdownOnly;                                     // 00006FDC | 1 
	bool m_invulnerableShield;                                       // 00006FDD | 1 
	/* FIX-4 */ byte undef_22[2];                                    // 00006FDE | 2 
	int m_killCount;                                                 // 00006FE0 | 4 
	int m_woundedCount;                                              // 00006FE4 | 4 
	int m_horseChargeIgnoreAgentNo;                                  // 00006FE8 | 4 
	float m_horseChargeIgnoreTime;                                   // 00006FEC | 4 
	int m_experience;                                                // 00006FF0 | 4 
	bool m_isRouted;                                                 // 00006FF4 | 1 
	/* FIX-4 */ byte undef_23[3];                                    // 00006FF5 | 3 
	mbMissionToggleTimer m_dismountTimer;                            // 00006FF8 | 18 
	mbMissionTimer m_exitTimer;                                      // 00007010 | 10 
	mbMissionTimer m_rangedHoldTimer;                                // 00007020 | 10 
	mbMissionTimer m_actionCooldownTimer;                            // 00007030 | 10 
	mbMissionTimer m_horseSnortTimer;                                // 00007040 | 10 
	mbMissionTimer m_stuckTimer;                                     // 00007050 | 10 
	mbMissionTimer m_deathTimer;                                     // 00007060 | 10 
	mbMissionTimer m_horseChargedHorseTimer;                         // 00007070 | 10 
	mbMissionTimer m_couchParriedTimer;                              // 00007080 | 10 
	mbMissionTimer m_horseCollisionTurnTimer;                        // 00007090 | 10 
	int m_horseCollisionTurnDirection;                               // 000070A0 | 4 
	int m_exitStatus;                                                // 000070A4 | 4 
	bool m_hasCorpse;                                                // 000070A8 | 1 
	/* FIX-4 */ byte undef_24[3];                                    // 000070A9 | 3 
	int m_horseBeforeDeathAgentNo;                                   // 000070AC | 4 
	hkpRigidBody *m_horseBeforeDeathBody;                            // 000070B0 | 4 
	int m_runningAwayState;                                          // 000070B4 | 4 
	int m_soundChannel;                                              // 000070B8 | 4 
	int m_moduleSoundChannel;                                        // 000070BC | 4 
	int m_reloadingSoundChannel;                                     // 000070C0 | 4 
	int m_numTimesCheered;                                           // 000070C4 | 4 
	bool m_updateBanner;                                             // 000070C8 | 1 
	/* FIX-4 */ byte undef_25[3];                                    // 000070C9 | 3 
	rglAiMeshFace *m_aiMeshFace;                                     // 000070CC | 4 
	int m_ragdollState;                                              // 000070D0 | 4 
	int m_ragdollHitBoneNo;                                          // 000070D4 | 4 
	rglVector4 m_ragdollHitForce;                                    // 000070D8 | 10 
	float m_ragdollHitDuration;                                      // 000070E8 | 4 
	rglTransform m_ragdollTransform;                                 // 000070EC | 40 
	bool m_updateRagdollPosition;                                    // 0000712C | 1 
	bool m_updateRagdollVelocity;                                    // 0000712D | 1 
	/* FIX-4 */ byte undef_26[2];                                    // 0000712E | 2 
	rglVector4 m_ragdollVelocity;                                    // 00007130 | 10 
	bool m_isRagdollOnGround;                                        // 00007140 | 1 
	/* FIX-4 */ byte undef_27[3];                                    // 00007141 | 3 
	int m_ragdollWorldNo;                                            // 00007144 | 4 
	mbMissionTimer m_yellCooldownTimer;                              // 00007148 | 10 
	mbMissionTimer m_ragdollTimer;                                   // 00007158 | 10 
	float m_frameTime;                                               // 00007168 | 4 
	float m_turnAmount;                                              // 0000716C | 4 
	int m_attachedMissionObjectNo[4];                                // 00007170 | 10 
	float m_attachedMissionObjectX[4];                               // 00007180 | 10 
	float m_attachedMissionObjectY[4];                               // 00007190 | 10 
	float m_attachedMissionObjectZ[4];                               // 000071A0 | 10 
	int m_attachedMissionObjectBoneNo[4];                            // 000071B0 | 10 
	bool m_attachedMissionObjectUseBoneRotation[4];                  // 000071C0 | 4 
	float m_verticalRotationProgress;                                // 000071C4 | 4 
	float m_forwardSpeedChange;                                      // 000071C8 | 4 
	float m_minRiderRotation;                                        // 000071CC | 4 
	float m_maxRiderRotation;                                        // 000071D0 | 4 
	mbMissionGridLocation m_gridLocation;                            // 000071D4 | C 
	unsigned int m_prevControlFlags2;                                // 000071E0 | 4 
	mbAgentControl m_control;                                        // 000071E4 | 28 
	rglVector_int_ m_prevIntersectingMissionObjectNos;               // 0000720C | C 
	rglVector_int_ m_intersectingMissionObjectNos;                   // 00007218 | C 
	bool m_updateIntersection;                                       // 00007224 | 1 
	/* FIX-4 */ byte undef_28[3];                                    // 00007225 | 3 
	int m_footstepSoundNos[5];                                       // 00007228 | 14 
	float m_timeSpeedMultiplier;                                     // 0000723C | 4 
	float m_droppedItemsPruneTime;                                   // 00007240 | 4 
	float m_missileItemsPruneTime;                                   // 00007244 | 4 
	bool m_leftHandWeaponCollision;                                  // 00007248 | 1 
	/* FIX-3 */ byte undef_29[7];                                    // 00007249 | 7 
}; // $7250 [ #368 #365 #169 #96 #13 #67 #366 #8 #1 #4 #18 #97 #92 #9 ]

struct ALIGN(1) mbCharacterWindow // #21
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglSimpleButtonWidget *m_skillButtonWidgets[42];                 // 0000005C | A8 
	rglWidget *m_skillValueWidgets[42];                              // 00000104 | A8 
	rglSimpleButtonWidget *m_skillIncreaseButtonWidgets[42];         // 000001AC | A8 
	int m_skillNos[42];                                              // 00000254 | A8 
	int m_numSkills;                                                 // 000002FC | 4 
	int m_selectedObjectSubType;                                     // 00000300 | 4 
	int m_selectedObjectType;                                        // 00000304 | 4 
	int m_stage;                                                     // 00000308 | 4 
	rglScene *m_scene;                                               // 0000030C | 4 
	rglCamera m_camera;                                              // 00000310 | 124 
	rglSimpleButtonWidget *m_doneButtonWidget;                       // 00000434 | 4 
	rglSimpleButtonWidget *m_resetButtonWidget;                      // 00000438 | 4 
	rglWidget *m_descriptionLabelWidget;                             // 0000043C | 4 
	rglSimpleButtonWidget *m_statisticsButtonWidget;                 // 00000440 | 4 
	rglSimpleButtonWidget *m_nextButtonWidget;                       // 00000444 | 4 
	rglSimpleButtonWidget *m_prevButtonWidget;                       // 00000448 | 4 
	rglSimpleButtonWidget *m_attributeButtonWidgets[4];              // 0000044C | 10 
	rglSimpleButtonWidget *m_attributeIncreaseButtonWidgets[4];      // 0000045C | 10 
	rglWidget *m_proficienciesLabelWidget;                           // 0000046C | 4 
	rglWidget *m_attributesLabelWidget;                              // 00000470 | 4 
	rglWidget *m_skillsLabelWidget;                                  // 00000474 | 4 
	rglSimpleButtonWidget *m_proficiencyButtonWidgets[7];            // 00000478 | 1C 
	rglSimpleButtonWidget *m_proficiencyIncreaseButtonWidgets[7];    // 00000494 | 1C 
	rglBoardWidget *m_attributesBoardWidget;                         // 000004B0 | 4 
	rglBoardWidget *m_generalInfoBoardWidget;                        // 000004B4 | 4 
	rglBoardWidget *m_descriptionBoardWidget;                        // 000004B8 | 4 
	rglScrollableWidget *m_skillsScrollableWidget;                   // 000004BC | 4 
	rglBoardWidget *m_skillsBoardWidget;                             // 000004C0 | 4 
	rglTextBoxWidget *m_nameTextBoxWidget;                           // 000004C4 | 4 
	rglWidget *m_attributePointsLabelWidget;                         // 000004C8 | 4 
	rglWidget *m_skillPointsLabelWidget;                             // 000004CC | 4 
	rglWidget *m_proficiencyPointsLabelWidget;                       // 000004D0 | 4 
	rglImageButtonWidget *m_characterImageButtonWidget;              // 000004D4 | 4 
	rglWidget *m_characterShadowWidget;                              // 000004D8 | 4 
	bool m_changesMade;                                              // 000004DC | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 000004DD | 3 
	int m_attributes[4];                                             // 000004E0 | 10 
	float m_proficiencies[7];                                        // 000004F0 | 1C 
	float m_hitPoints;                                               // 0000050C | 4 
	int m_skillPoints;                                               // 00000510 | 4 
	int m_attributePoints;                                           // 00000514 | 4 
	int m_proficiencyPoints;                                         // 00000518 | 4 
	int m_skillKeys[6];                                              // 0000051C | 18 
	bool m_editable;                                                 // 00000534 | 1 
	/* FIX-3 */ byte undef_2[3];                                     // 00000535 | 3 
}; // $538 [ #218 ]

struct ALIGN(1) mbConversationWindow // #26
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglSceneWidget *m_sceneWidget;                                   // 0000005C | 4 
	rglCamera m_camera;                                              // 00000060 | 124 
	rglWidget *m_speakerNameWidget;                                  // 00000184 | 4 
	rglWidget *m_speakerTextWidget;                                  // 00000188 | 4 
	rglWidget *m_pressMouseWidget;                                   // 0000018C | 4 
	rglBoardWidget *m_boardWidget;                                   // 00000190 | 4 
	rglScrollableWidget *m_choicesScrollableWidget;                  // 00000194 | 4 
	rglContainerWidget *m_choicesContainerWidget;                    // 00000198 | 4 
	rglSimpleButtonWidget *m_choiceButtonWidgets[1024];              // 0000019C | 1000 
	int m_numChoices;                                                // 0000119C | 4 
	rglTransform m_cameraTransform;                                  // 000011A0 | 40 
	float m_cameraProgress;                                          // 000011E0 | 4 
	rglBoardWidget *m_talkOverlayBoardWidget;                        // 000011E4 | 4 
	rglWidget *m_talkOverlayRelationPointerWidget;                   // 000011E8 | 4 
	rglWidget *m_talkOverlayRelationBarWidget;                       // 000011EC | 4 
	rglWidget *m_talkOverlayLineWidgets[5];                          // 000011F0 | 14 
	rglWidget *m_talkOverlayViewNotesWidget;                         // 00001204 | 4 
	rglWidget *m_partnerImageWidget;                                 // 00001208 | 4 
	int m_troopNo;                                                   // 0000120C | 4 
	int m_speakerTroopNo;                                            // 00001210 | 4 
}; // $1214 [ #218 #365 ]

struct ALIGN(1) mbFaceGenWindow // #39
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglSceneWidget *m_sceneWidget;                                   // 0000005C | 4 
	rglCamera m_camera;                                              // 00000060 | 124 
	float m_horizontalRotation;                                      // 00000184 | 4 
	float m_verticalRotation;                                        // 00000188 | 4 
	float m_zoom;                                                    // 0000018C | 4 
	bool m_rotating;                                                 // 00000190 | 1 
	bool m_zooming;                                                  // 00000191 | 1 
	/* FIX-4 */ byte undef_1[2];                                     // 00000192 | 2 
	int m_skinNo;                                                    // 00000194 | 4 
	rglScene *m_scene;                                               // 00000198 | 4 
	rglScrollableWidget *m_deformScrollableWidget;                   // 0000019C | 4 
	rglBoardWidget *m_deformBoardWidget;                             // 000001A0 | 4 
	rglBoardWidget *m_buttonsBoardWidget;                            // 000001A4 | 4 
	rglSimpleButtonWidget *m_faceKeysTextWidget;                     // 000001A8 | 4 
	rglSliderWidget *m_deformSliderWidgets[63];                      // 000001AC | FC 
	rglWidget *m_deformLabelWidgets[63];                             // 000002A8 | FC 
	rglSimpleButtonWidget *m_nextBeardButtonWidget;                  // 000003A4 | 4 
	rglSimpleButtonWidget *m_nextHairButtonWidget;                   // 000003A8 | 4 
	rglSimpleButtonWidget *m_nextFaceButtonWidget;                   // 000003AC | 4 
	rglSimpleButtonWidget *m_prevBeardButtonWidget;                  // 000003B0 | 4 
	rglSimpleButtonWidget *m_prevHairButtonWidget;                   // 000003B4 | 4 
	rglSimpleButtonWidget *m_prevFaceButtonWidget;                   // 000003B8 | 4 
	rglWidget *m_changeBeardWidget;                                  // 000003BC | 4 
	rglWidget *m_changeHairWidget;                                   // 000003C0 | 4 
	rglWidget *m_changeFaceWidget;                                   // 000003C4 | 4 
	rglSliderWidget *m_ageSliderWidget;                              // 000003C8 | 4 
	rglSliderWidget *m_hairColorSliderWidget;                        // 000003CC | 4 
	rglWidget *m_changeAgeWidget;                                    // 000003D0 | 4 
	rglWidget *m_changeHairColorWidget;                              // 000003D4 | 4 
	rglSimpleButtonWidget *m_doneButtonWidget;                       // 000003D8 | 4 
	rglSimpleButtonWidget *m_resetButtonWidget;                      // 000003DC | 4 
	rglSimpleButtonWidget *m_randomizeButtonWidget;                  // 000003E0 | 4 
	int m_beardNo;                                                   // 000003E4 | 4 
	int m_hairNo;                                                    // 000003E8 | 4 
	int m_hairMaterialNo;                                            // 000003EC | 4 
	int m_faceTextureNo;                                             // 000003F0 | 4 
	float m_age;                                                     // 000003F4 | 4 
	float m_hairColor;                                               // 000003F8 | 4 
	/* FIX-4 */ byte undef_2[4];                                     // 000003FC | 4 
	mbFaceKeys m_faceKeys1;                                          // 00000400 | 20 
	mbFaceKeys m_storedFaceKeys;                                     // 00000420 | 20 
	rglMetaMesh *m_characterMetaMeshes[28];                          // 00000440 | 70 
	rglEntity *m_characterEntity;                                    // 000004B0 | 4 
	rglEntity *m_terrainEntity;                                      // 000004B4 | 4 
	rglString m_faceKeysText;                                        // 000004B8 | 40 
}; // $4F8 [ #218 #40 #345 ]

struct ALIGN(1) mbInitialWindow // #64
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
	rglSimpleButtonWidget *m_tutorialButtonWidget;                   // 00000098 | 4 
	rglSimpleButtonWidget *m_startGameButtonWidget;                  // 0000009C | 4 
	rglSimpleButtonWidget *m_multiplayerButtonWidget;                // 000000A0 | 4 
	rglSimpleButtonWidget *m_resumeGameButtonWidget;                 // 000000A4 | 4 
	rglSimpleButtonWidget *m_customBattleButtonWidget;               // 000000A8 | 4 
	rglSimpleButtonWidget *m_optionsButtonWidget;                    // 000000AC | 4 
	rglSimpleButtonWidget *m_creditsButtonWidget;                    // 000000B0 | 4 
	rglSimpleButtonWidget *m_quitButtonWidget;                       // 000000B4 | 4 
	rglWidget *m_versionLabelWidget;                                 // 000000B8 | 4 
	rglWidget *m_moduleVersionLabelWidget;                           // 000000BC | 4 
	rglWidget *m_gameLogoWidget;                                     // 000000C0 | 4 
	rglMenuBarWidget *m_menuBarWidget;                               // 000000C4 | 4 
	int m_firstfreeSavegame;                                         // 000000C8 | 4 
	rglSceneWidget *m_sceneWidget;                                   // 000000CC | 4 
	rglCamera m_camera;                                              // 000000D0 | 124 
	rglWidget *m_menuBackgroundWidget;                               // 000001F4 | 4 
	bool m_sceneLoaded;                                              // 000001F8 | 1 
	/* FIX-3 */ byte undef_2[7];                                     // 000001F9 | 7 
}; // $200 [ #144 #218 ]

struct ALIGN(1) mbMapWindow // #77
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglSceneWidget *m_sceneWidget;                                   // 0000005C | 4 
	rglBoardWidget *m_barBoardWidget;                                // 00000060 | 4 
	rglSimpleButtonWidget *m_reportsButtonWidget;                    // 00000064 | 4 
	rglSimpleButtonWidget *m_partyButtonWidget;                      // 00000068 | 4 
	rglSimpleButtonWidget *m_inventoryButtonWidget;                  // 0000006C | 4 
	rglSimpleButtonWidget *m_characterButtonWidget;                  // 00000070 | 4 
	rglSimpleButtonWidget *m_terrainButtonWidget;                    // 00000074 | 4 
	rglSimpleButtonWidget *m_campButtonWidget;                       // 00000078 | 4 
	rglSimpleButtonWidget *m_questsButtonWidget;                     // 0000007C | 4 
	rglWidget *m_pausedLabelWidget;                                  // 00000080 | 4 
	rglWidget *m_clickLabelWidget;                                   // 00000084 | 4 
	rglWidget *m_periodWidget;                                       // 00000088 | 4 
	rglWidget *m_dateWidget;                                         // 0000008C | 4 
	rglSimpleTextBoxWidget *m_consoleTextBoxWidget;                  // 00000090 | 4 
	rglWidget *m_consoleLabelWidget;                                 // 00000094 | 4 
	rglString m_consoleText;                                         // 00000098 | 40 
	rglString m_periodText;                                          // 000000D8 | 40 
	int m_hour;                                                      // 00000118 | 4 
	int m_windowWidth;                                               // 0000011C | 4 
	int m_windowHeight;                                              // 00000120 | 4 
	rglCamera m_camera;                                              // 00000124 | 124 
	rglVector4 m_cameraPosition;                                     // 00000248 | 10 
	rglVector4 m_cameraFollowVelocity;                               // 00000258 | 10 
	float m_cameraHorizontalRotation;                                // 00000268 | 4 
	float m_cameraVerticalRotation;                                  // 0000026C | 4 
	float m_cameraZoom;                                              // 00000270 | 4 
	rglVector2 m_cameraMovementSpeed;                                // 00000274 | 8 
	float m_cameraRotationSpeed;                                     // 0000027C | 4 
	float m_cameraZoomSpeed;                                         // 00000280 | 4 
	float m_selectionTooltipTime;                                    // 00000284 | 4 
	float m_contextMenuTime;                                         // 00000288 | 4 
	bool m_mouseMoved;                                               // 0000028C | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 0000028D | 3 
	int m_contextMenuMode;                                           // 00000290 | 4 
	int m_contextMenuObject;                                         // 00000294 | 4 
}; // $298 [ #345 #218 #368 #366 ]

struct ALIGN(1) mbMissionDebugWindow // #87
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	/* FIX-4 */ byte undef_1[4];                                     // 0000005C | 4 
	mbPresentationContainer m_presentationContainer;                 // 00000060 | 38 
	rglSceneWidget *m_sceneWidget;                                   // 00000098 | 4 
	rglWidget *m_pausedLabelWidget;                                  // 0000009C | 4 
	rglCamera m_camera;                                              // 000000A0 | 124 
	rglVector4 m_cameraPosition;                                     // 000001C4 | 10 
	rglVector4 m_cameraVelocity;                                     // 000001D4 | 10 
	rglEntity *m_selectedEntity;                                     // 000001E4 | 4 
	rglAppTimer m_infoUpdateTimer;                                   // 000001E8 | 10 
	int m_selectedAgentNo;                                           // 000001F8 | 4 
	float m_cameraFov;                                               // 000001FC | 4 
	float m_cameraHorizontalRotation;                                // 00000200 | 4 
	float m_cameraVerticalRotation;                                  // 00000204 | 4 
	float m_cameraHorizontalRotationChange;                          // 00000208 | 4 
	float m_cameraVerticalRotationChange;                            // 0000020C | 4 
	bool m_paused;                                                   // 00000210 | 1 
	/* FIX-3 */ byte undef_2[7];                                     // 00000211 | 7 
}; // $218 [ #144 #218 #368 #207 ]

struct ALIGN(1) mbTableau // #181
{
	rglScene m_scene;                                                // 00000000 | 36C 
	unsigned int m_overrideFlags;                                    // 0000036C | 4 
	int m_numItemOverrides;                                          // 00000370 | 4 
	int m_itemOverrides[10];                                         // 00000374 | 28 
	rglCamera m_camera;                                              // 0000039C | 124 
	unsigned int m_backgroundColor;                                  // 000004C0 | 4 
	rglColor m_ambientColor;                                         // 000004C4 | 10 
	bool m_forceCharacterShadowShader;                               // 000004D4 | 1 
	/* FIX-3 */ byte undef_0[3];                                     // 000004D5 | 3 
}; // $4D8 [ #319 #218 #224 ]

struct ALIGN(1) mbTacticalWindow // #184
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	rglPopupWidget *m_popupWidget;                                   // 00000058 | 4 
	rglVector_mbPresentationContainer_P_ m_presentationContainers;   // 0000005C | C 
	rglSceneWidget *m_sceneWidget;                                   // 00000068 | 4 
	rglSimpleTextBoxWidget *m_consoleTextBoxWidget;                  // 0000006C | 4 
	rglWidget *m_consoleLabelWidget;                                 // 00000070 | 4 
	rglWidget *m_notificationWidget;                                 // 00000074 | 4 
	rglWidget *m_notificationBackgroundWidget;                       // 00000078 | 4 
	int m_secondsToRoundStart;                                       // 0000007C | 4 
	rglWidget *m_spectatingWidget;                                   // 00000080 | 4 
	rglWidget *m_spectatingBackgroundWidget;                         // 00000084 | 4 
	int m_spectatedAgentNo;                                          // 00000088 | 4 
	rglProgressBarWidget *m_missionObjectUseProgressBarWidget;       // 0000008C | 4 
	rglProgressBarWidget *m_missionObjectHealthProgressBarWidget;    // 00000090 | 4 
	float m_crosshairTransparencies[3];                              // 00000094 | C 
	float m_attackArrowTransparencies[4];                            // 000000A0 | 10 
	rglWidget *m_ammoWidget;                                         // 000000B0 | 4 
	rglWidget *m_ammoBackgroundWidget;                               // 000000B4 | 4 
	rglContainerWidget *m_uiContainerWidget;                         // 000000B8 | 4 
	rglContainerWidget *m_presentationContainerWidget;               // 000000BC | 4 
	rglContainerWidget *m_statusContainerWidget;                     // 000000C0 | 4 
	rglWidget *m_playerStatusWidget;                                 // 000000C4 | 4 
	rglWidget *m_horseStatusWidget;                                  // 000000C8 | 4 
	rglWidget *m_shieldStatusWidget;                                 // 000000CC | 4 
	rglWidget *m_ammoStatusWidget;                                   // 000000D0 | 4 
	rglWidget *m_playerHealthWidget;                                 // 000000D4 | 4 
	rglWidget *m_horseHealthWidget;                                  // 000000D8 | 4 
	rglWidget *m_emptyPlayerHealthWidget;                            // 000000DC | 4 
	rglWidget *m_emptyHorseHealthWidget;                             // 000000E0 | 4 
	rglMesh *m_itemShadowMesh;                                       // 000000E4 | 4 
	rglWidget *m_itemReadyStatusWidget;                              // 000000E8 | 4 
	rglMesh *m_itemReadyStatusMesh;                                  // 000000EC | 4 
	rglWidget *m_goldWidget;                                         // 000000F0 | 4 
	rglWidget *m_goldBackgroundWidget;                               // 000000F4 | 4 
	rglWidget *m_goldImageWidget;                                    // 000000F8 | 4 
	int m_gold;                                                      // 000000FC | 4 
	rglMesh *m_playerHealthBarMesh;                                  // 00000100 | 4 
	rglMesh *m_horseHealthBarMesh;                                   // 00000104 | 4 
	rglMesh *m_healthBarTemplateMesh;                                // 00000108 | 4 
	rglContainerWidget *m_ordersContainerWidget;                     // 0000010C | 4 
	rglWidget *m_orderLabelWidgets[8];                               // 00000110 | 20 
	float m_hitPoints;                                               // 00000130 | 4 
	float m_horseHitPoints;                                          // 00000134 | 4 
	int m_remainingAmmo;                                             // 00000138 | 4 
	mbItem m_item;                                                   // 0000013C | 8 
	int m_shieldHitPoints;                                           // 00000144 | 4 
	int m_shieldStatus;                                              // 00000148 | 4 
	rglCamera m_camera;                                              // 0000014C | 124 
	rglVector4 m_cameraPosition;                                     // 00000270 | 10 
	rglVector4 m_cameraHeadPosition;                                 // 00000280 | 10 
	rglTransform m_cameraTransform;                                  // 00000290 | 40 
	float m_cameraHorizontalRotation;                                // 000002D0 | 4 
	float m_cameraVerticalRotation;                                  // 000002D4 | 4 
	float m_cameraHorizontalRotationChange;                          // 000002D8 | 4 
	float m_cameraVerticalRotationChange;                            // 000002DC | 4 
	float m_cameraStoredHorizontalRotation;                          // 000002E0 | 4 
	float m_cameraStoredVerticalRotation;                            // 000002E4 | 4 
	bool m_vanityCamera;                                             // 000002E8 | 1 
	/* FIX-4 */ byte undef_1[3];                                     // 000002E9 | 3 
	float m_cameraDistance;                                          // 000002EC | 4 
	float m_cameraHeight;                                            // 000002F0 | 4 
	float m_cameraFov;                                               // 000002F4 | 4 
	float m_cameraZoom;                                              // 000002F8 | 4 
	int m_cameraGhostMode;                                           // 000002FC | 4 
	int m_cameraAgentNo;                                             // 00000300 | 4 
	int m_cameraPrevAgentNo;                                         // 00000304 | 4 
	int m_cameraGhostModeAgentNo;                                    // 00000308 | 4 
	/* FIX-4 */ byte undef_2[4];                                     // 0000030C | 4 
	rglAppTimer m_useTimer;                                          // 00000310 | 10 
	int m_useObjectType;                                             // 00000320 | 4 
	int m_useObjectNo;                                               // 00000324 | 4 
	int m_useObjectInRange;                                          // 00000328 | 4 
	int m_leaveAreaQuestionResult;                                   // 0000032C | 4 
	float m_cameraObstructionDistance;                               // 00000330 | 4 
	bool m_editModeTerrainChanged;                                   // 00000334 | 1 
	bool m_updatePlayerMaxHitPoints;                                 // 00000335 | 1 
	/* FIX-4 */ byte undef_3[2];                                     // 00000336 | 2 
	int m_playerMaxHitPoints;                                        // 00000338 | 4 
	bool m_editModeSelectionChanged;                                 // 0000033C | 1 
	/* FIX-4 */ byte undef_4[3];                                     // 0000033D | 3 
	rglVector4 m_cameraVelocity;                                     // 00000340 | 10 
	rglString m_consoleText;                                         // 00000350 | 40 
	rglAppTimer m_orderTimer;                                        // 00000390 | 10 
	bool m_orderFlagMoving;                                          // 000003A0 | 1 
	/* FIX-4 */ byte undef_5[3];                                     // 000003A1 | 3 
	rglEntity *m_orderFlagEntity;                                    // 000003A4 | 4 
	int m_orderType;                                                 // 000003A8 | 4 
	int m_orderSubtype;                                              // 000003AC | 4 
	bool m_updateOrders;                                             // 000003B0 | 1 
	/* FIX-4 */ byte undef_6[7];                                     // 000003B1 | 7 
	rglAppTimer m_orderMenuTimer;                                    // 000003B8 | 10 
	rglAppTimer m_moveForwardTimer;                                  // 000003C8 | 10 
	rglAppTimer m_prevMoveForwardTimer;                              // 000003D8 | 10 
}; // $3E8 [ #67 #218 #368 #365 #207 #345 ]

struct ALIGN(1) mbTerrainGenWindow // #188
{
	/* FIX-1 */ byte undef_0[88];                                    // 00000000 | 58 
	int m_placeRiver;                                                // 00000058 | 4 
	int m_deepWater;                                                 // 0000005C | 4 
	int m_disableGrass;                                              // 00000060 | 4 
	rglVector2 m_size;                                               // 00000064 | 8 
	float m_hillHeight;                                              // 0000006C | 4 
	float m_valley;                                                  // 00000070 | 4 
	float m_vegetation;                                              // 00000074 | 4 
	int m_ruggedness;                                                // 00000078 | 4 
	int m_seeds[3];                                                  // 0000007C | C 
	int m_regionType;                                                // 00000088 | 4 
	int m_regionDetail;                                              // 0000008C | 4 
	rglString m_outerTerrainMeshName;                                // 00000090 | 40 
	rglPopupWidget *m_popupWidget;                                   // 000000D0 | 4 
	rglSceneWidget *m_sceneWidget;                                   // 000000D4 | 4 
	rglCamera m_camera;                                              // 000000D8 | 124 
	rglVector4 m_cameraPosition;                                     // 000001FC | 10 
	float m_horizontalRotation;                                      // 0000020C | 4 
	float m_verticalRotation;                                        // 00000210 | 4 
	float m_zoom;                                                    // 00000214 | 4 
	rglScene *m_scene;                                               // 00000218 | 4 
	rglBoardWidget *m_boardWidget;                                   // 0000021C | 4 
	rglWidget *m_terrainCodeWidget;                                  // 00000220 | 4 
	rglSimpleButtonWidget *m_copyButtonWidget;                       // 00000224 | 4 
	rglSimpleButtonWidget *m_pasteButtonWidget;                      // 00000228 | 4 
	rglSliderWidget *m_sliderWidgets[6];                             // 0000022C | 18 
	rglTextBoxWidget *m_seedTextBoxWidgets[3];                       // 00000244 | C 
	rglTextBoxWidget *m_outerTerrainTextBoxWidget;                   // 00000250 | 4 
	rglSimpleButtonWidget *m_outerTerrainButtonWidget;               // 00000254 | 4 
	rglSimpleButtonWidget *m_randomizeSeedButtonWidgets[3];          // 00000258 | C 
	rglSimpleButtonWidget *m_disableGrassButtonWidget;               // 00000264 | 4 
	rglSimpleButtonWidget *m_placeRiverButtonWidget;                 // 00000268 | 4 
	rglSimpleButtonWidget *m_deepWaterButtonWidget;                  // 0000026C | 4 
	rglComboButtonWidget *m_regionTypeComboButtonWidget;             // 00000270 | 4 
	rglComboButtonWidget *m_regionDetailComboButtonWidget;           // 00000274 | 4 
	rglSimpleButtonWidget *m_generateButtonWidget;                   // 00000278 | 4 
	rglSimpleButtonWidget *m_closeButtonWidget;                      // 0000027C | 4 
}; // $280 [ #366 #345 #218 #368 ]

/* Related code */
#include "mb_defs.c"
