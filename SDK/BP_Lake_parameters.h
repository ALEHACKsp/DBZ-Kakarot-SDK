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

// Function BP_Lake.BP_Lake_C.UserConstructionScript
struct ABP_Lake_C_UserConstructionScript_Params
{
};

// Function BP_Lake.BP_Lake_C.ReceiveBeginPlay
struct ABP_Lake_C_ReceiveBeginPlay_Params
{
};

// Function BP_Lake.BP_Lake_C.ReceiveTick
struct ABP_Lake_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_Lake.BP_Lake_C.ExecuteUbergraph_BP_Lake
struct ABP_Lake_C_ExecuteUbergraph_BP_Lake_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
