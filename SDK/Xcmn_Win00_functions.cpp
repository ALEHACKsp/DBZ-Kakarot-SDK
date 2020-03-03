
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

// Function Xcmn_Win00.Xcmn_Win00_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXcmn_Win00_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Win00.Xcmn_Win00_C.Construct");

	UXcmn_Win00_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xcmn_Win00.Xcmn_Win00_C.CompletedClosed
// (BlueprintCallable, BlueprintEvent)

void UXcmn_Win00_C::CompletedClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Win00.Xcmn_Win00_C.CompletedClosed");

	UXcmn_Win00_C_CompletedClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xcmn_Win00.Xcmn_Win00_C.ExecuteUbergraph_Xcmn_Win00
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXcmn_Win00_C::ExecuteUbergraph_Xcmn_Win00(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Win00.Xcmn_Win00_C.ExecuteUbergraph_Xcmn_Win00");

	UXcmn_Win00_C_ExecuteUbergraph_Xcmn_Win00_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
