#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum ATExt.EBrokenReason
enum class EBrokenReason : uint8_t
{
	EBrokenReason__Unknown         = 0,
	EBrokenReason__Punch           = 1,
	EBrokenReason__AuraBullet      = 2,
	EBrokenReason__EBrokenReason_MAX = 3
};


// Enum ATExt.ECOMMUNITY_CATEGORY
enum class ECOMMUNITY_CATEGORY : uint8_t
{
	ECOMMUNITY_CATEGORY__NONE      = 0,
	ECOMMUNITY_CATEGORY__ZFIGHTERS = 1,
	ECOMMUNITY_CATEGORY__COOKING   = 2,
	ECOMMUNITY_CATEGORY__TRAINING  = 3,
	ECOMMUNITY_CATEGORY__DEVELOP   = 4,
	ECOMMUNITY_CATEGORY__GODS      = 5,
	ECOMMUNITY_CATEGORY__ADULT     = 6,
	ECOMMUNITY_CATEGORY__ADVENTURE = 7,
	ECOMMUNITY_CATEGORY__MAX       = 8
};


// Enum ATExt.ESOUL_EM_RARITY
enum class ESOUL_EM_RARITY : uint8_t
{
	ESOUL_EM_RARITY__NONE          = 0,
	ESOUL_EM_RARITY__NORMAL        = 1,
	ESOUL_EM_RARITY__RARE          = 2,
	ESOUL_EM_RARITY__RARE01        = 3,
	ESOUL_EM_RARITY__ESOUL_EM_MAX  = 4
};


// Enum ATExt.ESOUL_EM_UNLOCK_STATE
enum class ESOUL_EM_UNLOCK_STATE : uint8_t
{
	ESOUL_EM_UNLOCK_STATE__NONE    = 0,
	ESOUL_EM_UNLOCK_STATE__LOCK    = 1,
	ESOUL_EM_UNLOCK_STATE__UNLOCK  = 2,
	ESOUL_EM_UNLOCK_STATE__UNLOCK_AVAILABLE = 3,
	ESOUL_EM_UNLOCK_STATE__MAX     = 4
};


// Enum ATExt.ESOUL_EM_PREFERENCE
enum class ESOUL_EM_PREFERENCE : uint8_t
{
	ESOUL_EM_PREFERENCE__NONE      = 0,
	ESOUL_EM_PREFERENCE__NORMAL    = 1,
	ESOUL_EM_PREFERENCE__FAVORITE  = 2,
	ESOUL_EM_PREFERENCE__DISLIKE   = 3,
	ESOUL_EM_PREFERENCE__MAX       = 4
};


// Enum ATExt.EEventBattleMemberIndex
enum class EEventBattleMemberIndex : uint8_t
{
	EEventBattleMemberIndex__Leader = 0,
	EEventBattleMemberIndex__SupportL = 1,
	EEventBattleMemberIndex__SupportR = 2,
	EEventBattleMemberIndex__Member04 = 3,
	EEventBattleMemberIndex__Member05 = 4,
	EEventBattleMemberIndex__Member06 = 5,
	EEventBattleMemberIndex__Member07 = 6,
	EEventBattleMemberIndex__Member08 = 7,
	EEventBattleMemberIndex__Member09 = 8,
	EEventBattleMemberIndex__Member10 = 9,
	EEventBattleMemberIndex__EEventBattleMemberIndex_MAX = 10
};


// Enum ATExt.EEventBattleTeamType
enum class EEventBattleTeamType : uint8_t
{
	EEventBattleTeamType__Friend   = 0,
	EEventBattleTeamType__Enemy    = 1,
	EEventBattleTeamType__EEventBattleTeamType_MAX = 2
};


// Enum ATExt.EAreaLockedStatus
enum class EAreaLockedStatus : uint8_t
{
	EAreaLockedStatus__AREA_LOCKED_UNOPEN = 0,
	EAreaLockedStatus__AREA_LOCKED_UNLOCK_NEW = 1,
	EAreaLockedStatus__AREA_LOCKED_UNLOCKED = 2,
	EAreaLockedStatus__AREA_LOCKED_LOCKED = 3,
	EAreaLockedStatus__AREA_LOCKED_MAX = 4
};


// Enum ATExt.EAreaIndex
enum class EAreaIndex : uint8_t
{
	EAreaIndex__AREA_INDEX_AREA_01P = 0,
	EAreaIndex__AREA_INDEX_AREA_02P = 1,
	EAreaIndex__AREA_INDEX_AREA_03P = 2,
	EAreaIndex__AREA_INDEX_AREA_04P = 3,
	EAreaIndex__AREA_INDEX_AREA_05P = 4,
	EAreaIndex__AREA_INDEX_AREA_06P = 5,
	EAreaIndex__AREA_INDEX_AREA_07P = 6,
	EAreaIndex__AREA_INDEX_AREA_08P = 7,
	EAreaIndex__AREA_INDEX_AREA_09P = 8,
	EAreaIndex__AREA_INDEX_AREA_10P = 9,
	EAreaIndex__AREA_INDEX_AREA_11P = 10,
	EAreaIndex__AREA_INDEX_AREA_12P = 11,
	EAreaIndex__AREA_INDEX_AREA_13P = 12,
	EAreaIndex__AREA_INDEX_AREA_14P = 13,
	EAreaIndex__AREA_INDEX_AREA_15P = 14,
	EAreaIndex__AREA_INDEX_AREA_16P = 15,
	EAreaIndex__AREA_INDEX_AREA_17P = 16,
	EAreaIndex__AREA_INDEX_AREA_18P = 17,
	EAreaIndex__AREA_INDEX_AREA_19P = 18,
	EAreaIndex__AREA_INDEX_AREA_20P = 19,
	EAreaIndex__AREA_INDEX_AREA_21P = 20,
	EAreaIndex__AREA_INDEX_AREA_22P = 21,
	EAreaIndex__AREA_INDEX_AREA_23P = 22,
	EAreaIndex__AREA_INDEX_AREA_24P = 23,
	EAreaIndex__AREA_INDEX_AREA_25P = 24,
	EAreaIndex__AREA_INDEX_AREA_26P = 25,
	EAreaIndex__AREA_INDEX_AREA_27P = 26,
	EAreaIndex__AREA_INDEX_AREA_28P = 27,
	EAreaIndex__AREA_INDEX_AREA_29P = 28,
	EAreaIndex__AREA_INDEX_AREA_30P = 29,
	EAreaIndex__AREA_INDEX_AREA_31P = 30,
	EAreaIndex__AREA_INDEX_AREA_32P = 31,
	EAreaIndex__AREA_INDEX_AREA_33P = 32,
	EAreaIndex__AREA_INDEX_AREA_34P = 33,
	EAreaIndex__AREA_INDEX_AREA_35P = 34,
	EAreaIndex__AREA_INDEX_AREA_36P = 35,
	EAreaIndex__AREA_INDEX_AREA_37P = 36,
	EAreaIndex__AREA_INDEX_AREA_38P = 37,
	EAreaIndex__AREA_INDEX_AREA_39P = 38,
	EAreaIndex__AREA_INDEX_AREA_40P = 39,
	EAreaIndex__AREA_INDEX_AREA_41P = 40,
	EAreaIndex__AREA_INDEX_AREA_42P = 41,
	EAreaIndex__AREA_INDEX_AREA_43P = 42,
	EAreaIndex__AREA_INDEX_AREA_44P = 43,
	EAreaIndex__AREA_INDEX_AREA_45P = 44,
	EAreaIndex__AREA_INDEX_AREA_46P = 45,
	EAreaIndex__AREA_INDEX_AREA_47P = 46,
	EAreaIndex__AREA_INDEX_AREA_48P = 47,
	EAreaIndex__AREA_INDEX_AREA_49P = 48,
	EAreaIndex__AREA_INDEX_AREA_50P = 49,
	EAreaIndex__AREA_INDEX_MAX     = 50
};


