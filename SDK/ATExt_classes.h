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

// Class ATExt.ATAnimationBlueprintChanger
// 0x0040 (0x0140 - 0x0100)
class UATAnimationBlueprintChanger : public UActorComponent
{
public:
	TArray<struct FATABPChangerRequest>                RequestList;                                              // 0x0100(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0110(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimationBlueprintChanger");
		return ptr;
	}

};


// Class ATExt.ATAnimNotify_CtrlBrightness
// 0x0010 (0x0048 - 0x0038)
class UATAnimNotify_CtrlBrightness : public UAnimNotify
{
public:
	class UCurveFloat*                                 InAnimCurve;                                              // 0x0038(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 OutAnimCurve;                                             // 0x0040(0x0008) (Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimNotify_CtrlBrightness");
		return ptr;
	}

};


// Class ATExt.ATAnimNotify_WearEffectSpawn
// 0x0030 (0x0068 - 0x0038)
class UATAnimNotify_WearEffectSpawn : public UAnimNotify
{
public:
	class UParticleSystem*                             Effect;                                                   // 0x0038(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     offsetLocation;                                           // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachType;                                               // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0061(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimNotify_WearEffectSpawn");
		return ptr;
	}

};


// Class ATExt.ATAnimNotifyState_LoopWearEffectSpawn
// 0x0088 (0x00B8 - 0x0030)
class UATAnimNotifyState_LoopWearEffectSpawn : public UAnimNotifyState
{
public:
	class UParticleSystem*                             Effect;                                                   // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               RotationFix;                                              // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FName                                       AttachName;                                               // 0x0040(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     offsetLocation;                                           // 0x0048(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0054(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAttachLocation>                       AttachType;                                               // 0x0060(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0061(0x0007) MISSED OFFSET
	TMap<uint32_t, struct FLoopWearEffectInfo>         ParticleMap;                                              // 0x0068(0x0050) (BlueprintReadOnly, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimNotifyState_LoopWearEffectSpawn");
		return ptr;
	}

};


// Class ATExt.ATAnimNotifyState_WearEffect
// 0x0008 (0x0038 - 0x0030)
class UATAnimNotifyState_WearEffect : public UAnimNotifyState
{
public:
	bool                                               UseHeatUp;                                                // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               NotEndHeatUp;                                             // 0x0031(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0032(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATAnimNotifyState_WearEffect");
		return ptr;
	}

};


// Class ATExt.ATEventBattlePhaseBase
// 0x0008 (0x0030 - 0x0028)
class UATEventBattlePhaseBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattlePhaseBase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0101MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0101MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0101MainPhase");
		return ptr;
	}

};


// Class ATExt.ATEventBattleRootManagerBase
// 0x0058 (0x0390 - 0x0338)
class AATEventBattleRootManagerBase : public AActor
{
public:
	TArray<class UClass*>                              PhaseClass;                                               // 0x0338(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UATEventBattlePhaseBase*>             PhaseTbl;                                                 // 0x0348(0x0010) (ZeroConstructor)
	class UATEventBattleSituationJudge*                StuationJudge;                                            // 0x0358(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATEventBattleCondition*                     BattleCondition;                                          // 0x0360(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATEventBattleAfterAction*                   AfterAction;                                              // 0x0368(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      RoofBarrierClass;                                         // 0x0370(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RoofBarrierOffset;                                        // 0x0378(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x037C(0x0004) MISSED OFFSET
	class AActor*                                      RoofBarrierActor;                                         // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0388(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleRootManagerBase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0101RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0101RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0101RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0102MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle0102MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0102MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0102RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0102RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatupValue;                                              // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0102RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0201MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0201MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0201MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0201RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle0201RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0201RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0301MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle0301MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0301MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0301RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0301RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatupValue;                                              // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0301RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0302MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0302MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0302MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0302RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0302RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0302RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0401MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle0401MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0401MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0401RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0401RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0401RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0402MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0402MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0402MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0402RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle0402RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0402RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0501MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle0501MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0501MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0501RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0501RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0501RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0502MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0502MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0502MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0502RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle0502RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0502RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0601MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0601MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0601MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0601RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle0601RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0601RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0602MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0602MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0602MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0602RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle0602RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0602RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0701MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0701MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0701MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0701RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0701RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0701RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0702MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0702MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0702MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0702RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle0702RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0702RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0801MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle0801MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0801MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0801RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0801RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0801RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0802MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle0802MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0802MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0802RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0802RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0802RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0901MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle0901MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0901MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0901RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle0901RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0901RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0902MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle0902MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0902MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle0902RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle0902RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              MarginValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HeatupValue;                                              // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle0902RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1001MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle1001MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1001MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1001RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle1001RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1001RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1101MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle1101MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1101MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1101RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle1101RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1101RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1102MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle1102MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1102MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1102RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle1102RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1102RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1201MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle1201MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1201MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1201RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle1201RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1201RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1202MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle1202MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1202MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1202RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle1202RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1202RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1301MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle1301MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1301MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1301RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle1301RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1301RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1302MainPhase
// 0x0058 (0x0088 - 0x0030)
class UATBossBattle1302MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1302MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1302RootManager
// 0x0000 (0x0390 - 0x0390)
class AATBossBattle1302RootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1302RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1401MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle1401MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1401MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1401RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle1401RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1401RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1501MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATBossBattle1501MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1501MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1501RootManager
// 0x0008 (0x0398 - 0x0390)
class AATBossBattle1501RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1501RootManager");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1502MainPhase
// 0x0068 (0x0098 - 0x0030)
class UATBossBattle1502MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1502MainPhase");
		return ptr;
	}

};


// Class ATExt.ATBossBattle1502RootManager
// 0x0048 (0x03D8 - 0x0390)
class AATBossBattle1502RootManager : public AATEventBattleRootManagerBase
{
public:
	class UParticleSystem*                             ParticleGenkiBall;                                        // 0x0390(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleGenkiParticle;                                    // 0x0398(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      GenkiBallCollisionClass;                                  // 0x03A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GenkiBallLocation;                                        // 0x03A8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     GenkiParticleLocation;                                    // 0x03B4(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCompGenkiBall;                                    // 0x03C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCompGenkiParticle;                                // 0x03C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      GenkiBallCollision;                                       // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATBossBattle1502RootManager");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl001
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl001 : public AAT_CharacterPlayableBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl001");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl001N
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl001N : public AATCharacterCpl001
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl001N");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl002Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl002Base : public AAT_CharacterPlayableBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl002A
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl002A : public AATCharacterCpl002Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002A");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl002B
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl002B : public AATCharacterCpl002Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002B");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl002C
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl002C : public AATCharacterCpl002Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002C");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl002D
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl002D : public AATCharacterCpl002Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002D");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl002Z
// 0x0000 (0x0FB0 - 0x0FB0)
class AATCharacterCpl002Z : public AAT_CharacterHugeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl002Z");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl003Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl003Base : public AAT_CharacterPlayableBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl003Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl003A
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl003A : public AATCharacterCpl003Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl003A");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl003B
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl003B : public AATCharacterCpl003Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl003B");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl003Z
// 0x0000 (0x0FB0 - 0x0FB0)
class AATCharacterCpl003Z : public AAT_CharacterHugeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl003Z");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl004Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl004Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl004c01
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl004c01 : public AATCharacterCpl004Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004c01");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl004c02
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl004c02 : public AATCharacterCpl004Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004c02");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl004c03
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl004c03 : public AATCharacterCpl004Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004c03");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl004c04
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl004c04 : public AATCharacterCpl004Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl004c04");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl005Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl005Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl005A
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl005A : public AATCharacterCpl005Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005A");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl005B
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl005B : public AATCharacterCpl005Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005B");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl005C
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl005C : public AATCharacterCpl005Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005C");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl005D
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl005D : public AATCharacterCpl005Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005D");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl005E
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl005E : public AATCharacterCpl005Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl005E");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl006
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl006 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl006");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl007
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl007 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl007");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl008
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl008 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl008");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl009
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl009 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl009");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl010
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl010 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl010");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl011
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl011 : public AAT_CharacterPlayableBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl011");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl012
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl012 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl012");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl013
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl013 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl013");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl014Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl014Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl014c01
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl014c01 : public AATCharacterCpl014Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c01");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl014c02
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl014c02 : public AATCharacterCpl014Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c02");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl014c03
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl014c03 : public AATCharacterCpl014Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c03");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl014c04
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl014c04 : public AATCharacterCpl014Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c04");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl014c05
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl014c05 : public AATCharacterCpl014Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl014c05");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl017
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl017 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl017");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl018
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl018 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl018");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl019Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl019Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl019Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl019A
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl019A : public AATCharacterCpl019Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl019A");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl019B
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl019B : public AATCharacterCpl019Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl019B");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl020
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl020 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl020");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl021
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl021 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl021");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl022
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl022 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl022");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl023
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl023 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl023");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl024
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl024 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl024");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl025
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl025 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl025");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl028Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl028Base : public AAT_CharacterPlayableBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl028Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl028A
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl028A : public AATCharacterCpl028Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl028A");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl028B
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl028B : public AATCharacterCpl028Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl028B");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl029
// 0x0020 (0x0FC0 - 0x0FA0)
class AATCharacterCpl029 : public AAT_Character
{
public:
	class UParticleSystem*                             AbsorbEffect;                                             // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AbsorbEffectLocation;                                     // 0x0FA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsorbLifeRate;                                           // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0FB8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl029");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl030
// 0x0130 (0x10D0 - 0x0FA0)
class AATCharacterCpl030 : public AAT_Character
{
public:
	class UParticleSystem*                             ParticleAbsorbST_1;                                       // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleAbsorbLP_1;                                       // 0x0FA8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleAbsorbST_2;                                       // 0x0FB0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleAbsorbLP_2;                                       // 0x0FB8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             ParticleAbsorbExec;                                       // 0x0FC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCompCameraAttachHitEffect;                        // 0x0FC8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	struct FVector                                     BG_Color_IN;                                              // 0x0FD0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     BG_Color_OUT;                                             // 0x0FDC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Main_Color_IN;                                            // 0x0FE8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Main_Color_OUT;                                           // 0x0FF4(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Ring_Color_IN;                                            // 0x1000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Ring_Color_OUT;                                           // 0x100C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Aura_Color_IN;                                            // 0x1018(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     Aura_Color_OUT;                                           // 0x1024(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Aura_Alfa_IN;                                             // 0x1030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Aura_Alfa_OUT;                                            // 0x1034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsorbModeTime;                                           // 0x1038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MaxDeleteWaitTime;                                        // 0x103C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsorbRateLongRange;                                      // 0x1040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsorbLifeRate;                                           // 0x1044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x1048(0x0060) MISSED OFFSET
	class UParticleSystemComponent*                    ParticleCompSTNow;                                        // 0x10A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCompSTOld;                                        // 0x10B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCompLPNow;                                        // 0x10B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    ParticleCompLPOld;                                        // 0x10C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x10C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl030");
		return ptr;
	}


