
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

// Function CFramework.CFGameInstance.OnViewportCreated
// (Final, Native, Private)

void UCFGameInstance::OnViewportCreated()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFGameInstance.OnViewportCreated");

	UCFGameInstance_OnViewportCreated_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFGameInstance.GetSceneManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCFSceneManager*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UCFSceneManager* UCFGameInstance::GetSceneManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFGameInstance.GetSceneManager");

	UCFGameInstance_GetSceneManager_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFLevelManager.OnCreateGameState
// (Final, Native, Protected)
// Parameters:
// class ACFGameState*            InGameState                    (Parm, ZeroConstructor, IsPlainOldData)

void ACFLevelManager::OnCreateGameState(class ACFGameState* InGameState)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFLevelManager.OnCreateGameState");

	ACFLevelManager_OnCreateGameState_Params params;
	params.InGameState = InGameState;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuHandler.SaveSetting
// (Final, Native, Public)

void UCFDebugMenuHandler::SaveSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuHandler.SaveSetting");

	UCFDebugMenuHandler_SaveSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuHandler.OnSetLoadSetting
// (Final, Native, Public)
// Parameters:
// bool                           bLoad                          (Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuHandler::OnSetLoadSetting(bool bLoad)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuHandler.OnSetLoadSetting");

	UCFDebugMenuHandler_OnSetLoadSetting_Params params;
	params.bLoad = bLoad;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuHandler.OnReleasedRightStick
// (Final, Native, Private)

void UCFDebugMenuHandler::OnReleasedRightStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuHandler.OnReleasedRightStick");

	UCFDebugMenuHandler_OnReleasedRightStick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuHandler.OnReleasedLeftStick
// (Final, Native, Private)

void UCFDebugMenuHandler::OnReleasedLeftStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuHandler.OnReleasedLeftStick");

	UCFDebugMenuHandler_OnReleasedLeftStick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuHandler.OnPressedRightStick
// (Final, Native, Private)

void UCFDebugMenuHandler::OnPressedRightStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuHandler.OnPressedRightStick");

	UCFDebugMenuHandler_OnPressedRightStick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuHandler.OnPressedLeftStick
// (Final, Native, Private)

void UCFDebugMenuHandler::OnPressedLeftStick()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuHandler.OnPressedLeftStick");

	UCFDebugMenuHandler_OnPressedLeftStick_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuHandler.IsLoadSetting
// (Final, Native, Public)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECheckBoxState UCFDebugMenuHandler::IsLoadSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuHandler.IsLoadSetting");

	UCFDebugMenuHandler_IsLoadSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuHandler.ClearSetting
// (Final, Native, Public)

void UCFDebugMenuHandler::ClearSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuHandler.ClearSetting");

	UCFDebugMenuHandler_ClearSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuEventHandlerBool.Set
// (Final, Native, Public)
// Parameters:
// bool                           bChecked                       (Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuEventHandlerBool::Set(bool bChecked)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerBool.Set");

	UCFDebugMenuEventHandlerBool_Set_Params params;
	params.bChecked = bChecked;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuEventHandlerBool.Get
// (Final, Native, Public)
// Parameters:
// ECheckBoxState                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

ECheckBoxState UCFDebugMenuEventHandlerBool::Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerBool.Get");

	UCFDebugMenuEventHandlerBool_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuEventHandlerTrigger.Exec
// (Final, Native, Public)

void UCFDebugMenuEventHandlerTrigger::Exec()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerTrigger.Exec");

	UCFDebugMenuEventHandlerTrigger_Exec_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnReleased
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnReleased()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnReleased");

	UCFHUDDebugNodeSelectorComponent_OnReleased_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedUp
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedUp");

	UCFHUDDebugNodeSelectorComponent_OnPressedUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedRight
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedRight");

	UCFHUDDebugNodeSelectorComponent_OnPressedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_C
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedOption_C()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_C");

	UCFHUDDebugNodeSelectorComponent_OnPressedOption_C_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_B
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedOption_B()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_B");

	UCFHUDDebugNodeSelectorComponent_OnPressedOption_B_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_A
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedOption_A()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedOption_A");

	UCFHUDDebugNodeSelectorComponent_OnPressedOption_A_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedLeft
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedLeft");

	UCFHUDDebugNodeSelectorComponent_OnPressedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedEnter
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedEnter");

	UCFHUDDebugNodeSelectorComponent_OnPressedEnter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedDown
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedDown");

	UCFHUDDebugNodeSelectorComponent_OnPressedDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedBack
