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

// Class CinematicCamera.CameraRig_Crane
// 0x0030 (0x0368 - 0x0338)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CranePitch;                                               // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneYaw;                                                 // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x0345(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0346(0x0002) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0348(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x0350(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x0358(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x0360(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0020 (0x0358 - 0x0338)
class ACameraRig_Rail : public AActor
{
public:
	float                                              CurrentPositionOnRail;                                    // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockOrientationToRail;                                   // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x0340(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x0348(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x0350(0x0008) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0040 (0x09E0 - 0x09A0)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x09A0(0x0030) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x10];                                      // 0x09D0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x00C0 (0x09C0 - 0x0900)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings                     FilmbackSettings;                                         // 0x0900(0x000C) (Edit, BlueprintVisible)
	struct FCameraLensSettings                         LensSettings;                                             // 0x090C(0x0018) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x0928(0x0038) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x0964(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x0968(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x096C(0x000C) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x0978(0x0010) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x0988(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x0998(0x0010) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x09A8(0x0010) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x09B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x09BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
