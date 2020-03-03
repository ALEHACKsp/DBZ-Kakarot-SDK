
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

// Function FullScreenMovie.FullScreenMovie_C.ConstructFirstOnly
// (Event, Protected, BlueprintEvent)

void UFullScreenMovie_C::ConstructFirstOnly()
{
	static auto fn = UObject::FindObject<UFunction>("Function FullScreenMovie.FullScreenMovie_C.ConstructFirstOnly");

	UFullScreenMovie_C_ConstructFirstOnly_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function FullScreenMovie.FullScreenMovie_C.ExecuteUbergraph_FullScreenMovie
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UFullScreenMovie_C::ExecuteUbergraph_FullScreenMovie(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function FullScreenMovie.FullScreenMovie_C.ExecuteUbergraph_FullScreenMovie");

	UFullScreenMovie_C_ExecuteUbergraph_FullScreenMovie_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
