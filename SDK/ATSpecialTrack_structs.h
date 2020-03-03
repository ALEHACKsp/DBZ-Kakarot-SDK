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

// Enum ATSpecialTrack.ESECTION_SE_TYPE
enum class ESECTION_SE_TYPE : uint8_t
{
	ESECTION_SE_TYPE__USE_COMMON_SE = 0,
	ESECTION_SE_TYPE__USE_FIELD_SE = 1,
	ESECTION_SE_TYPE__USE_BATTLE_SE = 2,
	ESECTION_SE_TYPE__USE_MINIGAME_SE = 3,
	ESECTION_SE_TYPE__USE_AMBIENT_SE = 4,
	ESECTION_SE_TYPE__ESE_TYPE_MAX = 5,
	ESECTION_SE_TYPE__ESECTION_SE_MAX = 6
};


// Enum ATSpecialTrack.ESECTION_CMN_SE_TYPE
enum class ESECTION_CMN_SE_TYPE : uint8_t
{
	ESECTION_CMN_SE_TYPE__USE_SND_CODE = 0,
	ESECTION_CMN_SE_TYPE__USE_SND_CODE_CMN = 1,
	ESECTION_CMN_SE_TYPE__ECMNSE_TYPE_MAX = 2,
	ESECTION_CMN_SE_TYPE__ESECTION_CMN_SE_MAX = 3
};


// Enum ATSpecialTrack.EFUNC_TYPE
enum class EFUNC_TYPE : uint8_t
{
	EFUNC_TYPE__FUNC_TYPE          = 0,
	EFUNC_TYPE__BGM_PLAY           = 1,
	EFUNC_TYPE__BGM_STOP           = 2,
	EFUNC_TYPE__SE_PLAY            = 3,
	EFUNC_TYPE__SE_STOP            = 4,
	EFUNC_TYPE__VOICE_PLAY         = 5,
	EFUNC_TYPE__VOLUME_MAIN        = 6,
	EFUNC_TYPE__VOLUME_BGM         = 7,
	EFUNC_TYPE__VOLUME_SE          = 8,
	EFUNC_TYPE__VOLUME_VOICE       = 9,
	EFUNC_TYPE__VOLUME_MOVIE       = 10,
	EFUNC_TYPE__EFUNC_TYPE_MAX     = 11,
	EFUNC_TYPE__EFUNC_MAX          = 12
};



