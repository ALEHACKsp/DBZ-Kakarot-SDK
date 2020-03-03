
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

// Function C01_EVT_MAIN_01004.C01_EVT_MAIN_01004_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AC01_EVT_MAIN_01004_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01004.C01_EVT_MAIN_01004_C.UserConstructionScript");

	AC01_EVT_MAIN_01004_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C01_EVT_MAIN_01004.C01_EVT_MAIN_01004_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void AC01_EVT_MAIN_01004_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01004.C01_EVT_MAIN_01004_C.PhaseEvent");

	AC01_EVT_MAIN_01004_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C01_EVT_MAIN_01004.C01_EVT_MAIN_01004_C.ExecuteUbergraph_C01_EVT_MAIN_01004
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AC01_EVT_MAIN_01004_C::ExecuteUbergraph_C01_EVT_MAIN_01004(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_EVT_MAIN_01004.C01_EVT_MAIN_01004_C.ExecuteUbergraph_C01_EVT_MAIN_01004");

	AC01_EVT_MAIN_01004_C_ExecuteUbergraph_C01_EVT_MAIN_01004_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
