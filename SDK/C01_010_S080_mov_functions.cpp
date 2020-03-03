
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

// Function C01_010_S080_mov.C01_010_S080_mov_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AC01_010_S080_mov_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_010_S080_mov.C01_010_S080_mov_C.ReceiveBeginPlay");

	AC01_010_S080_mov_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C01_010_S080_mov.C01_010_S080_mov_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// TEnumAsByte<EEndPlayReason>    EndPlayReason                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AC01_010_S080_mov_C::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_010_S080_mov.C01_010_S080_mov_C.ReceiveEndPlay");

	AC01_010_S080_mov_C_ReceiveEndPlay_Params params;
	params.EndPlayReason = EndPlayReason;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function C01_010_S080_mov.C01_010_S080_mov_C.ExecuteUbergraph_C01_010_S080_mov
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AC01_010_S080_mov_C::ExecuteUbergraph_C01_010_S080_mov(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function C01_010_S080_mov.C01_010_S080_mov_C.ExecuteUbergraph_C01_010_S080_mov");

	AC01_010_S080_mov_C_ExecuteUbergraph_C01_010_S080_mov_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
