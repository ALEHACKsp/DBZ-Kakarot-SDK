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

// BlueprintGeneratedClass BP_FieldObjectBase.BP_FieldObjectBase_C
// 0x0010 (0x0358 - 0x0348)
class ABP_FieldObjectBase_C : public AStaticMeshActor
{
public:
	class UNpcEventVolumeComponent*                    NpcEventVolume;                                           // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         Billboard_2;                                              // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FieldObjectBase.BP_FieldObjectBase_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
