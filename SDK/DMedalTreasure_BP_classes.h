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

// BlueprintGeneratedClass DMedalTreasure_BP.DMedalTreasure_BP_C
// 0x0008 (0x0588 - 0x0580)
class ADMedalTreasure_BP_C : public ATreasureAccessPoint
{
public:
	class UBillboardComponent*                         Billboard;                                                // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DMedalTreasure_BP.DMedalTreasure_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
