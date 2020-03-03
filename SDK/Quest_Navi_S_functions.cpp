
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

// Function Quest_Navi_S.Quest_Navi_S_C.ConstructFirstOnly
// (BlueprintCallable, BlueprintEvent)

void UQuest_Navi_S_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Navi_S.Quest_Navi_S_C.ConstructFirstOnly");

	UQuest_Navi_S_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Navi_S.Quest_Navi_S_C.ExecuteUbergraph_Quest_Navi_S
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuest_Navi_S_C::ExecuteUbergraph_Quest_Navi_S(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Navi_S.Quest_Navi_S_C.ExecuteUbergraph_Quest_Navi_S");

	UQuest_Navi_S_C_ExecuteUbergraph_Quest_Navi_S_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
