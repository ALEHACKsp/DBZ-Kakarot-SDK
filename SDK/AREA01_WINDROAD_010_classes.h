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

// BlueprintGeneratedClass AREA01_WINDROAD_010.AREA01_WINDROAD_010_C
// 0x0008 (0x0348 - 0x0340)
class AAREA01_WINDROAD_010_C : public AATLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0340(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AREA01_WINDROAD_010.AREA01_WINDROAD_010_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ExecuteUbergraph_AREA01_WINDROAD_010(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
