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

// Function AT_GameHUD_BP.AT_GameHUD_BP_C.UserConstructionScript
struct AAT_GameHUD_BP_C_UserConstructionScript_Params
{
};

// Function AT_GameHUD_BP.AT_GameHUD_BP_C.ReceiveDrawHUD
struct AAT_GameHUD_BP_C_ReceiveDrawHUD_Params
{
	int                                                SizeX;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                SizeY;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function AT_GameHUD_BP.AT_GameHUD_BP_C.ExecuteUbergraph_AT_GameHUD_BP
struct AAT_GameHUD_BP_C_ExecuteUbergraph_AT_GameHUD_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
