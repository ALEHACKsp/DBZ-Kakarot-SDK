#pragma once

// Name: DBZKakarot, Version: 1.0.3

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Xcmn_Win01_List_State.Xcmn_Win01_List_State_C
// 0x0008 (0x03A8 - 0x03A0)
class UXcmn_Win01_List_State_C : public UAT_UIGameWindowListState
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Xcmn_Win01_List_State.Xcmn_Win01_List_State_C");
		return ptr;
	}


	void SetSelectState(bool IsSelected);
	void Construct();
	void ExecuteUbergraph_Xcmn_Win01_List_State(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
