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

// BlueprintGeneratedClass Sub_Cpl026_01_03.Sub_Cpl026_01_03_C
// 0x0028 (0x04E8 - 0x04C0)
class ASub_Cpl026_01_03_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       event_battle_id;                                          // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               Enemy;                                                    // 0x04D0(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FName                                       quest_id;                                                 // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sub_Cpl026_01_03.Sub_Cpl026_01_03_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void OnIngameBegan();
	void ExecuteUbergraph_Sub_Cpl026_01_03(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