// (Final, Native, Protected)

void UCFHUDDebugNodeSelectorComponent::OnPressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFHUDDebugNodeSelectorComponent.OnPressedBack");

	UCFHUDDebugNodeSelectorComponent_OnPressedBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFAsyncLoader.OnLoaded
// (Final, Native, Private)

void UCFAsyncLoader::OnLoaded()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFAsyncLoader.OnLoaded");

	UCFAsyncLoader_OnLoaded_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnReleasedRight
// (Final, Native, Private)

void UCFDebugMenu::OnReleasedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnReleasedRight");

	UCFDebugMenu_OnReleasedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnReleasedLeft
// (Final, Native, Private)

void UCFDebugMenu::OnReleasedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnReleasedLeft");

	UCFDebugMenu_OnReleasedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnPressedUp
// (Final, Native, Private)

void UCFDebugMenu::OnPressedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnPressedUp");

	UCFDebugMenu_OnPressedUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnPressedSelect
// (Final, Native, Private)

void UCFDebugMenu::OnPressedSelect()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnPressedSelect");

	UCFDebugMenu_OnPressedSelect_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnPressedRight
// (Final, Native, Private)

void UCFDebugMenu::OnPressedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnPressedRight");

	UCFDebugMenu_OnPressedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnPressedLeft
// (Final, Native, Private)

void UCFDebugMenu::OnPressedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnPressedLeft");

	UCFDebugMenu_OnPressedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnPressedDown
// (Final, Native, Private)

void UCFDebugMenu::OnPressedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnPressedDown");

	UCFDebugMenu_OnPressedDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnPressedCancel
// (Final, Native, Private)

void UCFDebugMenu::OnPressedCancel()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnPressedCancel");

	UCFDebugMenu_OnPressedCancel_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.OnKeyDownEnter
// (Final, Native, Private)

void UCFDebugMenu::OnKeyDownEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.OnKeyDownEnter");

	UCFDebugMenu_OnKeyDownEnter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenu.GetHorizontalBox
