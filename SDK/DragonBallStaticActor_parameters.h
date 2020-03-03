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

// Function DragonBallStaticActor.DragonBallStaticActor_C.UserConstructionScript
struct ADragonBallStaticActor_C_UserConstructionScript_Params
{
};

// Function DragonBallStaticActor.DragonBallStaticActor_C.ReceiveHit
struct ADragonBallStaticActor_C_ReceiveHit_Params
{
	class UPrimitiveComponent*                         MyComp;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      Other;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bSelfMoved;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     HitNormal;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector                                     NormalImpulse;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult                                  Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function DragonBallStaticActor.DragonBallStaticActor_C.ExecuteUbergraph_DragonBallStaticActor
struct ADragonBallStaticActor_C_ExecuteUbergraph_DragonBallStaticActor_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function DragonBallStaticActor.DragonBallStaticActor_C.UntouchDB_Send__DelegateSignature
struct ADragonBallStaticActor_C_UntouchDB_Send__DelegateSignature_Params
{
};

// Function DragonBallStaticActor.DragonBallStaticActor_C.HitDB_Send__DelegateSignature
struct ADragonBallStaticActor_C_HitDB_Send__DelegateSignature_Params
{
	int                                                MyDBIdx;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      BallActor;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
