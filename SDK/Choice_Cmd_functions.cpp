
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

// Function Choice_Cmd.Choice_Cmd_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UChoice_Cmd_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Choice_Cmd.Choice_Cmd_C.Construct");

	UChoice_Cmd_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Choice_Cmd.Choice_Cmd_C.ExecuteUbergraph_Choice_Cmd
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChoice_Cmd_C::ExecuteUbergraph_Choice_Cmd(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Choice_Cmd.Choice_Cmd_C.ExecuteUbergraph_Choice_Cmd");

	UChoice_Cmd_C_ExecuteUbergraph_Choice_Cmd_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
