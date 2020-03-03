
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

// Function AB_C056.AB_C056_C.ExecuteUbergraph_AB_C056
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAB_C056_C::ExecuteUbergraph_AB_C056(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AB_C056.AB_C056_C.ExecuteUbergraph_AB_C056");

	UAB_C056_C_ExecuteUbergraph_AB_C056_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
