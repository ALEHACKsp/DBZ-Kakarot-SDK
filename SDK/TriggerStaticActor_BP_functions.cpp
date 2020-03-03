
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

// Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ATriggerStaticActor_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.UserConstructionScript");

	ATriggerStaticActor_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATriggerStaticActor_BP_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ReceiveActorBeginOverlap");

	ATriggerStaticActor_BP_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATriggerStaticActor_BP_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ReceiveActorEndOverlap");

	ATriggerStaticActor_BP_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ExecuteUbergraph_TriggerStaticActor_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATriggerStaticActor_BP_C::ExecuteUbergraph_TriggerStaticActor_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ExecuteUbergraph_TriggerStaticActor_BP");

	ATriggerStaticActor_BP_C_ExecuteUbergraph_TriggerStaticActor_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
