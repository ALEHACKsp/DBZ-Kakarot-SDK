
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

// Function Xlist_Bar04.Xlist_Bar04_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXlist_Bar04_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Bar04.Xlist_Bar04_C.Construct");

	UXlist_Bar04_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xlist_Bar04.Xlist_Bar04_C.ExecuteUbergraph_Xlist_Bar04
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXlist_Bar04_C::ExecuteUbergraph_Xlist_Bar04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_Bar04.Xlist_Bar04_C.ExecuteUbergraph_Xlist_Bar04");

	UXlist_Bar04_C_ExecuteUbergraph_Xlist_Bar04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
