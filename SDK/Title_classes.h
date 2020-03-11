#pragma once

// Name: DBZ, Version: 1.6.4

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Title.Title_C
// 0x0008 (0x03E8 - 0x03E0)
class ATitle_C : public AATTitleLevelScriptActor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Title.Title_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Title(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
