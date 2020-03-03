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

// Class CFramework.CFHUD
// 0x00B8 (0x04E0 - 0x0428)
class ACFHUD : public AHUD
{
public:
	class UCFHUDDebugDrawComponent*                    DebugDrawComponent;                                       // 0x0428(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFHUDDebugBackgroundComponent*              DebugBackgroundComponent;                                 // 0x0430(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFHUDDebugProgressBarComponent*             DebugProgressBarComponent;                                // 0x0438(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<int, class UCFHUDDebugNodeSelectorComponent*> DebugNodeSelectorComponent;                               // 0x0440(0x0050) (ExportObject, ZeroConstructor)
	TMap<int, class UCFHUDDebugSectionDrawComponent*>  DebugSectionDrawComponent;                                // 0x0490(0x0050) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUD");
		return ptr;
	}

};


// Class CFramework.CFGameInstance
// 0x01F8 (0x0298 - 0x00A0)
class UCFGameInstance : public UGameInstance
{
public:
	class UClass*                                      DebugMenuComponentClass;                                  // 0x00A0(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      MessageManagerClass;                                      // 0x00A8(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCFDebugMenuHandler*                         DebugMenuComponent;                                       // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x30];                                      // 0x00B8(0x0030) MISSED OFFSET
	class UCFSceneManager*                             SceneManager;                                             // 0x00E8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xE8];                                      // 0x00F0(0x00E8) MISSED OFFSET
	class UCFLocalizeManager*                          LocalizeManager;                                          // 0x01D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFMessageManager*                           MessageManager;                                           // 0x01E0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFHUDManager*                               HudManager;                                               // 0x01E8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFSoundADX*                                 AdxManager;                                               // 0x01F0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xA0];                                      // 0x01F8(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameInstance");
		return ptr;
	}


	void OnViewportCreated();
	class UCFSceneManager* GetSceneManager();
};


// Class CFramework.CFUIUserWidget
// 0x0168 (0x0370 - 0x0208)
class UCFUIUserWidget : public UUserWidget
{
public:
	class UCFUIWidgetPathAnimManager*                  PathAnimMng;                                              // 0x0208(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x160];                                     // 0x0210(0x0160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIUserWidget");
		return ptr;
	}

};


// Class CFramework.CFInputComponent
// 0x0008 (0x0190 - 0x0188)
class UCFInputComponent : public UInputComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFInputComponent");
		return ptr;
	}

};


// Class CFramework.CFDynamicAssignInputComponent
// 0x0058 (0x01E8 - 0x0190)
class UCFDynamicAssignInputComponent : public UCFInputComponent
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0190(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDynamicAssignInputComponent");
		return ptr;
	}

};


// Class CFramework.CFObject
// 0x0008 (0x0030 - 0x0028)
class UCFObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFObject");
		return ptr;
	}

};


// Class CFramework.CFGameState
// 0x0030 (0x03C8 - 0x0398)
class ACFGameState : public AGameState
{
public:
	class UCFDebugTickableManager*                     DebugTickableManager;                                     // 0x0398(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x03A0(0x0008) MISSED OFFSET
	class UCFGameSpeedManager*                         GameSpeedManager;                                         // 0x03A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFPauseManager*                             PauseManager;                                             // 0x03B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFSceneTickExecuterManager*                 SceneTickExecuterManager;                                 // 0x03B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x03C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameState");
		return ptr;
	}

};


// Class CFramework.CFLevelManager
// 0x00A0 (0x03D8 - 0x0338)
class ACFLevelManager : public AActor
{
public:
	TMap<struct FName, struct FCFLevelLoadingPack>     LevelLoadingMap;                                          // 0x0338(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x50];                                      // 0x0388(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLevelManager");
		return ptr;
	}


	void OnCreateGameState(class ACFGameState* InGameState);
};


// Class CFramework.CFActorComponent
// 0x0000 (0x0100 - 0x0100)
class UCFActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFActorComponent");
		return ptr;
	}

};


// Class CFramework.CFManagerActorComponent
// 0x0000 (0x0100 - 0x0100)
class UCFManagerActorComponent : public UCFActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFManagerActorComponent");
		return ptr;
	}

};


// Class CFramework.CFManagerObject
// 0x0000 (0x0030 - 0x0030)
class UCFManagerObject : public UCFObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFManagerObject");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuHandler
// 0x00C0 (0x00E8 - 0x0028)
class UCFDebugMenuHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0028(0x0048) MISSED OFFSET
	class UClass*                                      DebugMenuClass;                                           // 0x0070(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0078(0x0008) MISSED OFFSET
	class UCFInputComponent*                           Input;                                                    // 0x0080(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData02[0x38];                                      // 0x0088(0x0038) MISSED OFFSET
	class UCFDebugMenu*                                DebugMenu;                                                // 0x00C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFDebugMenuConstructor*                     DebugMenuConstructor;                                     // 0x00C8(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuHandler");
		return ptr;
	}


	void SaveSetting();
	void OnSetLoadSetting(bool bLoad);
	void OnReleasedRightStick();
	void OnReleasedLeftStick();
	void OnPressedRightStick();
	void OnPressedLeftStick();
	ECheckBoxState IsLoadSetting();
	void ClearSetting();
};


// Class CFramework.CFDebugMenuEventHandlerBool
// 0x0030 (0x0058 - 0x0028)
class UCFDebugMenuEventHandlerBool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerBool");
		return ptr;
	}


	void Set(bool bChecked);
	ECheckBoxState Get();
};


// Class CFramework.CFDebugMenuEventHandlerContentsFactory
// 0x0008 (0x0030 - 0x0028)
class UCFDebugMenuEventHandlerContentsFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerContentsFactory");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerTrigger
// 0x0010 (0x0038 - 0x0028)
class UCFDebugMenuEventHandlerTrigger : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerTrigger");
		return ptr;
	}


	void Exec();
};


