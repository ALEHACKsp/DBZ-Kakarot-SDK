
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

// Function StandStaticMob.StandStaticMob_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AStandStaticMob_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandStaticMob.StandStaticMob_C.UserConstructionScript");

	AStandStaticMob_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandStaticMob.StandStaticMob_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AStandStaticMob_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function StandStaticMob.StandStaticMob_C.ReceiveBeginPlay");

	AStandStaticMob_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StandStaticMob.StandStaticMob_C.ExecuteUbergraph_StandStaticMob
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AStandStaticMob_C::ExecuteUbergraph_StandStaticMob(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function StandStaticMob.StandStaticMob_C.ExecuteUbergraph_StandStaticMob");

	AStandStaticMob_C_ExecuteUbergraph_StandStaticMob_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