//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ATSpecialTrack.DirectionKey
// 0x0008
struct FDirectionKey
{
	struct FName                                       EventName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.MovieSceneDirectionSectionData
// 0x0088 (0x0090 - 0x0008)
struct FMovieSceneDirectionSectionData : public FMovieSceneChannel
{
	TArray<struct FFrameNumber>                        Times;                                                    // 0x0008(0x0010) (ZeroConstructor)
	TArray<struct FDirectionKey>                       KeyValues;                                                // 0x0018(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x68];                                      // 0x0028(0x0068) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.DemoLocationInfo
// 0x0018
struct FDemoLocationInfo
{
	struct FName                                       LocationID;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewTitleData
// 0x0010
struct FATMovieSceneNextPreviewTitleData
{
	struct FString                                     TitleMessageId;                                           // 0x0000(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewDetailData
// 0x0020
struct FATMovieSceneNextPreviewDetailData
{
	struct FString                                     HeaderMessageId;                                          // 0x0000(0x0010) (Edit, ZeroConstructor)
	struct FString                                     SubjectMessageId;                                         // 0x0010(0x0010) (Edit, ZeroConstructor)
};

// ScriptStruct ATSpecialTrack.SoundSeOptionData
// 0x000C
struct FSoundSeOptionData
{
	ESECTION_SE_TYPE                                   SeType;                                                   // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESndCodeCmn                                        commonCode;                                               // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESndCodeField                                      fieldCode;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESndCodeBattle                                     battleCode;                                               // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESndCodeMinigame                                   minigameCode;                                             // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ESndCodeAmbient                                    ambientCode;                                              // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	float                                              Pitch;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.SoundBgmOptionData
// 0x0008
struct FSoundBgmOptionData
{
	EBgmCode                                           bgmID;                                                    // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                Channel;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.SoundVoiceOptionData
// 0x0002
struct FSoundVoiceOptionData
{
	EPlBattleVoice_ID                                  code;                                                     // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	ECHARACTER_TYPE                                    charatype;                                                // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneCharaIntroductionSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneCharaIntroductionSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	struct FName                                       CharacterID;                                              // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PopularNameID;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   DispPos;                                                  // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneDirectionSectionTemplate
// 0x0090 (0x00B0 - 0x0020)
struct FATMovieSceneDirectionSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneDirectionSectionData             DirectionsData;                                           // 0x0020(0x0090)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneFadeSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FATMovieSceneFadeSectionTemplate : public FMovieSceneEvalTemplate
{
	int                                                SectionStartTime;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionEndTime;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	EUMG_FADE_TYPE                                     FadeType;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	EUMG_FADE_COLOR                                    FadeColor;                                                // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bImmidiate;                                               // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFirstSection;                                           // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsNeedFirstTickEvaluate;                                  // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneForcedLodSectionTemplate
// 0x0010 (0x0030 - 0x0020)
struct FATMovieSceneForcedLodSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	int                                                ForcedLodModel;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TargetType;                                               // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneLipSyncSectionTemplate
// 0x0018 (0x0038 - 0x0020)
struct FATMovieSceneLipSyncSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	struct FName                                       SubtitleID;                                               // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	class UBlendSpace*                                 BlendSpaceAsset;                                          // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneLocationSectionTemplate
// 0x0028 (0x0048 - 0x0020)
struct FATMovieSceneLocationSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	struct FName                                       AreaID;                                                   // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	EDEMO_TYPE                                         DemoType;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	TArray<struct FDemoLocationInfo>                   LocationInfo;                                             // 0x0038(0x0010) (ZeroConstructor)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneMovieSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FATMovieSceneMovieSectionTemplate : public FMovieSceneEvalTemplate
{
	int                                                SectionStartTime;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SectionEndTime;                                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneNearClipSectionTemplate
// 0x00A0 (0x00C0 - 0x0020)
struct FATMovieSceneNearClipSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FMovieSceneFloatChannel                     FloatCurve;                                               // 0x0020(0x00A0)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneNextPreviewSectionTemplate
// 0x0048 (0x0068 - 0x0020)
struct FATMovieSceneNextPreviewSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	bool                                               bTitle;                                                   // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FString                                     TitleMessageId;                                           // 0x0030(0x0010) (ZeroConstructor)
	bool                                               bDetail;                                                  // 0x0040(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0041(0x0007) MISSED OFFSET
	struct FString                                     DetailHeaderMessageId;                                    // 0x0048(0x0010) (ZeroConstructor)
	struct FString                                     DetailSubjectMessageId;                                   // 0x0058(0x0010) (ZeroConstructor)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneQuestMainLogoSectionTemplate
// 0x0008 (0x0028 - 0x0020)
struct FATMovieSceneQuestMainLogoSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
};

// ScriptStruct ATSpecialTrack.DemoSoundInfo
// 0x0018
struct FDemoSoundInfo
{
	struct FName                                       LocationID;                                               // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
};

// ScriptStruct ATSpecialTrack.ATMovieSceneSoundSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneSoundSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartTime;                                         // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndTime;                                           // 0x0024(0x0004)
	EFUNC_TYPE                                         FuncType;                                                 // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       AreaID;                                                   // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UATMovieSceneSoundSection*                   MovSection;                                               // 0x0038(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneSubtitleSectionTemplate
// 0x0020 (0x0040 - 0x0020)
struct FATMovieSceneSubtitleSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	bool                                               bEnableSubtitle;                                          // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
	struct FName                                       SubtitleID;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bContinue;                                                // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyVoice;                                               // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                TargetCh;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ATSpecialTrack.ATMovieSceneTelopSectionTemplate
// 0x0058 (0x0078 - 0x0020)
struct FATMovieSceneTelopSectionTemplate : public FMovieSceneEvalTemplate
{
	struct FFrameNumber                                SectionStartFrame;                                        // 0x0020(0x0004)
	struct FFrameNumber                                SectionEndFrame;                                          // 0x0024(0x0004)
	struct FTelopInfo                                  TelopInfo;                                                // 0x0028(0x0028)
	struct FTelopInfo                                  TelopInfo2;                                               // 0x0050(0x0028)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
