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

// BlueprintGeneratedClass TriggerStaticActor_BP.TriggerStaticActor_BP_C
// 0x0008 (0x0390 - 0x0388)
class ATriggerStaticActor_BP_C : public ATriggerStaticActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0388(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TriggerStaticActor_BP.TriggerStaticActor_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_TriggerStaticActor_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