	void OnChangeAction(class AAT_Character* InCharacter, int InActionIdPrev, int InActionIdNext);
};


// Class ATExt.ATCharacterCpl031
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl031 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl031");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl032
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl032 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl032");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl034Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl034Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl034Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl034A
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl034A : public AATCharacterCpl034Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl034A");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl034B
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl034B : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl034B");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl034C
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl034C : public AATCharacterCpl034Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl034C");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl035
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl035 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl035");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl036
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl036 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl036");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl038
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl038 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl038");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl039
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl039 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl039");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl040
// 0x0070 (0x1010 - 0x0FA0)
class AATCharacterCpl040 : public AAT_Character
{
public:
	class UParticleSystem*                             AbsorbEffect;                                             // 0x0FA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     AbsorbEffectLocation;                                     // 0x0FA8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AbsorbLifeRate;                                           // 0x0FB4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0FB8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl040");
		return ptr;
	}


	void OnChangeAction(class AAT_Character* InCharacter, int InActionIdPrev, int InActionIdNext);
};


// Class ATExt.ATCharacterCpl041Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl041Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl041A
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl041A : public AATCharacterCpl041Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041A");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl041B
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl041B : public AATCharacterCpl041Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041B");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl041C
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl041C : public AATCharacterCpl041Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041C");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl041E
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl041E : public AATCharacterCpl041Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl041E");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl042
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl042 : public AAT_CharacterPlayableBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl042");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl043
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl043 : public AAT_CharacterPlayableBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl043");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl056Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl056Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl056Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl056c01
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl056c01 : public AATCharacterCpl056Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl056c01");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl056c02
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl056c02 : public AATCharacterCpl056Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl056c02");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl056c03
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl056c03 : public AATCharacterCpl056Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl056c03");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl057Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl057Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl057Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl057c01
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl057c01 : public AATCharacterCpl057Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl057c01");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl057c02
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl057c02 : public AATCharacterCpl057Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl057c02");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl057c03
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl057c03 : public AATCharacterCpl057Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl057c03");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl058Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl058Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl058Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl058c01
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl058c01 : public AATCharacterCpl058Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl058c01");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl058c02
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl058c02 : public AATCharacterCpl058Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl058c02");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl058c03
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl058c03 : public AATCharacterCpl058Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl058c03");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl059Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl059Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl059Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl059c01
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl059c01 : public AATCharacterCpl059Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl059c01");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl059c02
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl059c02 : public AATCharacterCpl059Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl059c02");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl059c03
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl059c03 : public AATCharacterCpl059Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl059c03");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl060
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl060 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl060");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl061
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl061 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl061");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl062
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl062 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl062");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl063
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl063 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl063");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl064Base
// 0x0010 (0x0FB0 - 0x0FA0)
class AATCharacterCpl064Base : public AAT_Character
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0FA0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl064Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl064c01
// 0x0000 (0x0FB0 - 0x0FB0)
class AATCharacterCpl064c01 : public AATCharacterCpl064Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl064c01");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl064c02
// 0x0000 (0x0FB0 - 0x0FB0)
class AATCharacterCpl064c02 : public AATCharacterCpl064Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl064c02");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl064c03
// 0x0000 (0x0FB0 - 0x0FB0)
class AATCharacterCpl064c03 : public AATCharacterCpl064Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl064c03");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl065Base
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl065Base : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl065Base");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl065c01
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl065c01 : public AATCharacterCpl065Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl065c01");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl065c02
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl065c02 : public AATCharacterCpl065Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl065c02");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl065c03
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl065c03 : public AATCharacterCpl065Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl065c03");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl067
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl067 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl067");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl069
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl069 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl069");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl070
// 0x0000 (0x0FA0 - 0x0FA0)
class AATCharacterCpl070 : public AAT_Character
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl070");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl071
// 0x0040 (0x0FE0 - 0x0FA0)
class AATCharacterCpl071 : public AAT_Character
{
public:
	TArray<ECHARACTER_TYPE>                            SummonCharacters;                                         // 0x0FA0(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x30];                                      // 0x0FB0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl071");
		return ptr;
	}

};


// Class ATExt.ATCharacterCpl074
// 0x0060 (0x1000 - 0x0FA0)
class AATCharacterCpl074 : public AAT_Character
{
public:
	bool                                               UseBarrierEff;                                            // 0x0FA0(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0FA1(0x0007) MISSED OFFSET
	struct FName                                       BarrierSocketName;                                        // 0x0FA8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierEffST;                                             // 0x0FB0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierEff100;                                            // 0x0FB8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierEff50;                                             // 0x0FC0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierEff25;                                             // 0x0FC8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierEndEff100;                                         // 0x0FD0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierEndEff50;                                          // 0x0FD8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             BarrierEndEff25;                                          // 0x0FE0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0FE8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCharacterCpl074");
		return ptr;
	}

};


// Class ATExt.ATCommunityBoard
// 0x0110 (0x0138 - 0x0028)
class UATCommunityBoard : public UObject
{
public:
	unsigned char                                      UnknownData00[0x110];                                     // 0x0028(0x0110) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunityBoard");
		return ptr;
	}

};


// Class ATExt.ATCommunityManager
// 0x0158 (0x0258 - 0x0100)
class UATCommunityManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET
	TMap<struct FName, struct FSoulEmTableInfo>        SoulEmInsMap;                                             // 0x0110(0x0050) (ZeroConstructor)
	TMap<int, struct FName>                            SoulEmSaveNoToInsMap;                                     // 0x0160(0x0050) (ZeroConstructor)
	TArray<class UATSoulEmblem*>                       SoulEmList;                                               // 0x01B0(0x0010) (ZeroConstructor)
	class UATCommunityBoard*                           CommunityBoradIns[0x7];                                   // 0x01C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATCommunitySkillZFighters*                  CommSkillZFighters;                                       // 0x01F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATCommunitySkillCooking*                    CommSkillCooking;                                         // 0x0200(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATCommunitySkillTraining*                   CommSkillTraining;                                        // 0x0208(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATCommunitySkillDevelop*                    CommSkillDevelop;                                         // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATCommunitySkillGods*                       CommSkillGods;                                            // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATCommunitySkillAdult*                      CommSkillAdult;                                           // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATCommunitySkillAdventure*                  CommSkillAdventure;                                       // 0x0228(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATLinkBonus*                                LinkBonusIns;                                             // 0x0230(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x20];                                      // 0x0238(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunityManager");
		return ptr;
	}


	void OnSaveData();
	void OnLoadData(bool bIsSuccess);
	void OnAutoSaveData();
	void CTExec(int InTestCase, const struct FName& testId);
};


// Class ATExt.ATCommunitySkillBase
// 0x0038 (0x0060 - 0x0028)
class UATCommunitySkillBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillBase");
		return ptr;
	}

};


// Class ATExt.ATCommunitySkillZFighters
// 0x0008 (0x0068 - 0x0060)
class UATCommunitySkillZFighters : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillZFighters");
		return ptr;
	}

};


// Class ATExt.ATCommunitySkillCooking
// 0x0010 (0x0070 - 0x0060)
class UATCommunitySkillCooking : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillCooking");
		return ptr;
	}

};


// Class ATExt.ATCommunitySkillTraining
// 0x0008 (0x0068 - 0x0060)
class UATCommunitySkillTraining : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillTraining");
		return ptr;
	}

};


