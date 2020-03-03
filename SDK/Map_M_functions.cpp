
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

// Function Map_M.Map_M_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UMap_M_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_M.Map_M_C.Construct");

	UMap_M_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_M.Map_M_C.Off_Map_S
// (BlueprintCallable, BlueprintEvent)

void UMap_M_C::Off_Map_S()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_M.Map_M_C.Off_Map_S");

	UMap_M_C_Off_Map_S_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_M.Map_M_C.In_Header
// (BlueprintCallable, BlueprintEvent)

void UMap_M_C::In_Header()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_M.Map_M_C.In_Header");

	UMap_M_C_In_Header_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_M.Map_M_C.Out_Header
// (BlueprintCallable, BlueprintEvent)

void UMap_M_C::Out_Header()
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_M.Map_M_C.Out_Header");

	UMap_M_C_Out_Header_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Map_M.Map_M_C.ExecuteUbergraph_Map_M
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMap_M_C::ExecuteUbergraph_Map_M(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Map_M.Map_M_C.ExecuteUbergraph_Map_M");

	UMap_M_C_ExecuteUbergraph_Map_M_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
