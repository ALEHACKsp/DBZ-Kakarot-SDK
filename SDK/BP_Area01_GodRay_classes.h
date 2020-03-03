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

// BlueprintGeneratedClass BP_Area01_GodRay.BP_Area01_GodRay_C
// 0x0056 (0x038E - 0x0338)
class ABP_Area01_GodRay_C : public AActor
{
public:
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0338(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBillboardComponent*                         UISprite;                                                 // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        GodRayMesh;                                               // 0x0348(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class AActor*                                      Sun;                                                      // 0x0350(0x0008) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              _1__Mesh_width;                                           // 0x0358(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _2__Mesh_Length;                                          // 0x035C(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Dynamic_material;                                         // 0x0360(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                _2__color;                                                // 0x0368(0x0010) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _3__Brightness;                                           // 0x0378(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              _5__fadedistance;                                         // 0x037C(0x0004) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Animated;                                                 // 0x0380(0x0001) (Edit, ConstParm, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0381(0x0003) MISSED OFFSET
	struct FRandomStream                               RandomTime;                                               // 0x0384(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               SpotLight;                                                // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               UseSun;                                                   // 0x038D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Area01_GodRay.BP_Area01_GodRay_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
