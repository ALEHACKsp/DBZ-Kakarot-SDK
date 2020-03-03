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

// BlueprintGeneratedClass Sub_Npc019_01.Sub_Npc019_01_C
// 0x0051 (0x0501 - 0x04B0)
class ASub_Npc019_01_C : public AQuest_General
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       quest_id;                                                 // 0x04C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       arrival_name;                                             // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Npc019;                                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl059;                                                   // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl002;                                                   // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Mob01;                                                    // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Mob02;                                                    // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Mob03;                                                    // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canceled;                                                 // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Npc019_01.Sub_Npc019_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void OnCancelSubQuest();
	void OnCancelSubQuestTransition();
	void OnIngameBegan();
	void OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId);
	void ExecuteUbergraph_Sub_Npc019_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
