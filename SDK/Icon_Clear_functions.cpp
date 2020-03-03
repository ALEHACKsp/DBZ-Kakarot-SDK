
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

// Function Icon_Clear.Icon_Clear_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIcon_Clear_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_Clear.Icon_Clear_C.Construct");

	UIcon_Clear_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Icon_Clear.Icon_Clear_C.ExecuteUbergraph_Icon_Clear
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIcon_Clear_C::ExecuteUbergraph_Icon_Clear(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_Clear.Icon_Clear_C.ExecuteUbergraph_Icon_Clear");

	UIcon_Clear_C_ExecuteUbergraph_Icon_Clear_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
