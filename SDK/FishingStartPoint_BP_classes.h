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

// BlueprintGeneratedClass FishingStartPoint_BP.FishingStartPoint_BP_C
// 0x0008 (0x03D8 - 0x03D0)
class AFishingStartPoint_BP_C : public AFishingStartPoint
{
public:
	class USphereComponent*                            Sphere;                                                   // 0x03D0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FishingStartPoint_BP.FishingStartPoint_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