// Class CFramework.CFGameMode
// 0x0000 (0x0420 - 0x0420)
class ACFGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameMode");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugNodeSelectorComponent
// 0x00E8 (0x01E8 - 0x0100)
class UCFHUDDebugNodeSelectorComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0100(0x00D8) MISSED OFFSET
	class UCFInputComponent*                           Input;                                                    // 0x01D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01E0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugNodeSelectorComponent");
		return ptr;
	}


	void OnReleased();
	void OnPressedUp();
	void OnPressedRight();
	void OnPressedOption_C();
	void OnPressedOption_B();
	void OnPressedOption_A();
	void OnPressedLeft();
	void OnPressedEnter();
	void OnPressedDown();
	void OnPressedBack();
};


// Class CFramework.CFPushSolverShapeCapsule
// 0x0020 (0x05B0 - 0x0590)
class UCFPushSolverShapeCapsule : public UCapsuleComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0590(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeCapsule");
		return ptr;
	}

};


// Class CFramework.CFScene
// 0x0010 (0x0040 - 0x0030)
class UCFScene : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFScene");
		return ptr;
	}

};


// Class CFramework.CFSceneChangeParamBase
// 0x0010 (0x0040 - 0x0030)
class UCFSceneChangeParamBase : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneChangeParamBase");
		return ptr;
	}

};


// Class CFramework.CFSceneChangeCommonCall
// 0x0000 (0x0030 - 0x0030)
class UCFSceneChangeCommonCall : public UCFObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneChangeCommonCall");
		return ptr;
	}

};


// Class CFramework.CFSceneManager
// 0x0190 (0x01C0 - 0x0030)
class UCFSceneManager : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData00[0x58];                                      // 0x0030(0x0058) MISSED OFFSET
	class UCFSceneAssignment*                          m_pSceneAssignment;                                       // 0x0088(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFScene*                                    m_sceneTbl[0x20];                                         // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0190(0x0008) MISSED OFFSET
	class UDataTable*                                  CtrlLevelInfoByScene;                                     // 0x0198(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFSceneChangeCommonCall*                    ChangeCommonCall;                                         // 0x01A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x18];                                      // 0x01A8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneManager");
		return ptr;
	}

};


// Class CFramework.CFSingleton
// 0x0018 (0x0048 - 0x0030)
class UCFSingleton : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSingleton");
		return ptr;
	}

};


// Class CFramework.CFActor
// 0x0008 (0x0340 - 0x0338)
class ACFActor : public AActor
{
public:
	bool                                               BehaviorTick;                                             // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BehaviorRender;                                           // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               BehaviorCollision;                                        // 0x033A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x033B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFActor");
		return ptr;
	}

};


// Class CFramework.CFAsyncLoader
// 0x0040 (0x0068 - 0x0028)
class UCFAsyncLoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	TArray<struct FSoftObjectPath>                     requests;                                                 // 0x0040(0x0010) (ZeroConstructor)
	TArray<class UObject*>                             loadedInstances;                                          // 0x0050(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFAsyncLoader");
		return ptr;
	}


	void OnLoaded();
};


// Class CFramework.CFCharacter
// 0x0010 (0x0760 - 0x0750)
class ACFCharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0750(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFCharacter");
		return ptr;
	}

};


// Class CFramework.CFDebugMenu
// 0x0208 (0x0410 - 0x0208)
class UCFDebugMenu : public UUserWidget
{
public:
	class UClass*                                      NumericArchetype;                                         // 0x0208(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CategoryArchetype;                                        // 0x0210(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ListArchetype;                                            // 0x0218(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      FolderArchetype;                                          // 0x0220(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      CheckArchetype;                                           // 0x0228(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ComboArchetype;                                           // 0x0230(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      TextArchetype;                                            // 0x0238(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ButtonArchetype;                                          // 0x0240(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ClassArchetype;                                           // 0x0248(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                TextColor;                                                // 0x0250(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FSlateColor                                 ContentDefaultColor;                                      // 0x0260(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 ContentActiveColor;                                       // 0x0288(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 ContentSelectedColor;                                     // 0x02B0(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 ListDefaultColor;                                         // 0x02D8(0x0028) (Edit, DisableEditOnInstance)
	struct FSlateColor                                 ListActiveColor;                                          // 0x0300(0x0028) (Edit, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x38];                                      // 0x0328(0x0038) MISSED OFFSET
	class UCFInputComponent*                           Input;                                                    // 0x0360(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	TMap<int, class UCFDebugMenuCategory*>             Categories;                                               // 0x0370(0x0050) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x50];                                      // 0x03C0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenu");
		return ptr;
	}


	void OnReleasedRight();
	void OnReleasedLeft();
	void OnPressedUp();
	void OnPressedSelect();
	void OnPressedRight();
	void OnPressedLeft();
	void OnPressedDown();
	void OnPressedCancel();
	void OnKeyDownEnter();
	class UHorizontalBox* GetHorizontalBox();
	class UOverlay* GetContentsArea();
};


// Class CFramework.CFDebugMenuContent
// 0x0038 (0x0240 - 0x0208)
class UCFDebugMenuContent : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0208(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContent");
		return ptr;
	}


	void OnPushedBP(class UCFDebugMenuContent* to);
	void OnPoppedBP(class UCFDebugMenuContent* from);
	void OnDeactivatedBP();
	void OnContentSelectedBP(bool byKeyboard);
	void OnContentCanceledBP();
	void OnActivatedBP();
	bool IsSelectedByKeyboard();
	bool IsSelected();
	bool IsActive();
	struct FLinearColor GetTextColor();
	class UTextBlock* GetTextBlock();
	struct FSlateColor GetContentColor();
};


// Class CFramework.CFDebugMenuCategory
// 0x0028 (0x0268 - 0x0240)
class UCFDebugMenuCategory : public UCFDebugMenuContent
{
public:
	struct FText                                       Label;                                                    // 0x0240(0x0018) (Edit, DisableEditOnInstance)
	class UCFDebugMenuList*                            List;                                                     // 0x0258(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0260(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuCategory");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuList
// 0x0008 (0x0210 - 0x0208)
class UCFDebugMenuList : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0208(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuList");
		return ptr;
	}


	class UVerticalBox* GetVerticalBox();
	struct FLinearColor GetTextColor();
	struct FSlateColor GetBackColor();
};


