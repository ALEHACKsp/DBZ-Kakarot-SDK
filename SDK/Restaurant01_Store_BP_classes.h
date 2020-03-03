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

// BlueprintGeneratedClass Restaurant01_Store_BP.Restaurant01_Store_BP_C
// 0x0028 (0x0C18 - 0x0BF0)
class ARestaurant01_Store_BP_C : public AQuestCharacter
{
public:
	class UShopComponent*                              Shop;                                                     // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UATMapIconComponent*                         ATMapIcon;                                                // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAT_LightTowerEffectComponent*               AT_LightTowerEffect;                                      // 0x0C00(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UQuestActorFindListComponent*                QuestActorFindList;                                       // 0x0C08(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNpcTalkComponent*                           NPCTALK;                                                  // 0x0C10(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Restaurant01_Store_BP.Restaurant01_Store_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
