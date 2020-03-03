
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

// Function AnimalMob_Pawn.AnimalMob_Pawn_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AAnimalMob_Pawn_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimalMob_Pawn.AnimalMob_Pawn_C.UserConstructionScript");

	AAnimalMob_Pawn_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