// Class CFramework.CFDebugMenuContentFolder
// 0x0010 (0x0250 - 0x0240)
class UCFDebugMenuContentFolder : public UCFDebugMenuContent
{
public:
	class UCFDebugMenuList*                            List;                                                     // 0x0240(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0248(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentFolder");
		return ptr;
	}


	class UWidget* GetMenuContent();
	class UMenuAnchor* GetMenuAnchor();
};


// Class CFramework.CFDebugMenuContentNumeric
// 0x0010 (0x0250 - 0x0240)
class UCFDebugMenuContentNumeric : public UCFDebugMenuContent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0240(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentNumeric");
		return ptr;
	}


	void OnValueCommitted(float InValue, TEnumAsByte<ETextCommit> CommitMethod);
	class USpinBox* GetSpinBox();
};


// Class CFramework.CFDebugMenuContentCheck
// 0x0000 (0x0240 - 0x0240)
class UCFDebugMenuContentCheck : public UCFDebugMenuContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentCheck");
		return ptr;
	}


	class UCheckBox* GetCheckBox();
};


// Class CFramework.CFDebugMenuContentCombo
// 0x0000 (0x0240 - 0x0240)
class UCFDebugMenuContentCombo : public UCFDebugMenuContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentCombo");
		return ptr;
	}


	class UComboBoxString* GetComboBox();
};


// Class CFramework.CFDebugMenuContentText
// 0x0000 (0x0240 - 0x0240)
class UCFDebugMenuContentText : public UCFDebugMenuContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentText");
		return ptr;
	}


	void OnTextCommitted(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod);
	class UEditableTextBox* GetTextBox();
};


// Class CFramework.CFDebugMenuContentButton
// 0x0000 (0x0240 - 0x0240)
class UCFDebugMenuContentButton : public UCFDebugMenuContent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentButton");
		return ptr;
	}


	class UButton* GetButtonBox();
};


// Class CFramework.CFDebugMenuContentClass
// 0x0010 (0x0250 - 0x0240)
class UCFDebugMenuContentClass : public UCFDebugMenuContent
{
public:
	class UClass*                                      MetaClass;                                                // 0x0240(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      SelectedClass;                                            // 0x0248(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuContentClass");
		return ptr;
	}


	void OnSetClass(class UClass* setClass);
	class UCFPropertyEditorClass* GetPropEdit();
};


// Class CFramework.CFDebugMenuConstructor
// 0x0040 (0x0068 - 0x0028)
class UCFDebugMenuConstructor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET
	class UCFDebugMenuEventHandlerLog*                 LogHandler;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerCamera*              CameraHandler;                                            // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerCharacter*           CharacterHandler;                                         // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerBatch*               BatchHandler;                                             // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerScene*               SceneHandler;                                             // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerLevel*               LevelHandler;                                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerLoad*                LoadHandler;                                              // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuConstructor");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerFloat
// 0x0038 (0x0060 - 0x0028)
class UCFDebugMenuEventHandlerFloat : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerFloat");
		return ptr;
	}


	void Set(float Value);
	void GetParam(struct FDebugMenuNumericParam* Param);
	float Get();
};


// Class CFramework.CFDebugMenuEventHandlerText
// 0x0038 (0x0060 - 0x0028)
class UCFDebugMenuEventHandlerText : public UObject
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0028(0x0038) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerText");
		return ptr;
	}


	void Set(const struct FText& Text);
	struct FText Get();
};


// Class CFramework.CFDebugMenuEventHandlerCombo
// 0x0030 (0x0058 - 0x0028)
class UCFDebugMenuEventHandlerCombo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0028(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCombo");
		return ptr;
	}


	void Set(const struct FString& selected, TEnumAsByte<ESelectInfo> Type);
	void Build(TArray<struct FString>* Options, struct FString* current);
};


// Class CFramework.CFDMLogSwitchFramework
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchFramework : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMLogSwitchFramework");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerLog
// 0x0010 (0x0040 - 0x0030)
class UCFDebugMenuEventHandlerLog : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                Handlers[0x2];                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLog");
		return ptr;
	}

};


// Class CFramework.CFDMEH_ControlleObjects
// 0x0020 (0x0078 - 0x0058)
class UCFDMEH_ControlleObjects : public UCFDebugMenuEventHandlerBool
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ControlleObjects");
		return ptr;
	}

};


// Class CFramework.CFDMEH_ToggleTick
// 0x0000 (0x0078 - 0x0078)
class UCFDMEH_ToggleTick : public UCFDMEH_ControlleObjects
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ToggleTick");
		return ptr;
	}

};


// Class CFramework.CFDMEH_ToggleDraw
// 0x0000 (0x0078 - 0x0078)
class UCFDMEH_ToggleDraw : public UCFDMEH_ControlleObjects
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ToggleDraw");
		return ptr;
	}

};


// Class CFramework.CFDMEH_ToggleTickOther
// 0x0000 (0x0078 - 0x0078)
class UCFDMEH_ToggleTickOther : public UCFDMEH_ControlleObjects
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ToggleTickOther");
		return ptr;
	}

};


// Class CFramework.CFDMEH_ToggleDrawOther
// 0x0000 (0x0078 - 0x0078)
class UCFDMEH_ToggleDrawOther : public UCFDMEH_ControlleObjects
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMEH_ToggleDrawOther");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerBatch
// 0x0030 (0x0060 - 0x0030)
class UCFDebugMenuEventHandlerBatch : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                Handlers[0x6];                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerBatch");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerExample
// 0x0030 (0x0060 - 0x0030)
class UCFDebugMenuEventHandlerExample : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                BoolExample;                                              // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0038(0x0008) MISSED OFFSET
	class UCFDebugMenuEventHandlerFloat*               FloatExample;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerTrigger*             TriggerExample;                                           // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerText*                TextExample;                                              // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFDebugMenuEventHandlerCombo*               ComboExample;                                             // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerExample");
		return ptr;
	}


	void SetFExample(float F);
	void GetFParam(struct FDebugMenuNumericParam* Param);
	float GetFExample();
};


// Class CFramework.CFDMTExample
// 0x0000 (0x0038 - 0x0038)
class UCFDMTExample : public UCFDebugMenuEventHandlerTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMTExample");
		return ptr;
	}

};


