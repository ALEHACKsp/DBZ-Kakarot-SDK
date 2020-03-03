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

// BlueprintGeneratedClass BP_NoonSky.BP_NoonSky_C
// 0x0128 (0x0460 - 0x0338)
class ABP_NoonSky_C : public AActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        SkyMesh;                                                  // 0x0340(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ADirectionalLight*                           Direction_Light;                                          // 0x0350(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	class UMaterialInstanceDynamic*                    Mid;                                                      // 0x0358(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Sun_Brightness;                                           // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Density;                                            // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Speed;                                              // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Background_Cloud_Opacity;                                 // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Opacity;                                            // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Tiling;                                             // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Height;                                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Highlight_Radius;                                     // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Radius;                                               // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sun_Lighting_Intensity;                                   // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Direction;                                          // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Overall_Intensity;                                        // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shine_Intensity;                                          // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Shine_Variation;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Sun_Color;                                                // 0x0398(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Cloud_Dark_Color;                                         // 0x03A8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Cloud_Light_Color;                                        // 0x03B8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Horizon_Color;                                            // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Zenith_Color;                                             // 0x03D8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Horizon_Gradiation;                                       // 0x03E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Uniform_Brightness;                                   // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03ED(0x0003) MISSED OFFSET
	float                                              Background_Cloud_Speed;                                   // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03F4(0x0004) MISSED OFFSET
	class UTexture2D*                                  Clouds_Noize;                                             // 0x03F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Reduction_Tiling;                                   // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Reduction_Speed;                                    // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Use_Moon;                                                 // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	float                                              Moon_Scale;                                               // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Position;                                            // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Lunar_Inclination;                                        // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Moon_Color;                                               // 0x0418(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture*                                    Moon_Texture;                                             // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Intensity;                                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Glow_Size;                                           // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Glow_Intensity;                                      // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Moon_Glow_Blend;                                          // 0x043C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Horizon_Gradiation_Cloud;                                 // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Cloud_Sun_Dark_Color;                                     // 0x0444(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Dark_Color_Tiling;                                  // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Shadow_Contrast;                                    // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cloud_Shadow_Brightness;                                  // 0x045C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_NoonSky.BP_NoonSky_C");
		return ptr;
	}


	void GetDynamicMaterialInstance(class UMaterialInstanceDynamic** NewParam);
	void SetMaterialParameter();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_NoonSky(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
