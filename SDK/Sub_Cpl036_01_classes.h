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

// BlueprintGeneratedClass Sub_Cpl036_01.Sub_Cpl036_01_C
// 0x004E (0x050E - 0x04C0)
class ASub_Cpl036_01_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       quest_id;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl036;                                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canceled;                                                 // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class AATDoorVolume*                               Door;                                                     // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	struct FVector                                     area03_door_default_pos;                                  // 0x04E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x04F4(0x0004) MISSED OFFSET
	class AATDoorVolume*                               Door_3;                                                   // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     area18_door_default_pos;                                  // 0x0500(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               is_area_18_010;                                           // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Cpl036_02isEnable;                                        // 0x050D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Cpl036_01.Sub_Cpl036_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void OnCancelSubQuest();
	void OnCancelSubQuestTransition();
	void OnIngameBegan();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void InitEvent();
	void OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId);
	void DoorOpenCloseArea03(const struct FName& DoorName, bool bInDoor);
	void DoorOpenCloseArea18(const struct FName& DoorName, bool bInDoor);
	void ExecuteUbergraph_Sub_Cpl036_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