// Class CFramework.CFDMCExample
// 0x0000 (0x0058 - 0x0058)
class UCFDMCExample : public UCFDebugMenuEventHandlerCombo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMCExample");
		return ptr;
	}

};


// Class CFramework.DMBoolCameraDispInfo
// 0x0000 (0x0058 - 0x0058)
class UDMBoolCameraDispInfo : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMBoolCameraDispInfo");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerCamera
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerCamera : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                DispInfo;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCamera");
		return ptr;
	}

};


// Class CFramework.DMBoolCharacterDispInfo
// 0x0000 (0x0058 - 0x0058)
class UDMBoolCharacterDispInfo : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMBoolCharacterDispInfo");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerCharacter
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerCharacter : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                DispInfo;                                                 // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerCharacter");
		return ptr;
	}

};


// Class CFramework.DMBoolDispSceneHierarchy
// 0x0000 (0x0058 - 0x0058)
class UDMBoolDispSceneHierarchy : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMBoolDispSceneHierarchy");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerScene
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerScene : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerBool*                DispHierarchy;                                            // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerScene");
		return ptr;
	}

};


// Class CFramework.DMTriggerDispLevelStatus
// 0x0000 (0x0038 - 0x0038)
class UDMTriggerDispLevelStatus : public UCFDebugMenuEventHandlerTrigger
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMTriggerDispLevelStatus");
		return ptr;
	}

};


// Class CFramework.CFDebugMenuEventHandlerLevel
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerLevel : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UCFDebugMenuEventHandlerTrigger*             DispStatus;                                               // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLevel");
		return ptr;
	}

};


// Class CFramework.DMDispLoadStatus
// 0x0030 (0x0088 - 0x0058)
class UDMDispLoadStatus : public UCFDebugMenuEventHandlerBool
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0058(0x0020) MISSED OFFSET
	class UCFInputComponent*                           Input;                                                    // 0x0078(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.DMDispLoadStatus");
		return ptr;
	}


	void Tick(float DeltaTime);
	void OnPressedRight();
	void OnPressedLeft();
	void OnDetachInput(class UObject* WorldContext);
	void OnAttachInput(class UObject* WorldContext);
};


// Class CFramework.CFDebugMenuEventHandlerLoad
// 0x0008 (0x0038 - 0x0030)
class UCFDebugMenuEventHandlerLoad : public UCFDebugMenuEventHandlerContentsFactory
{
public:
	class UDMDispLoadStatus*                           DispLoadStatus;                                           // 0x0030(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugMenuEventHandlerLoad");
		return ptr;
	}

};


// Class CFramework.CFDebugTickableManager
// 0x0010 (0x0110 - 0x0100)
class UCFDebugTickableManager : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0100(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugTickableManager");
		return ptr;
	}

};


// Class CFramework.CFDebugXmlSelector
// 0x0078 (0x00A8 - 0x0030)
class UCFDebugXmlSelector : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0030(0x0030) MISSED OFFSET
	class UCFInputComponent*                           Input;                                                    // 0x0060(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x40];                                      // 0x0068(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugXmlSelector");
		return ptr;
	}


	void OnPressedUp();
	void OnPressedRight();
	void OnPressedR1();
	void OnPressedLeft();
	void OnPressedL1();
	void OnPressedEnter();
	void OnPressedDown();
	void OnPressedBack();
};


// Class CFramework.CFDynamicsBlueprintFunctionLibrary
// 0x0000 (0x0028 - 0x0028)
class UCFDynamicsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDynamicsBlueprintFunctionLibrary");
		return ptr;
	}


	void STATIC_SetEnable(class USkeletalMeshComponent* SkeletalMeshComponent, bool Enable);
	void STATIC_SetAllEnable(bool Enabled);
	void STATIC_Reset(class USkeletalMeshComponent* SkeletalMeshComponent);
	bool STATIC_IsEnable(class USkeletalMeshComponent* SkeletalMeshComponent);
	bool STATIC_IsAllEnable();
};


// Class CFramework.CFExportDataAssetFromDataTable
// 0x0010 (0x0040 - 0x0030)
class UCFExportDataAssetFromDataTable : public UDataAsset
{
public:
	TArray<class UDataTable*>                          DataTabls;                                                // 0x0030(0x0010) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExportDataAssetFromDataTable");
		return ptr;
	}

};


// Class CFramework.CFExportFromDataTableActor
// 0x0010 (0x0348 - 0x0338)
class ACFExportFromDataTableActor : public AActor
{
public:
	EExportOutType                                     OutType;                                                  // 0x0338(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0339(0x0007) MISSED OFFSET
	class UCFExportDataAssetFromDataTable*             DataAsset;                                                // 0x0340(0x0008) (Edit, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExportFromDataTableActor");
		return ptr;
	}

};


// Class CFramework.CFRichTextBlockNonExperimental
// 0x0298 (0x03B8 - 0x0120)
class UCFRichTextBlockNonExperimental : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0138(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0148(0x0058) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FLinearColor                                Color;                                                    // 0x01A0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01B0(0x0010) (Edit, ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x1F8];                                     // 0x01C0(0x01F8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRichTextBlockNonExperimental");
		return ptr;
	}

};


// Class CFramework.CFExtendRichTextBlock
// 0x0130 (0x04E8 - 0x03B8)
class UCFExtendRichTextBlock : public UCFRichTextBlockNonExperimental
{
public:
	int                                                TextSize;                                                 // 0x03B8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnableBold;                                            // 0x03BC(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               isEnableOutline;                                          // 0x03BD(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x03BE(0x0002) MISSED OFFSET
	struct FLinearColor                                OutlineColor;                                             // 0x03C0(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     OutlineMaterial;                                          // 0x03D0(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MinDisplayArea;                                           // 0x03D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinWrapTextAt;                                            // 0x03DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OffsetBaseline;                                           // 0x03E0(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03E4(0x0004) MISSED OFFSET
	bool                                               bInheritDecorators;                                       // 0x03E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bInheritInputDisplayData;                                 // 0x03E9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x16];                                      // 0x03EA(0x0016) MISSED OFFSET
	class UCFExtendRichTextIconData*                   ExtendRichTextIconData;                                   // 0x0400(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xE0];                                      // 0x0408(0x00E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextBlock");
		return ptr;
	}


	void SetText(const struct FText& InText);
	void SetRevealedIndex(int RevealedIndex);
	void SetIconToKeyConfigByName(const struct FString& SearchConfigName, const struct FString& SetIconName);
	void SetIconToKeyConfigByIndex(int SearchConfigIndex, const struct FString& SetIconName);
	void SetIconToKeyConfigAll(TArray<int> IconIndexList);
	void SetExtendRichTextIconData(class UCFExtendRichTextIconData* InInputDisplayData);
	struct FText GetText();
	void AddDecorator(class URichTextBlockDecorator* Decorator);
};


