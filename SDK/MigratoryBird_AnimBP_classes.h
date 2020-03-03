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

// AnimBlueprintGeneratedClass MigratoryBird_AnimBP.MigratoryBird_AnimBP_C
// 0x0658 (0x0A58 - 0x0400)
class UMigratoryBird_AnimBP_C : public UNpcAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0400(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_C87960A14AD1465E582D1590A1C2FCEA;      // 0x0408(0x0040)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A72EEF4941A3A0DF97E77F94ACF0CDA0;// 0x0448(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_49A4F10A4E604B1F0FAF09AC4932B4F6;// 0x0490(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CB83F6154667033010E31BBF945B39A5;// 0x04D8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E4BFD86D45AC2331B52B08A0E9BDB685;// 0x0520(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_985C01D74916F7B5CAB41782E329D560;// 0x0568(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_ADDB767D4A405D4F8C324395AEC11114;// 0x05B0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CAA6327448DE69733375F7A6E91C84CC;// 0x05F8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_FBD77D2B484565DDB10B188674ECEA7E;// 0x0698(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_58BC84E94F787AA031CD43B583E5926C;// 0x06D8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_95F7C6E94AF93BE66031DDBE7C5E0002;// 0x0778(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_91A5600945704335609E0B9179789ECA;// 0x07B8(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_678714B7473C339F21824C8DA6D915E5;// 0x0858(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2378755F43D555200E91048186DD1787;// 0x0898(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_8472855B4C4F540916A4E98EE78D258A;// 0x0938(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_B631772849858DA7318ACEA66976E15E;// 0x0978(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MigratoryBird_AnimBP.MigratoryBird_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MigratoryBird_AnimBP_AnimGraphNode_TransitionResult_CB83F6154667033010E31BBF945B39A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MigratoryBird_AnimBP_AnimGraphNode_TransitionResult_E4BFD86D45AC2331B52B08A0E9BDB685();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MigratoryBird_AnimBP_AnimGraphNode_TransitionResult_49A4F10A4E604B1F0FAF09AC4932B4F6();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MigratoryBird_AnimBP_AnimGraphNode_TransitionResult_985C01D74916F7B5CAB41782E329D560();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MigratoryBird_AnimBP_AnimGraphNode_TransitionResult_ADDB767D4A405D4F8C324395AEC11114();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MigratoryBird_AnimBP_AnimGraphNode_TransitionResult_A72EEF4941A3A0DF97E77F94ACF0CDA0();
	void ExecuteUbergraph_MigratoryBird_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
