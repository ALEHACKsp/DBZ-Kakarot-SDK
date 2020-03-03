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

// Function A001_BP.A001_BP_C.UserConstructionScript
struct AA001_BP_C_UserConstructionScript_Params
{
};

// Function A001_BP.A001_BP_C.ReceiveBeginPlay
struct AA001_BP_C_ReceiveBeginPlay_Params
{
};

// Function A001_BP.A001_BP_C.ReceiveTick
struct AA001_BP_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A001_BP.A001_BP_C.ExecuteUbergraph_A001_BP
struct AA001_BP_C_ExecuteUbergraph_A001_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
