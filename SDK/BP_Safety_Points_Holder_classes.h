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

// BlueprintGeneratedClass BP_Safety_Points_Holder.BP_Safety_Points_Holder_C
// 0x0008 (0x0398 - 0x0390)
class ABP_Safety_Points_Holder_C : public ASkillActivateSafetyInfo
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Safety_Points_Holder.BP_Safety_Points_Holder_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
