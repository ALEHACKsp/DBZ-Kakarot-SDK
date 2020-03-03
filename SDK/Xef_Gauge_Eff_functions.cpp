
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

// Function Xef_Gauge_Eff.Xef_Gauge_Eff_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXef_Gauge_Eff_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xef_Gauge_Eff.Xef_Gauge_Eff_C.Construct");

	UXef_Gauge_Eff_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xef_Gauge_Eff.Xef_Gauge_Eff_C.ExecuteUbergraph_Xef_Gauge_Eff
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXef_Gauge_Eff_C::ExecuteUbergraph_Xef_Gauge_Eff(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xef_Gauge_Eff.Xef_Gauge_Eff_C.ExecuteUbergraph_Xef_Gauge_Eff");

	UXef_Gauge_Eff_C_ExecuteUbergraph_Xef_Gauge_Eff_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
