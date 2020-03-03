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

// BlueprintGeneratedClass AutoMoveTrigger.AutoMoveTrigger_C
// 0x0024 (0x03C4 - 0x03A0)
class AAutoMoveTrigger_C : public AAutoMoveTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	bool                                               bExecute;                                                 // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03A9(0x0007) MISSED OFFSET
	class AActor*                                      AutoMoveActor;                                            // 0x03B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class AActor*                                      AotoMoveCamera;                                           // 0x03B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               AutoMoveSwitch;                                           // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStateFlag;                                               // 0x03C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EATCharacterAutoMoveBP>                CharaState;                                               // 0x03C2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               GetOffVehicle;                                            // 0x03C3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AutoMoveTrigger.AutoMoveTrigger_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveActorEndOverlap(class AActor* OtherActor);
	void StartArrival();
	void ExecuteUbergraph_AutoMoveTrigger(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
