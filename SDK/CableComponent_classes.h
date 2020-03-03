#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class CableComponent.CableActor
// 0x0008 (0x0340 - 0x0338)
class ACableActor : public AActor
{
public:
	class UCableComponent*                             CableComponent;                                           // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

};


// Class CableComponent.CableComponent
// 0x0080 (0x0610 - 0x0590)
class UCableComponent : public UMeshComponent
{
public:
	bool                                               bAttachStart;                                             // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachEnd;                                               // 0x0591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0592(0x0006) MISSED OFFSET
	struct FComponentReference                         AttachEndTo;                                              // 0x0598(0x0018) (Edit)
	struct FName                                       AttachEndToSocketName;                                    // 0x05B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndLocation;                                              // 0x05B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableLength;                                              // 0x05C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSegments;                                              // 0x05C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              SubstepTime;                                              // 0x05CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SolverIterations;                                         // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableStiffness;                                         // 0x05D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x05D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x05D6(0x0002) MISSED OFFSET
	float                                              CollisionFriction;                                        // 0x05D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CableForce;                                               // 0x05DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableGravityScale;                                        // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CableWidth;                                               // 0x05EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                NumSides;                                                 // 0x05F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TileMaterial;                                             // 0x05F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x05F8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}


	void SetAttachEndTo(class AActor* Actor, const struct FName& ComponentProperty, const struct FName& SocketName);
	void GetCableParticleLocations(TArray<struct FVector>* Locations);
	class USceneComponent* GetAttachedComponent();
	class AActor* GetAttachedActor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
