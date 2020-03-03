
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

// Function Xlist_Bar03_Gauge.Xlist_Bar03_Gauge_C.SetVolume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Volume                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXlist_Bar03_Gauge_C::SetVolume(int Volume)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Bar03_Gauge.Xlist_Bar03_Gauge_C.SetVolume");

	UXlist_Bar03_Gauge_C_SetVolume_Params params;
	params.Volume = Volume;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xlist_Bar03_Gauge.Xlist_Bar03_Gauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXlist_Bar03_Gauge_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Bar03_Gauge.Xlist_Bar03_Gauge_C.Construct");

	UXlist_Bar03_Gauge_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xlist_Bar03_Gauge.Xlist_Bar03_Gauge_C.ExecuteUbergraph_Xlist_Bar03_Gauge
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXlist_Bar03_Gauge_C::ExecuteUbergraph_Xlist_Bar03_Gauge(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Bar03_Gauge.Xlist_Bar03_Gauge_C.ExecuteUbergraph_Xlist_Bar03_Gauge");

	UXlist_Bar03_Gauge_C_ExecuteUbergraph_Xlist_Bar03_Gauge_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
