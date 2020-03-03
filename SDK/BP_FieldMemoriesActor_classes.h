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

// BlueprintGeneratedClass BP_FieldMemoriesActor.BP_FieldMemoriesActor_C
// 0x0008 (0x0498 - 0x0490)
class ABP_FieldMemoriesActor_C : public AATFieldMemoriesActor
{
public:
	class UBillboardComponent*                         Billboard;                                                // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_FieldMemoriesActor.BP_FieldMemoriesActor_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
