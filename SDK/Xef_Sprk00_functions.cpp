
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

// Function Xef_Sprk00.Xef_Sprk00_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXef_Sprk00_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xef_Sprk00.Xef_Sprk00_C.Construct");

	UXef_Sprk00_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xef_Sprk00.Xef_Sprk00_C.ExecuteUbergraph_Xef_Sprk00
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXef_Sprk00_C::ExecuteUbergraph_Xef_Sprk00(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xef_Sprk00.Xef_Sprk00_C.ExecuteUbergraph_Xef_Sprk00");

	UXef_Sprk00_C_ExecuteUbergraph_Xef_Sprk00_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
