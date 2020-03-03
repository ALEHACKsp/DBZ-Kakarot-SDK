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

// AnimBlueprintGeneratedClass Ani005p1c01_Skeleton_AnimBP.Ani005p1c01_Skeleton_AnimBP_C
// 0x037A (0x06DA - 0x0360)
class UAni005p1c01_Skeleton_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_A0369C5B43779969C654D3A246762644;      // 0x0368(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7C66DB794678CE76EC16CAAA2F9D6400;// 0x03A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3C018FD74B36552F70EAA3B5C00B60C2;// 0x03F0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B88ADE03426012B178583EB3974F4C11;// 0x0438(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_9FB14EDC420963892E8813B1C18ED13D;// 0x04D8(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5E2D8AC94DA5834AB723E9A38B207343;// 0x0518(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_13F0C3264F7FA576D1BAD2891B5BB4E0;// 0x05B8(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_93479DD44680A267F8B24DB933B4B9B8;// 0x05F8(0x00E0)
	bool                                               IsEscape;                                                 // 0x06D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               isReturn;                                                 // 0x06D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Ani005p1c01_Skeleton_AnimBP.Ani005p1c01_Skeleton_AnimBP_C");
		return ptr;
	}


	void CheckEscapeLoop(bool End);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Ani005p1c01_Skeleton_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
