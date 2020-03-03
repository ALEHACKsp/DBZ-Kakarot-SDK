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

// BlueprintGeneratedClass EVT_AtrociousEnemy_030.EVT_AtrociousEnemy_030_C
// 0x0038 (0x04F8 - 0x04C0)
class AEVT_AtrociousEnemy_030_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FName                                       quest_id;                                                 // 0x04C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       event_battle_id;                                          // 0x04D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AtrociousEnemy_Cpl012;                                    // 0x04D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AtrociousEnemy_Cpl013;                                    // 0x04E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AtrociousEnemy_Cpl068;                                    // 0x04E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FName                                       AtrociousEnemy_Itm126;                                    // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EVT_AtrociousEnemy_030.EVT_AtrociousEnemy_030_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void OnLoadCompleted(int GenericFlg);
	void ExecuteUbergraph_EVT_AtrociousEnemy_030(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
