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

// BlueprintGeneratedClass AnimalMob_Pawn.AnimalMob_Pawn_C
// 0x0010 (0x0460 - 0x0450)
class AAnimalMob_Pawn_C : public AAT_MobAnimalBase
{
public:
	class UFieldItemTableComponent*                    FieldItemTable;                                           // 0x0450(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimalAccessPoint*                          AnimalAccessPoint;                                        // 0x0458(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AnimalMob_Pawn.AnimalMob_Pawn_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