// Enum ATExt.EOnceDirectionType
enum class EOnceDirectionType : uint8_t
{
	EOnceDirectionType__None       = 0,
	EOnceDirectionType__Summon     = 1,
	EOnceDirectionType__EnergyCharge = 2,
	EOnceDirectionType__AttackUp   = 3,
	EOnceDirectionType__Weakness   = 4,
	EOnceDirectionType__Max        = 5
};


// Enum ATExt.EDlcOwnershipState
enum class EDlcOwnershipState : uint8_t
{
	EDlcOwnershipState__None       = 0,
	EDlcOwnershipState__Possession = 1,
	EDlcOwnershipState__Revocation = 2,
	EDlcOwnershipState__Restoration = 3,
	EDlcOwnershipState__EDlcOwnershipState_MAX = 4
};


// Enum ATExt.EFieldMemoriesFoundStatus
enum class EFieldMemoriesFoundStatus : uint8_t
{
	EFieldMemoriesFoundStatus__None = 0,
	EFieldMemoriesFoundStatus__UNFOUND = 1,
	EFieldMemoriesFoundStatus__FOUND = 2,
	EFieldMemoriesFoundStatus__ALREADY_READ = 3,
	EFieldMemoriesFoundStatus__EFieldMemoriesFoundStatus_MAX = 4
};


// Enum ATExt.EOptionIcon
enum class EOptionIcon : uint8_t
{
	EOptionIcon__ICON_PAD_P        = 0,
	EOptionIcon__ICON_PAD_X        = 1,
	EOptionIcon__ICON_KEY_AND_MOUSE = 2,
	EOptionIcon__ICON_MAX          = 3
};


// Enum ATExt.EOptionSwitch
enum class EOptionSwitch : uint8_t
{
	EOptionSwitch__SWITCH_OFF      = 0,
	EOptionSwitch__SWITCH_ON       = 1,
	EOptionSwitch__SWITCH_MAX      = 2
};


// Enum ATExt.EOptionCameraControl
enum class EOptionCameraControl : uint8_t
{
	EOptionCameraControl__CONTROL_NORMAL = 0,
	EOptionCameraControl__CONTROL_REVERSE = 1,
	EOptionCameraControl__CONTROL_MAX = 2
};


// Enum ATExt.EDlcNoticeState
enum class EDlcNoticeState : uint8_t
{
	EDlcNoticeState__None          = 0,
	EDlcNoticeState__NotyfiedAvailable = 1,
	EDlcNoticeState__NotyfiedRevocation = 2,
	EDlcNoticeState__EDlcNoticeState_MAX = 3
};


// Enum ATExt.ESaveGameSlot
enum class ESaveGameSlot : uint8_t
{
	ESaveGameSlot__ManualSave0     = 0,
	ESaveGameSlot__ManualSave1     = 1,
	ESaveGameSlot__ManualSave2     = 2,
	ESaveGameSlot__ManualSave3     = 3,
	ESaveGameSlot__ManualSave4     = 4,
	ESaveGameSlot__ManualSave5     = 5,
	ESaveGameSlot__ManualSave6     = 6,
	ESaveGameSlot__ManualSave7     = 7,
	ESaveGameSlot__ManualSave8     = 8,
	ESaveGameSlot__ManualSave9     = 9,
	ESaveGameSlot__AutoSave0       = 10,
	ESaveGameSlot__SystemSave0     = 11,
	ESaveGameSlot__SaveDataNum     = 12,
	ESaveGameSlot__ESaveGameSlot_MAX = 13
};


