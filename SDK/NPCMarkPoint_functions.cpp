
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

// Function NPCMarkPoint.NPCMarkPoint_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ANPCMarkPoint_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCMarkPoint.NPCMarkPoint_C.UserConstructionScript");

	ANPCMarkPoint_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCMarkPoint.NPCMarkPoint_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPCMarkPoint_C::ReceiveTick(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCMarkPoint.NPCMarkPoint_C.ReceiveTick");

	ANPCMarkPoint_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function NPCMarkPoint.NPCMarkPoint_C.ExecuteUbergraph_NPCMarkPoint
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ANPCMarkPoint_C::ExecuteUbergraph_NPCMarkPoint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function NPCMarkPoint.NPCMarkPoint_C.ExecuteUbergraph_NPCMarkPoint");

	ANPCMarkPoint_C_ExecuteUbergraph_NPCMarkPoint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
