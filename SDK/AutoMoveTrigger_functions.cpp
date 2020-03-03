
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

// Function AutoMoveTrigger.AutoMoveTrigger_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAutoMoveTrigger_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoMoveTrigger.AutoMoveTrigger_C.UserConstructionScript");

	AAutoMoveTrigger_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAutoMoveTrigger_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveActorBeginOverlap");

	AAutoMoveTrigger_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAutoMoveTrigger_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveTick");

	AAutoMoveTrigger_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAutoMoveTrigger_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoMoveTrigger.AutoMoveTrigger_C.ReceiveActorEndOverlap");

	AAutoMoveTrigger_C_ReceiveActorEndOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoMoveTrigger.AutoMoveTrigger_C.StartArrival
// (Event, Public, BlueprintEvent)

void AAutoMoveTrigger_C::StartArrival()
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoMoveTrigger.AutoMoveTrigger_C.StartArrival");

	AAutoMoveTrigger_C_StartArrival_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AutoMoveTrigger.AutoMoveTrigger_C.ExecuteUbergraph_AutoMoveTrigger
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAutoMoveTrigger_C::ExecuteUbergraph_AutoMoveTrigger(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AutoMoveTrigger.AutoMoveTrigger_C.ExecuteUbergraph_AutoMoveTrigger");

	AAutoMoveTrigger_C_ExecuteUbergraph_AutoMoveTrigger_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
