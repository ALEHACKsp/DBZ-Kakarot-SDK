
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

// Function Quest_Main_Clear_Bar.Quest_Main_Clear_Bar_C.Shain_In
// (BlueprintCallable, BlueprintEvent)

void UQuest_Main_Clear_Bar_C::Shain_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Main_Clear_Bar.Quest_Main_Clear_Bar_C.Shain_In");

	UQuest_Main_Clear_Bar_C_Shain_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Main_Clear_Bar.Quest_Main_Clear_Bar_C.ExecuteUbergraph_Quest_Main_Clear_Bar
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuest_Main_Clear_Bar_C::ExecuteUbergraph_Quest_Main_Clear_Bar(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Main_Clear_Bar.Quest_Main_Clear_Bar_C.ExecuteUbergraph_Quest_Main_Clear_Bar");

	UQuest_Main_Clear_Bar_C_ExecuteUbergraph_Quest_Main_Clear_Bar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
