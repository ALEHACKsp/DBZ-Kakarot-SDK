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

// BlueprintGeneratedClass Sub_Npc004_02.Sub_Npc004_02_C
// 0x0021 (0x04E1 - 0x04C0)
class ASub_Npc004_02_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       quest_id;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       quest_npc;                                                // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       arrival_name;                                             // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canceled;                                                 // 0x04E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Npc004_02.Sub_Npc004_02_C");
		return ptr;
	}


	void AcquisitionName(class UQuestManager** ReturnActor, struct FName* ReturnName);
	void UserConstructionScript();
	void PhaseEvent();
	void OnCancelSubQuest();
	void OnCancelSubQuestTransition();
	void OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId);
	void OnIngameBegan();
	void ExecuteUbergraph_Sub_Npc004_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
