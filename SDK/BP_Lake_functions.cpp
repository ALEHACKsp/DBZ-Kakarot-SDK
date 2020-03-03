
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

// Function BP_Lake.BP_Lake_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Lake_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lake.BP_Lake_C.UserConstructionScript");

	ABP_Lake_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lake.BP_Lake_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Lake_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lake.BP_Lake_C.ReceiveBeginPlay");

	ABP_Lake_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lake.BP_Lake_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lake_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lake.BP_Lake_C.ReceiveTick");

	ABP_Lake_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_Lake.BP_Lake_C.ExecuteUbergraph_BP_Lake
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_Lake_C::ExecuteUbergraph_BP_Lake(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Lake.BP_Lake_C.ExecuteUbergraph_BP_Lake");

	ABP_Lake_C_ExecuteUbergraph_BP_Lake_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
