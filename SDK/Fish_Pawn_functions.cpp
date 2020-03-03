
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

// Function Fish_Pawn.Fish_Pawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFish_Pawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Fish_Pawn.Fish_Pawn_C.UserConstructionScript");

	AFish_Pawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fish_Pawn.Fish_Pawn_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFish_Pawn_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fish_Pawn.Fish_Pawn_C.ReceiveTick");

	AFish_Pawn_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Fish_Pawn.Fish_Pawn_C.ExecuteUbergraph_Fish_Pawn
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AFish_Pawn_C::ExecuteUbergraph_Fish_Pawn(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Fish_Pawn.Fish_Pawn_C.ExecuteUbergraph_Fish_Pawn");

	AFish_Pawn_C_ExecuteUbergraph_Fish_Pawn_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
