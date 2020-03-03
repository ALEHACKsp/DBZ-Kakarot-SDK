
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

// Function Info_Log_BarZ.Info_Log_BarZ_C.NewFunction_1
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UImage*                  self2                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UInfo_Log_BarZ_C::NewFunction_1(class UImage* self2)
{
	static auto fn = UObject::FindObject<UFunction>("Function Info_Log_BarZ.Info_Log_BarZ_C.NewFunction_1");

	UInfo_Log_BarZ_C_NewFunction_1_Params params;
	params.self2 = self2;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
