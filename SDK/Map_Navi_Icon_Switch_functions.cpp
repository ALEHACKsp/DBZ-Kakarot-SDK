
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

// Function Map_Navi_Icon_Switch.Map_Navi_Icon_Switch_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMap_Navi_Icon_Switch_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Navi_Icon_Switch.Map_Navi_Icon_Switch_C.Construct");

	UMap_Navi_Icon_Switch_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Navi_Icon_Switch.Map_Navi_Icon_Switch_C.ExecuteUbergraph_Map_Navi_Icon_Switch
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMap_Navi_Icon_Switch_C::ExecuteUbergraph_Map_Navi_Icon_Switch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Navi_Icon_Switch.Map_Navi_Icon_Switch_C.ExecuteUbergraph_Map_Navi_Icon_Switch");

	UMap_Navi_Icon_Switch_C_ExecuteUbergraph_Map_Navi_Icon_Switch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
