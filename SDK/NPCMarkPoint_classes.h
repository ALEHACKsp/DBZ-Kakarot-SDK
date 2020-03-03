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

// BlueprintGeneratedClass NPCMarkPoint.NPCMarkPoint_C
// 0x0008 (0x0380 - 0x0378)
class ANPCMarkPoint_C : public ANpcCheckPoint
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0378(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCMarkPoint.NPCMarkPoint_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_NPCMarkPoint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
