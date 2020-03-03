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

// Function Enc_Direction.Enc_Direction_C.Construct
struct UEnc_Direction_C_Construct_Params
{
};

// Function Enc_Direction.Enc_Direction_C.SetEncounterDirectionType
struct UEnc_Direction_C_SetEncounterDirectionType_Params
{
	EEncounterDirectionType                            Type;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Enc_Direction.Enc_Direction_C.ExecuteUbergraph_Enc_Direction
struct UEnc_Direction_C_ExecuteUbergraph_Enc_Direction_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
