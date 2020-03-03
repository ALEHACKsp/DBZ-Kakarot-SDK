
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

// Function Map_MS.Map_MS_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMap_MS_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_MS.Map_MS_C.Construct");

	UMap_MS_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_MS.Map_MS_C.ExecuteUbergraph_Map_MS
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMap_MS_C::ExecuteUbergraph_Map_MS(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_MS.Map_MS_C.ExecuteUbergraph_Map_MS");

	UMap_MS_C_ExecuteUbergraph_Map_MS_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
