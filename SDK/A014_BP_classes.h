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

// BlueprintGeneratedClass A014_BP.A014_BP_C
// 0x0018 (0x0478 - 0x0460)
class AA014_BP_C : public AAnimalMob_Pawn_C
{
public:
	class UWolf_Component*                             WolfComponent;                                            // 0x0460(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageCollision;                                          // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UATNavigationInvokerComponent*               ATNavigationInvoker;                                      // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A014_BP.A014_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
