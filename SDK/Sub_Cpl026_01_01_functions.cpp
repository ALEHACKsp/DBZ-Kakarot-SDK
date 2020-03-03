
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

// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASub_Cpl026_01_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.UserConstructionScript");

	ASub_Cpl026_01_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void ASub_Cpl026_01_01_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.PhaseEvent");

	ASub_Cpl026_01_01_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnCancelSubQuest
// (Event, Public, BlueprintEvent)

void ASub_Cpl026_01_01_C::OnCancelSubQuest()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnCancelSubQuest");

	ASub_Cpl026_01_01_C_OnCancelSubQuest_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnCancelSubQuestTransition
// (Event, Public, BlueprintEvent)

void ASub_Cpl026_01_01_C::OnCancelSubQuestTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnCancelSubQuestTransition");

	ASub_Cpl026_01_01_C_OnCancelSubQuestTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnOpenSimpleTalk
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FName                   SimpleTalkId                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   messageId                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Cpl026_01_01_C::OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnOpenSimpleTalk");

	ASub_Cpl026_01_01_C_OnOpenSimpleTalk_Params params;
	params.SimpleTalkId = SimpleTalkId;
	params.messageId = messageId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnIngameBegan
// (Event, Public, BlueprintEvent)

void ASub_Cpl026_01_01_C::OnIngameBegan()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnIngameBegan");

	ASub_Cpl026_01_01_C_OnIngameBegan_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnBeginPlayed
// (BlueprintCallable, BlueprintEvent)

void ASub_Cpl026_01_01_C::OnBeginPlayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnBeginPlayed");

	ASub_Cpl026_01_01_C_OnBeginPlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnBeginPlayed2
// (BlueprintCallable, BlueprintEvent)

void ASub_Cpl026_01_01_C::OnBeginPlayed2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.OnBeginPlayed2");

	ASub_Cpl026_01_01_C_OnBeginPlayed2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.ExecuteUbergraph_Sub_Cpl026_01_01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Cpl026_01_01_C::ExecuteUbergraph_Sub_Cpl026_01_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Cpl026_01_01.Sub_Cpl026_01_01_C.ExecuteUbergraph_Sub_Cpl026_01_01");

	ASub_Cpl026_01_01_C_ExecuteUbergraph_Sub_Cpl026_01_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
