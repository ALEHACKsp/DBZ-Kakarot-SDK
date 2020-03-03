
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

// Function Xmenu_Bg.Xmenu_Bg_C.In_Db01
// (BlueprintCallable, BlueprintEvent)

void UXmenu_Bg_C::In_Db01()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Bg.Xmenu_Bg_C.In_Db01");

	UXmenu_Bg_C_In_Db01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xmenu_Bg.Xmenu_Bg_C.In_Db00
// (BlueprintCallable, BlueprintEvent)

void UXmenu_Bg_C::In_Db00()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Bg.Xmenu_Bg_C.In_Db00");

	UXmenu_Bg_C_In_Db00_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xmenu_Bg.Xmenu_Bg_C.In_Db02
// (BlueprintCallable, BlueprintEvent)

void UXmenu_Bg_C::In_Db02()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Bg.Xmenu_Bg_C.In_Db02");

	UXmenu_Bg_C_In_Db02_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xmenu_Bg.Xmenu_Bg_C.In_Db03
// (BlueprintCallable, BlueprintEvent)

void UXmenu_Bg_C::In_Db03()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Bg.Xmenu_Bg_C.In_Db03");

	UXmenu_Bg_C_In_Db03_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xmenu_Bg.Xmenu_Bg_C.In_Db04
// (BlueprintCallable, BlueprintEvent)

void UXmenu_Bg_C::In_Db04()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Bg.Xmenu_Bg_C.In_Db04");

	UXmenu_Bg_C_In_Db04_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xmenu_Bg.Xmenu_Bg_C.ExecuteUbergraph_Xmenu_Bg
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXmenu_Bg_C::ExecuteUbergraph_Xmenu_Bg(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Bg.Xmenu_Bg_C.ExecuteUbergraph_Xmenu_Bg");

	UXmenu_Bg_C_ExecuteUbergraph_Xmenu_Bg_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
