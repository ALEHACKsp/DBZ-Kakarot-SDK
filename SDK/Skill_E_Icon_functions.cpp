
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

// Function Skill_E_Icon.Skill_E_Icon_C.ConstructFirstOnly
// (Event, Protected, BlueprintEvent)

void USkill_E_Icon_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_E_Icon.Skill_E_Icon_C.ConstructFirstOnly");

	USkill_E_Icon_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Skill_E_Icon.Skill_E_Icon_C.ExecuteUbergraph_Skill_E_Icon
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void USkill_E_Icon_C::ExecuteUbergraph_Skill_E_Icon(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Skill_E_Icon.Skill_E_Icon_C.ExecuteUbergraph_Skill_E_Icon");

	USkill_E_Icon_C_ExecuteUbergraph_Skill_E_Icon_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
