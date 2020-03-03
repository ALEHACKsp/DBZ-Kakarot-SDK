
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

// Function Map_Detail_Txt.Map_Detail_Txt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMap_Detail_Txt_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Detail_Txt.Map_Detail_Txt_C.Construct");

	UMap_Detail_Txt_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_Detail_Txt.Map_Detail_Txt_C.ExecuteUbergraph_Map_Detail_Txt
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMap_Detail_Txt_C::ExecuteUbergraph_Map_Detail_Txt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_Detail_Txt.Map_Detail_Txt_C.ExecuteUbergraph_Map_Detail_Txt");

	UMap_Detail_Txt_C_ExecuteUbergraph_Map_Detail_Txt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
