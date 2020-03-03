
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

// Function Field_Ride.Field_Ride_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UField_Ride_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Field_Ride.Field_Ride_C.Construct");

	UField_Ride_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Field_Ride.Field_Ride_C.ExecuteUbergraph_Field_Ride
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UField_Ride_C::ExecuteUbergraph_Field_Ride(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Field_Ride.Field_Ride_C.ExecuteUbergraph_Field_Ride");

	UField_Ride_C_ExecuteUbergraph_Field_Ride_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
