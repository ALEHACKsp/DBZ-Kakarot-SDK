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

// Function Fish_Pawn.Fish_Pawn_C.UserConstructionScript
struct AFish_Pawn_C_UserConstructionScript_Params
{
};

// Function Fish_Pawn.Fish_Pawn_C.ReceiveTick
struct AFish_Pawn_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Fish_Pawn.Fish_Pawn_C.ExecuteUbergraph_Fish_Pawn
struct AFish_Pawn_C_ExecuteUbergraph_Fish_Pawn_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
