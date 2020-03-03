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

// BlueprintGeneratedClass BP_Lake.BP_Lake_C
// 0x0031 (0x0379 - 0x0348)
class ABP_Lake_C : public AATLake
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0348(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        LakeMesh;                                                 // 0x0350(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        UnderLakeMesh;                                            // 0x0358(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPostProcessComponent*                       PostProcess;                                              // 0x0360(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFPushSolverShapeBox*                       CFPushSolverShapeBox;                                     // 0x0368(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               FlipMesh;                                                 // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Lake.BP_Lake_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_BP_Lake(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
