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

// BlueprintGeneratedClass B_DataAssetManager.B_DataAssetManager_C
// 0x0008 (0x0530 - 0x0528)
class AB_DataAssetManager_C : public AATDataAssetManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_DataAssetManager.B_DataAssetManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
