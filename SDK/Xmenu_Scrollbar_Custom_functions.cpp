
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

// Function Xmenu_Scrollbar_Custom.Xmenu_Scrollbar_Custom_C.Get_Img_List01_ColorAndOpacity_2
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FLinearColor UXmenu_Scrollbar_Custom_C::Get_Img_List01_ColorAndOpacity_2()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Scrollbar_Custom.Xmenu_Scrollbar_Custom_C.Get_Img_List01_ColorAndOpacity_2");

	UXmenu_Scrollbar_Custom_C_Get_Img_List01_ColorAndOpacity_2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Xmenu_Scrollbar_Custom.Xmenu_Scrollbar_Custom_C.Get_Img_List01_ColorAndOpacity_1
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UXmenu_Scrollbar_Custom_C::Get_Img_List01_ColorAndOpacity_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Xmenu_Scrollbar_Custom.Xmenu_Scrollbar_Custom_C.Get_Img_List01_ColorAndOpacity_1");

	UXmenu_Scrollbar_Custom_C_Get_Img_List01_ColorAndOpacity_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
