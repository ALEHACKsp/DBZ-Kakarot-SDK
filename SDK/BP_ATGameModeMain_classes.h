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

// BlueprintGeneratedClass BP_ATGameModeMain.BP_ATGameModeMain_C
// 0x0010 (0x0608 - 0x05F8)
class ABP_ATGameModeMain_C : public AATGameMode
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x05F8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0600(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ATGameModeMain.BP_ATGameModeMain_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_ATGameModeMain(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
