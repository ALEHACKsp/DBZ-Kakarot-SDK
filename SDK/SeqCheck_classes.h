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

// BlueprintGeneratedClass SeqCheck.SeqCheck_C
// 0x0001 (0x00A1 - 0x00A0)
class USeqCheck_C : public UBTDecorator_BlueprintBase
{
public:
	E_SEQ_AI                                           seq;                                                      // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SeqCheck.SeqCheck_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