// Class CFramework.CFExtendRichTextBlockDecorator
// 0x0030 (0x0058 - 0x0028)
class UCFExtendRichTextBlockDecorator : public URichTextBlockDecorator
{
public:
	bool                                               bReveal;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                RevealedIndex;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty CFramework.CFExtendRichTextBlockDecorator.SpanClasses

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextBlockDecorator");
		return ptr;
	}

};


// Class CFramework.CFExtendRichTextIconData
// 0x0300 (0x0330 - 0x0030)
class UCFExtendRichTextIconData : public UDataAsset
{
public:
	float                                              IconScale;                                                // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	TArray<struct FCFIconArt>                          IconList;                                                 // 0x0038(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCFKeyConfigAssign>                  KeyConfigList;                                            // 0x0048(0x0010) (Edit, ZeroConstructor)
	unsigned char                                      UnknownData01[0x270];                                     // 0x0058(0x0270) MISSED OFFSET
	TArray<struct FCFKeyConfigAssign>                  DefaultKeyConfigList;                                     // 0x02C8(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x58];                                      // 0x02D8(0x0058) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFExtendRichTextIconData");
		return ptr;
	}

};


// Class CFramework.CFGameOperatingEnvironment
// 0x0000 (0x0028 - 0x0028)
class UCFGameOperatingEnvironment : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameOperatingEnvironment");
		return ptr;
	}


	bool STATIC_IsConfirmAButton();
	struct FString STATIC_GetReplaceLanguagePath(const struct FString& Path, TEnumAsByte<ELanguageType> InLanguageType, bool IsDefaultPlatform);
	struct FString STATIC_GetReplaceEnvironmentPath(const struct FString& Path, bool IsDefaultPlatform);
	TEnumAsByte<ERegionType> STATIC_GetRegionType();
	struct FString STATIC_GetLanguageCode(TEnumAsByte<ELanguageType> Type);
	TEnumAsByte<ELanguageType> STATIC_GetLangType();
};


// Class CFramework.CFGameSpeedManager
// 0x0230 (0x0330 - 0x0100)
class UCFGameSpeedManager : public UCFManagerActorComponent
{
public:
	TMap<class AActor*, struct FCFGameSpeedApplyActorInfo> ApplyActorList_Actor;                                     // 0x0100(0x0050) (ZeroConstructor)
	TMap<class APawn*, struct FCFGameSpeedApplyActorInfo> ApplyActorList_Pawn;                                      // 0x0150(0x0050) (ZeroConstructor)
	TMap<class UParticleSystemComponent*, struct FCFGameSpeedApplyActorInfo> ApplyActorList_ParticleComp;                              // 0x01A0(0x0050) (ZeroConstructor)
	TMap<class UCFTickObject*, struct FCFGameSpeedApplyActorInfo> ApplyActorList_TickObject;                                // 0x01F0(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0240(0x00A0) MISSED OFFSET
	TMap<ECFGameSpeedUID, struct FCFGameSpeedExec>     Executer;                                                 // 0x02E0(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFGameSpeedManager");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugBackgroundComponent
// 0x0018 (0x0118 - 0x0100)
class UCFHUDDebugBackgroundComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0100(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugBackgroundComponent");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugDrawComponent
// 0x0060 (0x0160 - 0x0100)
class UCFHUDDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x60];                                      // 0x0100(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugDrawComponent");
		return ptr;
	}

};


// Class CFramework.CFDebugTextTestingActor
// 0x0018 (0x0358 - 0x0340)
class ACFDebugTextTestingActor : public ACFActor
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0340(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDebugTextTestingActor");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugDrawInterface
// 0x0000 (0x0028 - 0x0028)
class UCFHUDDebugDrawInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugDrawInterface");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugProgressBarComponent
// 0x0030 (0x0130 - 0x0100)
class UCFHUDDebugProgressBarComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0100(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugProgressBarComponent");
		return ptr;
	}

};


// Class CFramework.CFHUDDebugSectionDrawComponent
// 0x0070 (0x0170 - 0x0100)
class UCFHUDDebugSectionDrawComponent : public UCFActorComponent
{
public:
	unsigned char                                      UnknownData00[0x70];                                      // 0x0100(0x0070) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDDebugSectionDrawComponent");
		return ptr;
	}

};


// Class CFramework.CFHUDManager
// 0x0040 (0x0068 - 0x0028)
class UCFHUDManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0028(0x0018) MISSED OFFSET
	class UCFExtendRichTextIconData*                   TextIconData;                                             // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFAsyncLoader*                              UILoader;                                                 // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCFKeyResourceMappingData*                   KeyResourceMappingData;                                   // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  InputAssignMappingTable;                                  // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0060(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFHUDManager");
		return ptr;
	}

};


// Class CFramework.CFSerializedInterface
// 0x0000 (0x0028 - 0x0028)
class UCFSerializedInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSerializedInterface");
		return ptr;
	}

};


// Class CFramework.CFLocalizeManager
// 0x0018 (0x0048 - 0x0030)
class UCFLocalizeManager : public UCFManagerObject
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x0030(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLocalizeManager");
		return ptr;
	}

};


// Class CFramework.CFManagerComponent
// 0x0000 (0x0100 - 0x0100)
class UCFManagerComponent : public UCFActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFManagerComponent");
		return ptr;
	}

};


