
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

// Function Sub_Cpl036_01.Sub_Cpl036_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASub_Cpl036_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.UserConstructionScript");

	ASub_Cpl036_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void ASub_Cpl036_01_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.PhaseEvent");

	ASub_Cpl036_01_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.OnCancelSubQuest
// (Event, Public, BlueprintEvent)

void ASub_Cpl036_01_C::OnCancelSubQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.OnCancelSubQuest");

	ASub_Cpl036_01_C_OnCancelSubQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.OnCancelSubQuestTransition
// (Event, Public, BlueprintEvent)

void ASub_Cpl036_01_C::OnCancelSubQuestTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.OnCancelSubQuestTransition");

	ASub_Cpl036_01_C_OnCancelSubQuestTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.OnIngameBegan
// (Event, Public, BlueprintEvent)

void ASub_Cpl036_01_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.OnIngameBegan");

	ASub_Cpl036_01_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Cpl036_01_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.ReceiveEndPlay");

	ASub_Cpl036_01_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.InitEvent
// (BlueprintCallable, BlueprintEvent)

void ASub_Cpl036_01_C::InitEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.InitEvent");

	ASub_Cpl036_01_C_InitEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.OnOpenSimpleTalk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   SimpleTalkId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   messageId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Cpl036_01_C::OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.OnOpenSimpleTalk");

	ASub_Cpl036_01_C_OnOpenSimpleTalk_Params params;
	params.SimpleTalkId = SimpleTalkId;
	params.messageId = messageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.DoorOpenCloseArea03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInDoor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Cpl036_01_C::DoorOpenCloseArea03(const struct FName& DoorName, bool bInDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.DoorOpenCloseArea03");

	ASub_Cpl036_01_C_DoorOpenCloseArea03_Params params;
	params.DoorName = DoorName;
	params.bInDoor = bInDoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.DoorOpenCloseArea18
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   DoorName                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInDoor                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Cpl036_01_C::DoorOpenCloseArea18(const struct FName& DoorName, bool bInDoor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.DoorOpenCloseArea18");

	ASub_Cpl036_01_C_DoorOpenCloseArea18_Params params;
	params.DoorName = DoorName;
	params.bInDoor = bInDoor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl036_01.Sub_Cpl036_01_C.ExecuteUbergraph_Sub_Cpl036_01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Cpl036_01_C::ExecuteUbergraph_Sub_Cpl036_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl036_01.Sub_Cpl036_01_C.ExecuteUbergraph_Sub_Cpl036_01");

	ASub_Cpl036_01_C_ExecuteUbergraph_Sub_Cpl036_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
