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

// BlueprintGeneratedClass B_LongBlowObject_Area01.B_LongBlowObject_Area01_C
// 0x0008 (0x0400 - 0x03F8)
class AB_LongBlowObject_Area01_C : public AATLongBlowoffObjectManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass B_LongBlowObject_Area01.B_LongBlowObject_Area01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
