
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

// Function BF_GetLightVector.BF_GetLightVector_C.GetLightVector
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBF_GetLightVector_C::STATIC_GetLightVector(class UObject* __WorldContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function BF_GetLightVector.BF_GetLightVector_C.GetLightVector");

	UBF_GetLightVector_C_GetLightVector_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
