
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

// Function Xcmn_MultiLineText.Xcmn_MultiLineText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXcmn_MultiLineText_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_MultiLineText.Xcmn_MultiLineText_C.Construct");

	UXcmn_MultiLineText_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xcmn_MultiLineText.Xcmn_MultiLineText_C.ExecuteUbergraph_Xcmn_MultiLineText
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXcmn_MultiLineText_C::ExecuteUbergraph_Xcmn_MultiLineText(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_MultiLineText.Xcmn_MultiLineText_C.ExecuteUbergraph_Xcmn_MultiLineText");

	UXcmn_MultiLineText_C_ExecuteUbergraph_Xcmn_MultiLineText_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
