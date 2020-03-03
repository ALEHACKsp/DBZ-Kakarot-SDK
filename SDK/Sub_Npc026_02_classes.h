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

// BlueprintGeneratedClass Sub_Npc026_02.Sub_Npc026_02_C
// 0x0092 (0x0552 - 0x04C0)
class ASub_Npc026_02_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       quest_id;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl002;                                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Npc026;                                                   // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Npc030;                                                   // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class AATDoorVolume*                               Door;                                                     // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  DoorTransform;                                            // 0x04F0(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FTransform                                  door_pos;                                                 // 0x0520(0x0030) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               canceled;                                                 // 0x0550(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_area_18_010;                                           // 0x0551(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Npc026_02.Sub_Npc026_02_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void OnCancelSubQuest();
	void ChangeActorEnabele();
	void OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId);
	void OnCancelSubQuestTransition();
	void OnIngameBegan();
	void DoorOpenCloseArea03(const struct FName& DoorName, bool bInDoor);
	void DoorOpenCloseArea18(const struct FName& DoorName, bool bInDoor);
	void ExecuteUbergraph_Sub_Npc026_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