// (Event, Public, BlueprintEvent)
// Parameters:
// class UHorizontalBox*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UHorizontalBox* UCFDebugMenu::GetHorizontalBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.GetHorizontalBox");

	UCFDebugMenu_GetHorizontalBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenu.GetContentsArea
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UOverlay*                ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UOverlay* UCFDebugMenu::GetContentsArea()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenu.GetContentsArea");

	UCFDebugMenu_GetContentsArea_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContent.OnPushedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UCFDebugMenuContent*     to                             (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCFDebugMenuContent::OnPushedBP(class UCFDebugMenuContent* to)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.OnPushedBP");

	UCFDebugMenuContent_OnPushedBP_Params params;
	params.to = to;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContent.OnPoppedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UCFDebugMenuContent*     from                           (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCFDebugMenuContent::OnPoppedBP(class UCFDebugMenuContent* from)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.OnPoppedBP");

	UCFDebugMenuContent_OnPoppedBP_Params params;
	params.from = from;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContent.OnDeactivatedBP
// (Event, Protected, BlueprintEvent)

void UCFDebugMenuContent::OnDeactivatedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.OnDeactivatedBP");

	UCFDebugMenuContent_OnDeactivatedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContent.OnContentSelectedBP
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                           byKeyboard                     (Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuContent::OnContentSelectedBP(bool byKeyboard)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.OnContentSelectedBP");

	UCFDebugMenuContent_OnContentSelectedBP_Params params;
	params.byKeyboard = byKeyboard;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContent.OnContentCanceledBP
// (Event, Protected, BlueprintEvent)

void UCFDebugMenuContent::OnContentCanceledBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.OnContentCanceledBP");

	UCFDebugMenuContent_OnContentCanceledBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContent.OnActivatedBP
// (Event, Protected, BlueprintEvent)

void UCFDebugMenuContent::OnActivatedBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.OnActivatedBP");

	UCFDebugMenuContent_OnActivatedBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContent.IsSelectedByKeyboard
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCFDebugMenuContent::IsSelectedByKeyboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.IsSelectedByKeyboard");

	UCFDebugMenuContent_IsSelectedByKeyboard_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContent.IsSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCFDebugMenuContent::IsSelected()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.IsSelected");

	UCFDebugMenuContent_IsSelected_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContent.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCFDebugMenuContent::IsActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.IsActive");

	UCFDebugMenuContent_IsActive_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContent.GetTextColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UCFDebugMenuContent::GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.GetTextColor");

	UCFDebugMenuContent_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContent.GetTextBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// class UTextBlock*              ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UTextBlock* UCFDebugMenuContent::GetTextBlock()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.GetTextBlock");

	UCFDebugMenuContent_GetTextBlock_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContent.GetContentColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UCFDebugMenuContent::GetContentColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContent.GetContentColor");

	UCFDebugMenuContent_GetContentColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuList.GetVerticalBox
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVerticalBox*            ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UVerticalBox* UCFDebugMenuList::GetVerticalBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuList.GetVerticalBox");

	UCFDebugMenuList_GetVerticalBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuList.GetTextColor
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UCFDebugMenuList::GetTextColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuList.GetTextColor");

	UCFDebugMenuList_GetTextColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuList.GetBackColor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateColor             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FSlateColor UCFDebugMenuList::GetBackColor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuList.GetBackColor");

	UCFDebugMenuList_GetBackColor_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContentFolder.GetMenuContent
// (Final, Native, Private)
// Parameters:
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UCFDebugMenuContentFolder::GetMenuContent()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentFolder.GetMenuContent");

	UCFDebugMenuContentFolder_GetMenuContent_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContentFolder.GetMenuAnchor
// (Event, Public, BlueprintEvent)
// Parameters:
// class UMenuAnchor*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UMenuAnchor* UCFDebugMenuContentFolder::GetMenuAnchor()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentFolder.GetMenuAnchor");

	UCFDebugMenuContentFolder_GetMenuAnchor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContentNumeric.OnValueCommitted
// (Final, Native, Private)
// Parameters:
// float                          InValue                        (Parm, ZeroConstructor, IsPlainOldData)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuContentNumeric::OnValueCommitted(float InValue, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentNumeric.OnValueCommitted");

	UCFDebugMenuContentNumeric_OnValueCommitted_Params params;
	params.InValue = InValue;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContentNumeric.GetSpinBox
// (Event, Public, BlueprintEvent)
// Parameters:
// class USpinBox*                ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USpinBox* UCFDebugMenuContentNumeric::GetSpinBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentNumeric.GetSpinBox");

	UCFDebugMenuContentNumeric_GetSpinBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContentCheck.GetCheckBox
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UCheckBox*               ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCheckBox* UCFDebugMenuContentCheck::GetCheckBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentCheck.GetCheckBox");

	UCFDebugMenuContentCheck_GetCheckBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContentCombo.GetComboBox
// (Event, Public, BlueprintEvent)
// Parameters:
// class UComboBoxString*         ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UComboBoxString* UCFDebugMenuContentCombo::GetComboBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentCombo.GetComboBox");

	UCFDebugMenuContentCombo_GetComboBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContentText.OnTextCommitted
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuContentText::OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentText.OnTextCommitted");

	UCFDebugMenuContentText_OnTextCommitted_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContentText.GetTextBox
// (Event, Public, BlueprintEvent)
// Parameters:
// class UEditableTextBox*        ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UEditableTextBox* UCFDebugMenuContentText::GetTextBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentText.GetTextBox");

	UCFDebugMenuContentText_GetTextBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuContentClass.OnSetClass
// (Final, Native, Protected)
// Parameters:
// class UClass*                  setClass                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuContentClass::OnSetClass(class UClass* setClass)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentClass.OnSetClass");

	UCFDebugMenuContentClass_OnSetClass_Params params;
	params.setClass = setClass;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuContentClass.GetPropEdit
// (Event, Public, BlueprintEvent)
// Parameters:
// class UCFPropertyEditorClass*  ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UCFPropertyEditorClass* UCFDebugMenuContentClass::GetPropEdit()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentClass.GetPropEdit");

	UCFDebugMenuContentClass_GetPropEdit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuEventHandlerFloat.Set
// (Final, Native, Public)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuEventHandlerFloat::Set(float Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerFloat.Set");

	UCFDebugMenuEventHandlerFloat_Set_Params params;
	params.Value = Value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuEventHandlerFloat.GetParam
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FDebugMenuNumericParam  Param                          (Parm, OutParm)

void UCFDebugMenuEventHandlerFloat::GetParam(struct FDebugMenuNumericParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerFloat.GetParam");

	UCFDebugMenuEventHandlerFloat_GetParam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function CFramework.CFDebugMenuEventHandlerFloat.Get
// (Final, Native, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCFDebugMenuEventHandlerFloat::Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerFloat.Get");

	UCFDebugMenuEventHandlerFloat_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuEventHandlerText.Set
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)

void UCFDebugMenuEventHandlerText::Set(const struct FText& Text)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerText.Set");

	UCFDebugMenuEventHandlerText_Set_Params params;
	params.Text = Text;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuEventHandlerText.Get
// (Final, Native, Public)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCFDebugMenuEventHandlerText::Get()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerText.Get");

	UCFDebugMenuEventHandlerText_Get_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuEventHandlerCombo.Set
// (Final, Native, Public)
// Parameters:
// struct FString                 selected                       (Parm, ZeroConstructor)
// TEnumAsByte<ESelectInfo>       Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuEventHandlerCombo::Set(const struct FString& selected, TEnumAsByte<ESelectInfo> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerCombo.Set");

	UCFDebugMenuEventHandlerCombo_Set_Params params;
	params.selected = selected;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuEventHandlerCombo.Build
// (Final, Native, Public, HasOutParms)
// Parameters:
// TArray<struct FString>         Options                        (Parm, OutParm, ZeroConstructor)
// struct FString                 current                        (Parm, OutParm, ZeroConstructor)

void UCFDebugMenuEventHandlerCombo::Build(TArray<struct FString>* Options, struct FString* current)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerCombo.Build");

	UCFDebugMenuEventHandlerCombo_Build_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Options != nullptr)
		*Options = params.Options;
	if (current != nullptr)
		*current = params.current;
}


// Function CFramework.CFDebugMenuContentButton.GetButtonBox
// (Event, Public, BlueprintEvent)
// Parameters:
// class UButton*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UButton* UCFDebugMenuContentButton::GetButtonBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuContentButton.GetButtonBox");

	UCFDebugMenuContentButton_GetButtonBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugMenuEventHandlerExample.SetFExample
// (Final, Native, Private)
// Parameters:
// float                          F                              (Parm, ZeroConstructor, IsPlainOldData)

void UCFDebugMenuEventHandlerExample::SetFExample(float F)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerExample.SetFExample");

	UCFDebugMenuEventHandlerExample_SetFExample_Params params;
	params.F = F;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugMenuEventHandlerExample.GetFParam
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FDebugMenuNumericParam  Param                          (Parm, OutParm)

void UCFDebugMenuEventHandlerExample::GetFParam(struct FDebugMenuNumericParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerExample.GetFParam");

	UCFDebugMenuEventHandlerExample_GetFParam_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Param != nullptr)
		*Param = params.Param;
}


