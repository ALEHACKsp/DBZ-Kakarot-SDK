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

// BlueprintGeneratedClass TargetPointIngameDemoCharacter_BP.TargetPointIngameDemoCharacter_BP_C
// 0x0008 (0x0368 - 0x0360)
class ATargetPointIngameDemoCharacter_BP_C : public ATargetPointIngameDemoCharacter
{
public:
	class UArrowComponent*                             Arrow1;                                                   // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TargetPointIngameDemoCharacter_BP.TargetPointIngameDemoCharacter_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
