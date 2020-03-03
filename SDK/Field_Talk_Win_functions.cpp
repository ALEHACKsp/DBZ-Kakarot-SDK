
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

// Function Field_Talk_Win.Field_Talk_Win_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UField_Talk_Win_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Field_Talk_Win.Field_Talk_Win_C.Construct");

	UField_Talk_Win_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Field_Talk_Win.Field_Talk_Win_C.ExecuteUbergraph_Field_Talk_Win
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UField_Talk_Win_C::ExecuteUbergraph_Field_Talk_Win(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Field_Talk_Win.Field_Talk_Win_C.ExecuteUbergraph_Field_Talk_Win");

	UField_Talk_Win_C_ExecuteUbergraph_Field_Talk_Win_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
