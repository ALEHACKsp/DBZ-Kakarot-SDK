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

// BlueprintGeneratedClass MineralMiningPointRare_BP.MineralMiningPointRare_BP_C
// 0x0010 (0x05B0 - 0x05A0)
class AMineralMiningPointRare_BP_C : public AMineralMiningPointRare
{
public:
	class UBillboardComponent*                         Billboard;                                                // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            DamageCollision;                                          // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MineralMiningPointRare_BP.MineralMiningPointRare_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