// Class ATExt.ATCommunitySkillDevelop
// 0x0000 (0x0060 - 0x0060)
class UATCommunitySkillDevelop : public UATCommunitySkillBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillDevelop");
		return ptr;
	}

};


// Class ATExt.ATCommunitySkillGods
// 0x0008 (0x0068 - 0x0060)
class UATCommunitySkillGods : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillGods");
		return ptr;
	}

};


// Class ATExt.ATCommunitySkillAdult
// 0x0010 (0x0070 - 0x0060)
class UATCommunitySkillAdult : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillAdult");
		return ptr;
	}

};


// Class ATExt.ATCommunitySkillAdventure
// 0x0010 (0x0070 - 0x0060)
class UATCommunitySkillAdventure : public UATCommunitySkillBase
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0060(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATCommunitySkillAdventure");
		return ptr;
	}

};


// Class ATExt.ATDataAssetCarParameterArea
// 0x0018 (0x0048 - 0x0030)
class UATDataAssetCarParameterArea : public UATDataAssetBase
{
public:
	struct FATDataAssetCarParameterAreaInfo            CarParameterAreaInfo;                                     // 0x0030(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDataAssetCarParameterArea");
		return ptr;
	}

};


// Class ATExt.ATDataAssetTalkAnimAsyncLoad
// 0x0040 (0x0070 - 0x0030)
class UATDataAssetTalkAnimAsyncLoad : public UATDataAssetAsyncLoad
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET
	struct FLoadingTalkAnimAsset                       LoadingAsset;                                             // 0x0040(0x0028)
	struct FReferenceToTalkAnimAssetInstance           reference;                                                // 0x0068(0x0008)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDataAssetTalkAnimAsyncLoad");
		return ptr;
	}

};


// Class ATExt.ATTalkAnimLoader
// 0x0060 (0x0088 - 0x0028)
class UATTalkAnimLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET
	TMap<struct FName, class UATDataAssetTalkAnimAsyncLoad*> LoaderMap;                                                // 0x0038(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATTalkAnimLoader");
		return ptr;
	}


	void CompleteLoad(class UATDataAssetTalkAnimAsyncLoad* loader);
};


// Class ATExt.ATDataAssetTalkAnimation
// 0x0010 (0x0040 - 0x0030)
class UATDataAssetTalkAnimation : public UATDataAssetBase
{
public:
	TArray<struct FATDataAssetTalkAnimationInfo>       AssetInfo;                                                // 0x0030(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDataAssetTalkAnimation");
		return ptr;
	}

};


// Class ATExt.ATDebugDrawTime
// 0x0010 (0x0040 - 0x0030)
class UATDebugDrawTime : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugDrawTime");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuHandler
// 0x0008 (0x00F0 - 0x00E8)
class UATDebugMenuHandler : public UCFDebugMenuHandler
{
public:
	class UATDebugMenuEventHandler*                    EventHandler;                                             // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuHandler");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandler
// 0x0050 (0x0078 - 0x0028)
class UATDebugMenuEventHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UATDebugMenuEventHandlerLog*                 LogHandler;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATDebugMenuEventHandlerBatch*               BatchHandler;                                             // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATDebugMenuEventHandlerBattleSetting*       BattleSettingHandler;                                     // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATDebugMenuEventHandlerDraw*                DrawHandler;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATDebugMenuEventHandlerBattlePlayer*        BattlePlayerHandler;                                      // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATDebugMenuEventHandlerRandomPadSetting*    RandomPadSettingHandler;                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATDebugMenuEventHandlerBattleDebugDisp*     BattleDebugDisp;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATDebugMenuEventHandlerSkillSetting*        SkillSetting;                                             // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATDebugMenuEventHandlerDebugHudSetting*     DebugHudSetting;                                          // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandler");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchBattle
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchBattle : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchBattle");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchProjectile
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchProjectile : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchProjectile");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchStage
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchStage : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchStage");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchEffect
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchEffect : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchEffect");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchAI
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchAI : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchAI");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchCamera
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchCamera : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchCamera");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchInput
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchInput : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchInput");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchCollision
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchCollision : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchCollision");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchUI
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchUI : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchUI");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchParameter
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchParameter : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchParameter");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchAdvLevel
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchAdvLevel : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchAdvLevel");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchAdvTalk
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchAdvTalk : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchAdvTalk");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchAdvMob
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchAdvMob : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchAdvMob");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchNetBattle
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchNetBattle : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchNetBattle");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchNetLobby
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchNetLobby : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchNetLobby");
		return ptr;
	}

};


// Class ATExt.CFDMLogSwitchGeneral
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchGeneral : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CFDMLogSwitchGeneral");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerLog
// 0x0080 (0x00B0 - 0x0030)
class UATDebugMenuEventHandlerLog : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                Handlers[0x10];                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerLog");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerBatch
// 0x0010 (0x0040 - 0x0030)
class UATDebugMenuEventHandlerBatch : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                Handlers[0x2];                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerBatch");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Base
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Base : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Base");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Player_All
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Player_All : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Player_All");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Player_Single
// 0x0008 (0x0060 - 0x0058)
class UDMBattleDraw_Player_Single : public UDMBattleDraw_Base
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Player_Single");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Skill_All
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Skill_All : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Skill_All");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Skill_Single
// 0x0008 (0x0060 - 0x0058)
class UDMBattleDraw_Skill_Single : public UDMBattleDraw_Base
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0058(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Skill_Single");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Stage_All
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Stage_All : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Stage_All");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Stage_Tree
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Stage_Tree : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Stage_Tree");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Stage_Background
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Stage_Background : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Stage_Background");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Stage_Etc
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Stage_Etc : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Stage_Etc");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Effect_All
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Effect_All : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Effect_All");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_Decal_All
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_Decal_All : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_Decal_All");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_EnvActor_All
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_EnvActor_All : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_EnvActor_All");
		return ptr;
	}

};


// Class ATExt.DMBattleDraw_ScreenEffect_All
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDraw_ScreenEffect_All : public UDMBattleDraw_Base
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDraw_ScreenEffect_All");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerDraw
// 0x0000 (0x0030 - 0x0030)
class UATDebugMenuEventHandlerDraw : public UCFDebugMenuEventHandlerContentsFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerDraw");
		return ptr;
	}

};


// Class ATExt.DMBoolShowBattleScore
// 0x0000 (0x0058 - 0x0058)
class UDMBoolShowBattleScore : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBoolShowBattleScore");
		return ptr;
	}

};


// Class ATExt.DMBoolStopBattleTimer
// 0x0000 (0x0058 - 0x0058)
class UDMBoolStopBattleTimer : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBoolStopBattleTimer");
		return ptr;
	}

};


// Class ATExt.DMBoolInfinityItem
// 0x0000 (0x0058 - 0x0058)
class UDMBoolInfinityItem : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBoolInfinityItem");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerBattleSetting
// 0x0000 (0x0030 - 0x0030)
class UATDebugMenuEventHandlerBattleSetting : public UCFDebugMenuEventHandlerContentsFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerBattleSetting");
		return ptr;
	}

};


// Class ATExt.DMBattlePlayer_NotDeath
// 0x0000 (0x0058 - 0x0058)
class UDMBattlePlayer_NotDeath : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlayer_NotDeath");
		return ptr;
	}

};


// Class ATExt.DMBattlePlayer_VisibleActionCancel
// 0x0000 (0x0058 - 0x0058)
class UDMBattlePlayer_VisibleActionCancel : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlayer_VisibleActionCancel");
		return ptr;
	}

};


// Class ATExt.DMBattlePlayer_VisibleSuperArmor
// 0x0000 (0x0058 - 0x0058)
class UDMBattlePlayer_VisibleSuperArmor : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlayer_VisibleSuperArmor");
		return ptr;
	}

};


// Class ATExt.DMChangePlayerControllerToAI
// 0x0000 (0x0038 - 0x0038)
class UDMChangePlayerControllerToAI : public UCFDebugMenuEventHandlerTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMChangePlayerControllerToAI");
		return ptr;
	}

};


// Class ATExt.DMChangePlayerControllerToAIAll
// 0x0000 (0x0038 - 0x0038)
class UDMChangePlayerControllerToAIAll : public UCFDebugMenuEventHandlerTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMChangePlayerControllerToAIAll");
		return ptr;
	}

};


// Class ATExt.DMBattlePlayer_DispInfoAI
// 0x0000 (0x0058 - 0x0058)
class UDMBattlePlayer_DispInfoAI : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlayer_DispInfoAI");
		return ptr;
	}

};


// Class ATExt.DMBattlePlyaer_FriendlyFire_Damage
// 0x0000 (0x0058 - 0x0058)
class UDMBattlePlyaer_FriendlyFire_Damage : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattlePlyaer_FriendlyFire_Damage");
		return ptr;
	}

};


// Class ATExt.DMDebugDispPlayerEffect
// 0x0000 (0x0058 - 0x0058)
class UDMDebugDispPlayerEffect : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMDebugDispPlayerEffect");
		return ptr;
	}

};


