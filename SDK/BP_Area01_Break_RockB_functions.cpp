
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

// Function BP_Area01_Break_RockB.BP_Area01_Break_RockB_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Area01_Break_RockB_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Area01_Break_RockB.BP_Area01_Break_RockB_C.UserConstructionScript");

	ABP_Area01_Break_RockB_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