// Class CFramework.CFMessageManager
// 0x0098 (0x00C0 - 0x0028)
class UCFMessageManager : public UObject
{
public:
	class UClass*                                      SubFontRegistClass;                                       // 0x0028(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     DataDirectory;                                            // 0x0030(0x0010) (Edit, ZeroConstructor)
	struct FString                                     DataDirectory_NoRelease;                                  // 0x0040(0x0010) (Edit, ZeroConstructor)
	class UCFUIUserWidget*                             FontRegist;                                               // 0x0050(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UDataTable*                                  DataTable;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  NounParamTable;                                           // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  DataTable_NoRelease;                                      // 0x0068(0x0008) (ZeroConstructor, IsPlainOldData)
	class UDataTable*                                  NounParamTable_NoRelease;                                 // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x48];                                      // 0x0078(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFMessageManager");
		return ptr;
	}


	struct FString GetSpeaker(const struct FString& speakerID);
	struct FCFNounParamTableRow GetNounParamFromName(const struct FName& StringID);
	struct FCFNounParamTableRow GetNounParam(const struct FString& StringID);
	struct FCFMessageTableRow GetMessageDataFromName(const struct FName& StringID);
	struct FCFMessageTableRow GetMessageData(const struct FString& StringID);
};


// Class CFramework.CFParticleManager
// 0x00A0 (0x01A0 - 0x0100)
class UCFParticleManager : public UCFActorComponent
{
public:
	TArray<class UParticleSystem*>                     CommonParticleList;                                       // 0x0100(0x0010) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FCFParticleData                             CommonParticleDataList;                                   // 0x0110(0x0040) (Edit, DisableEditOnInstance)
	TMap<int, struct FCFParticleSystemData>            ParticleSystemDataMap;                                    // 0x0150(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFParticleManager");
		return ptr;
	}


	void OnSystemFinished(class UParticleSystemComponent* InFinishedComponent);
	class UParticleSystemComponent* GetParticleComponent(int InUID);
	bool DeactiveParticleComponent(int InUID);
};


// Class CFramework.CFPauseManager
// 0x0280 (0x0380 - 0x0100)
class UCFPauseManager : public UCFManagerActorComponent
{
public:
	TMap<class AActor*, struct FCFPauseApplyActorInfo> ApplyActorList_Actor;                                     // 0x0100(0x0050) (ZeroConstructor)
	TMap<class APawn*, struct FCFPauseApplyActorInfo>  ApplyActorList_Pawn;                                      // 0x0150(0x0050) (ZeroConstructor)
	TMap<class UActorComponent*, struct FCFPauseApplyActorInfo> ApplyActorList_Comp;                                      // 0x01A0(0x0050) (ZeroConstructor)
	TMap<class UCFTickObject*, struct FCFPauseApplyActorInfo> ApplyActorList_TickObject;                                // 0x01F0(0x0050) (ZeroConstructor)
	TMap<class ACFPlayerController*, struct FCFPauseApplyActorInfo> ApplyActorList_PlayerController;                          // 0x0240(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0290(0x00A0) MISSED OFFSET
	TMap<ECFPauseUID, struct FCFPauseExec>             Executer;                                                 // 0x0330(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPauseManager");
		return ptr;
	}

};


// Class CFramework.CFPawn
// 0x0010 (0x03A8 - 0x0398)
class ACFPawn : public APawn
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0398(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPawn");
		return ptr;
	}

};


// Class CFramework.CFPlayerController
// 0x0000 (0x0688 - 0x0688)
class ACFPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPlayerController");
		return ptr;
	}

};


// Class CFramework.CFPropertyEditorClass
// 0x0020 (0x0228 - 0x0208)
class UCFPropertyEditorClass : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0208(0x0010) MISSED OFFSET
	class UClass*                                      MetaClass;                                                // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      SelectedClass;                                            // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPropertyEditorClass");
		return ptr;
	}

};


// Class CFramework.CFPushSolver
// 0x0028 (0x0058 - 0x0030)
class UCFPushSolver : public UCFObject
{
public:
	TArray<class AActor*>                              PushingCauserActorList;                                   // 0x0030(0x0010) (ZeroConstructor)
	TArray<struct FCFMoveSolverData>                   MoveSolverDataList;                                       // 0x0040(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0050(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolver");
		return ptr;
	}

};


// Class CFramework.CFPushSolverComponent
// 0x0008 (0x0108 - 0x0100)
class UCFPushSolverComponent : public UCFActorComponent
{
public:
	class UCFPushSolver*                               PushSolver;                                               // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverComponent");
		return ptr;
	}

};


// Class CFramework.CFPushSolverShapeBox
// 0x0030 (0x05C0 - 0x0590)
class UCFPushSolverShapeBox : public UBoxComponent
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x0590(0x0030) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeBox");
		return ptr;
	}

};


// Class CFramework.CFPushSolverShapeInterface
// 0x0000 (0x0028 - 0x0028)
class UCFPushSolverShapeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeInterface");
		return ptr;
	}

};


// Class CFramework.CFPushSolverShapeSphere
// 0x0020 (0x05B0 - 0x0590)
class UCFPushSolverShapeSphere : public USphereComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0590(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFPushSolverShapeSphere");
		return ptr;
	}

};


// Class CFramework.CFrameworkGameMode
// 0x0000 (0x0420 - 0x0420)
class ACFrameworkGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFrameworkGameMode");
		return ptr;
	}

};


// Class CFramework.CFRegistFontAtlasText
// 0x00F8 (0x0460 - 0x0368)
class UCFRegistFontAtlasText : public URichTextBlock
{
public:
	TArray<class URichTextBlock*>                      ReserveFontAtlasList;                                     // 0x0368(0x0010) (ExportObject, ZeroConstructor)
	class UDataTable*                                  ParentDataTable;                                          // 0x0378(0x0008) (ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                ParentCanvasPanel;                                        // 0x0380(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xD8];                                      // 0x0388(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRegistFontAtlasText");
		return ptr;
	}


	void SetWriteFontAtlas(const struct FString& FontFamilyPath, const struct FString& FontTextDataTablePath, class UCanvasPanel* CanvasPanel, bool IsEnableBold);
	void ReleaseWriteFontAtlas();
};


// Class CFramework.CFRichTextBlockDecorator
// 0x0008 (0x0030 - 0x0028)
class UCFRichTextBlockDecorator : public URichTextBlockDecorator
{
public:
	bool                                               bReveal;                                                  // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                RevealedIndex;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFRichTextBlockDecorator");
		return ptr;
	}

};


