
#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function ATExt.ATCharacterCpl030.OnChangeAction
// (Final, Native, Private)
// Parameters:
// class AAT_Character*           InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InActionIdPrev                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            InActionIdNext                 (Parm, ZeroConstructor, IsPlainOldData)

void AATCharacterCpl030::OnChangeAction(class AAT_Character* InCharacter, int InActionIdPrev, int InActionIdNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCharacterCpl030.OnChangeAction");

	AATCharacterCpl030_OnChangeAction_Params params;
	params.InCharacter = InCharacter;
	params.InActionIdPrev = InActionIdPrev;
	params.InActionIdNext = InActionIdNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATCharacterCpl040.OnChangeAction
// (Final, Native, Private)
// Parameters:
// class AAT_Character*           InCharacter                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            InActionIdPrev                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            InActionIdNext                 (Parm, ZeroConstructor, IsPlainOldData)

void AATCharacterCpl040::OnChangeAction(class AAT_Character* InCharacter, int InActionIdPrev, int InActionIdNext)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCharacterCpl040.OnChangeAction");

	AATCharacterCpl040_OnChangeAction_Params params;
	params.InCharacter = InCharacter;
	params.InActionIdPrev = InActionIdPrev;
	params.InActionIdNext = InActionIdNext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATCommunityManager.OnSaveData
// (Final, Native, Public)

void UATCommunityManager::OnSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCommunityManager.OnSaveData");

	UATCommunityManager_OnSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATCommunityManager.OnLoadData
// (Final, Native, Public)
// Parameters:
// bool                           bIsSuccess                     (Parm, ZeroConstructor, IsPlainOldData)

void UATCommunityManager::OnLoadData(bool bIsSuccess)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCommunityManager.OnLoadData");

	UATCommunityManager_OnLoadData_Params params;
	params.bIsSuccess = bIsSuccess;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATCommunityManager.OnAutoSaveData
// (Final, Native, Public)

void UATCommunityManager::OnAutoSaveData()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCommunityManager.OnAutoSaveData");

	UATCommunityManager_OnAutoSaveData_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATCommunityManager.CTExec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InTestCase                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   testId                         (Parm, ZeroConstructor, IsPlainOldData)

void UATCommunityManager::CTExec(int InTestCase, const struct FName& testId)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATCommunityManager.CTExec");

	UATCommunityManager_CTExec_Params params;
	params.InTestCase = InTestCase;
	params.testId = testId;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATTalkAnimLoader.CompleteLoad
// (Final, Native, Private)
// Parameters:
// class UATDataAssetTalkAnimAsyncLoad* loader                         (Parm, ZeroConstructor, IsPlainOldData)

void UATTalkAnimLoader::CompleteLoad(class UATDataAssetTalkAnimAsyncLoad* loader)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATTalkAnimLoader.CompleteLoad");

	UATTalkAnimLoader_CompleteLoad_Params params;
	params.loader = loader;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming
// (Final, Native, Private)
// Parameters:
// EDEMO_TYPE                     DemoType                       (Parm, ZeroConstructor, IsPlainOldData)
// EDEMO_TIMING_TYPE              DemoTiming                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   DemoName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           continueFlag                   (Parm, ZeroConstructor, IsPlainOldData)

void UATGeneralBattleDirectionPhase::OnDemoTiming(EDEMO_TYPE DemoType, EDEMO_TIMING_TYPE DemoTiming, const struct FName& DemoName, bool continueFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleDirectionPhase.OnDemoTiming");

	UATGeneralBattleDirectionPhase_OnDemoTiming_Params params;
	params.DemoType = DemoType;
	params.DemoTiming = DemoTiming;
	params.DemoName = DemoName;
	params.continueFlag = continueFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning
// (Final, Native, Private)

void UATGeneralBattleSettlePhase::OnEndWarning()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndWarning");

	UATGeneralBattleSettlePhase_OnEndWarning_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndResult
// (Final, Native, Private)

void UATGeneralBattleSettlePhase::OnEndResult()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndResult");

	UATGeneralBattleSettlePhase_OnEndResult_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD
// (Final, Native, Private)

void UATGeneralBattleSettlePhase::OnEndBattleHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATGeneralBattleSettlePhase.OnEndBattleHUD");

	UATGeneralBattleSettlePhase_OnEndBattleHUD_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATLake.Update
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UPostProcessComponent*   PostProcessComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    LakeMesh                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    UnderLakeMesh                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AATLake::Update(class UPostProcessComponent* PostProcessComponent, class UStaticMeshComponent* LakeMesh, class UStaticMeshComponent* UnderLakeMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATLake.Update");

	AATLake_Update_Params params;
	params.PostProcessComponent = PostProcessComponent;
	params.LakeMesh = LakeMesh;
	params.UnderLakeMesh = UnderLakeMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATLake.Init
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UPostProcessComponent*   PostProcessComponent           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    LakeMesh                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UStaticMeshComponent*    UnderLakeMesh                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void AATLake::Init(class UPostProcessComponent* PostProcessComponent, class UStaticMeshComponent* LakeMesh, class UStaticMeshComponent* UnderLakeMesh)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATLake.Init");

	AATLake_Init_Params params;
	params.PostProcessComponent = PostProcessComponent;
	params.LakeMesh = LakeMesh;
	params.UnderLakeMesh = UnderLakeMesh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleBegin.OnBattleBegin
// (Native, Protected)

void UATSceneBattleBegin::OnBattleBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleBegin.OnBattleBegin");

	UATSceneBattleBegin_OnBattleBegin_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleEnd.OnEndFinishUI
// (Native, Protected)

void UATSceneBattleEnd::OnEndFinishUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleEnd.OnEndFinishUI");

	UATSceneBattleEnd_OnEndFinishUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleGameOverMenu.OnEndGameOverUI
// (Native, Protected)
// Parameters:
// EGameoverSelectType            SelectType                     (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneBattleGameOverMenu::OnEndGameOverUI(EGameoverSelectType SelectType)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleGameOverMenu.OnEndGameOverUI");

	UATSceneBattleGameOverMenu_OnEndGameOverUI_Params params;
	params.SelectType = SelectType;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleMain.OnBattleGameOverStart
// (Native, Protected)

void UATSceneBattleMain::OnBattleGameOverStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleMain.OnBattleGameOverStart");

	UATSceneBattleMain_OnBattleGameOverStart_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneBattleMain.OnBattleEnd
// (Native, Protected)

void UATSceneBattleMain::OnBattleEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneBattleMain.OnBattleEnd");

	UATSceneBattleMain_OnBattleEnd_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneDemoBase.OnDemoTiming
// (Final, Native, Private)
// Parameters:
// EDEMO_TYPE                     Type                           (Parm, ZeroConstructor, IsPlainOldData)
// EDEMO_TIMING_TYPE              Timing                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bContinueFlag                  (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneDemoBase::OnDemoTiming(EDEMO_TYPE Type, EDEMO_TIMING_TYPE Timing, const struct FName& Name, bool bContinueFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneDemoBase.OnDemoTiming");

	UATSceneDemoBase_OnDemoTiming_Params params;
	params.Type = Type;
	params.Timing = Timing;
	params.Name = Name;
	params.bContinueFlag = bContinueFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneFree.OnQuestPhaseBegin
// (Native, Protected)
// Parameters:
// EQUEST_PHASE_TYPE              Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetID                       (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneFree::OnQuestPhaseBegin(EQUEST_PHASE_TYPE Type, const struct FName& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneFree.OnQuestPhaseBegin");

	UATSceneFree_OnQuestPhaseBegin_Params params;
	params.Type = Type;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneFree.OnQuestEventBegin
// (Native, Protected)
// Parameters:
// EQUEST_PHASE_TYPE              Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetID                       (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneFree::OnQuestEventBegin(EQUEST_PHASE_TYPE Type, const struct FName& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneFree.OnQuestEventBegin");

	UATSceneFree_OnQuestEventBegin_Params params;
	params.Type = Type;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneFree.OnDemoTiming
// (Native, Protected)
// Parameters:
// EDEMO_TYPE                     Type                           (Parm, ZeroConstructor, IsPlainOldData)
// EDEMO_TIMING_TYPE              Timing                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bContinueFlag                  (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneFree::OnDemoTiming(EDEMO_TYPE Type, EDEMO_TIMING_TYPE Timing, const struct FName& Name, bool bContinueFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneFree.OnDemoTiming");

	UATSceneFree_OnDemoTiming_Params params;
	params.Type = Type;
	params.Timing = Timing;
	params.Name = Name;
	params.bContinueFlag = bContinueFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneFreeLoadBase.OnQuestEventBegin
// (Native, Protected)
// Parameters:
// EQUEST_PHASE_TYPE              Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetID                       (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneFreeLoadBase::OnQuestEventBegin(EQUEST_PHASE_TYPE Type, const struct FName& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneFreeLoadBase.OnQuestEventBegin");

	UATSceneFreeLoadBase_OnQuestEventBegin_Params params;
	params.Type = Type;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneEvent.OnQuestPhaseBegin
// (Native, Protected)
// Parameters:
// EQUEST_PHASE_TYPE              Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetID                       (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneEvent::OnQuestPhaseBegin(EQUEST_PHASE_TYPE Type, const struct FName& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneEvent.OnQuestPhaseBegin");

	UATSceneEvent_OnQuestPhaseBegin_Params params;
	params.Type = Type;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneEvent.OnQuestEventEnd
// (Native, Protected)
// Parameters:
// EQUEST_PHASE_TYPE              Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetID                       (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneEvent::OnQuestEventEnd(EQUEST_PHASE_TYPE Type, const struct FName& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneEvent.OnQuestEventEnd");

	UATSceneEvent_OnQuestEventEnd_Params params;
	params.Type = Type;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneEvent.OnDemoTiming
// (Native, Protected)
// Parameters:
// EDEMO_TYPE                     Type                           (Parm, ZeroConstructor, IsPlainOldData)
// EDEMO_TIMING_TYPE              Timing                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bContinueFlag                  (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneEvent::OnDemoTiming(EDEMO_TYPE Type, EDEMO_TIMING_TYPE Timing, const struct FName& Name, bool bContinueFlag)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneEvent.OnDemoTiming");

	UATSceneEvent_OnDemoTiming_Params params;
	params.Type = Type;
	params.Timing = Timing;
	params.Name = Name;
	params.bContinueFlag = bContinueFlag;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneGeneralTalk.OnQuestPhaseEnd
// (Native, Protected)
// Parameters:
// EQUEST_PHASE_TYPE              Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   TargetID                       (Parm, ZeroConstructor, IsPlainOldData)

void UATSceneGeneralTalk::OnQuestPhaseEnd(EQUEST_PHASE_TYPE Type, const struct FName& TargetID)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneGeneralTalk.OnQuestPhaseEnd");

	UATSceneGeneralTalk_OnQuestPhaseEnd_Params params;
	params.Type = Type;
	params.TargetID = TargetID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ATSceneTrialClear.OnEndFinishUI
// (Native, Protected)

void UATSceneTrialClear::OnEndFinishUI()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ATSceneTrialClear.OnEndFinishUI");

	UATSceneTrialClear_OnEndFinishUI_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ViewActorCookDemo.FinishCameraAnim
// (Final, Native, Public, BlueprintCallable)

void AViewActorCookDemo::FinishCameraAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ViewActorCookDemo.FinishCameraAnim");

	AViewActorCookDemo_FinishCameraAnim_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ViewActorCookDemo.ChangeCameraAnim
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCameraAnim*             CameraAnim                     (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bLoop                          (Parm, ZeroConstructor, IsPlainOldData)

void AViewActorCookDemo::ChangeCameraAnim(class UCameraAnim* CameraAnim, bool bLoop)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ViewActorCookDemo.ChangeCameraAnim");

	AViewActorCookDemo_ChangeCameraAnim_Params params;
	params.CameraAnim = CameraAnim;
	params.bLoop = bLoop;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ATExt.ViewActorDirection.CalcCameraFlip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAT_CharacterBase*       pDirecter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AViewActorDirection::CalcCameraFlip(class AAT_CharacterBase* pDirecter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ViewActorDirection.CalcCameraFlip");

	AViewActorDirection_CalcCameraFlip_Params params;
	params.pDirecter = pDirecter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ATExt.ViewActorHuntingDino.CalcCameraFlip
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AAT_CharacterBase*       pDirecter                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AViewActorHuntingDino::CalcCameraFlip(class AAT_CharacterBase* pDirecter)
{
	static auto fn = UObject::FindObject<UFunction>("Function ATExt.ViewActorHuntingDino.CalcCameraFlip");

	AViewActorHuntingDino_CalcCameraFlip_Params params;
	params.pDirecter = pDirecter;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
