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

// WidgetBlueprintGeneratedClass BattleCutinManager.BattleCutinManager_C
// 0x0008 (0x03A0 - 0x0398)
class UBattleCutinManager_C : public UAT_UIBattleCutin
{
public:
	class UClass*                                      UseBattleCutInClass;                                      // 0x0398(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BattleCutinManager.BattleCutinManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
