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

// BlueprintGeneratedClass A001_BP.A001_BP_C
// 0x0098 (0x04F8 - 0x0460)
class AA001_BP_C : public AAnimalMob_Pawn_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0460(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                            LeftFootCollision;                                        // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            RightFootCollision;                                       // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            LeftArmCollision;                                         // 0x0478(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            RightArmCollision;                                        // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            LeftLegCollision;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            RightLegCollision;                                        // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            MouthCollision;                                           // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BaseTailCollision;                                        // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCapsuleComponent*                           TailCapsuleCollision;                                     // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UATMapIconComponent*                         ATMapIcon;                                                // 0x04B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageCollision;                                          // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USpringArmComponent*                         SpringArm;                                                // 0x04C0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            Camera;                                                   // 0x04C8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            HeadCollision;                                            // 0x04D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            BodyCollision;                                            // 0x04D8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDinosaur_Component*                         DinosaurComponent;                                        // 0x04E0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UKiSearchComponent*                          KiSearch;                                                 // 0x04E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UATNavigationInvokerComponent*               ATNavigationInvoker;                                      // 0x04F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A001_BP.A001_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_A001_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
