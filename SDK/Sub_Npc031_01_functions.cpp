
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

// Function Sub_Npc031_01.Sub_Npc031_01_C.Collision
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isCollision                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc031_01_C::Collision(class AActor* Actor, bool isCollision)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc031_01.Sub_Npc031_01_C.Collision");

	ASub_Npc031_01_C_Collision_Params params;
	params.Actor = Actor;
	params.isCollision = isCollision;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc031_01.Sub_Npc031_01_C.NewFunction_1
// (Public, BlueprintCallable, BlueprintEvent)

void ASub_Npc031_01_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc031_01.Sub_Npc031_01_C.NewFunction_1");

	ASub_Npc031_01_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc031_01.Sub_Npc031_01_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ASub_Npc031_01_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc031_01.Sub_Npc031_01_C.UserConstructionScript");

	ASub_Npc031_01_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc031_01.Sub_Npc031_01_C.PhaseEvent
// (Event, Public, BlueprintEvent)

void ASub_Npc031_01_C::PhaseEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc031_01.Sub_Npc031_01_C.PhaseEvent");

	ASub_Npc031_01_C_PhaseEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Npc031_01.Sub_Npc031_01_C.ExecuteUbergraph_Sub_Npc031_01
// (Final, HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ASub_Npc031_01_C::ExecuteUbergraph_Sub_Npc031_01(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Npc031_01.Sub_Npc031_01_C.ExecuteUbergraph_Sub_Npc031_01");

	ASub_Npc031_01_C_ExecuteUbergraph_Sub_Npc031_01_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
