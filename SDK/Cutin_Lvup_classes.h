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

// WidgetBlueprintGeneratedClass Cutin_Lvup.Cutin_Lvup_C
// 0x0010 (0x0418 - 0x0408)
class UCutin_Lvup_C : public UAT_UICutinLevelUp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0408(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UCanvasPanel*                                All_Nut;                                                  // 0x0410(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Cutin_Lvup.Cutin_Lvup_C");
		return ptr;
	}


	void ConstructFirstOnly();
	void ExecuteUbergraph_Cutin_Lvup(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
