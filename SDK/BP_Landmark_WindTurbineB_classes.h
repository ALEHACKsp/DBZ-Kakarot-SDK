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

// BlueprintGeneratedClass BP_Landmark_WindTurbineB.BP_Landmark_WindTurbineB_C
// 0x0010 (0x0348 - 0x0338)
class ABP_Landmark_WindTurbineB_C : public AActor
{
public:
	class UATMovableEnvObj_Rotate*                     ATMovableEnvObj_Rotate;                                   // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        S_Landmark_WindTurbineB;                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Landmark_WindTurbineB.BP_Landmark_WindTurbineB_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
