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

// BlueprintGeneratedClass StandStaticMob.StandStaticMob_C
// 0x0010 (0x0428 - 0x0418)
class AStandStaticMob_C : public AMob00_BP_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0418(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UNpcTalkComponent*                           NPCTALK;                                                  // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandStaticMob.StandStaticMob_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StandStaticMob(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
