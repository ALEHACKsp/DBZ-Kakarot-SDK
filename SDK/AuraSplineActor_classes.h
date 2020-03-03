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

// BlueprintGeneratedClass AuraSplineActor.AuraSplineActor_C
// 0x0010 (0x05B0 - 0x05A0)
class AAuraSplineActor_C : public ANpcSplineActor
{
public:
	class UActorTrackingEffectComponent*               ActorTrackingEffect;                                      // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USplineComponent*                            Spline;                                                   // 0x05A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AuraSplineActor.AuraSplineActor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
