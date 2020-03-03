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

// BlueprintGeneratedClass AnimNotifyState_DirectionCamera_BP.AnimNotifyState_DirectionCamera_BP_C
// 0x0000 (0x0078 - 0x0078)
class UAnimNotifyState_DirectionCamera_BP_C : public UAnimNotifyState_DirectionCamera
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotifyState_DirectionCamera_BP.AnimNotifyState_DirectionCamera_BP_C");
		return ptr;
	}


	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
