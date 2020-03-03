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

// BlueprintGeneratedClass Mob00_BP.Mob00_BP_C
// 0x0018 (0x0418 - 0x0400)
class AMob00_BP_C : public ANpcBase_C
{
public:
	class UMeshPartsUnionComponent*                    MeshPartsUnion;                                           // 0x0400(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UTownMobComponent*                           TownMob;                                                  // 0x0408(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UNavigationInvokerComponent*                 NavigationInvoker;                                        // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mob00_BP.Mob00_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
