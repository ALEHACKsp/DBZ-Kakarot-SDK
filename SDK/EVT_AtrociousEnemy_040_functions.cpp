
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

// Function EVT_AtrociousEnemy_040.EVT_AtrociousEnemy_040_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AEVT_AtrociousEnemy_040_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVT_AtrociousEnemy_040.EVT_AtrociousEnemy_040_C.UserConstructionScript");

	AEVT_AtrociousEnemy_040_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVT_AtrociousEnemy_040.EVT_AtrociousEnemy_040_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void AEVT_AtrociousEnemy_040_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function EVT_AtrociousEnemy_040.EVT_AtrociousEnemy_040_C.PhaseEvent");

	AEVT_AtrociousEnemy_040_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function EVT_AtrociousEnemy_040.EVT_AtrociousEnemy_040_C.ExecuteUbergraph_EVT_AtrociousEnemy_040
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEVT_AtrociousEnemy_040_C::ExecuteUbergraph_EVT_AtrociousEnemy_040(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EVT_AtrociousEnemy_040.EVT_AtrociousEnemy_040_C.ExecuteUbergraph_EVT_AtrociousEnemy_040");

	AEVT_AtrociousEnemy_040_C_ExecuteUbergraph_EVT_AtrociousEnemy_040_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
