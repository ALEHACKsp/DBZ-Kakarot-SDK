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

// BlueprintGeneratedClass BlockCollision_Box.BlockCollision_Box_C
// 0x0021 (0x0429 - 0x0408)
class ABlockCollision_Box_C : public AATPlayerAutoControlTrigger
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                               blockCollision;                                           // 0x0410(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               overlapCollision;                                         // 0x0418(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               IsTurn;                                                   // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BlockCollision_Box.BlockCollision_Box_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ExecuteUbergraph_BlockCollision_Box(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