// Function CFramework.CFDebugMenuEventHandlerExample.GetFExample
// (Final, Native, Private)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCFDebugMenuEventHandlerExample::GetFExample()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugMenuEventHandlerExample.GetFExample");

	UCFDebugMenuEventHandlerExample_GetFExample_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDebugXmlSelector.OnPressedUp
// (Final, Native, Public)

void UCFDebugXmlSelector::OnPressedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugXmlSelector.OnPressedUp");

	UCFDebugXmlSelector_OnPressedUp_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugXmlSelector.OnPressedRight
// (Final, Native, Public)

void UCFDebugXmlSelector::OnPressedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugXmlSelector.OnPressedRight");

	UCFDebugXmlSelector_OnPressedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugXmlSelector.OnPressedR1
// (Final, Native, Public)

void UCFDebugXmlSelector::OnPressedR1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugXmlSelector.OnPressedR1");

	UCFDebugXmlSelector_OnPressedR1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugXmlSelector.OnPressedLeft
// (Final, Native, Public)

void UCFDebugXmlSelector::OnPressedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugXmlSelector.OnPressedLeft");

	UCFDebugXmlSelector_OnPressedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugXmlSelector.OnPressedL1
// (Final, Native, Public)

void UCFDebugXmlSelector::OnPressedL1()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugXmlSelector.OnPressedL1");

	UCFDebugXmlSelector_OnPressedL1_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugXmlSelector.OnPressedEnter
