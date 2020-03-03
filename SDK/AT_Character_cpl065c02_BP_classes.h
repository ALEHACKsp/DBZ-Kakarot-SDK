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

// BlueprintGeneratedClass AT_Character_cpl065c02_BP.AT_Character_cpl065c02_BP_C
// 0x0010 (0x0FB0 - 0x0FA0)
class AAT_Character_cpl065c02_BP_C : public AATCharacterCpl065c02
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FA0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UAtomCueSheetLoaderComponent*                AtomCueSheetLoader;                                       // 0x0FA8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AT_Character_cpl065c02_BP.AT_Character_cpl065c02_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AT_Character_cpl065c02_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
