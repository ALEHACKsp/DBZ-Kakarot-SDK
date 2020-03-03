
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

// Function Xcmn_Header_S.Xcmn_Header_S_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXcmn_Header_S_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Header_S.Xcmn_Header_S_C.Construct");

	UXcmn_Header_S_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xcmn_Header_S.Xcmn_Header_S_C.ExecuteUbergraph_Xcmn_Header_S
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXcmn_Header_S_C::ExecuteUbergraph_Xcmn_Header_S(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Header_S.Xcmn_Header_S_C.ExecuteUbergraph_Xcmn_Header_S");

	UXcmn_Header_S_C_ExecuteUbergraph_Xcmn_Header_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
