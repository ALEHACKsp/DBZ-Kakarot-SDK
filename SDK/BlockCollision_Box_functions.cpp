
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

// Function BlockCollision_Box.BlockCollision_Box_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABlockCollision_Box_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BlockCollision_Box.BlockCollision_Box_C.UserConstructionScript");

	ABlockCollision_Box_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlockCollision_Box.BlockCollision_Box_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                  OtherActor                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlockCollision_Box_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlockCollision_Box.BlockCollision_Box_C.ReceiveActorBeginOverlap");

	ABlockCollision_Box_C_ReceiveActorBeginOverlap_Params params;
	params.OtherActor = OtherActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BlockCollision_Box.BlockCollision_Box_C.ExecuteUbergraph_BlockCollision_Box
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABlockCollision_Box_C::ExecuteUbergraph_BlockCollision_Box(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BlockCollision_Box.BlockCollision_Box_C.ExecuteUbergraph_BlockCollision_Box");

	ABlockCollision_Box_C_ExecuteUbergraph_BlockCollision_Box_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
