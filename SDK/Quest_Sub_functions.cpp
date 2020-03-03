
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

// Function Quest_Sub.Quest_Sub_C.Db_In00
// (BlueprintCallable, BlueprintEvent)

void UQuest_Sub_C::Db_In00()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.Db_In00");

	UQuest_Sub_C_Db_In00_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Sub.Quest_Sub_C.Db_In01
// (BlueprintCallable, BlueprintEvent)

void UQuest_Sub_C::Db_In01()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.Db_In01");

	UQuest_Sub_C_Db_In01_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Sub.Quest_Sub_C.Header_In
// (BlueprintCallable, BlueprintEvent)

void UQuest_Sub_C::Header_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.Header_In");

	UQuest_Sub_C_Header_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Sub.Quest_Sub_C.Header_Choice_Out
// (BlueprintCallable, BlueprintEvent)

void UQuest_Sub_C::Header_Choice_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.Header_Choice_Out");

	UQuest_Sub_C_Header_Choice_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Sub.Quest_Sub_C.Choice_In
// (BlueprintCallable, BlueprintEvent)

void UQuest_Sub_C::Choice_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.Choice_In");

	UQuest_Sub_C_Choice_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Sub.Quest_Sub_C.Icon_Clear_In
// (BlueprintCallable, BlueprintEvent)

void UQuest_Sub_C::Icon_Clear_In()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.Icon_Clear_In");

	UQuest_Sub_C_Icon_Clear_In_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Sub.Quest_Sub_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UQuest_Sub_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.Construct");

	UQuest_Sub_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Sub.Quest_Sub_C.Header_Out
// (BlueprintCallable, BlueprintEvent)

void UQuest_Sub_C::Header_Out()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.Header_Out");

	UQuest_Sub_C_Header_Out_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Quest_Sub.Quest_Sub_C.ExecuteUbergraph_Quest_Sub
// (Final)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UQuest_Sub_C::ExecuteUbergraph_Quest_Sub(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Sub.Quest_Sub_C.ExecuteUbergraph_Quest_Sub");

	UQuest_Sub_C_ExecuteUbergraph_Quest_Sub_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
