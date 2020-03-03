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

// BlueprintGeneratedClass LostPropertyItem_R.LostPropertyItem_R_C
// 0x0008 (0x0548 - 0x0540)
class ALostPropertyItem_R_C : public ALostPropertyItem_C
{
public:
	class UBillboardComponent*                         Billboard;                                                // 0x0540(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LostPropertyItem_R.LostPropertyItem_R_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
