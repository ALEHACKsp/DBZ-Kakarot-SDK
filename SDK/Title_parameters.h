#pragma once

#include "../SDK.h"

// Name: DBZ, Version: 1.6.4

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Parameters
//---------------------------------------------------------------------------

// Function Title.Title_C.ReceiveBeginPlay
struct ATitle_C_ReceiveBeginPlay_Params
{
};

// Function Title.Title_C.ReceiveTick
struct ATitle_C_ReceiveTick_Params
{
	float                                              DeltaSeconds;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Title.Title_C.ExecuteUbergraph_Title
struct ATitle_C_ExecuteUbergraph_Title_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
