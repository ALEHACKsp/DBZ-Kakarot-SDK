
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

// Function Battle_Tips_List.Battle_Tips_List_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UBattle_Tips_List_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Tips_List.Battle_Tips_List_C.Construct");

	UBattle_Tips_List_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Battle_Tips_List.Battle_Tips_List_C.ExecuteUbergraph_Battle_Tips_List
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBattle_Tips_List_C::ExecuteUbergraph_Battle_Tips_List(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Battle_Tips_List.Battle_Tips_List_C.ExecuteUbergraph_Battle_Tips_List");

	UBattle_Tips_List_C_ExecuteUbergraph_Battle_Tips_List_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
