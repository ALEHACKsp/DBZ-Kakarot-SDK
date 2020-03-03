
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

// Function Battle_Cutin.Battle_Cutin_C.RequestResultAnim
// (BlueprintCallable, BlueprintEvent)

void UBattle_Cutin_C::RequestResultAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Cutin.Battle_Cutin_C.RequestResultAnim");

	UBattle_Cutin_C_RequestResultAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Battle_Cutin.Battle_Cutin_C.ExecuteUbergraph_Battle_Cutin
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattle_Cutin_C::ExecuteUbergraph_Battle_Cutin(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Cutin.Battle_Cutin_C.ExecuteUbergraph_Battle_Cutin");

	UBattle_Cutin_C_ExecuteUbergraph_Battle_Cutin_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
