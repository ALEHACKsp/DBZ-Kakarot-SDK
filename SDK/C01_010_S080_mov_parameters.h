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

// Function C01_010_S080_mov.C01_010_S080_mov_C.ReceiveBeginPlay
struct AC01_010_S080_mov_C_ReceiveBeginPlay_Params
{
};

// Function C01_010_S080_mov.C01_010_S080_mov_C.ReceiveEndPlay
struct AC01_010_S080_mov_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function C01_010_S080_mov.C01_010_S080_mov_C.ExecuteUbergraph_C01_010_S080_mov
struct AC01_010_S080_mov_C_ExecuteUbergraph_C01_010_S080_mov_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