// (Final, Native, Public)

void UCFDebugXmlSelector::OnPressedEnter()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugXmlSelector.OnPressedEnter");

	UCFDebugXmlSelector_OnPressedEnter_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugXmlSelector.OnPressedDown
// (Final, Native, Public)

void UCFDebugXmlSelector::OnPressedDown()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugXmlSelector.OnPressedDown");

	UCFDebugXmlSelector_OnPressedDown_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDebugXmlSelector.OnPressedBack
// (Final, Native, Public)

void UCFDebugXmlSelector::OnPressedBack()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDebugXmlSelector.OnPressedBack");

	UCFDebugXmlSelector_OnPressedBack_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDynamicsBlueprintFunctionLibrary.SetEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UCFDynamicsBlueprintFunctionLibrary::STATIC_SetEnable(class USkeletalMeshComponent* SkeletalMeshComponent, bool Enable)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDynamicsBlueprintFunctionLibrary.SetEnable");

	UCFDynamicsBlueprintFunctionLibrary_SetEnable_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;
	params.Enable = Enable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDynamicsBlueprintFunctionLibrary.SetAllEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Enabled                        (Parm, ZeroConstructor, IsPlainOldData)

void UCFDynamicsBlueprintFunctionLibrary::STATIC_SetAllEnable(bool Enabled)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDynamicsBlueprintFunctionLibrary.SetAllEnable");

	UCFDynamicsBlueprintFunctionLibrary_SetAllEnable_Params params;
	params.Enabled = Enabled;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDynamicsBlueprintFunctionLibrary.Reset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCFDynamicsBlueprintFunctionLibrary::STATIC_Reset(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDynamicsBlueprintFunctionLibrary.Reset");

	UCFDynamicsBlueprintFunctionLibrary_Reset_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFDynamicsBlueprintFunctionLibrary.IsEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*  SkeletalMeshComponent          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCFDynamicsBlueprintFunctionLibrary::STATIC_IsEnable(class USkeletalMeshComponent* SkeletalMeshComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDynamicsBlueprintFunctionLibrary.IsEnable");

	UCFDynamicsBlueprintFunctionLibrary_IsEnable_Params params;
	params.SkeletalMeshComponent = SkeletalMeshComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFDynamicsBlueprintFunctionLibrary.IsAllEnable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCFDynamicsBlueprintFunctionLibrary::STATIC_IsAllEnable()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFDynamicsBlueprintFunctionLibrary.IsAllEnable");

	UCFDynamicsBlueprintFunctionLibrary_IsAllEnable_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFExtendRichTextBlock.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UCFExtendRichTextBlock::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFExtendRichTextBlock.SetText");

	UCFExtendRichTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFExtendRichTextBlock.SetRevealedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            RevealedIndex                  (Parm, ZeroConstructor, IsPlainOldData)

void UCFExtendRichTextBlock::SetRevealedIndex(int RevealedIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFExtendRichTextBlock.SetRevealedIndex");

	UCFExtendRichTextBlock_SetRevealedIndex_Params params;
	params.RevealedIndex = RevealedIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 SearchConfigName               (Parm, ZeroConstructor)
// struct FString                 SetIconName                    (Parm, ZeroConstructor)

void UCFExtendRichTextBlock::SetIconToKeyConfigByName(const struct FString& SearchConfigName, const struct FString& SetIconName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigByName");

	UCFExtendRichTextBlock_SetIconToKeyConfigByName_Params params;
	params.SearchConfigName = SearchConfigName;
	params.SetIconName = SetIconName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigByIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            SearchConfigIndex              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SetIconName                    (Parm, ZeroConstructor)

void UCFExtendRichTextBlock::SetIconToKeyConfigByIndex(int SearchConfigIndex, const struct FString& SetIconName)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigByIndex");

	UCFExtendRichTextBlock_SetIconToKeyConfigByIndex_Params params;
	params.SearchConfigIndex = SearchConfigIndex;
	params.SetIconName = SetIconName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigAll
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<int>                    IconIndexList                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UCFExtendRichTextBlock::SetIconToKeyConfigAll(TArray<int> IconIndexList)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFExtendRichTextBlock.SetIconToKeyConfigAll");

	UCFExtendRichTextBlock_SetIconToKeyConfigAll_Params params;
	params.IconIndexList = IconIndexList;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFExtendRichTextBlock.SetExtendRichTextIconData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCFExtendRichTextIconData* InInputDisplayData             (Parm, ZeroConstructor, IsPlainOldData)

void UCFExtendRichTextBlock::SetExtendRichTextIconData(class UCFExtendRichTextIconData* InInputDisplayData)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFExtendRichTextBlock.SetExtendRichTextIconData");

	UCFExtendRichTextBlock_SetExtendRichTextIconData_Params params;
	params.InInputDisplayData = InInputDisplayData;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFExtendRichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCFExtendRichTextBlock::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFExtendRichTextBlock.GetText");

	UCFExtendRichTextBlock_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFExtendRichTextBlock.AddDecorator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class URichTextBlockDecorator* Decorator                      (Parm, ZeroConstructor, IsPlainOldData)

void UCFExtendRichTextBlock::AddDecorator(class URichTextBlockDecorator* Decorator)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFExtendRichTextBlock.AddDecorator");

	UCFExtendRichTextBlock_AddDecorator_Params params;
	params.Decorator = Decorator;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFGameOperatingEnvironment.IsConfirmAButton
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCFGameOperatingEnvironment::STATIC_IsConfirmAButton()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFGameOperatingEnvironment.IsConfirmAButton");

	UCFGameOperatingEnvironment_IsConfirmAButton_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFGameOperatingEnvironment.GetReplaceLanguagePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// TEnumAsByte<ELanguageType>     InLanguageType                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsDefaultPlatform              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCFGameOperatingEnvironment::STATIC_GetReplaceLanguagePath(const struct FString& Path, TEnumAsByte<ELanguageType> InLanguageType, bool IsDefaultPlatform)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFGameOperatingEnvironment.GetReplaceLanguagePath");

	UCFGameOperatingEnvironment_GetReplaceLanguagePath_Params params;
	params.Path = Path;
	params.InLanguageType = InLanguageType;
	params.IsDefaultPlatform = IsDefaultPlatform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFGameOperatingEnvironment.GetReplaceEnvironmentPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Path                           (Parm, ZeroConstructor)
// bool                           IsDefaultPlatform              (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCFGameOperatingEnvironment::STATIC_GetReplaceEnvironmentPath(const struct FString& Path, bool IsDefaultPlatform)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFGameOperatingEnvironment.GetReplaceEnvironmentPath");

	UCFGameOperatingEnvironment_GetReplaceEnvironmentPath_Params params;
	params.Path = Path;
	params.IsDefaultPlatform = IsDefaultPlatform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFGameOperatingEnvironment.GetRegionType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ERegionType>       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ERegionType> UCFGameOperatingEnvironment::STATIC_GetRegionType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFGameOperatingEnvironment.GetRegionType");

	UCFGameOperatingEnvironment_GetRegionType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFGameOperatingEnvironment.GetLanguageCode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ELanguageType>     Type                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCFGameOperatingEnvironment::STATIC_GetLanguageCode(TEnumAsByte<ELanguageType> Type)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFGameOperatingEnvironment.GetLanguageCode");

	UCFGameOperatingEnvironment_GetLanguageCode_Params params;
	params.Type = Type;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFGameOperatingEnvironment.GetLangType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TEnumAsByte<ELanguageType>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

TEnumAsByte<ELanguageType> UCFGameOperatingEnvironment::STATIC_GetLangType()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFGameOperatingEnvironment.GetLangType");

	UCFGameOperatingEnvironment_GetLangType_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFMessageManager.GetSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 speakerID                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UCFMessageManager::GetSpeaker(const struct FString& speakerID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFMessageManager.GetSpeaker");

	UCFMessageManager_GetSpeaker_Params params;
	params.speakerID = speakerID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFMessageManager.GetNounParamFromName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   StringID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FCFNounParamTableRow    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCFNounParamTableRow UCFMessageManager::GetNounParamFromName(const struct FName& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFMessageManager.GetNounParamFromName");

	UCFMessageManager_GetNounParamFromName_Params params;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFMessageManager.GetNounParam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StringID                       (Parm, ZeroConstructor)
// struct FCFNounParamTableRow    ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCFNounParamTableRow UCFMessageManager::GetNounParam(const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFMessageManager.GetNounParam");

	UCFMessageManager_GetNounParam_Params params;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFMessageManager.GetMessageDataFromName
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FName                   StringID                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FCFMessageTableRow      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCFMessageTableRow UCFMessageManager::GetMessageDataFromName(const struct FName& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFMessageManager.GetMessageDataFromName");

	UCFMessageManager_GetMessageDataFromName_Params params;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFMessageManager.GetMessageData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 StringID                       (Parm, ZeroConstructor)
// struct FCFMessageTableRow      ReturnValue                    (Parm, OutParm, ReturnParm)

struct FCFMessageTableRow UCFMessageManager::GetMessageData(const struct FString& StringID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFMessageManager.GetMessageData");

	UCFMessageManager_GetMessageData_Params params;
	params.StringID = StringID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFParticleManager.OnSystemFinished
// (Final, Native, Public)
// Parameters:
// class UParticleSystemComponent* InFinishedComponent            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCFParticleManager::OnSystemFinished(class UParticleSystemComponent* InFinishedComponent)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFParticleManager.OnSystemFinished");

	UCFParticleManager_OnSystemFinished_Params params;
	params.InFinishedComponent = InFinishedComponent;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFParticleManager.GetParticleComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InUID                          (Parm, ZeroConstructor, IsPlainOldData)
// class UParticleSystemComponent* ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UParticleSystemComponent* UCFParticleManager::GetParticleComponent(int InUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFParticleManager.GetParticleComponent");

	UCFParticleManager_GetParticleComponent_Params params;
	params.InUID = InUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFParticleManager.DeactiveParticleComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            InUID                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCFParticleManager::DeactiveParticleComponent(int InUID)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFParticleManager.DeactiveParticleComponent");

	UCFParticleManager_DeactiveParticleComponent_Params params;
	params.InUID = InUID;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.DMDispLoadStatus.Tick
// (Final, Native, Private)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UDMDispLoadStatus::Tick(float DeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.DMDispLoadStatus.Tick");

	UDMDispLoadStatus_Tick_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.DMDispLoadStatus.OnPressedRight
// (Final, Native, Private)

void UDMDispLoadStatus::OnPressedRight()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.DMDispLoadStatus.OnPressedRight");

	UDMDispLoadStatus_OnPressedRight_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.DMDispLoadStatus.OnPressedLeft
// (Final, Native, Private)

void UDMDispLoadStatus::OnPressedLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.DMDispLoadStatus.OnPressedLeft");

	UDMDispLoadStatus_OnPressedLeft_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.DMDispLoadStatus.OnDetachInput
// (Final, Native, Private)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDMDispLoadStatus::OnDetachInput(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.DMDispLoadStatus.OnDetachInput");

	UDMDispLoadStatus_OnDetachInput_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.DMDispLoadStatus.OnAttachInput
// (Final, Native, Private)
// Parameters:
// class UObject*                 WorldContext                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData)

void UDMDispLoadStatus::OnAttachInput(class UObject* WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.DMDispLoadStatus.OnAttachInput");

	UDMDispLoadStatus_OnAttachInput_Params params;
	params.WorldContext = WorldContext;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFRegistFontAtlasText.SetWriteFontAtlas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 FontFamilyPath                 (Parm, ZeroConstructor)
// struct FString                 FontTextDataTablePath          (Parm, ZeroConstructor)
// class UCanvasPanel*            CanvasPanel                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           IsEnableBold                   (Parm, ZeroConstructor, IsPlainOldData)

void UCFRegistFontAtlasText::SetWriteFontAtlas(const struct FString& FontFamilyPath, const struct FString& FontTextDataTablePath, class UCanvasPanel* CanvasPanel, bool IsEnableBold)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFRegistFontAtlasText.SetWriteFontAtlas");

	UCFRegistFontAtlasText_SetWriteFontAtlas_Params params;
	params.FontFamilyPath = FontFamilyPath;
	params.FontTextDataTablePath = FontTextDataTablePath;
	params.CanvasPanel = CanvasPanel;
	params.IsEnableBold = IsEnableBold;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFRegistFontAtlasText.ReleaseWriteFontAtlas
// (Final, Native, Public, BlueprintCallable)

void UCFRegistFontAtlasText::ReleaseWriteFontAtlas()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFRegistFontAtlasText.ReleaseWriteFontAtlas");

	UCFRegistFontAtlasText_ReleaseWriteFontAtlas_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFUIMultiLineTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UCFUIMultiLineTextBox::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIMultiLineTextBox.SetText");

	UCFUIMultiLineTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFUIMultiLineTextBox.GetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCFUIMultiLineTextBox::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIMultiLineTextBox.GetText");

	UCFUIMultiLineTextBox_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFUIMultiLineTextBox.AdaptTextSetting
// (Final, Native, Public, BlueprintCallable)

void UCFUIMultiLineTextBox::AdaptTextSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIMultiLineTextBox.AdaptTextSetting");

	UCFUIMultiLineTextBox_AdaptTextSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFUIUtil.SetNumberTextureTiling
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UImage*                  ImageIns                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// int                            TilingNo                       (Parm, ZeroConstructor, IsPlainOldData)

void UCFUIUtil::STATIC_SetNumberTextureTiling(class UImage* ImageIns, int TilingNo)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIUtil.SetNumberTextureTiling");

	UCFUIUtil_SetNumberTextureTiling_Params params;
	params.ImageIns = ImageIns;
	params.TilingNo = TilingNo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFUIWidgetPathAnimManager.RegisterPathAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 inTarget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCFUIWidgetPathAnimationParam InParam                        (Parm)

void UCFUIWidgetPathAnimManager::RegisterPathAnimation(class UWidget* inTarget, const struct FCFUIWidgetPathAnimationParam& InParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIWidgetPathAnimManager.RegisterPathAnimation");

	UCFUIWidgetPathAnimManager_RegisterPathAnimation_Params params;
	params.inTarget = inTarget;
	params.InParam = InParam;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFUIWidgetPathAnimManager.InterruptPathAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 inTarget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UCFUIWidgetPathAnimManager::InterruptPathAnimation(class UWidget* inTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIWidgetPathAnimManager.InterruptPathAnimation");

	UCFUIWidgetPathAnimManager_InterruptPathAnimation_Params params;
	params.inTarget = inTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFUIWidgetPathAnimManager.GetCurrentAnimTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                 inTarget                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UCFUIWidgetPathAnimManager::GetCurrentAnimTime(class UWidget* inTarget)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIWidgetPathAnimManager.GetCurrentAnimTime");

	UCFUIWidgetPathAnimManager_GetCurrentAnimTime_Params params;
	params.inTarget = inTarget;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFUIXcmnMultiLineText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UCFUIXcmnMultiLineText::SetText(const struct FText& InText)
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIXcmnMultiLineText.SetText");

	UCFUIXcmnMultiLineText_SetText_Params params;
	params.InText = InText;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CFramework.CFUIXcmnMultiLineText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UCFUIXcmnMultiLineText::GetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIXcmnMultiLineText.GetText");

	UCFUIXcmnMultiLineText_GetText_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function CFramework.CFUIXcmnMultiLineText.AdaptTextSetting
// (Final, Native, Public, BlueprintCallable)

void UCFUIXcmnMultiLineText::AdaptTextSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function CFramework.CFUIXcmnMultiLineText.AdaptTextSetting");

	UCFUIXcmnMultiLineText_AdaptTextSetting_Params params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
