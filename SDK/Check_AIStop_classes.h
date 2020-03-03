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

// BlueprintGeneratedClass Check_AIStop.Check_AIStop_C
// 0x0000 (0x00A0 - 0x00A0)
class UCheck_AIStop_C : public UBTDecorator_BlueprintBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Check_AIStop.Check_AIStop_C");
		return ptr;
	}


	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
