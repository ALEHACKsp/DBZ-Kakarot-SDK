
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

// Function Quest_Main_Clear_Rank.Quest_Main_Clear_Rank_C.PrintTransform
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Duration                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuest_Main_Clear_Rank_C::PrintTransform(float Duration)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Main_Clear_Rank.Quest_Main_Clear_Rank_C.PrintTransform");

	UQuest_Main_Clear_Rank_C_PrintTransform_Params params;
	params.Duration = Duration;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
