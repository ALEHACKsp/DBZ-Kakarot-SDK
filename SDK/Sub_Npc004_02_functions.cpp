
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

// Function Sub_Npc004_02.Sub_Npc004_02_C.AcquisitionName
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestManager*           ReturnActor                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FName                   ReturnName                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ASub_Npc004_02_C::AcquisitionName(class UQuestManager** ReturnActor, struct FName* ReturnName)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_02.Sub_Npc004_02_C.AcquisitionName");

	ASub_Npc004_02_C_AcquisitionName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ReturnActor != nullptr)
		*ReturnActor = params.ReturnActor;
	if (ReturnName != nullptr)
		*ReturnName = params.ReturnName;
}


// Function Sub_Npc004_02.Sub_Npc004_02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASub_Npc004_02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_02.Sub_Npc004_02_C.UserConstructionScript");

	ASub_Npc004_02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_02.Sub_Npc004_02_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void ASub_Npc004_02_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_02.Sub_Npc004_02_C.PhaseEvent");

	ASub_Npc004_02_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_02.Sub_Npc004_02_C.OnCancelSubQuest
// (Event, Public, BlueprintEvent)

void ASub_Npc004_02_C::OnCancelSubQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_02.Sub_Npc004_02_C.OnCancelSubQuest");

	ASub_Npc004_02_C_OnCancelSubQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_02.Sub_Npc004_02_C.OnCancelSubQuestTransition
// (Event, Public, BlueprintEvent)

void ASub_Npc004_02_C::OnCancelSubQuestTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_02.Sub_Npc004_02_C.OnCancelSubQuestTransition");

	ASub_Npc004_02_C_OnCancelSubQuestTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_02.Sub_Npc004_02_C.OnOpenSimpleTalk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   SimpleTalkId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   messageId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc004_02_C::OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_02.Sub_Npc004_02_C.OnOpenSimpleTalk");

	ASub_Npc004_02_C_OnOpenSimpleTalk_Params params;
	params.SimpleTalkId = SimpleTalkId;
	params.messageId = messageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_02.Sub_Npc004_02_C.OnIngameBegan
// (Event, Public, BlueprintEvent)

void ASub_Npc004_02_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_02.Sub_Npc004_02_C.OnIngameBegan");

	ASub_Npc004_02_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_02.Sub_Npc004_02_C.ExecuteUbergraph_Sub_Npc004_02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc004_02_C::ExecuteUbergraph_Sub_Npc004_02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_02.Sub_Npc004_02_C.ExecuteUbergraph_Sub_Npc004_02");

	ASub_Npc004_02_C_ExecuteUbergraph_Sub_Npc004_02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
