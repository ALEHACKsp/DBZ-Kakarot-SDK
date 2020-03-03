
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

// Function AtrociousEnemyBossEvent_Area01.AtrociousEnemyBossEvent_Area01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAtrociousEnemyBossEvent_Area01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area01.AtrociousEnemyBossEvent_Area01_C.UserConstructionScript");

	AAtrociousEnemyBossEvent_Area01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtrociousEnemyBossEvent_Area01.AtrociousEnemyBossEvent_Area01_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void AAtrociousEnemyBossEvent_Area01_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area01.AtrociousEnemyBossEvent_Area01_C.PhaseEvent");

	AAtrociousEnemyBossEvent_Area01_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtrociousEnemyBossEvent_Area01.AtrociousEnemyBossEvent_Area01_C.ExecuteUbergraph_AtrociousEnemyBossEvent_Area01
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAtrociousEnemyBossEvent_Area01_C::ExecuteUbergraph_AtrociousEnemyBossEvent_Area01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area01.AtrociousEnemyBossEvent_Area01_C.ExecuteUbergraph_AtrociousEnemyBossEvent_Area01");

	AAtrociousEnemyBossEvent_Area01_C_ExecuteUbergraph_AtrociousEnemyBossEvent_Area01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
