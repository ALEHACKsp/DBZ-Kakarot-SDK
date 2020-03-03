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

// BlueprintGeneratedClass AnimNotifyState_Impulse.AnimNotifyState_Impulse_C
// 0x0005 (0x0035 - 0x0030)
class UAnimNotifyState_Impulse_C : public UAnimNotifyState
{
public:
	float                                              Speed;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Tick;                                                     // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_Impulse.AnimNotifyState_Impulse_C");
		return ptr;
	}


	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
