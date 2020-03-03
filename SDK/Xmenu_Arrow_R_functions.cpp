
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

// Function Xmenu_Arrow_R.Xmenu_Arrow_R_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXmenu_Arrow_R_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Arrow_R.Xmenu_Arrow_R_C.Construct");

	UXmenu_Arrow_R_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xmenu_Arrow_R.Xmenu_Arrow_R_C.ExecuteUbergraph_Xmenu_Arrow_R
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXmenu_Arrow_R_C::ExecuteUbergraph_Xmenu_Arrow_R(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Arrow_R.Xmenu_Arrow_R_C.ExecuteUbergraph_Xmenu_Arrow_R");

	UXmenu_Arrow_R_C_ExecuteUbergraph_Xmenu_Arrow_R_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
