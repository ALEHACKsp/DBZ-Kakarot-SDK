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

// BlueprintGeneratedClass QuestCharacterBase.QuestCharacterBase_C
// 0x0010 (0x0C00 - 0x0BF0)
class AQuestCharacterBase_C : public AQuestCharacter
{
public:
	class UQuestActorFindListComponent*                QuestActorFindList;                                       // 0x0BF0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNpcTalkComponent*                           NPCTALK;                                                  // 0x0BF8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestCharacterBase.QuestCharacterBase_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
