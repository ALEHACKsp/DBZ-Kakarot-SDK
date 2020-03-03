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

// BlueprintGeneratedClass BP_Area01_Break_RockB.BP_Area01_Break_RockB_C
// 0x0008 (0x05A8 - 0x05A0)
class ABP_Area01_Break_RockB_C : public AWideUseBreakablePoint
{
public:
	class USphereComponent*                            DamageCollision;                                          // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Area01_Break_RockB.BP_Area01_Break_RockB_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
