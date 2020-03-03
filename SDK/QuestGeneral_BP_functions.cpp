
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

// Function QuestGeneral_BP.QuestGeneral_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AQuestGeneral_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestGeneral_BP.QuestGeneral_BP_C.UserConstructionScript");

	AQuestGeneral_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestGeneral_BP.QuestGeneral_BP_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void AQuestGeneral_BP_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestGeneral_BP.QuestGeneral_BP_C.PhaseEvent");

	AQuestGeneral_BP_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestGeneral_BP.QuestGeneral_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AQuestGeneral_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestGeneral_BP.QuestGeneral_BP_C.ReceiveBeginPlay");

	AQuestGeneral_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function QuestGeneral_BP.QuestGeneral_BP_C.ExecuteUbergraph_QuestGeneral_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AQuestGeneral_BP_C::ExecuteUbergraph_QuestGeneral_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function QuestGeneral_BP.QuestGeneral_BP_C.ExecuteUbergraph_QuestGeneral_BP");

	AQuestGeneral_BP_C_ExecuteUbergraph_QuestGeneral_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
