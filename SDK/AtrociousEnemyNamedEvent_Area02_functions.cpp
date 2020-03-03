
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

// Function AtrociousEnemyNamedEvent_Area02.AtrociousEnemyNamedEvent_Area02_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAtrociousEnemyNamedEvent_Area02_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area02.AtrociousEnemyNamedEvent_Area02_C.UserConstructionScript");

	AAtrociousEnemyNamedEvent_Area02_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtrociousEnemyNamedEvent_Area02.AtrociousEnemyNamedEvent_Area02_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void AAtrociousEnemyNamedEvent_Area02_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area02.AtrociousEnemyNamedEvent_Area02_C.PhaseEvent");

	AAtrociousEnemyNamedEvent_Area02_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AtrociousEnemyNamedEvent_Area02.AtrociousEnemyNamedEvent_Area02_C.ExecuteUbergraph_AtrociousEnemyNamedEvent_Area02
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAtrociousEnemyNamedEvent_Area02_C::ExecuteUbergraph_AtrociousEnemyNamedEvent_Area02(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AtrociousEnemyNamedEvent_Area02.AtrociousEnemyNamedEvent_Area02_C.ExecuteUbergraph_AtrociousEnemyNamedEvent_Area02");

	AAtrociousEnemyNamedEvent_Area02_C_ExecuteUbergraph_AtrociousEnemyNamedEvent_Area02_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