// Enum ATExt.ESkillCameraType
enum class ESkillCameraType : uint8_t
{
	ESkillCameraType__None         = 0,
	ESkillCameraType__Target       = 1,
	ESkillCameraType__Camera       = 2,
	ESkillCameraType__LookAt       = 3,
	ESkillCameraType__ESkillCameraType_MAX = 4
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ATExt.ATABPChangerRequest
// 0x0010
struct FATABPChangerRequest
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ATExt.LoopWearEffectInfo
// 0x0018
struct FLoopWearEffectInfo
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.SoulEmTableInfo
// 0x0010
struct FSoulEmTableInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UATSoulEmblem*                               SoulEmIns;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATDataAssetCarParameterAreaInfo
// 0x0018
struct FATDataAssetCarParameterAreaInfo
{
	struct FName                                       CarGroupName;                                             // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DensityForSpawn;                                          // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarSpeedMin;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CarSpeedMax;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.LoadingTalkAnimAsset
// 0x0028
struct FLoadingTalkAnimAsset
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ATExt.ReferenceToTalkAnimAssetInstance
// 0x0008
struct FReferenceToTalkAnimAssetInstance
{
	class UClass*                                      TalkAnimBP;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATDataAssetTalkAnimationInfo
// 0x0030
struct FATDataAssetTalkAnimationInfo
{
	struct FName                                       MasterId;                                                 // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftClassProperty ATExt.ATDataAssetTalkAnimationInfo.TalkAnimBP
};

// ScriptStruct ATExt.MonitoringSlotSkill
// 0x00A0
struct FMonitoringSlotSkill
{
	struct FName                                       SkillId[0x14];                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.MonitoringCommon
// 0x03F8
struct FMonitoringCommon
{
	TMap<int, int>                                     CountMenu;                                                // 0x0000(0x0050) (ZeroConstructor)
	int                                                CountDevelopShop[0x2];                                    // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FName, int>                            CountTrainingShop;                                        // 0x0058(0x0050) (ZeroConstructor)
	TMap<struct FName, uint32_t>                       CountTime;                                                // 0x00A8(0x0050) (ZeroConstructor)
	int                                                CountStartMiniGameAirCar;                                 // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountGoalMiniGameAirCar;                                  // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountStartMiniGameTwinFoot;                               // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountGoalMiniGameTwinFoot;                                // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountStartMiniGameBaseBall;                               // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountGoalMiniGameBaseBall;                                // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountGoalMiniGameBaseBallHomeRun;                         // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0114(0x0004) MISSED OFFSET
	TMap<struct FName, int>                            CountCooking;                                             // 0x0118(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            CountCookingCourse;                                       // 0x0168(0x0050) (ZeroConstructor)
	int                                                CountDestroyedEnemiesBase;                                // 0x01B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountFieldMemories;                                       // 0x01BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountUseItemInBattle;                                     // 0x01C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01C4(0x0004) MISSED OFFSET
	TMap<struct FString, int>                          CountLandmark;                                            // 0x01C8(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            CountSkillInvocation;                                     // 0x0218(0x0050) (ZeroConstructor)
	TMap<struct FName, bool>                           SkillOpen;                                                // 0x0268(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            TotalItem;                                                // 0x02B8(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            CountBoughtItemByShop;                                    // 0x0308(0x0050) (ZeroConstructor)
	TMap<struct FName, int>                            CountItemUsed;                                            // 0x0358(0x0050) (ZeroConstructor)
	TMap<int, struct FMonitoringSlotSkill>             HasSkills;                                                // 0x03A8(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveCharacterBuff
// 0x0010
struct FATSaveCharacterBuff
{
	struct FName                                       BuffName;                                                 // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveCharacterStatus
// 0x0020
struct FATSaveCharacterStatus
{
	int                                                Level;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	int64_t                                            Exp;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                HitPoint;                                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MagicPoint;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SparkingPoint;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveCharacterBoost
// 0x0018
struct FATSaveCharacterBoost
{
	int                                                HitPoint;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MagicPoint;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShortOffensivePow;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShortDefensivePow;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LongOffensivePow;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LongDefensivePow;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameIndividualCharacter
// 0x0288
struct FATSaveGameIndividualCharacter
{
	struct FSkillSaveInfo                              SkillInfo;                                                // 0x0000(0x0178)
	int                                                VariationId;                                              // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FormId;                                                   // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SparkingID;                                               // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0184(0x0004) MISSED OFFSET
	struct FATSaveCharacterBuff                        OtherBuffList[0xC];                                       // 0x0188(0x0010)
	struct FATSaveCharacterStatus                      Status;                                                   // 0x0248(0x0020) (ZeroConstructor, IsPlainOldData)
	struct FATSaveCharacterBoost                       Boost;                                                    // 0x0268(0x0018) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0280(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.MonitoringProgress
// 0x00B8
struct FMonitoringProgress
{
	TMap<struct FString, struct FATSaveGameIndividualCharacter> ClearStat;                                                // 0x0000(0x0050) (ZeroConstructor)
	int                                                TotalGetMoney;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalSubMoney;                                            // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalGetDMedal;                                           // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalUsedDMedal;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalWinner;                                              // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	TMap<int, int>                                     CountField;                                               // 0x0068(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.MonitoringArea
// 0x0080
struct FMonitoringArea
{
	TArray<int>                                        CountZOrb;                                                // 0x0000(0x0010) (ZeroConstructor)
	int                                                CountLostItem;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountCatchFruit;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountOreDeposit;                                          // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountHuntAnimal;                                          // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountHuntDinosaur;                                        // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountCatchFish;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CountBonfire;                                             // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	TMap<struct FName, int>                            CountFishing;                                             // 0x0030(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.MonitoringSavePack
// 0x0498
struct FMonitoringSavePack
{
	struct FMonitoringCommon                           MonitoringCommon;                                         // 0x0000(0x03F8)
	TMap<struct FString, struct FMonitoringProgress>   MonitoringProgress;                                       // 0x03F8(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FMonitoringArea>       MonitoringArea;                                           // 0x0448(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveSystemUser
// 0x0068
struct FATSaveSystemUser
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           LastSaveSlot;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MostEpisodeNum;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MostChapterNum;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           MostPartNum;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsEulaAgree;                                              // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsPrivacyPolicy;                                          // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsKpiNotice;                                              // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	TMap<struct FName, EDlcNoticeState>                DlcNoticeMap;                                             // 0x0018(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveSystemOption
// 0x00AC
struct FATSaveSystemOption
{
	int                                                SkillPaletteWait;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HiddenMinimap;                                            // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PadVibration;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CameraSpeed;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CameraControlHorizontal;                                  // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CameraControlVertical;                                    // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LanguageVoice;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnableSubtitle;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VolumeBgm;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VolumeSe;                                                 // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VolumeVoice;                                              // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VolumeMovie;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IconDesign;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisplaySize;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisplayWidth;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DisplayHeight;                                            // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AantiAliasing;                                            // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShadowQuality;                                            // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                VSYNC;                                                    // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WindowMode;                                               // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RenderRate;                                               // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KpiAgree;                                                 // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             Reserve[0x54];                                            // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveSystemInputAssign
// 0x0178
struct FATSaveSystemInputAssign
{
	struct FName                                       Walk;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Move_Up;                                                  // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Move_Left;                                                // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Move_Down;                                                // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Move_Right;                                               // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Boost;                                                    // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BoostUp;                                                  // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Jump;                                                     // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Fly_Rolling;                                              // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Fly_Ascend;                                               // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Fly_Descend;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       KiSearch;                                                 // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       TargetCursor;                                             // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       KiBlust;                                                  // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MapChange;                                                // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Ride;                                                     // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Ride_Off;                                                 // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RideChange_Left;                                          // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       RideChange_Right;                                         // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MineralRadar;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Car_Forward;                                              // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Car_Reverse;                                              // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Car_ChangeView;                                           // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Car_Sound_Left;                                           // 0x00B8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Car_Sound_Right;                                          // 0x00C0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       BaseBall_Swing;                                           // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       FastForward;                                              // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Boost;                                             // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_HighBoost;                                         // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_TargetChange_Left;                                 // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_TargetChange_Right;                                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_TargetCancel;                                      // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_MeleeAtk;                                          // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_KiAtk;                                             // 0x0108(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_KiRecover;                                         // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_MoveMode;                                          // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Guard;                                             // 0x0120(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Zcombo;                                            // 0x0128(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_FormChange_Palette;                                // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Support_Palette;                                   // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_ActiveSkill_Palette;                               // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Item_Palette;                                      // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Palette_Up;                                        // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Palette_Left;                                      // 0x0158(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Palette_Down;                                      // 0x0160(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       Battle_Palette_Right;                                     // 0x0168(0x0008) (ZeroConstructor, IsPlainOldData)
	ECFKeyboardLayoutType                              Keyboard_Type;                                            // 0x0170(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0171(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveSystemHeader
// 0xE068
struct FATSaveSystemHeader
{
	uint32_t                                           LevelNum;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EpisodeNum;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ChapterNum;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PartNum;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             AreaID;                                                   // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FTimespan                                   PlayTime;                                                 // 0x0018(0x0008) (ZeroConstructor)
	struct FDateTime                                   Timestamp;                                                // 0x0020(0x0008) (ZeroConstructor)
	unsigned char                                      CharacterName[0x20];                                      // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      MainCurrent[0x20];                                        // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           ThumbnailBin[0x7000];                                     // 0x0068(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.TipsSpec
// 0x0010
struct FTipsSpec
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              enemyLifeRate;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              WaitTime;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ATExt.SkillCameraInfo
// 0x002C
struct FSkillCameraInfo
{
	float                                              Duration;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistStart;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistEnd;                                                  // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CenterStart;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CenterEnd;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotStart;                                                 // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    RotEnd;                                                   // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ATExt.CommunitySkillAdultList
// 0x0018 (0x0020 - 0x0008)
struct FCommunitySkillAdultList : public FTableRowBase
{
	struct FName                                       BuffId;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FeverRate;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShopBuyRate;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ShopSellRate;                                             // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillZFighter
// 0x0010 (0x0018 - 0x0008)
struct FCommunitySkillZFighter : public FTableRowBase
{
	struct FName                                       BuffId;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       SupportBuffId;                                            // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.CommunitySkillZFighterList
// 0x0108 (0x0110 - 0x0008)
struct FCommunitySkillZFighterList : public FTableRowBase
{
	struct FCommunitySkillZFighter                     SkillTbl[0xB];                                            // 0x0008(0x0018) (Edit)
};

// ScriptStruct ATExt.CommunitySkillTable
// 0x0008 (0x0010 - 0x0008)
struct FCommunitySkillTable : public FTableRowBase
{
	struct FName                                       BuffId;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.CommunitySkillTableList
// 0x00B0 (0x00B8 - 0x0008)
struct FCommunitySkillTableList : public FTableRowBase
{
	struct FCommunitySkillTable                        SkillTbl[0xB];                                            // 0x0008(0x0010) (Edit)
};

// ScriptStruct ATExt.CommunitySkillAdventureParam
// 0x0008 (0x0010 - 0x0008)
struct FCommunitySkillAdventureParam : public FTableRowBase
{
	float                                              Value;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillAdventure
// 0x0010 (0x0018 - 0x0008)
struct FCommunitySkillAdventure : public FTableRowBase
{
	struct FName                                       BuffId;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ItemEffectUpRate;                                         // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillAdventureList
// 0x0110 (0x0118 - 0x0008)
struct FCommunitySkillAdventureList : public FTableRowBase
{
	float                                              OxygenGaugeValueBase;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FCommunitySkillAdventure                    SkillTbl[0xB];                                            // 0x0010(0x0018) (Edit)
};

// ScriptStruct ATExt.CommunitySkillCooking
// 0x0018 (0x0020 - 0x0008)
struct FCommunitySkillCooking : public FTableRowBase
{
	struct FName                                       BuffId;                                                   // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              BuffTimeRate;                                             // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SuccessRate;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StatusUpBonusRate;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.CommunitySkillCookingList
// 0x0160 (0x0168 - 0x0008)
struct FCommunitySkillCookingList : public FTableRowBase
{
	struct FCommunitySkillCooking                      SkillTbl[0xB];                                            // 0x0008(0x0020) (Edit)
};

// ScriptStruct ATExt.CommunityBoardLayout
// 0x0100 (0x0108 - 0x0008)
struct FCommunityBoardLayout : public FTableRowBase
{
	int                                                Col1;                                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col2;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col3;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col4;                                                     // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col5;                                                     // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col6;                                                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col7;                                                     // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col8;                                                     // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col9;                                                     // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col10;                                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col11;                                                    // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col12;                                                    // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col13;                                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col14;                                                    // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col15;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col16;                                                    // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col17;                                                    // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col18;                                                    // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col19;                                                    // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col20;                                                    // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col21;                                                    // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col22;                                                    // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col23;                                                    // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col24;                                                    // 0x0064(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col25;                                                    // 0x0068(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col26;                                                    // 0x006C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col27;                                                    // 0x0070(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col28;                                                    // 0x0074(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col29;                                                    // 0x0078(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col30;                                                    // 0x007C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col31;                                                    // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col32;                                                    // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col33;                                                    // 0x0088(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col34;                                                    // 0x008C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col35;                                                    // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col36;                                                    // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col37;                                                    // 0x0098(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col38;                                                    // 0x009C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col39;                                                    // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col40;                                                    // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col41;                                                    // 0x00A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col42;                                                    // 0x00AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col43;                                                    // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col44;                                                    // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col45;                                                    // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col46;                                                    // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col47;                                                    // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col48;                                                    // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col49;                                                    // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col50;                                                    // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col51;                                                    // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col52;                                                    // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col53;                                                    // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col54;                                                    // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col55;                                                    // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col56;                                                    // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col57;                                                    // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col58;                                                    // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col59;                                                    // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col60;                                                    // 0x00F4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col61;                                                    // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col62;                                                    // 0x00FC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col63;                                                    // 0x0100(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Col64;                                                    // 0x0104(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.CommunityBoardLinkInfo
// 0x00E0 (0x00E8 - 0x0008)
struct FCommunityBoardLinkInfo : public FTableRowBase
{
	int                                                ReleaseLevel;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link1;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link2;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link3;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link4;                                                    // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link5;                                                    // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link6;                                                    // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link7;                                                    // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link8;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link9;                                                    // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Link10;                                                   // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PanelOffset;                                              // 0x0034(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PanelScale;                                               // 0x003C(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LineSOffset[0xA];                                         // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LineEOffset[0xA];                                         // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.LinkBonusParam
// 0x0050 (0x0058 - 0x0008)
struct FLinkBonusParam : public FTableRowBase
{
	struct FName                                       JName;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SaveNo;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FormationNum;                                             // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlusBonus;                                                // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	struct FName                                       LinkMemberId1;                                            // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LinkMemberId2;                                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LinkMemberId3;                                            // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LinkMemberId4;                                            // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LinkMemberId5;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LinkMemberId6;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.CommunityCategoryParam
// 0x0098 (0x00A0 - 0x0008)
struct FCommunityCategoryParam : public FTableRowBase
{
	struct FName                                       JName;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeaderId;                                                 // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank1;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank2;                                             // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank3;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank4;                                             // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank5;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank6;                                             // 0x0034(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank7;                                             // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank8;                                             // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LvRangeRank9;                                             // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommMaxLv;                                                // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId01;                                            // 0x0048(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId02;                                            // 0x0050(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId03;                                            // 0x0058(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId04;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId05;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId06;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId07;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId08;                                            // 0x0080(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId09;                                            // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillId10;                                            // 0x0090(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommSkillIdOver;                                          // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.CommunitySkillParam
// 0x0028 (0x0030 - 0x0008)
struct FCommunitySkillParam : public FTableRowBase
{
	struct FName                                       JName;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       CommCategoryId;                                           // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       DescId;                                                   // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Group;                                                    // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.SoulEmCharacterParam
// 0x00F0 (0x00F8 - 0x0008)
struct FSoulEmCharacterParam : public FTableRowBase
{
	struct FName                                       JName;                                                    // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       NameId;                                                   // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SaveNo;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ECOMMUNITY_CATEGORY                                GoodCommId;                                               // 0x001C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	struct FName                                       ProfileId01;                                              // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ProfileId02;                                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestId02;                                                // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       ProfileId03;                                              // 0x0038(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       QuestId03;                                                // 0x0040(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SelectedVoiceId01;                                        // 0x0048(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SelectedVoiceId02;                                        // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SelectedVoiceId03;                                        // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemUseVoiceId01;                                         // 0x0054(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                ItemUseVoiceId02;                                         // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
	struct FName                                       LinkBonusId01;                                            // 0x0060(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LinkBonusId02;                                            // 0x0068(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LinkBonusId03;                                            // 0x0070(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LinkBonusId04;                                            // 0x0078(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FavDef;                                                   // 0x0080(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FavRewardBorder01;                                        // 0x0084(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FavRewardItemId01;                                        // 0x0088(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FavRewardItemNum01;                                       // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FavRewardBorder02;                                        // 0x0094(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FavRewardItemId02;                                        // 0x0098(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FavRewardItemNum02;                                       // 0x00A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FavRewardBorder03;                                        // 0x00A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       FavRewardItemId03;                                        // 0x00A8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                FavRewardItemNum03;                                       // 0x00B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityDefLv01;                                         // 0x00B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityMaxLv01;                                         // 0x00B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityDefLv02;                                         // 0x00BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityMaxLv02;                                         // 0x00C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityDefLv03;                                         // 0x00C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityMaxLv03;                                         // 0x00C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityDefLv04;                                         // 0x00CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityMaxLv04;                                         // 0x00D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityDefLv05;                                         // 0x00D4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityMaxLv05;                                         // 0x00D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityDefLv06;                                         // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityMaxLv06;                                         // 0x00E0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityDefLv07;                                         // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                CommunityMaxLv07;                                         // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00EC(0x0004) MISSED OFFSET
	struct FName                                       UniqueId;                                                 // 0x00F0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.SoulEmItemPreference
// 0x0068 (0x0070 - 0x0008)
struct FSoulEmItemPreference : public FTableRowBase
{
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_001;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_002;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_003;                                         // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_004;                                         // 0x000B(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_005;                                         // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_006;                                         // 0x000D(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_007;                                         // 0x000E(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_008;                                         // 0x000F(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_009;                                         // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_010;                                         // 0x0011(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_011;                                         // 0x0012(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_012;                                         // 0x0013(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_013;                                         // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_014;                                         // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_015;                                         // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_016;                                         // 0x0017(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_017;                                         // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_018;                                         // 0x0019(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_019;                                         // 0x001A(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_020;                                         // 0x001B(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_021;                                         // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_022;                                         // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_023;                                         // 0x001E(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_024;                                         // 0x001F(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_025;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_026;                                         // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_027;                                         // 0x0022(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_028;                                         // 0x0023(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_029;                                         // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_030;                                         // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_031;                                         // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_032;                                         // 0x0027(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_033;                                         // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_034;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_035;                                         // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_036;                                         // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_037;                                         // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_038;                                         // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_039;                                         // 0x002E(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_040;                                         // 0x002F(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_041;                                         // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_042;                                         // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_043;                                         // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_044;                                         // 0x0033(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_045;                                         // 0x0034(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_046;                                         // 0x0035(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_047;                                         // 0x0036(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_048;                                         // 0x0037(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_049;                                         // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_050;                                         // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_051;                                         // 0x003A(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_052;                                         // 0x003B(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_053;                                         // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_054;                                         // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_055;                                         // 0x003E(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_056;                                         // 0x003F(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_057;                                         // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_058;                                         // 0x0041(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_059;                                         // 0x0042(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_060;                                         // 0x0043(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_061;                                         // 0x0044(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_062;                                         // 0x0045(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_063;                                         // 0x0046(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_064;                                         // 0x0047(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_065;                                         // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_066;                                         // 0x0049(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_067;                                         // 0x004A(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_068;                                         // 0x004B(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_069;                                         // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_070;                                         // 0x004D(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_071;                                         // 0x004E(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_072;                                         // 0x004F(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_073;                                         // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_074;                                         // 0x0051(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_075;                                         // 0x0052(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_076;                                         // 0x0053(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_077;                                         // 0x0054(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_078;                                         // 0x0055(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_079;                                         // 0x0056(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_080;                                         // 0x0057(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_081;                                         // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_082;                                         // 0x0059(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_083;                                         // 0x005A(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_084;                                         // 0x005B(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_085;                                         // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_086;                                         // 0x005D(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_087;                                         // 0x005E(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_088;                                         // 0x005F(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_089;                                         // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_090;                                         // 0x0061(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_091;                                         // 0x0062(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_092;                                         // 0x0063(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_093;                                         // 0x0064(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_094;                                         // 0x0065(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_095;                                         // 0x0066(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_096;                                         // 0x0067(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_097;                                         // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_098;                                         // 0x0069(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_099;                                         // 0x006A(0x0001) (ZeroConstructor, IsPlainOldData)
	ESOUL_EM_PREFERENCE                                SOUL_EM_CHAR_101;                                         // 0x006B(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.SoulEmData
// 0x004C
struct FSoulEmData
{
	unsigned char                                      UnknownData00[0x4C];                                      // 0x0000(0x004C) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameArea
// 0x0064
struct FATSaveGameArea
{
	EAreaLockedStatus                                  AreaLockedStatus[0x32];                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EAreaLockedStatus                                  AreaLockedStatusBackup[0x32];                             // 0x0032(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameAtrociousDefeatParty
// 0x0010
struct FATSaveGameAtrociousDefeatParty
{
	TArray<struct FName>                               IdArray;                                                  // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameAtrocious
// 0x00E0
struct FATSaveGameAtrocious
{
	EATAtrociousSaveState                              PhaseComplete[0x20];                                      // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	TMap<struct FName, struct FATSaveGameAtrociousDefeatParty> DefeatPartyMap;                                           // 0x0080(0x0050) (ZeroConstructor)
	float                                              CoolTime;                                                 // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NoticeBit;                                                // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           Laps;                                                     // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           DefeatEnemyNum;                                           // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameBattle
// 0x0010
struct FATSaveGameBattle
{
	TArray<EOnceDirectionType>                         ExecutedOnceDirectionList;                                // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameParty
// 0x0003
struct FATSaveGameParty
{
	ECHARACTER_TYPE                                    CharacterType;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	ECHARACTER_TYPE                                    SupportCharacter[0x2];                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameQuestCharacter
// 0x0028
struct FATSaveGameQuestCharacter
{
	struct FName                                       Name;                                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TalkID;                                                   // 0x0008(0x0010) (ZeroConstructor)
	unsigned char                                      MobIconType;                                              // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                TalkTimesNum;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bShowBalloonTalk;                                         // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveCharacterCookingBuff
// 0x000C
struct FATSaveCharacterCookingBuff
{
	float                                              Rate;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Time;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimeMax;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameCharacter
// 0x17B88
struct FATSaveGameCharacter
{
	int                                                Money;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ZOrbNum[0x6];                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FATSaveGameIndividualCharacter              Character[0x80];                                          // 0x0020(0x0288)
	struct FATSaveGameParty                            Party;                                                    // 0x14420(0x0003)
	struct FATSaveGameParty                            PartyBeforReplaying;                                      // 0x14423(0x0003)
	unsigned char                                      UnknownData01[0x2];                                       // 0x14426(0x0002) MISSED OFFSET
	struct FATSaveGameQuestCharacter                   QuestChar[0x15E];                                         // 0x14428(0x0028)
	int                                                GenericFlg;                                               // 0x17AD8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FATSaveCharacterCookingBuff                 CookingBuffList[0xC];                                     // 0x17ADC(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsAvailableTrunks;                                       // 0x17B6C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x17B6D(0x0003) MISSED OFFSET
	float                                              fOxygenGaugeValue;                                        // 0x17B70(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsInWaterLocation;                                       // 0x17B74(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x17B75(0x0003) MISSED OFFSET
	struct FVector                                     vInWaterLocation;                                         // 0x17B78(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x17B84(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameCollection
// 0x2F30
struct FATSaveGameCollection
{
	TMap<EAnimalID, int>                               AnimalCaptureCount;                                       // 0x0000(0x0050) (ZeroConstructor)
	TMap<EFishID, int>                                 FishCaptureCount;                                         // 0x0050(0x0050) (ZeroConstructor)
	TMap<ECollectionMiniGame, int>                     MiniGamePlayCount;                                        // 0x00A0(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          MiniGamePlayArea;                                         // 0x00F0(0x0050) (ZeroConstructor)
	TMap<int, int>                                     BattleWinCount;                                           // 0x0140(0x0050) (ZeroConstructor)
	TMap<ECHARACTER_TYPE, int>                         EnemyKillCount;                                           // 0x0190(0x0050) (ZeroConstructor)
	TMap<EBgmCode, int>                                BgmPlayCount;                                             // 0x01E0(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          SkillUseCount;                                            // 0x0230(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          NpcTalkCount;                                             // 0x0280(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          TownVisitCount;                                           // 0x02D0(0x0050) (ZeroConstructor)
	TMap<struct FString, int>                          FieldMemoriesCount;                                       // 0x0320(0x0050) (ZeroConstructor)
	int                                                ItemHealCount[0x100];                                     // 0x0370(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemBentoCount[0x100];                                    // 0x0770(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemMeterialCount[0x100];                                 // 0x0B70(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemBaitCount[0x100];                                     // 0x0F70(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemDevelopCount[0x100];                                  // 0x1370(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemChipCount[0x100];                                     // 0x1770(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemPresentCount[0x100];                                  // 0x1B70(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemImportantCount[0x100];                                // 0x1F70(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemRecipeCount[0x100];                                   // 0x2370(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemCarddassCount[0x100];                                 // 0x2770(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FruitsCount;                                              // 0x2B70(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OreCount;                                                 // 0x2B74(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ZOrbCount;                                                // 0x2B78(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bReleasedCollection;                                      // 0x2B7C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x2B7D(0x0003) MISSED OFFSET
	TMap<struct FString, struct FCollectionOpenFlag>   StoryOpenFlag;                                            // 0x2B80(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   DiagramOpenFlag;                                          // 0x2BD0(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   CharacterOpenFlag;                                        // 0x2C20(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   WorldOpenFlag;                                            // 0x2C70(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   AnimalOpenFlag;                                           // 0x2CC0(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   VehicleOpenFlag;                                          // 0x2D10(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   ItemOpenFlag;                                             // 0x2D60(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   TermOpenFlag;                                             // 0x2DB0(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   CardOpenFlag;                                             // 0x2E00(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   DemoOpenFlag;                                             // 0x2E50(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FCollectionOpenFlag>   BgmOpenFlag;                                              // 0x2EA0(0x0050) (ZeroConstructor)
	struct FName                                       NavigationTarget;                                         // 0x2EF0(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NavigationTargetFlag;                                     // 0x2EF8(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Focus;                                                    // 0x2EFC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2EFD(0x0003) MISSED OFFSET
	uint32_t                                           CompleteFlag[0xC];                                        // 0x2F00(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameSoulEmblem
// 0x0820
struct FATSaveGameSoulEmblem
{
	bool                                               bFormatted;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                UnlockState;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewFlg;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GetNo;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FavorRate;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Rarity;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LinkBonusPlus;                                            // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IsUnlockReward[0x7F];                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IsLeader;                                                 // 0x0218(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LinkBonusEnable[0x80];                                    // 0x021C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CommProficiency[0x80];                                    // 0x041C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CommProficiencyMaxOverItem[0x80];                         // 0x061C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BelongBoard;                                              // 0x081C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameCommunityBoard
// 0x0204
struct FATSaveGameCommunityBoard
{
	bool                                               bUnlocked;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                CommLv;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PanelSoulEmSNo[0x7F];                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameLinkBounus
// 0x0400
struct FATSaveGameLinkBounus
{
	int                                                LinkBonusOccured[0x80];                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewFlg[0x80];                                             // 0x0200(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameCommunity
// 0x71208
struct FATSaveGameCommunity
{
	bool                                               bFormatted;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                PayoutGetNo;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FATSaveGameSoulEmblem                       SoulEmData[0x80];                                         // 0x0008(0x0820) (ZeroConstructor, IsPlainOldData)
	struct FATSaveGameCommunityBoard                   CommBoard[0x80];                                          // 0x41008(0x0204) (ZeroConstructor, IsPlainOldData)
	struct FATSaveGameLinkBounus                       LinkBonus[0x80];                                          // 0x51208(0x0400) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.QuestCondition
// 0x0020
struct FQuestCondition
{
	struct FString                                     Name;                                                     // 0x0000(0x0010) (ZeroConstructor)
	struct FString                                     Value;                                                    // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameCondition
// 0x2000
struct FATSaveGameCondition
{
	struct FQuestCondition                             Conditions[0x100];                                        // 0x0000(0x0020)
};

// ScriptStruct ATExt.ATSaveGameCrossTalk
// 0x00A0
struct FATSaveGameCrossTalk
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) UNKNOWN PROPERTY: SetProperty ATExt.ATSaveGameCrossTalk.AlreadyTalk
	unsigned char                                      UnknownData01[0x50];                                      // 0x0050(0x0050) MISSED OFFSET
};

// ScriptStruct ATExt.DlcConsumableInfo
// 0x0010
struct FDlcConsumableInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EDlcOwnershipState                                 State;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                Stock;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.DlcPersistentInfo
// 0x0010
struct FDlcPersistentInfo
{
	struct FName                                       ID;                                                       // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	EDlcOwnershipState                                 State;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameDlc
// 0x0140
struct FATSaveGameDlc
{
	TMap<struct FName, struct FDlcConsumableInfo>      ConsumableItemMap;                                        // 0x0000(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FDlcPersistentInfo>      QuestMap;                                                 // 0x0050(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FDlcPersistentInfo>      CarddassMap;                                              // 0x00A0(0x0050) (ZeroConstructor)
	TMap<struct FName, struct FDlcPersistentInfo>      OtherMap;                                                 // 0x00F0(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameDragonball
// 0x0118
struct FATSaveGameDragonball
{
	int                                                TotalWishCount;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TMap<int, int>                                     CurrentWishCount;                                         // 0x0008(0x0050) (ZeroConstructor)
	TMap<struct FName, bool>                           bReviveCharacter;                                         // 0x0058(0x0050) (ZeroConstructor)
	struct FTimespan                                   LastUsePlayTime;                                          // 0x00A8(0x0008) (ZeroConstructor)
	TArray<int>                                        DisplayedIdList;                                          // 0x00B0(0x0010) (ZeroConstructor)
	bool                                               bDragonBallReuseMessage;                                  // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x00C1(0x0007) MISSED OFFSET
	TMap<int, int>                                     WishedCount;                                              // 0x00C8(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameEnemiesBaseNode
// 0x0002
struct FATSaveGameEnemiesBaseNode
{
	int8_t                                             InvalidCount;                                             // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsBroken;                                                 // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameEnemiesBase
// 0x0190
struct FATSaveGameEnemiesBase
{
	struct FATSaveGameEnemiesBaseNode                  EnemiesBase[0xC8];                                        // 0x0000(0x0002)
};

// ScriptStruct ATExt.ATSaveGameFieldMemories
// 0x0050
struct FATSaveGameFieldMemories
{
	TMap<struct FName, EFieldMemoriesFoundStatus>      FoundStatus;                                              // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.ATFishingBaitSaveData
// 0x0018
struct FATFishingBaitSaveData
{
	struct FName                                       RowName;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ItemId;                                                   // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Count;                                                    // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameFishing
// 0x0168
struct FATSaveGameFishing
{
	struct FATFishingBaitSaveData                      BaitData[0xF];                                            // 0x0000(0x0018)
};

// ScriptStruct ATExt.ATSaveGameImportantLog
// 0x1F40
struct FATSaveGameImportantLog
{
	unsigned char                                      UnknownData00[0x1F40];                                    // 0x0000(0x1F40) MISSED OFFSET
};

// ScriptStruct ATExt.DragonballItem
// 0x0020
struct FDragonballItem
{
	int                                                Num;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Area;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bSpawned;                                                 // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0009(0x0007) MISSED OFFSET
	struct FString                                     SpawnedPointId;                                           // 0x0010(0x0010) (ZeroConstructor)
};

// ScriptStruct ATExt.PaletteItemInfo
// 0x0018
struct FPaletteItemInfo
{
	struct FString                                     ItemId;                                                   // 0x0000(0x0010) (ZeroConstructor)
	int                                                SetItemNum;                                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameItem
// 0x7A40
struct FATSaveGameItem
{
	struct FItemInventory                              ItemInvHeal[0x100];                                       // 0x0000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvBento[0x100];                                      // 0x0C00(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvMeterial[0x100];                                   // 0x1800(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvBait[0x100];                                       // 0x2400(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvDevelop[0x100];                                    // 0x3000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvChip[0x100];                                       // 0x3C00(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvPresent[0x100];                                    // 0x4800(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvImportant[0x100];                                  // 0x5400(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvRecipe[0x100];                                     // 0x6000(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FItemInventory                              ItemInvCarddass[0x100];                                   // 0x6C00(0x000C) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ItemPalette[0x4];                                         // 0x7800(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDragonballItem                             DragonballItems[0x7];                                     // 0x7810(0x0020)
	struct FDragonballItem                             ReplayPreDragonballItems[0x7];                            // 0x78F0(0x0020)
	unsigned char                                      UnknownData00[0x7];                                       // 0x79D0(0x0007) MISSED OFFSET
	bool                                               IsReplayDragonballFunc;                                   // 0x79D7(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsReplayDragonballEnableSpawn;                            // 0x79D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x79D9(0x0007) MISSED OFFSET
	struct FPaletteItemInfo                            PaletteItems[0x4];                                        // 0x79E0(0x0018)
};

// ScriptStruct ATExt.ATSaveGameMapIcon
// 0x1400
struct FATSaveGameMapIcon
{
	int                                                RespawnTimeData[0x100];                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MineralData[0x100];                                       // 0x0400(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FruitData[0x100];                                         // 0x0800(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RacegameData[0x100];                                      // 0x0C00(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FishingData[0x100];                                       // 0x1000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameMinigame
// 0x01B8
struct FATSaveGameMinigame
{
	struct FMiniGameRaceSaveInfo                       MiniGameRaceSaveInfo;                                     // 0x0000(0x0060)
	struct FMiniGameBaseBallSaveInfo                   MiniGameBaseBallInfo;                                     // 0x0060(0x00B0)
	struct FMiniGameQuizSaveInfo                       MiniGameQuizInfo;                                         // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	struct FMiniGameFishingSaveInfo                    MiniGameFishingSaveInfo;                                  // 0x0118(0x00A0)
};

// ScriptStruct ATExt.ATSaveGameMarker
// 0x0010
struct FATSaveGameMarker
{
	bool                                               bExists;                                                  // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	EAreaIndex                                         AreaIndex;                                                // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FVector                                     PlayerMarkerPos3D;                                        // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameOnline
// 0x0001
struct FATSaveGameOnline
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameOption
// 0x0001
struct FATSaveGameOption
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveKPIEventBattleParam_SkillUseCount
// 0x0004
struct FATSaveKPIEventBattleParam_SkillUseCount
{
	int                                                UseCnt;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveKPIEventBattleParam_PlayableCharaSkillUseCnt
// 0x0100
struct FATSaveKPIEventBattleParam_PlayableCharaSkillUseCnt
{
	struct FATSaveKPIEventBattleParam_SkillUseCount    SkillUseCnt[0x40];                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveKPIEventBattleParam
// 0x2004
struct FATSaveKPIEventBattleParam
{
	int                                                LoseCnt;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FATSaveKPIEventBattleParam_PlayableCharaSkillUseCnt CharaSkillUseCnt[0x20];                                   // 0x0004(0x0100) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveKPIEventBattle
// 0x200400
struct FATSaveKPIEventBattle
{
	struct FATSaveKPIEventBattleParam                  ATSaveKPIEventBattleParam[0x100];                         // 0x0000(0x2004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.BattleResult
// 0x0006
struct FBattleResult
{
	uint16_t                                           ClearTime;                                                // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           MaxCombo;                                                 // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DamageTaken;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0005(0x0001) MISSED OFFSET
};

// ScriptStruct ATExt.EpisodeResult
// 0x0004
struct FEpisodeResult
{
	bool                                               IsCleared;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      Rank;                                                     // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubQuestClear;                                            // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SubQuestTotal;                                            // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ChapterResult
// 0x0040
struct FChapterResult
{
	struct FEpisodeResult                              EpisodeResult[0x10];                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.PlayerLocation
// 0x0058
struct FPlayerLocation
{
	struct FString                                     LevelName;                                                // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bSetLocation;                                             // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     Location;                                                 // 0x0014(0x000C) (ZeroConstructor, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0020(0x000C) (ZeroConstructor, IsPlainOldData)
	bool                                               bFloating;                                                // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	int                                                MoveCategory;                                             // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MoveGear;                                                 // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bInDoor;                                                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
	struct FName                                       InDoorName;                                               // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       InDoorLevel;                                              // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RestrictMovePresetType;                                   // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0051(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.QuestProgress
// 0x01B0
struct FQuestProgress
{
	TArray<struct FName>                               CompletedQuestIdList;                                     // 0x0000(0x0010) (ZeroConstructor)
	TArray<struct FRequestQuestInfo>                   ReceivedQuestList;                                        // 0x0010(0x0010) (ZeroConstructor)
	bool                                               bEnableReplayingQuest;                                    // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsResetStartPointToTimeMachine;                          // 0x0021(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0022(0x0006) MISSED OFFSET
	struct FName                                       ProgressIdBeforReplaying;                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                PhaseIdBeforReplaying;                                    // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FName                                       RetryProgress;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       MapNameBeforReplaying;                                    // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationBeforReplaying;                                   // 0x0048(0x000C) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FPlayerLocation                             PlayerLocation;                                           // 0x0058(0x0058)
	struct FUIQuestInfo                                LastShowNavigation_UIQuestInfo_Main;                      // 0x00B0(0x0080)
	struct FUIQuestInfo                                LastShowNavigation_UIQuestInfo_Sub;                       // 0x0130(0x0080)
};

// ScriptStruct ATExt.GameProgress
// 0x0010
struct FGameProgress
{
	struct FName                                       MainCurrent;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MainCurrentPhase;                                         // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.ItemTraderStatus
// 0x0018
struct FItemTraderStatus
{
	float                                              CurrentReceiveIntervalSecond;                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ReceiveIntervalSecond;                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FName                                       ReceivableItemId;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ReceivableCount;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bUpdatable;                                               // 0x0014(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bItemMax;                                                 // 0x0015(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0016(0x0002) MISSED OFFSET
};

// ScriptStruct ATExt.QuestNotificationStatus
// 0x0018
struct FQuestNotificationStatus
{
	struct FString                                     ID;                                                       // 0x0000(0x0010) (ZeroConstructor)
	bool                                               bPlayed;                                                  // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.LevelCondition
// 0x0050
struct FLevelCondition
{
	TMap<struct FString, struct FString>               Collection;                                               // 0x0000(0x0050) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameProgress
// 0x12E8
struct FATSaveGameProgress
{
	struct FBattleResult                               BattleResults[0x80];                                      // 0x0000(0x0006) (ZeroConstructor, IsPlainOldData)
	struct FChapterResult                              ChapterResult[0x10];                                      // 0x0300(0x0040) (ZeroConstructor, IsPlainOldData)
	struct FMissionProgressUserData                    MissionProgress;                                          // 0x0700(0x0050)
	struct FQuestProgress                              QuestProgress;                                            // 0x0750(0x01B0)
	struct FGameProgress                               GameProgress;                                             // 0x0900(0x0010)
	struct FItemTraderStatus                           ItemTraderStatus;                                         // 0x0910(0x0018)
	struct FQuestNotificationStatus                    QuestNotificationStatus[0x64];                            // 0x0928(0x0018)
	struct FLevelCondition                             LevelCondition;                                           // 0x1288(0x0050)
	TArray<struct FString>                             FlagRequestInWorldMap;                                    // 0x12D8(0x0010) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameRiding
// 0x04C0
struct FATSaveGameRiding
{
	struct FRidingStatus                               RidingStatus[0x2];                                        // 0x0000(0x0260)
};

// ScriptStruct ATExt.ATSaveGameShop
// 0x06D6
struct FATSaveGameShop
{
	struct FShopInfoSaveData                           ShopInfoSaveData[0x32];                                   // 0x0000(0x0023)
};

// ScriptStruct ATExt.ATGamePlayedTime
// 0x000C
struct FATGamePlayedTime
{
	float                                              Hour;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Minute;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Second;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameSystem
// 0x0010
struct FATSaveGameSystem
{
	uint32_t                                           Version;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FATGamePlayedTime                           GamePlayedTime;                                           // 0x0004(0x000C) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.PartyTemp
// 0x0003
struct FPartyTemp
{
	ECHARACTER_TYPE                                    member[0x3];                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameTraining
// 0x0200
struct FATSaveGameTraining
{
	int                                                TrainingRoomLevel;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	TArray<struct FName>                               IsNewTrainingParam;                                       // 0x0008(0x0010) (ZeroConstructor)
	bool                                               bIsFinishedAwakeSuperPassiveTutorial;                     // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
	TMap<ECHARACTER_TYPE, struct FPartyTemp>           tabPartyTemp;                                             // 0x0020(0x0050) (ZeroConstructor)
	int                                                SimuratorClearData[0x64];                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameTreasureNode
// 0x0001
struct FATSaveGameTreasureNode
{
	bool                                               bTaken;                                                   // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.BreakableObjectParam
// 0x0002
struct FBreakableObjectParam
{
	bool                                               IsBroken;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
	EBrokenReason                                      BrokenReason;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ATExt.ReplayEventItemInfo
// 0x0010
struct FReplayEventItemInfo
{
	struct FName                                       ItemId;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                ItemNum;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               DecSkip;                                                  // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameTreasure
// 0x05F8
struct FATSaveGameTreasure
{
	struct FATSaveGameTreasureNode                     DMedal[0x1F4];                                            // 0x0000(0x0001)
	struct FATSaveGameTreasureNode                     EventItem[0x1F4];                                         // 0x01F4(0x0001)
	struct FBreakableObjectParam                       BreakableObjectItem[0x64];                                // 0x03E8(0x0002)
	struct FReplayEventItemInfo                        ReplayEventItemInfo[0x10];                                // 0x04B0(0x0010)
	int                                                ReplayTreasure[0x10];                                     // 0x05B0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsReplayTreasureFunc;                                     // 0x05F0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x05F1(0x0007) MISSED OFFSET
};

// ScriptStruct ATExt.ATSaveGameTrophy
// 0x0060
struct FATSaveGameTrophy
{
	TMap<struct FString, int>                          AchievementCount;                                         // 0x0000(0x0050) (ZeroConstructor)
	TArray<struct FName>                               AteCourseRecipe;                                          // 0x0050(0x0010) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameTurtleSchool
// 0x0050
struct FATSaveGameTurtleSchool
{
	bool                                               bOpenTurtleSchoolTraining;                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	TArray<struct FName>                               DisplayedIdList;                                          // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FName>                               ClearedMissionIdList;                                     // 0x0018(0x0010) (ZeroConstructor)
	TArray<struct FName>                               NonReportMissionIdList;                                   // 0x0028(0x0010) (ZeroConstructor)
	TArray<struct FName>                               ReceivedHermitRewardId;                                   // 0x0038(0x0010) (ZeroConstructor)
	int                                                MissionClearCount;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ATExt.ATHave
// 0x0002
struct FATHave
{
	uint16_t                                           m_have;                                                   // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.ATSaveGameTutorial
// 0x0200
struct FATSaveGameTutorial
{
	struct FATHave                                     HaveState[0x100];                                         // 0x0000(0x0002)
};

// ScriptStruct ATExt.ATSaveGameWindRoad
// 0x0010
struct FATSaveGameWindRoad
{
	TArray<struct FName>                               RareWindRoadList;                                         // 0x0000(0x0010) (ZeroConstructor)
};

// ScriptStruct ATExt.ATSaveGameZOrb
// 0x3000
struct FATSaveGameZOrb
{
	int                                                RespawnTimeData[0xC00];                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.CharacterChangeData
// 0x0028
struct FCharacterChangeData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ATExt.CharacterLoadData
// 0x0018
struct FCharacterLoadData
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x0000(0x0018) MISSED OFFSET
};

// ScriptStruct ATExt.CharacterPartsChangeData
// 0x0008
struct FCharacterPartsChangeData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.CharacterPartsLoadData
// 0x0008
struct FCharacterPartsLoadData
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ATExt.BattleBossSkillCameraParam
// 0x0018
struct FBattleBossSkillCameraParam
{
	float                                              Distance;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CamHeightAdd;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PitchAdd;                                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FieldOfView;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LookAtRateMin;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LookAtRateMax;                                            // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.SubQuestCameraBlendParam
// 0x0008 (0x0010 - 0x0008)
struct FSubQuestCameraBlendParam : public FTableRowBase
{
	float                                              StartCameraDuration;                                      // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndCameraDuration;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.SubQuestCameraOffset
// 0x0028
struct FSubQuestCameraOffset
{
	struct FVector                                     StartCameraOffset;                                        // 0x0000(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndCameraOffset;                                          // 0x000C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalOffset;                                             // 0x0018(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FRotator                                    NpcRotation;                                              // 0x001C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATExt.SubQuestCameraTable
// 0x00D8 (0x00E0 - 0x0008)
struct FSubQuestCameraTable : public FTableRowBase
{
	class UCameraAnim*                                 RefQuestReceiveCameraAnimation;                           // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraAnim*                                 RefQuestReceiveCameraAnimationLP;                         // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraAnim*                                 RefQuestStartCameraAnimation;                             // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraAnim*                                 RefQuestStartCameraAnimationLP;                           // 0x0020(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraAnim*                                 RefQuestCompCameraAnimation;                              // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UCameraAnim*                                 RefQuestCompCameraAnimationLP;                            // 0x0030(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ReceiveCameraDuration;                                    // 0x0038(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     StartCameraOffset;                                        // 0x003C(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     EndCameraOffset;                                          // 0x0048(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bLocalOffset;                                             // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FRotator                                    NpcRotation;                                              // 0x0058(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	struct FSubQuestCameraOffset                       ReceiveOffset;                                            // 0x0064(0x0028) (Edit)
	struct FSubQuestCameraOffset                       StartOffset;                                              // 0x008C(0x0028) (Edit)
	struct FSubQuestCameraOffset                       CompleteOffset;                                           // 0x00B4(0x0028) (Edit)
	float                                              FixViewFrame;                                             // 0x00DC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
