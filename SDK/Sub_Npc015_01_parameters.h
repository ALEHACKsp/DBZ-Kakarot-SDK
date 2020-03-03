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

// Function Sub_Npc015_01.Sub_Npc015_01_C.UserConstructionScript
struct ASub_Npc015_01_C_UserConstructionScript_Params
{
};

// Function Sub_Npc015_01.Sub_Npc015_01_C.PhaseEvent
struct ASub_Npc015_01_C_PhaseEvent_Params
{
};

// Function Sub_Npc015_01.Sub_Npc015_01_C.OnCancelSubQuest
struct ASub_Npc015_01_C_OnCancelSubQuest_Params
{
};

// Function Sub_Npc015_01.Sub_Npc015_01_C.OnCancelSubQuestTransition
struct ASub_Npc015_01_C_OnCancelSubQuestTransition_Params
{
};

// Function Sub_Npc015_01.Sub_Npc015_01_C.EnableEventItems
struct ASub_Npc015_01_C_EnableEventItems_Params
{
	bool                                               Enable;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Npc015_01.Sub_Npc015_01_C.OnIngameBegan
struct ASub_Npc015_01_C_OnIngameBegan_Params
{
};

// Function Sub_Npc015_01.Sub_Npc015_01_C.OnOpenSimpleTalk
struct ASub_Npc015_01_C_OnOpenSimpleTalk_Params
{
	struct FName                                       SimpleTalkId;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       messageId;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Npc015_01.Sub_Npc015_01_C.ExecuteUbergraph_Sub_Npc015_01
struct ASub_Npc015_01_C_ExecuteUbergraph_Sub_Npc015_01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
