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

// BlueprintGeneratedClass AnimNotify_PlayAtomCue.PlayAtomCue_C
// 0x001C (0x0054 - 0x0038)
class UPlayAtomCue_C : public UAnimNotify
{
public:
	class USoundAtomCue*                               Sound;                                                    // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       Bone;                                                     // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               follow;                                                   // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              VolumeMultiplier;                                         // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              PitchMultiplier;                                          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimNotify_PlayAtomCue.PlayAtomCue_C");
		return ptr;
	}


	struct FString GetNotifyName();
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
