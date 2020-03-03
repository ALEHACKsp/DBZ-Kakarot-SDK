
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

// Function Ani005p1c01_Skeleton_AnimBP.Ani005p1c01_Skeleton_AnimBP_C.CheckEscapeLoop
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                           End                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAni005p1c01_Skeleton_AnimBP_C::CheckEscapeLoop(bool End)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ani005p1c01_Skeleton_AnimBP.Ani005p1c01_Skeleton_AnimBP_C.CheckEscapeLoop");

	UAni005p1c01_Skeleton_AnimBP_C_CheckEscapeLoop_Params params;
	params.End = End;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ani005p1c01_Skeleton_AnimBP.Ani005p1c01_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          DeltaTimeX                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAni005p1c01_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ani005p1c01_Skeleton_AnimBP.Ani005p1c01_Skeleton_AnimBP_C.BlueprintUpdateAnimation");

	UAni005p1c01_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params params;
	params.DeltaTimeX = DeltaTimeX;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ani005p1c01_Skeleton_AnimBP.Ani005p1c01_Skeleton_AnimBP_C.ExecuteUbergraph_Ani005p1c01_Skeleton_AnimBP
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAni005p1c01_Skeleton_AnimBP_C::ExecuteUbergraph_Ani005p1c01_Skeleton_AnimBP(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ani005p1c01_Skeleton_AnimBP.Ani005p1c01_Skeleton_AnimBP_C.ExecuteUbergraph_Ani005p1c01_Skeleton_AnimBP");

	UAni005p1c01_Skeleton_AnimBP_C_ExecuteUbergraph_Ani005p1c01_Skeleton_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
