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

// BlueprintGeneratedClass Projectile_Kidan_BigCharge_BP.Projectile_Kidan_BigCharge_BP_C
// 0x0000 (0x0528 - 0x0528)
class AProjectile_Kidan_BigCharge_BP_C : public AATProjectileBullet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Kidan_BigCharge_BP.Projectile_Kidan_BigCharge_BP_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
