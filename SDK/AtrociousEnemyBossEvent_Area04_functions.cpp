
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

// Function AtrociousEnemyBossEvent_Area04.AtrociousEnemyBossEvent_Area04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAtrociousEnemyBossEvent_Area04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area04.AtrociousEnemyBossEvent_Area04_C.UserConstructionScript");

	AAtrociousEnemyBossEvent_Area04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtrociousEnemyBossEvent_Area04.AtrociousEnemyBossEvent_Area04_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void AAtrociousEnemyBossEvent_Area04_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area04.AtrociousEnemyBossEvent_Area04_C.PhaseEvent");

	AAtrociousEnemyBossEvent_Area04_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtrociousEnemyBossEvent_Area04.AtrociousEnemyBossEvent_Area04_C.ExecuteUbergraph_AtrociousEnemyBossEvent_Area04
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAtrociousEnemyBossEvent_Area04_C::ExecuteUbergraph_AtrociousEnemyBossEvent_Area04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyBossEvent_Area04.AtrociousEnemyBossEvent_Area04_C.ExecuteUbergraph_AtrociousEnemyBossEvent_Area04");

	AAtrociousEnemyBossEvent_Area04_C_ExecuteUbergraph_AtrociousEnemyBossEvent_Area04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
