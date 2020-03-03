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

// BlueprintGeneratedClass AT_Character_BP.AT_Character_BP_C
// 0x0039 (0x0FD9 - 0x0FA0)
class AAT_Character_BP_C : public AAT_Character
{
public:
	class UATCharacterDamageCollision*                 ATCharacterDamageCollision;                               // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    TerrainDamageEffect;                                      // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      WaterPostProcess;                                         // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	bool                                               EntrySPawnInfoOn;                                         // 0x0FB8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0FB9(0x0003) MISSED OFFSET
	float                                              TEffectTimer;                                             // 0x0FBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TDLastPosition;                                           // 0x0FC0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ChaseFlg;                                                 // 0x0FCC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0FCD(0x0003) MISSED OFFSET
	class UObject*                                     TerrainDMng;                                              // 0x0FD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      PoundingDamageType;                                       // 0x0FD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AT_Character_BP.AT_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