// Class ATExt.DMDebugDelayDamage
// 0x0000 (0x0058 - 0x0058)
class UDMDebugDelayDamage : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMDebugDelayDamage");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerBattlePlayer
// 0x0000 (0x0030 - 0x0030)
class UATDebugMenuEventHandlerBattlePlayer : public UCFDebugMenuEventHandlerContentsFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerBattlePlayer");
		return ptr;
	}

};


// Class ATExt.DMBoolRandomPadEnable
// 0x0000 (0x0058 - 0x0058)
class UDMBoolRandomPadEnable : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBoolRandomPadEnable");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerRandomPadSetting
// 0x0000 (0x0030 - 0x0030)
class UATDebugMenuEventHandlerRandomPadSetting : public UCFDebugMenuEventHandlerContentsFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerRandomPadSetting");
		return ptr;
	}

};


// Class ATExt.DMBattleDebugDispMotionInfo
// 0x0000 (0x0058 - 0x0058)
class UDMBattleDebugDispMotionInfo : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMBattleDebugDispMotionInfo");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerBattleDebugDisp
// 0x0000 (0x0030 - 0x0030)
class UATDebugMenuEventHandlerBattleDebugDisp : public UCFDebugMenuEventHandlerContentsFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerBattleDebugDisp");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerSkillSetting
// 0x0000 (0x0030 - 0x0030)
class UATDebugMenuEventHandlerSkillSetting : public UCFDebugMenuEventHandlerContentsFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerSkillSetting");
		return ptr;
	}

};


// Class ATExt.DMDebugHud_DebugInfo
// 0x0000 (0x0058 - 0x0058)
class UDMDebugHud_DebugInfo : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMDebugHud_DebugInfo");
		return ptr;
	}

};


// Class ATExt.DMDebugHud_PrintLog
// 0x0000 (0x0058 - 0x0058)
class UDMDebugHud_PrintLog : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.DMDebugHud_PrintLog");
		return ptr;
	}

};


// Class ATExt.ATDebugMenuEventHandlerDebugHudSetting
// 0x0000 (0x0030 - 0x0030)
class UATDebugMenuEventHandlerDebugHudSetting : public UCFDebugMenuEventHandlerContentsFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATDebugMenuEventHandlerDebugHudSetting");
		return ptr;
	}

};


// Class ATExt.ATGeneralBattleMainPhase
// 0x0058 (0x0088 - 0x0030)
class UATGeneralBattleMainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleMainPhase");
		return ptr;
	}

};


// Class ATExt.ATEventBattle25MainPhase
// 0x0008 (0x0090 - 0x0088)
class UATEventBattle25MainPhase : public UATGeneralBattleMainPhase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0088(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattle25MainPhase");
		return ptr;
	}

};


// Class ATExt.ATEventBattle25RootManager
// 0x0010 (0x03A0 - 0x0390)
class AATEventBattle25RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              DiseaseConditionTime;                                     // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DiseaseConditionLife;                                     // 0x0394(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DiseaseConditionLifeEnemy;                                // 0x0398(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x039C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattle25RootManager");
		return ptr;
	}

};


// Class ATExt.ATEventBattle41MainPhase
// 0x0060 (0x0090 - 0x0030)
class UATEventBattle41MainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0030(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattle41MainPhase");
		return ptr;
	}

};


// Class ATExt.ATEventBattle41RootManager
// 0x0008 (0x0398 - 0x0390)
class AATEventBattle41RootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              HeatupValue;                                              // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattle41RootManager");
		return ptr;
	}

};


// Class ATExt.ATEventBattleAccessor
// 0x7D48 (0x7D70 - 0x0028)
class UATEventBattleAccessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0xD0];                                      // 0x0028(0x00D0) MISSED OFFSET
	struct FName                                       BattleName;                                               // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7C60];                                    // 0x0100(0x7C60) MISSED OFFSET
	class UATDataAssetEventBattleAsyncLoad*            BattleLoader;                                             // 0x7D60(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x7D68(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleAccessor");
		return ptr;
	}

};


// Class ATExt.ATEventBattleAfterAction
// 0x0000 (0x0028 - 0x0028)
class UATEventBattleAfterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleAfterAction");
		return ptr;
	}

};


// Class ATExt.ATEventBattleCondition
// 0x0018 (0x0040 - 0x0028)
class UATEventBattleCondition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleCondition");
		return ptr;
	}

};


// Class ATExt.ATEventBattleLoader
// 0x0000 (0x0338 - 0x0338)
class AATEventBattleLoader : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleLoader");
		return ptr;
	}

};


// Class ATExt.ATEventBattleSituationJudge
// 0x0028 (0x0050 - 0x0028)
class UATEventBattleSituationJudge : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0028(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleSituationJudge");
		return ptr;
	}

};


// Class ATExt.ATEventBattleStartPoint
// 0x0010 (0x0348 - 0x0338)
class AATEventBattleStartPoint : public AActor
{
public:
	struct FName                                       BattleName;                                               // 0x0338(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EEventBattleTeamType                               TeamType;                                                 // 0x0340(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	EEventBattleMemberIndex                            MemberIndex;                                              // 0x0341(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	bool                                               bSetRotation;                                             // 0x0342(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x0343(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleStartPoint");
		return ptr;
	}

};


// Class ATExt.ATEventBattleStartPointManager
// 0x0050 (0x0078 - 0x0028)
class UATEventBattleStartPointManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0028(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATEventBattleStartPointManager");
		return ptr;
	}

};


// Class ATExt.ATGameModeBase
// 0x0000 (0x0420 - 0x0420)
class AATGameModeBase : public ACFGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGameModeBase");
		return ptr;
	}

};


// Class ATExt.ATGameModeDevelopmentRoot
// 0x0000 (0x0420 - 0x0420)
class AATGameModeDevelopmentRoot : public AATGameModeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGameModeDevelopmentRoot");
		return ptr;
	}

};


// Class ATExt.ATGameModeRoot
// 0x0000 (0x0420 - 0x0420)
class AATGameModeRoot : public AATGameModeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGameModeRoot");
		return ptr;
	}

};


// Class ATExt.ATGeneralBattleDirectionPhase
// 0x0068 (0x0098 - 0x0030)
class UATGeneralBattleDirectionPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x68];                                      // 0x0030(0x0068) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleDirectionPhase");
		return ptr;
	}


	void OnDemoTiming(EDEMO_TYPE DemoType, EDEMO_TIMING_TYPE DemoTiming, const struct FName& DemoName, bool continueFlag);
};


// Class ATExt.ATGeneralBattleRootManager
// 0x0000 (0x0390 - 0x0390)
class AATGeneralBattleRootManager : public AATEventBattleRootManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleRootManager");
		return ptr;
	}

};


// Class ATExt.ATGeneralBattleSettlePhase
// 0x0090 (0x00C0 - 0x0030)
class UATGeneralBattleSettlePhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x90];                                      // 0x0030(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleSettlePhase");
		return ptr;
	}


	void OnEndWarning();
	void OnEndResult();
	void OnEndBattleHUD();
};


// Class ATExt.ATGeneralBattleSetUpPhase
// 0x0000 (0x0030 - 0x0030)
class UATGeneralBattleSetUpPhase : public UATEventBattlePhaseBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATGeneralBattleSetUpPhase");
		return ptr;
	}

};


// Class ATExt.ATHUDDebugBootMenu
// 0x0030 (0x0218 - 0x01E8)
class UATHUDDebugBootMenu : public UCFHUDDebugNodeSelectorComponent
{
public:
	class UTexture2D*                                  DrawTexture;                                              // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x01F0(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATHUDDebugBootMenu");
		return ptr;
	}

};


// Class ATExt.ATLake
// 0x0010 (0x0348 - 0x0338)
class AATLake : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATLake");
		return ptr;
	}


	void Update(class UPostProcessComponent* PostProcessComponent, class UStaticMeshComponent* LakeMesh, class UStaticMeshComponent* UnderLakeMesh);
	void Init(class UPostProcessComponent* PostProcessComponent, class UStaticMeshComponent* LakeMesh, class UStaticMeshComponent* UnderLakeMesh);
};


// Class ATExt.ATLinkBonus
// 0x0160 (0x0188 - 0x0028)
class UATLinkBonus : public UObject
{
public:
	unsigned char                                      UnknownData00[0x160];                                     // 0x0028(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATLinkBonus");
		return ptr;
	}

};


// Class ATExt.ATMonitoring
// 0x0018 (0x0040 - 0x0028)
class UATMonitoring : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0028(0x0004) MISSED OFFSET
	bool                                               bIsBind_OnEndAutoSave;                                    // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	class UGameInstance*                               ParentGameInstance;                                       // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x0038(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATMonitoring");
		return ptr;
	}

};


// Class ATExt.ATMonitoringSaveGame
// 0x0498 (0x04C0 - 0x0028)
class UATMonitoringSaveGame : public USaveGame
{
public:
	struct FMonitoringSavePack                         Pack;                                                     // 0x0028(0x0498)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATMonitoringSaveGame");
		return ptr;
	}

};


