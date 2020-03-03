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

// BlueprintGeneratedClass TrainingPoint_BP.TrainingPoint_BP_C
// 0x0010 (0x0490 - 0x0480)
class ATrainingPoint_BP_C : public ATrainingPointActor
{
public:
	class UATMapIconComponent*                         ATMapIcon;                                                // 0x0480(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrainingPoint_BP.TrainingPoint_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