// Class CFramework.CFSceneAssignment
// 0x0028 (0x0058 - 0x0030)
class UCFSceneAssignment : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0030(0x0020) MISSED OFFSET
	class UCFSceneChangeParamBase*                     m_changeParam;                                            // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneAssignment");
		return ptr;
	}

};


// Class CFramework.CFSceneTemplate
// 0x0048 (0x0088 - 0x0040)
class UCFSceneTemplate : public UCFScene
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0040(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTemplate");
		return ptr;
	}

};


// Class CFramework.CFSceneTickExecuter
// 0x0050 (0x0150 - 0x0100)
class UCFSceneTickExecuter : public UCFManagerActorComponent
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTickExecuter");
		return ptr;
	}

};


// Class CFramework.CFSceneTickExecuterManager
// 0x0110 (0x0210 - 0x0100)
class UCFSceneTickExecuterManager : public UCFManagerActorComponent
{
public:
	class UCFSceneTickExecuter*                        TickGroupExecuterList[0x22];                              // 0x0100(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSceneTickExecuterManager");
		return ptr;
	}

};


// Class CFramework.CFSoundADX
// 0x0868 (0x0898 - 0x0030)
class UCFSoundADX : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x6F0];                                     // 0x0030(0x06F0) MISSED OFFSET
	class UAtomComponent*                              m_UE_BgmPlayer;                                           // 0x0720(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAtomComponent*                              m_UE_SePlayer;                                            // 0x0728(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0xF8];                                      // 0x0730(0x00F8) MISSED OFFSET
	class USoundAtomCueSheet*                          m_UE_cueSheet;                                            // 0x0828(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FTestAcbHnWork>                      m_UE_acb_seHnWork;                                        // 0x0830(0x0010) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x48];                                      // 0x0840(0x0048) MISSED OFFSET
	TArray<class USoundAtomCueSheet*>                  m_CueSheetArray;                                          // 0x0888(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFSoundADX");
		return ptr;
	}

};


// Class CFramework.CFStateMachine
// 0x0000 (0x0028 - 0x0028)
class UCFStateMachine : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFStateMachine");
		return ptr;
	}

};


// Class CFramework.CFTickObject
// 0x0008 (0x0038 - 0x0030)
class UCFTickObject : public UCFObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0030(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFTickObject");
		return ptr;
	}

};


// Class CFramework.CFTickObjectUpdater
// 0x0050 (0x0150 - 0x0100)
class UCFTickObjectUpdater : public UCFManagerActorComponent
{
public:
	TMap<class UCFTickObject*, class UCFTickObject*>   TickObjects;                                              // 0x0100(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFTickObjectUpdater");
		return ptr;
	}

};


// Class CFramework.CFUILoader
// 0x00B8 (0x00E0 - 0x0028)
class UCFUILoader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xB8];                                      // 0x0028(0x00B8) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUILoader");
		return ptr;
	}

};


// Class CFramework.CFUIMultiLineTextBox
// 0x02E0 (0x0400 - 0x0120)
class UCFUIMultiLineTextBox : public UTextLayoutWidget
{
public:
	struct FText                                       Text;                                                     // 0x0120(0x0018) (Edit)
	struct FScriptDelegate                             TextDelegate;                                             // 0x0138(0x0014) (ZeroConstructor, InstancedReference)
	struct FSlateFontInfo                              Font;                                                     // 0x0148(0x0058) (Edit)
	bool                                               isEnableOutline;                                          // 0x01A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x01A1(0x0003) MISSED OFFSET
	struct FLinearColor                                OutlineColor;                                             // 0x01A4(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x01B4(0x0004) MISSED OFFSET
	class UObject*                                     OutlineMaterial;                                          // 0x01B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OutlineSize;                                              // 0x01C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsEnableBold;                                            // 0x01C4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x01C5(0x0003) MISSED OFFSET
	int                                                TextSize;                                                 // 0x01C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x01CC(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              OffsetBaseline;                                           // 0x01DC(0x0004) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	TArray<class URichTextBlockDecorator*>             Decorators;                                               // 0x01E0(0x0010) (Edit, ExportObject, ZeroConstructor)
	float                                              MinDisplayArea;                                           // 0x01F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MinWrapTextAt;                                            // 0x01F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bNonFontSizeFixedMode;                                    // 0x01F8(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x207];                                     // 0x01F9(0x0207) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIMultiLineTextBox");
		return ptr;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
	void AdaptTextSetting();
};


// Class CFramework.CFLocalizedKeyboardMappingTables
// 0x00A0 (0x00D0 - 0x0030)
class UCFLocalizedKeyboardMappingTables : public UDataAsset
{
public:
	TMap<ECFKeyboardLayoutType, class UDataTable*>     UILocalizedKeyboardMappingTable_Layout;                   // 0x0030(0x0050) (Edit, ZeroConstructor)
	TMap<ECFKeyboardLocaleType, class UDataTable*>     UILocalizedKeyboardMappingTable_Locale;                   // 0x0080(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFLocalizedKeyboardMappingTables");
		return ptr;
	}

};


// Class CFramework.CFKeyResourceMappingData
// 0x0050 (0x0080 - 0x0030)
class UCFKeyResourceMappingData : public UDataAsset
{
public:
	TMap<struct FName, struct FCFKeyResourceMapping>   MappingTable;                                             // 0x0030(0x0050) (Edit, ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFKeyResourceMappingData");
		return ptr;
	}

};


// Class CFramework.CFUIUtil
// 0x0000 (0x0028 - 0x0028)
class UCFUIUtil : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIUtil");
		return ptr;
	}


	void STATIC_SetNumberTextureTiling(class UImage* ImageIns, int TilingNo);
};


// Class CFramework.CFUIWidgetPathAnimManager
// 0x0010 (0x0038 - 0x0028)
class UCFUIWidgetPathAnimManager : public UObject
{
public:
	TArray<struct FCFUIWidgetPathAnimationController>  m_controllers;                                            // 0x0028(0x0010) (ZeroConstructor)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIWidgetPathAnimManager");
		return ptr;
	}


	void RegisterPathAnimation(class UWidget* inTarget, const struct FCFUIWidgetPathAnimationParam& InParam);
	void InterruptPathAnimation(class UWidget* inTarget);
	float GetCurrentAnimTime(class UWidget* inTarget);
};