// Class ATExt.ATPadVibrationManager
// 0x0028 (0x0058 - 0x0030)
class UATPadVibrationManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0030(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATPadVibrationManager");
		return ptr;
	}

};


// Class ATExt.ATPushSolverShapeCapsule
// 0x0000 (0x05B0 - 0x05B0)
class UATPushSolverShapeCapsule : public UCFPushSolverShapeCapsule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATPushSolverShapeCapsule");
		return ptr;
	}

};


// Class ATExt.ATRiver
// 0x0018 (0x0350 - 0x0338)
class AATRiver : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0338(0x0010) MISSED OFFSET
	class APostProcessVolume*                          PostProcessVolume;                                        // 0x0348(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATRiver");
		return ptr;
	}

};


// Class ATExt.ATSaveSystem
// 0x9A708 (0x9A730 - 0x0028)
class UATSaveSystem : public USaveGame
{
public:
	struct FATSaveSystemUser                           User;                                                     // 0x0028(0x0068)
	struct FATSaveSystemOption                         Option;                                                   // 0x0090(0x00AC) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x013C(0x0004) MISSED OFFSET
	struct FATSaveSystemInputAssign                    InputAssign;                                              // 0x0140(0x0178)
	struct FATSaveSystemHeader                         Headers[0xB];                                             // 0x02B8(0xE068)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSaveSystem");
		return ptr;
	}

};


// Class ATExt.ATSceneAtrociousPhase
// 0x0060 (0x00A0 - 0x0040)
class UATSceneAtrociousPhase : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneAtrociousPhase");
		return ptr;
	}

};


// Class ATExt.ATSceneAtrociousPhaseParam
// 0x0000 (0x0040 - 0x0040)
class UATSceneAtrociousPhaseParam : public UCFSceneChangeParamBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneAtrociousPhaseParam");
		return ptr;
	}

};


// Class ATExt.ATSceneBattleBegin
// 0x0008 (0x0048 - 0x0040)
class UATSceneBattleBegin : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBattleBegin");
		return ptr;
	}


	void OnBattleBegin();
};


// Class ATExt.ATSceneBattleEnd
// 0x0008 (0x0048 - 0x0040)
class UATSceneBattleEnd : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBattleEnd");
		return ptr;
	}


	void OnEndFinishUI();
};


// Class ATExt.ATSceneBattleGameOverMenu
// 0x0000 (0x0040 - 0x0040)
class UATSceneBattleGameOverMenu : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBattleGameOverMenu");
		return ptr;
	}


	void OnEndGameOverUI(EGameoverSelectType SelectType);
};


// Class ATExt.ATSceneBattleMain
// 0x0008 (0x0048 - 0x0040)
class UATSceneBattleMain : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBattleMain");
		return ptr;
	}


	void OnBattleGameOverStart();
	void OnBattleEnd();
};


// Class ATExt.ATSceneBattleResult
// 0x0000 (0x0040 - 0x0040)
class UATSceneBattleResult : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBattleResult");
		return ptr;
	}

};


// Class ATExt.ATSceneBattleRetry
// 0x0000 (0x0040 - 0x0040)
class UATSceneBattleRetry : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBattleRetry");
		return ptr;
	}

};


// Class ATExt.ATSceneBootInstall
// 0x0058 (0x0098 - 0x0040)
class UATSceneBootInstall : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBootInstall");
		return ptr;
	}

};


// Class ATExt.ATSceneBootLogo
// 0x0000 (0x0040 - 0x0040)
class UATSceneBootLogo : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBootLogo");
		return ptr;
	}

};


// Class ATExt.ATSceneBootRoot
// 0x0000 (0x0040 - 0x0040)
class UATSceneBootRoot : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBootRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneBootSetup
// 0x0058 (0x0098 - 0x0040)
class UATSceneBootSetup : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneBootSetup");
		return ptr;
	}

};


// Class ATExt.ATSceneChangeCommonCallBase
// 0x0000 (0x0030 - 0x0030)
class UATSceneChangeCommonCallBase : public UCFSceneChangeCommonCall
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneChangeCommonCallBase");
		return ptr;
	}

};


// Class ATExt.ATSceneChangeCommonCallLevelChange
// 0x0000 (0x0030 - 0x0030)
class UATSceneChangeCommonCallLevelChange : public UATSceneChangeCommonCallBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneChangeCommonCallLevelChange");
		return ptr;
	}

};


// Class ATExt.ATSceneCharacterChange
// 0x0000 (0x0040 - 0x0040)
class UATSceneCharacterChange : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCharacterChange");
		return ptr;
	}

};


// Class ATExt.ATSceneCharacterChangeParam
// 0x0018 (0x0058 - 0x0040)
class UATSceneCharacterChangeParam : public UCFSceneChangeParamBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCharacterChangeParam");
		return ptr;
	}

};


// Class ATExt.ATSceneCharacterLoad
// 0x0008 (0x0048 - 0x0040)
class UATSceneCharacterLoad : public UCFScene
{
public:
	class UATSceneCharacterChangeParam*                ChangeParam;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCharacterLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneCharacterLoadParam
// 0x0018 (0x0058 - 0x0040)
class UATSceneCharacterLoadParam : public UCFSceneChangeParamBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCharacterLoadParam");
		return ptr;
	}

};


// Class ATExt.ATSceneCharacterPartsChange
// 0x0000 (0x0040 - 0x0040)
class UATSceneCharacterPartsChange : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCharacterPartsChange");
		return ptr;
	}

};


// Class ATExt.ATSceneCharacterPartsChangeParam
// 0x0018 (0x0058 - 0x0040)
class UATSceneCharacterPartsChangeParam : public UCFSceneChangeParamBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCharacterPartsChangeParam");
		return ptr;
	}

};


// Class ATExt.ATSceneCharacterPartsLoad
// 0x0008 (0x0048 - 0x0040)
class UATSceneCharacterPartsLoad : public UCFScene
{
public:
	class UATSceneCharacterPartsChangeParam*           ChangeParam;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCharacterPartsLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneCharacterPartsLoadParam
// 0x0018 (0x0058 - 0x0040)
class UATSceneCharacterPartsLoadParam : public UCFSceneChangeParamBase
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCharacterPartsLoadParam");
		return ptr;
	}

};


// Class ATExt.ATSceneDemoBase
// 0x0008 (0x0048 - 0x0040)
class UATSceneDemoBase : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDemoBase");
		return ptr;
	}


	void OnDemoTiming(EDEMO_TYPE Type, EDEMO_TIMING_TYPE Timing, const struct FName& Name, bool bContinueFlag);
};


// Class ATExt.ATSceneCinemaDemo
// 0x0000 (0x0048 - 0x0048)
class UATSceneCinemaDemo : public UATSceneDemoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneCinemaDemo");
		return ptr;
	}

};


// Class ATExt.ATSceneDebugUIWindow
// 0x0058 (0x0098 - 0x0040)
class UATSceneDebugUIWindow : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDebugUIWindow");
		return ptr;
	}

};


// Class ATExt.ATSceneFree
// 0x0018 (0x0058 - 0x0040)
class UATSceneFree : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFree");
		return ptr;
	}


	void OnQuestPhaseBegin(EQUEST_PHASE_TYPE Type, const struct FName& TargetID);
	void OnQuestEventBegin(EQUEST_PHASE_TYPE Type, const struct FName& TargetID);
	void OnDemoTiming(EDEMO_TYPE Type, EDEMO_TIMING_TYPE Timing, const struct FName& Name, bool bContinueFlag);
};


// Class ATExt.ATSceneDevelopmentAssetCheckFree
// 0x0000 (0x0058 - 0x0058)
class UATSceneDevelopmentAssetCheckFree : public UATSceneFree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentAssetCheckFree");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeLoadBase
// 0x0080 (0x00C0 - 0x0040)
class UATSceneFreeLoadBase : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0040(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeLoadBase");
		return ptr;
	}


	void OnQuestEventBegin(EQUEST_PHASE_TYPE Type, const struct FName& TargetID);
};


// Class ATExt.ATSceneDevelopmentAssetCheckLoad
// 0x0000 (0x00C0 - 0x00C0)
class UATSceneDevelopmentAssetCheckLoad : public UATSceneFreeLoadBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentAssetCheckLoad");
		return ptr;
	}

};


