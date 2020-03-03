
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

// Function A001_BP.A001_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AA001_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function A001_BP.A001_BP_C.UserConstructionScript");

	AA001_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A001_BP.A001_BP_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AA001_BP_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function A001_BP.A001_BP_C.ReceiveBeginPlay");

	AA001_BP_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A001_BP.A001_BP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AA001_BP_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function A001_BP.A001_BP_C.ReceiveTick");

	AA001_BP_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A001_BP.A001_BP_C.ExecuteUbergraph_A001_BP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AA001_BP_C::ExecuteUbergraph_A001_BP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A001_BP.A001_BP_C.ExecuteUbergraph_A001_BP");

	AA001_BP_C_ExecuteUbergraph_A001_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
