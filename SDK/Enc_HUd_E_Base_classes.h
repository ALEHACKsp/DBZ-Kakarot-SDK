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

// WidgetBlueprintGeneratedClass Enc_HUd_E_Base.Enc_HUd_E_Base_C
// 0x0018 (0x0408 - 0x03F0)
class UEnc_HUd_E_Base_C : public UAT_UIEncounterHud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                All_Base;                                                 // 0x03F8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                All_Nut;                                                  // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Enc_HUd_E_Base.Enc_HUd_E_Base_C");
		return ptr;
	}


	void InitSetting();
	void ExecuteUbergraph_Enc_HUd_E_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
