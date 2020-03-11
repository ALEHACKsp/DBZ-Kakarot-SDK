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

// BlueprintGeneratedClass BP_GameModeTitle.BP_GameModeTitle_C
// 0x0008 (0x0428 - 0x0420)
class ABP_GameModeTitle_C : public AGameMode
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_GameModeTitle.BP_GameModeTitle_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
