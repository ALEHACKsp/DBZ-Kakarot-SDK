
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

// Function Sub_Npc002_01.Sub_Npc002_01_C.hidden_actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   findId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc002_01_C::hidden_actor(const struct FName& findId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc002_01.Sub_Npc002_01_C.hidden_actor");

	ASub_Npc002_01_C_hidden_actor_Params params;
	params.findId = findId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc002_01.Sub_Npc002_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASub_Npc002_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc002_01.Sub_Npc002_01_C.UserConstructionScript");

	ASub_Npc002_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc002_01.Sub_Npc002_01_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void ASub_Npc002_01_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc002_01.Sub_Npc002_01_C.PhaseEvent");

	ASub_Npc002_01_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc002_01.Sub_Npc002_01_C.OnCancelSubQuest
// (Event, Public, BlueprintEvent)

void ASub_Npc002_01_C::OnCancelSubQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc002_01.Sub_Npc002_01_C.OnCancelSubQuest");

	ASub_Npc002_01_C_OnCancelSubQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc002_01.Sub_Npc002_01_C.OnCancelSubQuestTransition
// (Event, Public, BlueprintEvent)

void ASub_Npc002_01_C::OnCancelSubQuestTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc002_01.Sub_Npc002_01_C.OnCancelSubQuestTransition");

	ASub_Npc002_01_C_OnCancelSubQuestTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc002_01.Sub_Npc002_01_C.OnOpenSimpleTalk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   SimpleTalkId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   messageId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc002_01_C::OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc002_01.Sub_Npc002_01_C.OnOpenSimpleTalk");

	ASub_Npc002_01_C_OnOpenSimpleTalk_Params params;
	params.SimpleTalkId = SimpleTalkId;
	params.messageId = messageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc002_01.Sub_Npc002_01_C.OnIngameBegan
// (Event, Public, BlueprintEvent)

void ASub_Npc002_01_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc002_01.Sub_Npc002_01_C.OnIngameBegan");

	ASub_Npc002_01_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc002_01.Sub_Npc002_01_C.ExecuteUbergraph_Sub_Npc002_01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc002_01_C::ExecuteUbergraph_Sub_Npc002_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc002_01.Sub_Npc002_01_C.ExecuteUbergraph_Sub_Npc002_01");

	ASub_Npc002_01_C_ExecuteUbergraph_Sub_Npc002_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
