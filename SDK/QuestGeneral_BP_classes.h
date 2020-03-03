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

// BlueprintGeneratedClass QuestGeneral_BP.QuestGeneral_BP_C
// 0x0010 (0x04C0 - 0x04B0)
class AQuestGeneral_BP_C : public AQuest_General
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04B0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestGeneral_BP.QuestGeneral_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_QuestGeneral_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
