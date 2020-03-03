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

// BlueprintGeneratedClass NpcEventVolumeAction_BP.NpcEventVolumeAction_BP_C
// 0x0010 (0x0348 - 0x0338)
class ANpcEventVolumeAction_BP_C : public AActor
{
public:
	class UNpcEventVolumeComponent*                    NpcEventVolume;                                           // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard;                                                // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NpcEventVolumeAction_BP.NpcEventVolumeAction_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
