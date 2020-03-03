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

// BlueprintGeneratedClass AtrociousEnemyNamedEvent_Area02.AtrociousEnemyNamedEvent_Area02_C
// 0x0008 (0x04C8 - 0x04C0)
class AAtrociousEnemyNamedEvent_Area02_C : public AQuestGeneral_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04C0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AtrociousEnemyNamedEvent_Area02.AtrociousEnemyNamedEvent_Area02_C");
		return ptr;
	}


	void UserConstructionScript();
	void PhaseEvent();
	void ExecuteUbergraph_AtrociousEnemyNamedEvent_Area02(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
