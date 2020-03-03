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

// BlueprintGeneratedClass AT_GameHUD_BP.AT_GameHUD_BP_C
// 0x0010 (0x0628 - 0x0618)
class AAT_GameHUD_BP_C : public AAT_GameHUD
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0618(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0620(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AT_GameHUD_BP.AT_GameHUD_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveDrawHUD(int SizeX, int SizeY);
	void ExecuteUbergraph_AT_GameHUD_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
