
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

// Function Cutin_Lvup.Cutin_Lvup_C.ConstructFirstOnly
// (Event, Protected, BlueprintEvent)

void UCutin_Lvup_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Cutin_Lvup.Cutin_Lvup_C.ConstructFirstOnly");

	UCutin_Lvup_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Cutin_Lvup.Cutin_Lvup_C.ExecuteUbergraph_Cutin_Lvup
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCutin_Lvup_C::ExecuteUbergraph_Cutin_Lvup(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Cutin_Lvup.Cutin_Lvup_C.ExecuteUbergraph_Cutin_Lvup");

	UCutin_Lvup_C_ExecuteUbergraph_Cutin_Lvup_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
