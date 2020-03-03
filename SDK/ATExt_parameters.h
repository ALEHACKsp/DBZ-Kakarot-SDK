#pragma once

#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function ATExt.ATCharacterCpl030.OnChangeAction
struct AATCharacterCpl030_OnChangeAction_Params
{
	class AAT_Character*                               InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InActionIdPrev;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InActionIdNext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATCharacterCpl040.OnChangeAction
struct AATCharacterCpl040_OnChangeAction_Params
{
	class AAT_Character*                               InCharacter;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InActionIdPrev;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InActionIdNext;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATCommunityManager.OnSaveData
struct UATCommunityManager_OnSaveData_Params
{
};

// Function ATExt.ATCommunityManager.OnLoadData
struct UATCommunityManager_OnLoadData_Params
{
	bool                                               bIsSuccess;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATCommunityManager.OnAutoSaveData
struct UATCommunityManager_OnAutoSaveData_Params
{
};

// Function ATExt.ATCommunityManager.CTExec
struct UATCommunityManager_CTExec_Params
{
	int                                                InTestCase;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       testId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATTalkAnimLoader.CompleteLoad
struct UATTalkAnimLoader_CompleteLoad_Params
{
	class UATDataAssetTalkAnimAsyncLoad*               loader;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming
struct UATGeneralBattleDirectionPhase_OnDemoTiming_Params
{
	EDEMO_TYPE                                         DemoType;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	EDEMO_TIMING_TYPE                                  DemoTiming;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       DemoName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               continueFlag;                                             // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning
struct UATGeneralBattleSettlePhase_OnEndWarning_Params
{
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndResult
struct UATGeneralBattleSettlePhase_OnEndResult_Params
{
};

// Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD
struct UATGeneralBattleSettlePhase_OnEndBattleHUD_Params
{
};

// Function ATExt.ATLake.Update
struct AATLake_Update_Params
{
	class UPostProcessComponent*                       PostProcessComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LakeMesh;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        UnderLakeMesh;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ATExt.ATLake.Init
struct AATLake_Init_Params
{
	class UPostProcessComponent*                       PostProcessComponent;                                     // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        LakeMesh;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        UnderLakeMesh;                                            // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function ATExt.ATSceneBattleBegin.OnBattleBegin
struct UATSceneBattleBegin_OnBattleBegin_Params
{
};

// Function ATExt.ATSceneBattleEnd.OnEndFinishUI
struct UATSceneBattleEnd_OnEndFinishUI_Params
{
};

// Function ATExt.ATSceneBattleGameOverMenu.OnEndGameOverUI
struct UATSceneBattleGameOverMenu_OnEndGameOverUI_Params
{
	EGameoverSelectType                                SelectType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneBattleMain.OnBattleGameOverStart
struct UATSceneBattleMain_OnBattleGameOverStart_Params
{
};

// Function ATExt.ATSceneBattleMain.OnBattleEnd
struct UATSceneBattleMain_OnBattleEnd_Params
{
};

// Function ATExt.ATSceneDemoBase.OnDemoTiming
struct UATSceneDemoBase_OnDemoTiming_Params
{
	EDEMO_TYPE                                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EDEMO_TIMING_TYPE                                  Timing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bContinueFlag;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneFree.OnQuestPhaseBegin
struct UATSceneFree_OnQuestPhaseBegin_Params
{
	EQUEST_PHASE_TYPE                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneFree.OnQuestEventBegin
struct UATSceneFree_OnQuestEventBegin_Params
{
	EQUEST_PHASE_TYPE                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneFree.OnDemoTiming
struct UATSceneFree_OnDemoTiming_Params
{
	EDEMO_TYPE                                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EDEMO_TIMING_TYPE                                  Timing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bContinueFlag;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneFreeLoadBase.OnQuestEventBegin
struct UATSceneFreeLoadBase_OnQuestEventBegin_Params
{
	EQUEST_PHASE_TYPE                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneEvent.OnQuestPhaseBegin
struct UATSceneEvent_OnQuestPhaseBegin_Params
{
	EQUEST_PHASE_TYPE                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneEvent.OnQuestEventEnd
struct UATSceneEvent_OnQuestEventEnd_Params
{
	EQUEST_PHASE_TYPE                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneEvent.OnDemoTiming
struct UATSceneEvent_OnDemoTiming_Params
{
	EDEMO_TYPE                                         Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	EDEMO_TIMING_TYPE                                  Timing;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       Name;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bContinueFlag;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneGeneralTalk.OnQuestPhaseEnd
struct UATSceneGeneralTalk_OnQuestPhaseEnd_Params
{
	EQUEST_PHASE_TYPE                                  Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ATSceneTrialClear.OnEndFinishUI
struct UATSceneTrialClear_OnEndFinishUI_Params
{
};

// Function ATExt.ViewActorCookDemo.FinishCameraAnim
struct AViewActorCookDemo_FinishCameraAnim_Params
{
};

// Function ATExt.ViewActorCookDemo.ChangeCameraAnim
struct AViewActorCookDemo_ChangeCameraAnim_Params
{
	class UCameraAnim*                                 CameraAnim;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ATExt.ViewActorDirection.CalcCameraFlip
struct AViewActorDirection_CalcCameraFlip_Params
{
	class AAT_CharacterBase*                           pDirecter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function ATExt.ViewActorHuntingDino.CalcCameraFlip
struct AViewActorHuntingDino_CalcCameraFlip_Params
{
	class AAT_CharacterBase*                           pDirecter;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
