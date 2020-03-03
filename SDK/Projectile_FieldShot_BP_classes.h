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

// BlueprintGeneratedClass Projectile_FieldShot_BP.Projectile_FieldShot_BP_C
// 0x0000 (0x04A0 - 0x04A0)
class AProjectile_FieldShot_BP_C : public AATProjectileField
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_FieldShot_BP.Projectile_FieldShot_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
