
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

// Function Xcmn_Subtitles.Xcmn_Subtitles_C.ConstructFirstOnly_2
// (BlueprintCallable, BlueprintEvent)

void UXcmn_Subtitles_C::ConstructFirstOnly_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Subtitles.Xcmn_Subtitles_C.ConstructFirstOnly_2");

	UXcmn_Subtitles_C_ConstructFirstOnly_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xcmn_Subtitles.Xcmn_Subtitles_C.ExecuteUbergraph_Xcmn_Subtitles
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXcmn_Subtitles_C::ExecuteUbergraph_Xcmn_Subtitles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xcmn_Subtitles.Xcmn_Subtitles_C.ExecuteUbergraph_Xcmn_Subtitles");

	UXcmn_Subtitles_C_ExecuteUbergraph_Xcmn_Subtitles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
