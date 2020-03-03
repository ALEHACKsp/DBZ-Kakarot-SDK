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

// BlueprintGeneratedClass BP_Break_Plane_Rust.BP_Break_Plane_Rust_C
// 0x0008 (0x05A8 - 0x05A0)
class ABP_Break_Plane_Rust_C : public AWideUseBreakablePoint
{
public:
	class USphereComponent*                            DamageCollision;                                          // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Break_Plane_Rust.BP_Break_Plane_Rust_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
