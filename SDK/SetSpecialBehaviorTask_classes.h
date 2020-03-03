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

// BlueprintGeneratedClass SetSpecialBehaviorTask.SetSpecialBehaviorTask_C
// 0x0008 (0x00A8 - 0x00A0)
class USetSpecialBehaviorTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SetSpecialBehaviorTask.SetSpecialBehaviorTask_C");
		return ptr;
	}


	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_SetSpecialBehaviorTask(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
