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

// BlueprintGeneratedClass DragonBallStaticActor.DragonBallStaticActor_C
// 0x0040 (0x03E8 - 0x03A8)
class ADragonBallStaticActor_C : public ADragonBallStaticActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            SphereCollision;                                          // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleSystem;                                           // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BallIdx;                                                  // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    HitDB_Send;                                               // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UntouchDB_Send;                                           // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DragonBallStaticActor.DragonBallStaticActor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	void ExecuteUbergraph_DragonBallStaticActor(int EntryPoint);
	void UntouchDB_Send__DelegateSignature();
	void HitDB_Send__DelegateSignature(int MyDBIdx, class AActor* BallActor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