// Class ATExt.ATScenePreLoad
// 0x0058 (0x0098 - 0x0040)
class UATScenePreLoad : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATScenePreLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentAssetCheckPreLoad
// 0x0000 (0x0098 - 0x0098)
class UATSceneDevelopmentAssetCheckPreLoad : public UATScenePreLoad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentAssetCheckPreLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentAssetCheckRoot
// 0x0000 (0x0040 - 0x0040)
class UATSceneDevelopmentAssetCheckRoot : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentAssetCheckRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentBootMenu
// 0x0060 (0x00A0 - 0x0040)
class UATSceneDevelopmentBootMenu : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0040(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentBootMenu");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentMemoryCheckFree
// 0x0000 (0x0058 - 0x0058)
class UATSceneDevelopmentMemoryCheckFree : public UATSceneFree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentMemoryCheckFree");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentMemoryCheckLoad
// 0x0000 (0x00C0 - 0x00C0)
class UATSceneDevelopmentMemoryCheckLoad : public UATSceneFreeLoadBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentMemoryCheckLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentMemoryCheckPreLoad
// 0x0000 (0x0098 - 0x0098)
class UATSceneDevelopmentMemoryCheckPreLoad : public UATScenePreLoad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentMemoryCheckPreLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentMemoryCheckRoot
// 0x0000 (0x0040 - 0x0040)
class UATSceneDevelopmentMemoryCheckRoot : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentMemoryCheckRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentMessageTest
// 0x0000 (0x0040 - 0x0040)
class UATSceneDevelopmentMessageTest : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentMessageTest");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentQuestTestFree
// 0x0000 (0x0058 - 0x0058)
class UATSceneDevelopmentQuestTestFree : public UATSceneFree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentQuestTestFree");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentQuestTestLoad
// 0x0000 (0x00C0 - 0x00C0)
class UATSceneDevelopmentQuestTestLoad : public UATSceneFreeLoadBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentQuestTestLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentQuestTestPreLoad
// 0x0000 (0x0098 - 0x0098)
class UATSceneDevelopmentQuestTestPreLoad : public UATScenePreLoad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentQuestTestPreLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentQuestTestRoot
// 0x0000 (0x0040 - 0x0040)
class UATSceneDevelopmentQuestTestRoot : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentQuestTestRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentRoot
// 0x0058 (0x0098 - 0x0040)
class UATSceneDevelopmentRoot : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentSoundTestCRI
// 0x0000 (0x0040 - 0x0040)
class UATSceneDevelopmentSoundTestCRI : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentSoundTestCRI");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentTestBattleFree
// 0x0000 (0x0058 - 0x0058)
class UATSceneDevelopmentTestBattleFree : public UATSceneFree
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentTestBattleFree");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentTestBattleLoad
// 0x0000 (0x00C0 - 0x00C0)
class UATSceneDevelopmentTestBattleLoad : public UATSceneFreeLoadBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentTestBattleLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentTestBattlePreLoad
// 0x0000 (0x0098 - 0x0098)
class UATSceneDevelopmentTestBattlePreLoad : public UATScenePreLoad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentTestBattlePreLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneDevelopmentTestBattleRoot
// 0x0000 (0x0040 - 0x0040)
class UATSceneDevelopmentTestBattleRoot : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneDevelopmentTestBattleRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneEvent
// 0x0018 (0x0058 - 0x0040)
class UATSceneEvent : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneEvent");
		return ptr;
	}


	void OnQuestPhaseBegin(EQUEST_PHASE_TYPE Type, const struct FName& TargetID);
	void OnQuestEventEnd(EQUEST_PHASE_TYPE Type, const struct FName& TargetID);
	void OnDemoTiming(EDEMO_TYPE Type, EDEMO_TIMING_TYPE Timing, const struct FName& Name, bool bContinueFlag);
};


// Class ATExt.ATSceneFreeRoot
// 0x0008 (0x0048 - 0x0040)
class UATSceneFreeRoot : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea01
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea01 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea01");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea02
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea02 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea02");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea03
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea03 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea03");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea04
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea04 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea04");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea05
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea05 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea05");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea06
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea06 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea06");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea07
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea07 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea07");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea08
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea08 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea08");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea09
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea09 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea09");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea10
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea10 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea10");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea11
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea11 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea11");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea12
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea12 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea12");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea13
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea13 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea13");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea14
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea14 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea14");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea15
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea15 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea15");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea16
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea16 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea16");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea17
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea17 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea17");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea18
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea18 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea18");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea19
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea19 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea19");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea20
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea20 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea20");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea21
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea21 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea21");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea22
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea22 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea22");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea23
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea23 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea23");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea24
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea24 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea24");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea25
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea25 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea25");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea26
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea26 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea26");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea27
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea27 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea27");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea28
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea28 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea28");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea31
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea31 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea31");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea32
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea32 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea32");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea33
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea33 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea33");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeArea34
// 0x0000 (0x0048 - 0x0048)
class UATSceneFreeArea34 : public UATSceneFreeRoot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeArea34");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeLoad
// 0x0000 (0x00C0 - 0x00C0)
class UATSceneFreeLoad : public UATSceneFreeLoadBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneFreePreLoad
// 0x0000 (0x0098 - 0x0098)
class UATSceneFreePreLoad : public UATScenePreLoad
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreePreLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneFreeTalk
// 0x0058 (0x0098 - 0x0040)
class UATSceneFreeTalk : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneFreeTalk");
		return ptr;
	}

};


// Class ATExt.ATSceneGeneralDemo
// 0x0000 (0x0048 - 0x0048)
class UATSceneGeneralDemo : public UATSceneDemoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneGeneralDemo");
		return ptr;
	}

};


// Class ATExt.ATSceneGeneralTalk
// 0x0008 (0x0048 - 0x0040)
class UATSceneGeneralTalk : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneGeneralTalk");
		return ptr;
	}


	void OnQuestPhaseEnd(EQUEST_PHASE_TYPE Type, const struct FName& TargetID);
};


// Class ATExt.ATSceneIngameDemo
// 0x0000 (0x0048 - 0x0048)
class UATSceneIngameDemo : public UATSceneDemoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneIngameDemo");
		return ptr;
	}

};


// Class ATExt.ATSceneMainRoot
// 0x0000 (0x0040 - 0x0040)
class UATSceneMainRoot : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneMainRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneManager
// 0x0000 (0x01C0 - 0x01C0)
class UATSceneManager : public UCFSceneManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneManager");
		return ptr;
	}

};


// Class ATExt.ATSceneMiniGame
// 0x0058 (0x0098 - 0x0040)
class UATSceneMiniGame : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneMiniGame");
		return ptr;
	}

};


// Class ATExt.ATScenePause
// 0x0008 (0x0048 - 0x0040)
class UATScenePause : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATScenePause");
		return ptr;
	}

};


// Class ATExt.ATSceneRoot
// 0x0058 (0x0098 - 0x0040)
class UATSceneRoot : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneParam
// 0x0008 (0x0048 - 0x0040)
class UATSceneParam : public UCFSceneChangeParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneParam");
		return ptr;
	}

};


// Class ATExt.ATSceneSaveDataLoadBase
// 0x0070 (0x00B0 - 0x0040)
class UATSceneSaveDataLoadBase : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0040(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneSaveDataLoadBase");
		return ptr;
	}

};


// Class ATExt.ATSceneSaveDataLoad
// 0x0000 (0x00B0 - 0x00B0)
class UATSceneSaveDataLoad : public UATSceneSaveDataLoadBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneSaveDataLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneSaveDataLoadParam
// 0x0008 (0x0048 - 0x0040)
class UATSceneSaveDataLoadParam : public UCFSceneChangeParamBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0040(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneSaveDataLoadParam");
		return ptr;
	}

};


// Class ATExt.ATSceneTitleCheckSaveData
// 0x0058 (0x0098 - 0x0040)
class UATSceneTitleCheckSaveData : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneTitleCheckSaveData");
		return ptr;
	}

};


// Class ATExt.ATSceneTitleMain
// 0x0058 (0x0098 - 0x0040)
class UATSceneTitleMain : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneTitleMain");
		return ptr;
	}

};


// Class ATExt.ATSceneTitleMenu
// 0x0058 (0x0098 - 0x0040)
class UATSceneTitleMenu : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneTitleMenu");
		return ptr;
	}

};


// Class ATExt.ATSceneTitleMenuLicense
// 0x0058 (0x0098 - 0x0040)
class UATSceneTitleMenuLicense : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneTitleMenuLicense");
		return ptr;
	}

};


// Class ATExt.ATSceneTitleMovie
// 0x0000 (0x0040 - 0x0040)
class UATSceneTitleMovie : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneTitleMovie");
		return ptr;
	}

};


// Class ATExt.ATSceneTitleRoot
// 0x0058 (0x0098 - 0x0040)
class UATSceneTitleRoot : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneTitleRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneTrialClear
// 0x0000 (0x0040 - 0x0040)
class UATSceneTrialClear : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneTrialClear");
		return ptr;
	}


	void OnEndFinishUI();
};


// Class ATExt.ATSceneUIMainMenu
// 0x0018 (0x0058 - 0x0040)
class UATSceneUIMainMenu : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0040(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneUIMainMenu");
		return ptr;
	}

};


// Class ATExt.ATSceneWorldMapLoad
// 0x0000 (0x00C0 - 0x00C0)
class UATSceneWorldMapLoad : public UATSceneFreeLoadBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneWorldMapLoad");
		return ptr;
	}

};


// Class ATExt.ATSceneWorldMapRoot
// 0x0058 (0x0098 - 0x0040)
class UATSceneWorldMapRoot : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0040(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneWorldMapRoot");
		return ptr;
	}

};


