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

// BlueprintGeneratedClass TargetPointIngameDemoOrigin_BP.TargetPointIngameDemoOrigin_BP_C
// 0x0008 (0x0360 - 0x0358)
class ATargetPointIngameDemoOrigin_BP_C : public ATargetPointIngameDemoOrigin
{
public:
	class UTextRenderComponent*                        TextRender;                                               // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TargetPointIngameDemoOrigin_BP.TargetPointIngameDemoOrigin_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
