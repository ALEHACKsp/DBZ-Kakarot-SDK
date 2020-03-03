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

// BlueprintGeneratedClass AT_Character_cpl059c01_BP.AT_Character_cpl059c01_BP_C
// 0x0008 (0x0FA8 - 0x0FA0)
class AAT_Character_cpl059c01_BP_C : public AATCharacterCpl059c01
{
public:
	class UATAttachParticleComponent*                  AttachParticle;                                           // 0x0FA0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AT_Character_cpl059c01_BP.AT_Character_cpl059c01_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
