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

// BlueprintGeneratedClass BP_EventBattleStartPoint.BP_EventBattleStartPoint_C
// 0x0008 (0x0350 - 0x0348)
class ABP_EventBattleStartPoint_C : public AATEventBattleStartPoint
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0348(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventBattleStartPoint.BP_EventBattleStartPoint_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
