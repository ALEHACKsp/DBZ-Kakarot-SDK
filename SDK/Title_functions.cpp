
#include "../SDK.h"

// Name: DBZ, Version: 1.6.4

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Title.Title_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ATitle_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.ReceiveBeginPlay");

	ATitle_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATitle_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.ReceiveTick");

	ATitle_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Title.Title_C.ExecuteUbergraph_Title
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ATitle_C::ExecuteUbergraph_Title(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Title.Title_C.ExecuteUbergraph_Title");

	ATitle_C_ExecuteUbergraph_Title_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
