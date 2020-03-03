
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

// Function Icon_New.Icon_New_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UIcon_New_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_New.Icon_New_C.Construct");

	UIcon_New_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Icon_New.Icon_New_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          InDeltaTime                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIcon_New_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_New.Icon_New_C.Tick");

	UIcon_New_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Icon_New.Icon_New_C.ExecuteUbergraph_Icon_New
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UIcon_New_C::ExecuteUbergraph_Icon_New(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Icon_New.Icon_New_C.ExecuteUbergraph_Icon_New");

	UIcon_New_C_ExecuteUbergraph_Icon_New_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
