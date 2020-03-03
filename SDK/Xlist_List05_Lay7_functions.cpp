
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

// Function Xlist_List05_Lay7.Xlist_List05_Lay7_C.Get_Img_List01_ColorAndOpacity_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UXlist_List05_Lay7_C::Get_Img_List01_ColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_List05_Lay7.Xlist_List05_Lay7_C.Get_Img_List01_ColorAndOpacity_2");

	UXlist_List05_Lay7_C_Get_Img_List01_ColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xlist_List05_Lay7.Xlist_List05_Lay7_C.Get_Img_List01_ColorAndOpacity_1
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UXlist_List05_Lay7_C::Get_Img_List01_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_List05_Lay7.Xlist_List05_Lay7_C.Get_Img_List01_ColorAndOpacity_1");

	UXlist_List05_Lay7_C_Get_Img_List01_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xlist_List05_Lay7.Xlist_List05_Lay7_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UXlist_List05_Lay7_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_List05_Lay7.Xlist_List05_Lay7_C.Construct");

	UXlist_List05_Lay7_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Xlist_List05_Lay7.Xlist_List05_Lay7_C.ExecuteUbergraph_Xlist_List05_Lay7
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UXlist_List05_Lay7_C::ExecuteUbergraph_Xlist_List05_Lay7(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Xlist_List05_Lay7.Xlist_List05_Lay7_C.ExecuteUbergraph_Xlist_List05_Lay7");

	UXlist_List05_Lay7_C_ExecuteUbergraph_Xlist_List05_Lay7_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
