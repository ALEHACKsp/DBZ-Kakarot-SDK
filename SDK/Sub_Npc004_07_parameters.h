#pragma once

#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Sub_Npc004_07.Sub_Npc004_07_C.hidden_actor
struct ASub_Npc004_07_C_hidden_actor_Params
{
	struct FName                                       findId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.UserConstructionScript
struct ASub_Npc004_07_C_UserConstructionScript_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.PhaseEvent
struct ASub_Npc004_07_C_PhaseEvent_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnCancelSubQuest
struct ASub_Npc004_07_C_OnCancelSubQuest_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnCancelSubQuestTransition
struct ASub_Npc004_07_C_OnCancelSubQuestTransition_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnOpenSimpleTalk
struct ASub_Npc004_07_C_OnOpenSimpleTalk_Params
{
	struct FName                                       SimpleTalkId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       messageId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnIngameBegan
struct ASub_Npc004_07_C_OnIngameBegan_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.MiniGameTiming
struct ASub_Npc004_07_C_MiniGameTiming_Params
{
	struct FMinigameTimingArgment                      Argment;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.Init
struct ASub_Npc004_07_C_Init_Params
{
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.ReceiveEndPlay
struct ASub_Npc004_07_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.OnBeganSubQuestDirection
struct ASub_Npc004_07_C_OnBeganSubQuestDirection_Params
{
	ESubQuestDirectionTiming                           Timing;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Npc004_07.Sub_Npc004_07_C.ExecuteUbergraph_Sub_Npc004_07
struct ASub_Npc004_07_C_ExecuteUbergraph_Sub_Npc004_07_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