// Class CFramework.CFUIXcmnMultiLineText
// 0x01D0 (0x0540 - 0x0370)
class UCFUIXcmnMultiLineText : public UCFUIUserWidget
{
public:
	struct FVector2D                                   FitBoxMinSize;                                            // 0x0370(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableScrollText;                                        // 0x0378(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	ECFUIScrollDirection                               ScrollDirection;                                          // 0x037C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0379(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	float                                              ScrollPnlSizeX;                                           // 0x0380(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollSpeed;                                              // 0x0384(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollWaitMs;                                             // 0x0388(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollTextGap;                                            // 0x038C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollNonBlurValue;                                       // 0x0390(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollBlurValue;                                          // 0x0394(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScrollBlurPixel;                                          // 0x0398(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDisableBlurOffset;                                       // 0x039C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableFitText;                                           // 0x039D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOnlyFitX;                                                // 0x039E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x039F(0x0001) MISSED OFFSET
	float                                              FitTextBoxSizeX;                                          // 0x03A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableRuby;                                              // 0x03A4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRubyTextAutoSize;                                        // 0x03A5(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03A6(0x0002) MISSED OFFSET
	float                                              RubyTextAutoSizeRatio;                                    // 0x03A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RubyTextSize;                                             // 0x03AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ForceLineHeightPercentage;                                // 0x03B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RubyTextAdjustOffsetY;                                    // 0x03B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RubyExBtnTextAdjustOffsetY;                               // 0x03B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                RubyDisplayMax;                                           // 0x03BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ColorTagSpaceBase;                                        // 0x03C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bSelfChkEnScroll;                                         // 0x03C4(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bSelfChkEnFitBox;                                         // 0x03C5(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bSelfChkEnRuby;                                           // 0x03C6(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bSelfChkEnWrapText;                                       // 0x03C7(0x0001) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	bool                                               bDrawFitBoxArea;                                          // 0x03C8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawScrollArea;                                          // 0x03C9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawFitTextArea;                                         // 0x03CA(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x03CB(0x0001) MISSED OFFSET
	struct FVector2D                                   DrawFitBoxSize;                                           // 0x03CC(0x0008) (Edit, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03D4(0x0004) MISSED OFFSET
	struct FString                                     BtnTagKeyword;                                            // 0x03D8(0x0010) (Edit, ZeroConstructor)
	TArray<struct FCFUITagReplaceInfo>                 KeyboardAndMouseReplaceInfo;                              // 0x03E8(0x0010) (Edit, ZeroConstructor)
	struct FText                                       CFMText;                                                  // 0x03F8(0x0018) (Edit)
	class UObject*                                     CFFontMaterial;                                           // 0x0410(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bCFMEnableBold;                                           // 0x0418(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	int                                                CFMTextSize;                                              // 0x041C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CFMColor;                                                 // 0x0420(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          CFMJustification;                                         // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	float                                              CFLineHeightPercentage;                                   // 0x0434(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCFMEnableOutline;                                        // 0x0438(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0439(0x0003) MISSED OFFSET
	struct FLinearColor                                CFMOutlineColor;                                          // 0x043C(0x0010) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CFMOutlineSize;                                           // 0x044C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UObject*                                     CFMOutlineMaterial;                                       // 0x0450(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CFMMinDisplayArea;                                        // 0x0458(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CFMMinWrapTextAt;                                         // 0x045C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCFMAutoWrapText;                                         // 0x0460(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0461(0x0003) MISSED OFFSET
	float                                              CFMWrapTextAt;                                            // 0x0464(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bCFMNonFontSizeFixedMode;                                 // 0x0468(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x0469(0x0007) MISSED OFFSET
	class URetainerBox*                                WL_Pnl_Mask;                                              // 0x0470(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                WL_PnlTextFrame;                                          // 0x0478(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            WL_PnlTextFrameSlot;                                      // 0x0480(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                WL_PnlFitAll;                                             // 0x0488(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                WL_PnlFitWrapMain;                                        // 0x0490(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            WL_PnlFitWrapMainSlot;                                    // 0x0498(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanel*                                WL_PnlFitWrapSub;                                         // 0x04A0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            WL_PnlFitWrapSubSlot;                                     // 0x04A8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFUIMultiLineTextBox*                       WL_MainText;                                              // 0x04B0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            WL_MainTextSlot;                                          // 0x04B8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFExtendRichTextBlock*                      WL_ExBtnMainText;                                         // 0x04C0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            WL_ExBtnMainTextSlot;                                     // 0x04C8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFUIMultiLineTextBox*                       WL_SubText;                                               // 0x04D0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            WL_SubTextSlot;                                           // 0x04D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFExtendRichTextBlock*                      WL_ExBtnSubText;                                          // 0x04E0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCanvasPanelSlot*                            WL_ExBtnSubTextSlot;                                      // 0x04E8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      WL_DebugWrapArea;                                         // 0x04F0(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      WL_DebugValidArea;                                        // 0x04F8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FCFUIRubyInfo>                       RubyInfoArray;                                            // 0x0500(0x0010) (ZeroConstructor)
	class UCFUIMultiLineTextBox*                       WL_WorkText;                                              // 0x0510(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UCFExtendRichTextBlock*                      WL_WorkTextEx;                                            // 0x0518(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData11[0x20];                                      // 0x0520(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFUIXcmnMultiLineText");
		return ptr;
	}


	void SetText(const struct FText& InText);
	struct FText GetText();
	void AdaptTextSetting();
};


// Class CFramework.CFDMLogSwitchEngine
// 0x0000 (0x0058 - 0x0058)
class UCFDMLogSwitchEngine : public UCFDebugMenuEventHandlerBool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFDMLogSwitchEngine");
		return ptr;
	}

};


// Class CFramework.CFActivateInterface
// 0x0000 (0x0028 - 0x0028)
class UCFActivateInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CFramework.CFActivateInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
