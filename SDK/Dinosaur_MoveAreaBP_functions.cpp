
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

// Function Dinosaur_MoveAreaBP.Dinosaur_MoveAreaBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ADinosaur_MoveAreaBP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dinosaur_MoveAreaBP.Dinosaur_MoveAreaBP_C.UserConstructionScript");

	ADinosaur_MoveAreaBP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
