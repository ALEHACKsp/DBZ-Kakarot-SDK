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

// BlueprintGeneratedClass Sub_Cpl026_01_01.Sub_Cpl026_01_01_C
// 0x0038 (0x04F8 - 0x04C0)
class ASub_Cpl026_01_01_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       quest_id;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       Cpl026;                                                   // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               canceled;                                                 // 0x04D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x04D9(0x0007) MISSED OFFSET
	class AQuestGeneral_BP_C*                          Sub_Cpl026_01_02;                                         // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AQuestGeneral_BP_C*                          Sub_Cpl026_01_03;                                         // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AQuestGeneral_BP_C*                          Sub_Cpl026_01_04;                                         // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Cpl026_01_01.Sub_Cpl026_01_01_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void OnCancelSubQuest();
	void OnCancelSubQuestTransition();
	void OnOpenSimpleTalk(const struct FName& SimpleTalkId, const struct FName& messageId);
	void OnIngameBegan();
	void OnBeginPlayed();
	void OnBeginPlayed2();
	void ExecuteUbergraph_Sub_Cpl026_01_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
