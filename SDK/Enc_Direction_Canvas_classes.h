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

// WidgetBlueprintGeneratedClass Enc_Direction_Canvas.Enc_Direction_Canvas_C
// 0x0010 (0x0458 - 0x0448)
class UEnc_Direction_Canvas_C : public UAT_UIEncounterDirection
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0448(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                            Roll;                                                     // 0x0450(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Enc_Direction_Canvas.Enc_Direction_Canvas_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_Enc_Direction_Canvas(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
