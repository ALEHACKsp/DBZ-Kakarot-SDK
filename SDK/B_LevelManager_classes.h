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

// BlueprintGeneratedClass B_LevelManager.B_LevelManager_C
// 0x0008 (0x0520 - 0x0518)
class AB_LevelManager_C : public AATLevelManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0518(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_LevelManager.B_LevelManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
