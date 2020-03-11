#pragma once

// Name: DBZ, Version: 1.6.4

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass B_DataAssetManager_Title.B_DataAssetManager_Title_C
// 0x0008 (0x0530 - 0x0528)
class AB_DataAssetManager_Title_C : public AATDataAssetManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0528(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_DataAssetManager_Title.B_DataAssetManager_Title_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
