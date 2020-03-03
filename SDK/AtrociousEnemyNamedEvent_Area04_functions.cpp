
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

// Function AtrociousEnemyNamedEvent_Area04.AtrociousEnemyNamedEvent_Area04_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAtrociousEnemyNamedEvent_Area04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area04.AtrociousEnemyNamedEvent_Area04_C.UserConstructionScript");

	AAtrociousEnemyNamedEvent_Area04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtrociousEnemyNamedEvent_Area04.AtrociousEnemyNamedEvent_Area04_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void AAtrociousEnemyNamedEvent_Area04_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area04.AtrociousEnemyNamedEvent_Area04_C.PhaseEvent");

	AAtrociousEnemyNamedEvent_Area04_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtrociousEnemyNamedEvent_Area04.AtrociousEnemyNamedEvent_Area04_C.ExecuteUbergraph_AtrociousEnemyNamedEvent_Area04
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAtrociousEnemyNamedEvent_Area04_C::ExecuteUbergraph_AtrociousEnemyNamedEvent_Area04(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area04.AtrociousEnemyNamedEvent_Area04_C.ExecuteUbergraph_AtrociousEnemyNamedEvent_Area04");

	AAtrociousEnemyNamedEvent_Area04_C_ExecuteUbergraph_AtrociousEnemyNamedEvent_Area04_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
