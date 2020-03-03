
#include "../SDK.h"

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function AREA01_WINDROAD_010.AREA01_WINDROAD_010_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AAREA01_WINDROAD_010_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function AREA01_WINDROAD_010.AREA01_WINDROAD_010_C.ReceiveBeginPlay");

	AAREA01_WINDROAD_010_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AREA01_WINDROAD_010.AREA01_WINDROAD_010_C.ExecuteUbergraph_AREA01_WINDROAD_010
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AAREA01_WINDROAD_010_C::ExecuteUbergraph_AREA01_WINDROAD_010(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AREA01_WINDROAD_010.AREA01_WINDROAD_010_C.ExecuteUbergraph_AREA01_WINDROAD_010");

	AAREA01_WINDROAD_010_C_ExecuteUbergraph_AREA01_WINDROAD_010_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