// Class ATExt.ATSceneWorldMapSelect
// 0x0000 (0x0040 - 0x0040)
class UATSceneWorldMapSelect : public UCFScene
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSceneWorldMapSelect");
		return ptr;
	}

};


// Class ATExt.ATSingleton
// 0x0000 (0x0048 - 0x0048)
class UATSingleton : public UCFSingleton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSingleton");
		return ptr;
	}

};


// Class ATExt.ATSoulEmblem
// 0x0080 (0x00A8 - 0x0028)
class UATSoulEmblem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x80];                                      // 0x0028(0x0080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSoulEmblem");
		return ptr;
	}

};


// Class ATExt.ATStateMachine
// 0x0000 (0x0028 - 0x0028)
class UATStateMachine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATStateMachine");
		return ptr;
	}

};


// Class ATExt.ATSyncTimer
// 0x0008 (0x0038 - 0x0030)
class UATSyncTimer : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATSyncTimer");
		return ptr;
	}

};


// Class ATExt.ATTrophyManager
// 0x0048 (0x0078 - 0x0030)
class UATTrophyManager : public UBaseObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0030(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATTrophyManager");
		return ptr;
	}

};


// Class ATExt.ATTutorialBattleMainPhase
// 0x0098 (0x00C8 - 0x0030)
class UATTutorialBattleMainPhase : public UATEventBattlePhaseBase
{
public:
	unsigned char                                      UnknownData00[0x98];                                      // 0x0030(0x0098) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATTutorialBattleMainPhase");
		return ptr;
	}

};


// Class ATExt.ATTutorialBattleRootManager
// 0x0028 (0x03B8 - 0x0390)
class AATTutorialBattleRootManager : public AATEventBattleRootManagerBase
{
public:
	float                                              WaitTimeAfterTips;                                        // 0x0390(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0394(0x0004) MISSED OFFSET
	TArray<struct FTipsSpec>                           TipsSpecTable;                                            // 0x0398(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              HeatupValue;                                              // 0x03A8(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                HpStopValue;                                              // 0x03AC(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             AtomEffect;                                               // 0x03B0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ATTutorialBattleRootManager");
		return ptr;
	}

};


// Class ATExt.CameraActorIngameDemo
// 0x0010 (0x09B0 - 0x09A0)
class ACameraActorIngameDemo : public ACameraActor
{
public:
	class UCameraAnimInst*                             CameraAnimInst;                                           // 0x09A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x09A8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CameraActorIngameDemo");
		return ptr;
	}

};


// Class ATExt.CameraAttachActor
// 0x0008 (0x0340 - 0x0338)
class ACameraAttachActor : public AActor
{
public:
	class USceneComponent*                             SceneComponent;                                           // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CameraAttachActor");
		return ptr;
	}

};


// Class ATExt.CameraSpringArmComponent
// 0x0030 (0x0300 - 0x02D0)
class UCameraSpringArmComponent : public USpringArmComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x02D0(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.CameraSpringArmComponent");
		return ptr;
	}

};


// Class ATExt.ViewActor
// 0x00A0 (0x03D8 - 0x0338)
class AViewActor : public AActor
{
public:
	class USpringArmComponent*                         m_xSpringArmComp;                                         // 0x0338(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraComponent*                            m_xCameraComp;                                            // 0x0340(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0348(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActor");
		return ptr;
	}

};


// Class ATExt.ViewActorPlayerMoveBase
// 0x0070 (0x0448 - 0x03D8)
class AViewActorPlayerMoveBase : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x03D8(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorPlayerMoveBase");
		return ptr;
	}

};


// Class ATExt.ViewActorFly
// 0x00B8 (0x0500 - 0x0448)
class AViewActorFly : public AViewActorPlayerMoveBase
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0448(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorFly");
		return ptr;
	}

};


// Class ATExt.ViewActorAirCarFly
// 0x0030 (0x0530 - 0x0500)
class AViewActorAirCarFly : public AViewActorFly
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x0500(0x0028) MISSED OFFSET
	class UDataTable*                                  m_pAirCarCameraConstParamTable;                           // 0x0528(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorAirCarFly");
		return ptr;
	}

};


// Class ATExt.ViewActorAirCarFpView
// 0x0070 (0x0448 - 0x03D8)
class AViewActorAirCarFpView : public AViewActor
{
public:
	class AAirCar*                                     AirCarIns;                                                // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAirCarController*                           AirCarCtl;                                                // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class AAT_Character*                               RideCharIns;                                              // 0x03E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class USkeletalMeshComponent*                      RideCharMesh;                                             // 0x03F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x50];                                      // 0x03F8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorAirCarFpView");
		return ptr;
	}

};


// Class ATExt.ViewActorAnim
// 0x0018 (0x03F0 - 0x03D8)
class AViewActorAnim : public AViewActor
{
public:
	bool                                               bCalcFov;                                                 // 0x03D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x03D9(0x0007) MISSED OFFSET
	class ACameraAttachActor*                          CameraAttachActor;                                        // 0x03E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorAnim");
		return ptr;
	}

};


// Class ATExt.ViewActorAppearance
// 0x0008 (0x03E0 - 0x03D8)
class AViewActorAppearance : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorAppearance");
		return ptr;
	}

};


// Class ATExt.ViewActorBaseballGame
// 0x0040 (0x0418 - 0x03D8)
class AViewActorBaseballGame : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03D8(0x0038) MISSED OFFSET
	class UParticleSystemComponent*                    m_RadiationParticle;                                      // 0x0410(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorBaseballGame");
		return ptr;
	}

};


// Class ATExt.ViewActorBattle
// 0x0088 (0x0460 - 0x03D8)
class AViewActorBattle : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x88];                                      // 0x03D8(0x0088) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorBattle");
		return ptr;
	}

};


// Class ATExt.ViewActorBattleBossSkill
// 0x0038 (0x0410 - 0x03D8)
class AViewActorBattleBossSkill : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03D8(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorBattleBossSkill");
		return ptr;
	}

};


// Class ATExt.ViewActorBattleEnd
// 0x0018 (0x03F0 - 0x03D8)
class AViewActorBattleEnd : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorBattleEnd");
		return ptr;
	}

};


// Class ATExt.ViewActorShortCombo
// 0x0010 (0x03E8 - 0x03D8)
class AViewActorShortCombo : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorShortCombo");
		return ptr;
	}

};


// Class ATExt.ViewActorComboCut
// 0x0008 (0x03F0 - 0x03E8)
class AViewActorComboCut : public AViewActorShortCombo
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorComboCut");
		return ptr;
	}

};


// Class ATExt.ViewActorCookDemo
// 0x0028 (0x0400 - 0x03D8)
class AViewActorCookDemo : public AViewActor
{
public:
	class UCameraAnim*                                 NowCameraAnim;                                            // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x18];                                      // 0x03E0(0x0018) MISSED OFFSET
	class ACameraAttachActor*                          m_pAttachActor;                                           // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorCookDemo");
		return ptr;
	}


	void FinishCameraAnim();
	void ChangeCameraAnim(class UCameraAnim* CameraAnim, bool bLoop);
};


// Class ATExt.ViewActorCpl005SkillDeathSlicer
// 0x0028 (0x0400 - 0x03D8)
class AViewActorCpl005SkillDeathSlicer : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorCpl005SkillDeathSlicer");
		return ptr;
	}

};


// Class ATExt.ViewActorCpl018SkillSpecial
// 0x0028 (0x0400 - 0x03D8)
class AViewActorCpl018SkillSpecial : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D8(0x0028) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorCpl018SkillSpecial");
		return ptr;
	}

};


// Class ATExt.ViewActorDirection
// 0x0038 (0x0410 - 0x03D8)
class AViewActorDirection : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D8(0x0028) MISSED OFFSET
	class ACameraAttachActor*                          m_pAttachActor;                                           // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0408(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorDirection");
		return ptr;
	}


	bool CalcCameraFlip(class AAT_CharacterBase* pDirecter);
};


// Class ATExt.ViewActorEncounter
// 0x0018 (0x03F0 - 0x03D8)
class AViewActorEncounter : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorEncounter");
		return ptr;
	}

};


// Class ATExt.ViewActorFix
// 0x0000 (0x03D8 - 0x03D8)
class AViewActorFix : public AViewActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorFix");
		return ptr;
	}

};


// Class ATExt.ViewActorStayBase
// 0x0008 (0x03E0 - 0x03D8)
class AViewActorStayBase : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorStayBase");
		return ptr;
	}

};


// Class ATExt.ViewActorFloatBoostSlide
// 0x0000 (0x03E0 - 0x03E0)
class AViewActorFloatBoostSlide : public AViewActorStayBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorFloatBoostSlide");
		return ptr;
	}

};


// Class ATExt.ViewActorFlyPlayer
// 0x0038 (0x0538 - 0x0500)
class AViewActorFlyPlayer : public AViewActorFly
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0500(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorFlyPlayer");
		return ptr;
	}

};


// Class ATExt.ViewActorFPS
// 0x0020 (0x03F8 - 0x03D8)
class AViewActorFPS : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorFPS");
		return ptr;
	}

};


