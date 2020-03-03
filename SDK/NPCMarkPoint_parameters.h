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

// Function NPCMarkPoint.NPCMarkPoint_C.UserConstructionScript
struct ANPCMarkPoint_C_UserConstructionScript_Params
{
};

// Function NPCMarkPoint.NPCMarkPoint_C.ReceiveTick
struct ANPCMarkPoint_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function NPCMarkPoint.NPCMarkPoint_C.ExecuteUbergraph_NPCMarkPoint
struct ANPCMarkPoint_C_ExecuteUbergraph_NPCMarkPoint_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
