
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

// Function Racegame_Receptionist01_BP.Racegame_Receptionist01_BP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ARacegame_Receptionist01_BP_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Racegame_Receptionist01_BP.Racegame_Receptionist01_BP_C.UserConstructionScript");

	ARacegame_Receptionist01_BP_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif