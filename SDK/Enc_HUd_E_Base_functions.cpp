
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

// Function Enc_HUd_E_Base.Enc_HUd_E_Base_C.InitSetting
// (Event, Protected, BlueprintEvent)

void UEnc_HUd_E_Base_C::InitSetting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Enc_HUd_E_Base.Enc_HUd_E_Base_C.InitSetting");

	UEnc_HUd_E_Base_C_InitSetting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Enc_HUd_E_Base.Enc_HUd_E_Base_C.ExecuteUbergraph_Enc_HUd_E_Base
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UEnc_HUd_E_Base_C::ExecuteUbergraph_Enc_HUd_E_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Enc_HUd_E_Base.Enc_HUd_E_Base_C.ExecuteUbergraph_Enc_HUd_E_Base");

	UEnc_HUd_E_Base_C_ExecuteUbergraph_Enc_HUd_E_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
