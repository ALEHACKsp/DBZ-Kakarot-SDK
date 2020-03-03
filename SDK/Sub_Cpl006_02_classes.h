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

// BlueprintGeneratedClass Sub_Cpl006_02.Sub_Cpl006_02_C
// 0x0061 (0x0521 - 0x04C0)
class ASub_Cpl006_02_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       quest_id;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl006;                                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl006_01;                                                // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl006_02;                                                // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl007;                                                   // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl032;                                                   // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl059;                                                   // 0x04F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl059_02;                                                // 0x0500(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl059_03;                                                // 0x0508(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Npc007;                                                   // 0x0510(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Npc008;                                                   // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canceled;                                                 // 0x0520(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Cpl006_02.Sub_Cpl006_02_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void OnCancelSubQuest();
	void OnCancelSubQuestTransition();
	void OnIngameBegan();
	void OnActorBeginOverlap_Event_1(class AActor* OverlappedActor, class AActor* OtherActor);
	void ExecuteUbergraph_Sub_Cpl006_02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
