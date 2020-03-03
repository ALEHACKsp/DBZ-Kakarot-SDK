#pragma once

#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function BlockCollision_Box.BlockCollision_Box_C.UserConstructionScript
struct ABlockCollision_Box_C_UserConstructionScript_Params
{
};

// Function BlockCollision_Box.BlockCollision_Box_C.ReceiveActorBeginOverlap
struct ABlockCollision_Box_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BlockCollision_Box.BlockCollision_Box_C.ExecuteUbergraph_BlockCollision_Box
struct ABlockCollision_Box_C_ExecuteUbergraph_BlockCollision_Box_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
