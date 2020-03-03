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

// BlueprintGeneratedClass C01_010_S080_mov.C01_010_S080_mov_C
// 0x0010 (0x0350 - 0x0340)
class AC01_010_S080_mov_C : public AATLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class ALevelSequenceActor*                         C01_010_S080_mov_Master_ExecuteUbergraph_C01_010_S080_mov_RefProperty;// 0x0348(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass C01_010_S080_mov.C01_010_S080_mov_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	void ExecuteUbergraph_C01_010_S080_mov(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
