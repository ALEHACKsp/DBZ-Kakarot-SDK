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

// Function Sub_Cpl011_02.Sub_Cpl011_02_C.UserConstructionScript
struct ASub_Cpl011_02_C_UserConstructionScript_Params
{
};

// Function Sub_Cpl011_02.Sub_Cpl011_02_C.PhaseEvent
struct ASub_Cpl011_02_C_PhaseEvent_Params
{
};

// Function Sub_Cpl011_02.Sub_Cpl011_02_C.OnCancelSubQuest
struct ASub_Cpl011_02_C_OnCancelSubQuest_Params
{
};

// Function Sub_Cpl011_02.Sub_Cpl011_02_C.OnCancelSubQuestTransition
struct ASub_Cpl011_02_C_OnCancelSubQuestTransition_Params
{
};

// Function Sub_Cpl011_02.Sub_Cpl011_02_C.OnIngameBegan
struct ASub_Cpl011_02_C_OnIngameBegan_Params
{
};

// Function Sub_Cpl011_02.Sub_Cpl011_02_C.ReceiveEndPlay
struct ASub_Cpl011_02_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Sub_Cpl011_02.Sub_Cpl011_02_C.ExecuteUbergraph_Sub_Cpl011_02
struct ASub_Cpl011_02_C_ExecuteUbergraph_Sub_Cpl011_02_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
