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

// AnimBlueprintGeneratedClass AB_BaseballGame_Cpl001p1.AB_BaseballGame_Cpl001p1_C
// 0x00B0 (0x0410 - 0x0360)
class UAB_BaseballGame_Cpl001p1_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_D6D89D68418EC76C4904FAA8951B9C05;      // 0x0368(0x0040)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_6E0A44DE46543D595DD0D4BE3DF704E2;      // 0x03A8(0x0068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_BaseballGame_Cpl001p1.AB_BaseballGame_Cpl001p1_C");
		return ptr;
	}


	void ExecuteUbergraph_AB_BaseballGame_Cpl001p1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
