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

// BlueprintGeneratedClass Fish_Pawn.Fish_Pawn_C
// 0x0010 (0x04A8 - 0x0498)
class AFish_Pawn_C : public AFishPawnCPP
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0498(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UFloatingPawnMovement*                       FloatingPawnMovement;                                     // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Fish_Pawn.Fish_Pawn_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Fish_Pawn(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
