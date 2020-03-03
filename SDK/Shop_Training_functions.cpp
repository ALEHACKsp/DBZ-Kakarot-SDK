
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

// Function Shop_Training.Shop_Training_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UShop_Training_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Training.Shop_Training_C.Construct");

	UShop_Training_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shop_Training.Shop_Training_C.In_Header_Bg
// (BlueprintCallable, BlueprintEvent)

void UShop_Training_C::In_Header_Bg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Training.Shop_Training_C.In_Header_Bg");

	UShop_Training_C_In_Header_Bg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shop_Training.Shop_Training_C.Out_Header
// (BlueprintCallable, BlueprintEvent)

void UShop_Training_C::Out_Header()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Training.Shop_Training_C.Out_Header");

	UShop_Training_C_Out_Header_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shop_Training.Shop_Training_C.Out_Bg
// (BlueprintCallable, BlueprintEvent)

void UShop_Training_C::Out_Bg()
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Training.Shop_Training_C.Out_Bg");

	UShop_Training_C_Out_Bg_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Shop_Training.Shop_Training_C.ExecuteUbergraph_Shop_Training
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UShop_Training_C::ExecuteUbergraph_Shop_Training(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Shop_Training.Shop_Training_C.ExecuteUbergraph_Shop_Training");

	UShop_Training_C_ExecuteUbergraph_Shop_Training_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
