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

// AnimBlueprintGeneratedClass TalkAnimBP_N013A.TalkAnimBP_N013A_C
// 0x204C (0x259C - 0x0550)
class UTalkAnimBP_N013A_C : public UTalkAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_80A2F05A4DCCC9CC25EC7C813D0FB3C7;      // 0x0558(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_16DED1DB438F83260FBCD99F033FFF8E;// 0x0598(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_FD0886034C6442EAF46B6C94A43C69FA;// 0x05E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C9A505414578B5BE919FA1A5CE050E39;// 0x0628(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_592515AB4A56CB98EDDA1E989433F7D9;// 0x0670(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_000EDEA34F85F057350C0191C437925C;// 0x06B8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8278CC8B434184ABEC4FE388AA0D9526;// 0x0700(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_AD0387EB49FB4010442437AD36B5F9FC;// 0x07A0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9DF2676143619D8081CF69B58748183A;// 0x07E0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_784A8E2A4354C79CF4DCB295EFDB6E3D;// 0x0880(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CA0EF1EC4241FEB7C8F3CAAB92C8D6FE;// 0x08C0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_78A8A40F4989509FFDEDB1A600C54DA7;// 0x0960(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5AFDEF584B2F0D22A752C6B46E26BC40;// 0x09A0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BAF1B53A452D8CBAFCC6ABA877C5E63A;// 0x0A40(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_FEF5E83146807ED1E083CF84C1E1076F;// 0x0A80(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_FC7B9CFD486A7A948478D280DB13E101;// 0x0B60(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_F0AE1495448F542140FB088DA0FF95E5;// 0x0C98(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_4798C209409619EFFA19BF8AA7828D4D;// 0x0CD8(0x00D8)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_11433BC34281B07585FF67A32BBBF00F;      // 0x0DB0(0x0068)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_608BACAD46AF49CE284B3091AEF67B7C;// 0x0E18(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6B9C74BC4295FE17C77C0488FB4FF283;// 0x0EF0(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_AE02148A4A4C7798F6AC70A00BCC6094;// 0x0FC8(0x0138)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_8D05D74242B9A9099E82EBBEE255CD49;// 0x1100(0x0040)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_094C5B9B4DDAEAD187DE0B81D675DE8D;// 0x1140(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_06D2C181455924A6630CDF9FB5401A81;// 0x1180(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_E658F7F049A747458CA73F991DEA1B77;// 0x1260(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_AB8175EC429EDA98DE38D8BD2EBA29DE;// 0x1338(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_73BD76B04FEBE0BF5755B696B4A97219;// 0x1380(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_C697CF1D44B75C24DC7E5F88FF02885F;// 0x13C8(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_1F9A883A448491FFACEE66A600D15C47;// 0x1410(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_14FDBDE24092AD6312701D818682F216;// 0x1458(0x0048)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_5D5DB8854F21018707D98EB13085A4A2;    // 0x14A0(0x0220)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_828263E94F05DCBF90E382A7FA74D504;    // 0x16C0(0x0220)
	struct FAnimNode_LookAt                            AnimGraphNode_LookAt_9FB0027A4AB6951DE6A0339B32210E9D;    // 0x18E0(0x0220)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CA39C00F41EC4946B20EE8B1328DA40B;// 0x1B00(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5834F7E94A8BAC2B59B85E9B312BED62;// 0x1BE0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_7F46783F4F6D76676F72DB96A5BACB52;// 0x1C28(0x0040)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2EDC288041BFB66AAD31B29461314A5D;// 0x1C68(0x00D8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_992C29E6425B6B2D584FF58323338674;// 0x1D40(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_7ACA22DB4E235000BFC21983DC129E70;// 0x1D88(0x0048)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_DD6DCA38415DAA82BFEB05B646AA0B10;// 0x1DD0(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2A1568B949F096DAB1D76BA007142F0B;// 0x1EA8(0x00D8)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_9C37D018419DBB9968FCB7BD0275104D;// 0x1F80(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8D28F459466AEE1BC74E81B1D6DF8696;// 0x1FC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_B041907F4B9FFCC87134709CAEE6FF1F;// 0x2010(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_A3DEEE8C4FF0E83B4751E4A5CBEE5DD7;// 0x20B0(0x0040)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6511B7654DE87D8FDE8B3FB5EFAD60F9;// 0x20F0(0x00A0)
	struct FAnimNode_StateResult                       AnimGraphNode_StateResult_BB6B68834D0866465140DFACBA3E6E20;// 0x2190(0x0040)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5FFCAA84467322899CE544938C088404;// 0x21D0(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_7FC9C87746F06053931B4FAB89D16DD8;// 0x22B0(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_9DF081C04FF41209A93A2F82CD7D4C33;// 0x2390(0x0128)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_B6E734C147F232B149E8378E05C0943C;// 0x24B8(0x00D8)
	bool                                               IsSlotAnimationExtend_1;                                  // 0x2590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EInterpolationBlend>                   GetInterpolationBlendType;                                // 0x2591(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x2592(0x0002) MISSED OFFSET
	struct FVector2D                                   GetLipSize_1;                                             // 0x2594(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass TalkAnimBP_N013A.TalkAnimBP_N013A_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkAnimBP_N013A_AnimGraphNode_LayeredBoneBlend_B6E734C147F232B149E8378E05C0943C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkAnimBP_N013A_AnimGraphNode_LookAt_9FB0027A4AB6951DE6A0339B32210E9D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkAnimBP_N013A_AnimGraphNode_LookAt_828263E94F05DCBF90E382A7FA74D504();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkAnimBP_N013A_AnimGraphNode_LookAt_5D5DB8854F21018707D98EB13085A4A2();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkAnimBP_N013A_AnimGraphNode_TransitionResult_000EDEA34F85F057350C0191C437925C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkAnimBP_N013A_AnimGraphNode_TransitionResult_C9A505414578B5BE919FA1A5CE050E39();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkAnimBP_N013A_AnimGraphNode_BlendListByBool_CA39C00F41EC4946B20EE8B1328DA40B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_TalkAnimBP_N013A_AnimGraphNode_LayeredBoneBlend_DD6DCA38415DAA82BFEB05B646AA0B10();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_TalkAnimBP_N013A(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
