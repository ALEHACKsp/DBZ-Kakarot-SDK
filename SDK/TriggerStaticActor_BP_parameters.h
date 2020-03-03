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

// Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.UserConstructionScript
struct ATriggerStaticActor_BP_C_UserConstructionScript_Params
{
};

// Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ReceiveActorBeginOverlap
struct ATriggerStaticActor_BP_C_ReceiveActorBeginOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ReceiveActorEndOverlap
struct ATriggerStaticActor_BP_C_ReceiveActorEndOverlap_Params
{
	class AActor*                                      OtherActor;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function TriggerStaticActor_BP.TriggerStaticActor_BP_C.ExecuteUbergraph_TriggerStaticActor_BP
struct ATriggerStaticActor_BP_C_ExecuteUbergraph_TriggerStaticActor_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
