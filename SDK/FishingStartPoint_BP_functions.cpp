
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

// Function FishingStartPoint_BP.FishingStartPoint_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AFishingStartPoint_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function FishingStartPoint_BP.FishingStartPoint_BP_C.UserConstructionScript");

	AFishingStartPoint_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
