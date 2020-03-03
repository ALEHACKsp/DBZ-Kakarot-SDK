
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

// Function Sub_Npc004_07.Sub_Npc004_07_C.hidden_actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   findId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc004_07_C::hidden_actor(const struct FName& findId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.hidden_actor");

	ASub_Npc004_07_C_hidden_actor_Params params;
	params.findId = findId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASub_Npc004_07_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.UserConstructionScript");

	ASub_Npc004_07_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void ASub_Npc004_07_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.PhaseEvent");

	ASub_Npc004_07_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.OnCancelSubQuest
// (Event, Public, BlueprintEvent)

void ASub_Npc004_07_C::OnCancelSubQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.OnCancelSubQuest");

	ASub_Npc004_07_C_OnCancelSubQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.OnCancelSubQuestTransition
// (Event, Public, BlueprintEvent)

void ASub_Npc004_07_C::OnCancelSubQuestTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.OnCancelSubQuestTransition");

	ASub_Npc004_07_C_OnCancelSubQuestTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.OnOpenSimpleTalk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   SimpleTalkId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   messageId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc004_07_C::OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.OnOpenSimpleTalk");

	ASub_Npc004_07_C_OnOpenSimpleTalk_Params params;
	params.SimpleTalkId = SimpleTalkId;
	params.messageId = messageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.OnIngameBegan
// (Event, Public, BlueprintEvent)

void ASub_Npc004_07_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.OnIngameBegan");

	ASub_Npc004_07_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.MiniGameTiming
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMinigameTimingArgment  Argment                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ASub_Npc004_07_C::MiniGameTiming(const struct FMinigameTimingArgment& Argment)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.MiniGameTiming");

	ASub_Npc004_07_C_MiniGameTiming_Params params;
	params.Argment = Argment;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.Init
// (BlueprintCallable, BlueprintEvent)

void ASub_Npc004_07_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.Init");

	ASub_Npc004_07_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc004_07_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.ReceiveEndPlay");

	ASub_Npc004_07_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.OnBeganSubQuestDirection
// (Event, Public, BlueprintEvent)
// Parameters:
// ESubQuestDirectionTiming       Timing                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc004_07_C::OnBeganSubQuestDirection(ESubQuestDirectionTiming Timing)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.OnBeganSubQuestDirection");

	ASub_Npc004_07_C_OnBeganSubQuestDirection_Params params;
	params.Timing = Timing;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc004_07.Sub_Npc004_07_C.ExecuteUbergraph_Sub_Npc004_07
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc004_07_C::ExecuteUbergraph_Sub_Npc004_07(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc004_07.Sub_Npc004_07_C.ExecuteUbergraph_Sub_Npc004_07");

	ASub_Npc004_07_C_ExecuteUbergraph_Sub_Npc004_07_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
