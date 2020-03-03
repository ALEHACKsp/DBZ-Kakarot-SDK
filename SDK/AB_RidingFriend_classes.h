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

// AnimBlueprintGeneratedClass AB_RidingFriend.AB_RidingFriend_C
// 0x0768 (0x0CC8 - 0x0560)
class UAB_RidingFriend_C : public UATCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0560(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4E1CB6D54665A72445299ABEB81E3C02;// 0x0568(0x00D8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_78E9E4BB4273554B4100678E04F92271;// 0x0640(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F24A9EFF45590F82DC37DD804C248532;// 0x0720(0x00F0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C9AA3FE640DA974948EFAE9D2967239E;// 0x0810(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_3B644B514D11B4B17763CA95F806E71E;// 0x08B0(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7C3F34FF4F6AE56973E07EAA7CA2A9B5;// 0x08F0(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_C47741E64D190B2D15D64F84ECB33CDB;      // 0x09D0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_225F749345B01CE37EC95988A4694E22;// 0x0A10(0x00A0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_85AB7841437FFF582B9877B8CD18B192;// 0x0AB0(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_71CDD72B4B89D4A0DB774E87D40340BF;// 0x0AF8(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1CF3C3114F4DE826B55B468FBD352721;      // 0x0B40(0x0068)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_104C67D64F28E2F73F055584E573BC06;// 0x0BA8(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D0E9E042499DE66D5AB2BBBC2889FE09;// 0x0C80(0x0048)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass AB_RidingFriend.AB_RidingFriend_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RidingFriend_AnimGraphNode_ApplyAdditive_F24A9EFF45590F82DC37DD804C248532();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AB_RidingFriend_AnimGraphNode_BlendListByBool_78E9E4BB4273554B4100678E04F92271();
	void ExecuteUbergraph_AB_RidingFriend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
