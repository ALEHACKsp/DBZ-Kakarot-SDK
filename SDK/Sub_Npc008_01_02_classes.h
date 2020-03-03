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

// BlueprintGeneratedClass Sub_Npc008_01_02.Sub_Npc008_01_02_C
// 0x0018 (0x04D8 - 0x04C0)
class ASub_Npc008_01_02_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       quest_id;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Mob;                                                      // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Npc008_01_02.Sub_Npc008_01_02_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void OnIngameBegan();
	void ExecuteUbergraph_Sub_Npc008_01_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