// Class ATExt.ViewActorGetItemAutoPilot
// 0x0100 (0x04D8 - 0x03D8)
class AViewActorGetItemAutoPilot : public AViewActor
{
public:
	class UMaterial*                                   m_material;                                               // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF8];                                      // 0x03E0(0x00F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorGetItemAutoPilot");
		return ptr;
	}

};


// Class ATExt.ViewActorHuntingDino
// 0x0028 (0x0400 - 0x03D8)
class AViewActorHuntingDino : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D8(0x0020) MISSED OFFSET
	class ACameraAttachActor*                          m_pAttachActor;                                           // 0x03F8(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorHuntingDino");
		return ptr;
	}


	bool CalcCameraFlip(class AAT_CharacterBase* pDirecter);
};


// Class ATExt.ViewActorIngameDemo
// 0x0008 (0x03E0 - 0x03D8)
class AViewActorIngameDemo : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorIngameDemo");
		return ptr;
	}

};


// Class ATExt.ViewActorLandTarget
// 0x0000 (0x03D8 - 0x03D8)
class AViewActorLandTarget : public AViewActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorLandTarget");
		return ptr;
	}

};


// Class ATExt.ViewActorLongBlowoff
// 0x0050 (0x0428 - 0x03D8)
class AViewActorLongBlowoff : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x03D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorLongBlowoff");
		return ptr;
	}

};


// Class ATExt.ViewActorLongBlowoffHit
// 0x0010 (0x03E8 - 0x03D8)
class AViewActorLongBlowoffHit : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorLongBlowoffHit");
		return ptr;
	}

};


// Class ATExt.ViewActorNappaBlazingStorm
// 0x0078 (0x0450 - 0x03D8)
class AViewActorNappaBlazingStorm : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x78];                                      // 0x03D8(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorNappaBlazingStorm");
		return ptr;
	}

};


// Class ATExt.ViewActorNappaGiantStorm
// 0x0030 (0x0408 - 0x03D8)
class AViewActorNappaGiantStorm : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorNappaGiantStorm");
		return ptr;
	}

};


// Class ATExt.ViewActorNimbusRoll
// 0x0008 (0x03E8 - 0x03E0)
class AViewActorNimbusRoll : public AViewActorStayBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorNimbusRoll");
		return ptr;
	}

};


// Class ATExt.ViewActorNormal
// 0x00B8 (0x0500 - 0x0448)
class AViewActorNormal : public AViewActorPlayerMoveBase
{
public:
	TMap<struct FName, float>                          OverrideConstParam;                                       // 0x0448(0x0050) (BlueprintVisible, ZeroConstructor)
	bool                                               bUseOverrideConstParam;                                   // 0x0498(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x67];                                      // 0x0499(0x0067) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorNormal");
		return ptr;
	}

};


// Class ATExt.ViewActorOffsetHighBoost
// 0x0018 (0x03F0 - 0x03D8)
class AViewActorOffsetHighBoost : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03D8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorOffsetHighBoost");
		return ptr;
	}

};


// Class ATExt.ViewActorOnSphereGround
// 0x0080 (0x04C8 - 0x0448)
class AViewActorOnSphereGround : public AViewActorPlayerMoveBase
{
public:
	bool                                               m_UseDebugRotate;                                         // 0x0448(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               m_AddDebugRotate;                                         // 0x0449(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x044A(0x0002) MISSED OFFSET
	struct FRotator                                    m_DebugRotate;                                            // 0x044C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x70];                                      // 0x0458(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorOnSphereGround");
		return ptr;
	}

};


// Class ATExt.ViewActorPlayableCharacterBustUp
// 0x0048 (0x0420 - 0x03D8)
class AViewActorPlayableCharacterBustUp : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x03D8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorPlayableCharacterBustUp");
		return ptr;
	}

};


// Class ATExt.ViewActorRaceGame
// 0x0020 (0x03F8 - 0x03D8)
class AViewActorRaceGame : public AViewActor
{
public:
	class UCurveVector*                                CameraMoveCurve;                                          // 0x03D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MoveTime;                                                 // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRelative;                                               // 0x03E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x13];                                      // 0x03E5(0x0013) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorRaceGame");
		return ptr;
	}

};


// Class ATExt.ViewActorSkill
// 0x00C0 (0x0498 - 0x03D8)
class AViewActorSkill : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0xC0];                                      // 0x03D8(0x00C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorSkill");
		return ptr;
	}

};


// Class ATExt.ViewActorSkillDoubleSunday
// 0x0010 (0x03E8 - 0x03D8)
class AViewActorSkillDoubleSunday : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorSkillDoubleSunday");
		return ptr;
	}

};


// Class ATExt.ViewActorSkillDoubleSundayAttack
// 0x0020 (0x03F8 - 0x03D8)
class AViewActorSkillDoubleSundayAttack : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorSkillDoubleSundayAttack");
		return ptr;
	}

};


// Class ATExt.ViewActorSkillWildQuakeFall
// 0x0030 (0x0408 - 0x03D8)
class AViewActorSkillWildQuakeFall : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x03D8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorSkillWildQuakeFall");
		return ptr;
	}

};


// Class ATExt.ViewActorSkillWildQuakeRise
// 0x0010 (0x03E8 - 0x03D8)
class AViewActorSkillWildQuakeRise : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorSkillWildQuakeRise");
		return ptr;
	}

};


// Class ATExt.ViewActorStartingNimbus
// 0x0000 (0x03E0 - 0x03E0)
class AViewActorStartingNimbus : public AViewActorStayBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorStartingNimbus");
		return ptr;
	}

};


// Class ATExt.ViewActorSubQuest
// 0x0110 (0x04E8 - 0x03D8)
class AViewActorSubQuest : public AViewActor
{
public:
	class AActor*                                      CurrentAttachActor;                                       // 0x03D8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x03E0(0x0058) MISSED OFFSET
	class UDataTable*                                  SubQuestCameraTable;                                      // 0x0438(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  SubQuestCameraBlendParam;                                 // 0x0440(0x0008) (ZeroConstructor, IsPlainOldData)
	class ACameraAttachActor*                          CameraAttachActor;                                        // 0x0448(0x0008) (ZeroConstructor, IsPlainOldData)
	class UInterpGroupInst*                            AnimInterpGroupInst[0x3];                                 // 0x0450(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCameraAnimInst*                             CameraAnimInst[0x3];                                      // 0x0468(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0480(0x0008) MISSED OFFSET
	class UCameraAnimInst*                             CameraAnimLPInst[0x3];                                    // 0x0488(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x04A0(0x0008) MISSED OFFSET
	struct FString                                     AttachBoneName;                                           // 0x04A8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x04B8(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorSubQuest");
		return ptr;
	}

};


// Class ATExt.ViewActorSupportPursue
// 0x0020 (0x03F8 - 0x03D8)
class AViewActorSupportPursue : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x03D8(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorSupportPursue");
		return ptr;
	}

};


// Class ATExt.ViewActorTalkFocus
// 0x0098 (0x0470 - 0x03D8)
class AViewActorTalkFocus : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x03D8(0x0038) MISSED OFFSET
	class AActor*                                      TargetActor;                                              // 0x0410(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0418(0x0008) MISSED OFFSET
	class ACameraAttachActor*                          pCameraAttachActor;                                       // 0x0420(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCameraAnim*                                 CameraAnim;                                               // 0x0428(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCameraAnimInst*                             CameraAnimInst;                                           // 0x0430(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x30];                                      // 0x0438(0x0030) MISSED OFFSET
	class UInterpGroupInst*                            AnimInterpGroupInst;                                      // 0x0468(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorTalkFocus");
		return ptr;
	}

};


// Class ATExt.ViewActorTargetActor
// 0x0008 (0x03E0 - 0x03D8)
class AViewActorTargetActor : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorTargetActor");
		return ptr;
	}

};


// Class ATExt.ViewActorTargetFloat
// 0x0000 (0x03D8 - 0x03D8)
class AViewActorTargetFloat : public AViewActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorTargetFloat");
		return ptr;
	}

};


// Class ATExt.ViewActorTPSSkill
// 0x0008 (0x03E0 - 0x03D8)
class AViewActorTPSSkill : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x03D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorTPSSkill");
		return ptr;
	}

};


// Class ATExt.ViewActorTwinFoot
// 0x0038 (0x0538 - 0x0500)
class AViewActorTwinFoot : public AViewActorNormal
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0500(0x0030) MISSED OFFSET
	class UDataTable*                                  m_pTwinFootCameraConstParamTable;                         // 0x0530(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorTwinFoot");
		return ptr;
	}

};


// Class ATExt.ViewActorWeakness
// 0x0010 (0x03E8 - 0x03D8)
class AViewActorWeakness : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x03D8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorWeakness");
		return ptr;
	}

};


// Class ATExt.ViewActorWindRoad
// 0x0048 (0x0420 - 0x03D8)
class AViewActorWindRoad : public AViewActor
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x03D8(0x0028) MISSED OFFSET
	class UParticleSystemComponent*                    m_RadiationEffect;                                        // 0x0400(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x18];                                      // 0x0408(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ATExt.ViewActorWindRoad");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
