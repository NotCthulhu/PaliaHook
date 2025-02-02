#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4E8 - 0x4E8)
// Class ValeriaUI.VALUI_ModalWidgetBase
class UVALUI_ModalWidgetBase : public US6UI_ModalWidgetBase
{
public:

	static class UClass* StaticClass();
	static class UVALUI_ModalWidgetBase* GetDefaultObj();

};

// 0x68 (0x550 - 0x4E8)
// Class ValeriaUI.BaitUserWidget
class UBaitUserWidget : public UVALUI_ModalWidgetBase
{
public:
	TArray<struct FValeriaItem>                  Bait;                                              // 0x4E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	struct FValeriaItem                          SelectedBait;                                      // 0x4F8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	uint8                                        Pad_148E[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBaitUserWidget* GetDefaultObj();

	void ShowAmmoType(enum class EAmmoType AmmoType);
	void OnShown(enum class EAmmoType AmmoType);
	void OnRightMouseReleased();
	void OnHidden();
	void OnBaitSelected(const struct FValeriaItem& baitItem);
	void EndBaitSelection();
};

// 0x8 (0x4F0 - 0x4E8)
// Class ValeriaUI.BookViewerWidget
class UBookViewerWidget : public UVALUI_ModalWidgetBase
{
public:
	int32                                        CurrentBookId;                                     // 0x4E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UBookViewerWidget* GetDefaultObj();

	void MarkPageAsRead(int32 Index);
	class FText GetTitle();
	class FText GetSubTitle();
	int32 GetNumberOfPages();
	class FText GetContentForPage(int32 Index);
};

// 0x58 (0x2D0 - 0x278)
// Class ValeriaUI.DetailUserWidget
class UDetailUserWidget : public UUserWidget
{
public:
	class UTextBlock*                            DetailName;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DetailCategory;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextBlock*                            DetailDescription;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImage*                                DetailIcon;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14BA[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDetailUserWidget* GetDefaultObj();

	bool UpdateDetail(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>& ItemType);
};

// 0x48 (0x2C0 - 0x278)
// Class ValeriaUI.VALUI_LoadingScreenUserWidget
class UVALUI_LoadingScreenUserWidget : public UUserWidget
{
public:
	class UVALUI_LoadingScreenBlackWidget*       LoadingScreenBlackWidget;                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            CurrentBackgroundTexture;                          // 0x280(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_14D4[0x38];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_LoadingScreenUserWidget* GetDefaultObj();

	void ShowLoadingScreenBackground();
	void ShowFadeToBlack();
	void HandleSetLoadingScreenTip(struct FPaliaLoadingScreenTip& Tip);
	void HandleSetBackgroundImage(class UTexture2D* Texture);
	void HandleOnPawnChanged(class APawn* Pawn);
};

// 0x30 (0x518 - 0x4E8)
// Class ValeriaUI.MailboxViewerUserWidget
class UMailboxViewerUserWidget : public UVALUI_ModalWidgetBase
{
public:
	bool                                         bIsLoadingMail;                                    // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_153D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMailMessageWidgetData>        MailMessages;                                      // 0x4F0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EMailboxViewerFilter              CurrentFilter;                                     // 0x500(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_153F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMailbox                              LoadedMailbox;                                     // 0x508(0x10)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMailboxViewerUserWidget* GetDefaultObj();

	void UpdateMailFilter(enum class EMailboxViewerFilter Filter);
	bool TryCollectReward(int32 Index, int32 RewardIndex);
	void RefreshMailMessages(bool AllowRemoval);
	void OnVillagerMailChanged(class UVillagerMailInboxComponent* VillagerMail);
	void OnPlayerToPlayerMailSuccess(const struct FMailbox& Mailbox);
	void OnPlayerToPlayerMailFailed(const class FString& Error);
	void OnMailLoaded();
	void OnMailChanged();
	void MarkAsRead(int32 Index);
	void LoadMail();
	void HideMessage(int32 Index);
	int32 GetNumberOfNonHiddenMessages();
	int32 GetNumberOfMessagesForFilter(enum class EMailboxViewerFilter Filter);
	int32 GetNumberOfMessages();
	int32 GetNextNonHiddenMessage(int32 StartIndex);
	struct FMailMessageWidgetData GetMailMessage(int32 Index);
	int32 GetIndexOfMailMessage(const struct FMailMessageWidgetData& Data);
	enum class EMailboxViewerFilter GetCurrentFilter();
};

// 0x60 (0x440 - 0x3E0)
// Class ValeriaUI.ValeriaViewportClient
class UValeriaViewportClient : public US6UI_GameViewportClient
{
public:
	uint8                                        Pad_1556[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_LoadingScreenUserWidget*        LoadingScreenWidget;                               // 0x430(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1557[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UValeriaViewportClient* GetDefaultObj();

	void ReceiveOnFadeOutBlack();
	void HandleOnFadeOutBlack(float DurationSeconds);
	void HandleOnFadeInBlack(float DurationSeconds);
};

// 0x38 (0x520 - 0x4E8)
// Class ValeriaUI.VALUI_AnnouncementsMessageModalDialog
class UVALUI_AnnouncementsMessageModalDialog : public UVALUI_ModalWidgetBase
{
public:
	bool                                         bIsFromLogin;                                      // 0x4E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1572[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PrefetchedMessage;                                 // 0x4F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConfirm;                                         // 0x500(0x10)(BlueprintVisible, ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x510(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_AnnouncementsMessageModalDialog* GetDefaultObj();

	void SetURL(const class FString& NewURL);
	void RefreshMessageFromWeb();
	void OnConfirmDelegate__DelegateSignature();
	void NotifyConfirmComplete();
	void HandleRefreshedMessageFromWeb(const class FString& Message);
};

// 0x28 (0x58 - 0x30)
// Class ValeriaUI.VAL_AsyncActionRequestStorefront
class UVAL_AsyncActionRequestStorefront : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Successful;                                        // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Failure;                                           // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_158C[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVAL_AsyncActionRequestStorefront* GetDefaultObj();

	class UVAL_AsyncActionRequestStorefront* RequestStorefront(class ULocalPlayer* LP);
	void OnRequestStorefrontSuccess__DelegateSignature(const struct FVALUI_PremiumStorefrontResponse& Response);
	void OnRequestStorefrontFailure__DelegateSignature();
};

// 0x9A8 (0x9D8 - 0x30)
// Class ValeriaUI.VALUI_AsyncUpdateLoadout
class UVALUI_AsyncUpdateLoadout : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            Failed;                                            // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AF[0x988];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_AsyncUpdateLoadout* GetDefaultObj();

	class UVALUI_AsyncUpdateLoadout* UpdateLoadout(class UVALUI_CharacterCustomizationPanelBase* CustPanel, struct FVAL_CharacterCustomizationLoadout& NewLoadout, struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& ContextPayload);
	void OnUpdateLoadoutFailed__DelegateSignature(struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& ContextPayload);
	void OnUpdateLoadoutCompleted__DelegateSignature(class UVALUI_CharacterCustomizationPanelBase* CharacterCustomizationPanel, struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& ContextPayload);
};

// 0x0 (0x30 - 0x30)
// Class ValeriaUI.VALUI_WidgetStyleBase
class UVALUI_WidgetStyleBase : public UDataAsset
{
public:

	static class UClass* StaticClass();
	static class UVALUI_WidgetStyleBase* GetDefaultObj();

};

// 0x120 (0x150 - 0x30)
// Class ValeriaUI.VALUI_BorderStyle
class UVALUI_BorderStyle : public UVALUI_WidgetStyleBase
{
public:
	bool                                         bShowEffectWhenDisabled;                           // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               Padding;                                           // 0x34(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FLinearColor                          ContentColorAndOpacity;                            // 0x44(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15CB[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Background;                                        // 0x60(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FLinearColor                          BrushColor;                                        // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFlipForRightToLeftFlowDirection;                  // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D1[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_BorderStyle* GetDefaultObj();

	void Apply(class UBorder* Border);
};

// 0x8 (0x310 - 0x308)
// Class ValeriaUI.VALUI_Border_Styled
class UVALUI_Border_Styled : public UBorder
{
public:
	class UVALUI_BorderStyle*                    Style;                                             // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_Border_Styled* GetDefaultObj();

	void SetBorderStyle(class UVALUI_BorderStyle* NewStyle);
};

// 0x58 (0x2D0 - 0x278)
// Class ValeriaUI.VALUI_BoundInputActionStateWidget
class UVALUI_BoundInputActionStateWidget : public UUserWidget
{
public:
	class UInputAction*                          InputAction;                                       // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1617[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_BoundInputActionStateWidget* GetDefaultObj();

	void UpdateInputActionState_Implementation(struct FKey& Key, enum class ETriggerEvent LatestTriggerEvent, float OngoingDuration, float HoldTimeThreshold);
	void SetInputAction(class UInputAction* InInputAction);
};

// 0x38 (0x1A0 - 0x168)
// Class ValeriaUI.VALUI_BoxDropShadow
class UVALUI_BoxDropShadow : public UContentWidget
{
public:
	struct FVector2D                             ShadowOffset;                                      // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowHardness;                                    // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CornerRadius;                                      // 0x17C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1628[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_BoxDropShadow* GetDefaultObj();

};

// 0x460 (0x490 - 0x30)
// Class ValeriaUI.VALUI_ButtonStyle
class UVALUI_ButtonStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x30(0x3F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x420(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x430(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DropShadowCornerRadius;                            // 0x440(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1630[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShadowOffset_Normal;                               // 0x448(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset_Pressed;                              // 0x458(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowHardness_Normal;                             // 0x468(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowHardness_Pressed;                            // 0x46C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor_Normal;                                // 0x470(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor_Pressed;                               // 0x480(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_ButtonStyle* GetDefaultObj();

	void Apply(class UVALUI_Button_Styled* Button);
};

// 0x4E0 (0x970 - 0x490)
// Class ValeriaUI.VALUI_ButtonStyle_WithBG
class UVALUI_ButtonStyle_WithBG : public UVALUI_ButtonStyle
{
public:
	bool                                         bUseBackgroundImage;                               // 0x490(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1637[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BackgroundImage;                                   // 0x4A0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bUseBackgroundStyle;                               // 0x570(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1638[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          BackgroundStyle;                                   // 0x580(0x3F0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_ButtonStyle_WithBG* GetDefaultObj();

};

// 0x68 (0x650 - 0x5E8)
// Class ValeriaUI.VALUI_Button_Styled
class UVALUI_Button_Styled : public UButton
{
public:
	class UVALUI_ButtonStyle*                    Style;                                             // 0x5E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEffectWhenReleased;                               // 0x5F0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_167E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FEffectTime;                                       // 0x5F4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1682[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECursorState                      CursorState;                                       // 0x630(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFocusDirection                   DirectionOfCursorOnButton;                         // 0x631(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1686[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_Button_Styled* GetDefaultObj();

	bool ShowCursor(class UWidget* InCursor);
	void SetButtonStyle(class UVALUI_ButtonStyle* NewStyle);
	void SetButtonFocus();
	void RemoveCursor(class UWidget* InCursor);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	bool HasFocus();
	void HandleReleased();
	void HandlePressed();
	void Destruct();
	void Construct();
};

// 0x220 (0x870 - 0x650)
// Class ValeriaUI.VALUI_Button_Styled_WithBG
class UVALUI_Button_Styled_WithBG : public UVALUI_Button_Styled
{
public:
	uint8                                        Pad_1697[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           GamepadKeyHint;                                    // 0x660(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EGamepadKeyHintLocation           HintShowLocation;                                  // 0x730(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             HintMargin;                                        // 0x738(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_169E[0xD8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFocusDirection                   DirectionOfCursorOnBG;                             // 0x820(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_169F[0x4F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_Button_Styled_WithBG* GetDefaultObj();

	void HandleUnhovered();
	void HandleHovered();
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_CameraVirtualMoveHooker_Mobile
class UVALUI_CameraVirtualMoveHooker_Mobile : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVALUI_CameraVirtualMoveHooker_Mobile* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class ValeriaUI.VALUI_NameValidator
class UVALUI_NameValidator : public UObject
{
public:
	TSet<enum class EVAL_CharacterNameType>      NameTypesToValidate;                               // 0x28(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class FText                                  ErrorMessage;                                      // 0x78(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_NameValidator* GetDefaultObj();

	bool IsNameValid(const class FString& InCharacterName);
};

// 0x10 (0xA0 - 0x90)
// Class ValeriaUI.VALUI_NameValidator_Regex
class UVALUI_NameValidator_Regex : public UVALUI_NameValidator
{
public:
	class FString                                RegexPattern;                                      // 0x90(0x10)(BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_NameValidator_Regex* GetDefaultObj();

};

// 0x0 (0xA0 - 0xA0)
// Class ValeriaUI.VALUI_NameValidator_Regex_PerWord
class UVALUI_NameValidator_Regex_PerWord : public UVALUI_NameValidator_Regex
{
public:

	static class UClass* StaticClass();
	static class UVALUI_NameValidator_Regex_PerWord* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class ValeriaUI.VALUI_NameValidatorDataAsset
class UVALUI_NameValidatorDataAsset : public UPrimaryDataAsset
{
public:
	TSet<TSubclassOf<class UObject>>             ValidatorClasses;                                  // 0x30(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_NameValidatorDataAsset* GetDefaultObj();

};

// 0x50 (0x4F0 - 0x4A0)
// Class ValeriaUI.VALUI_CharacterCreationScreenBase
class UVALUI_CharacterCreationScreenBase : public UCommonActivatableWidgetInputExtended
{
public:
	class UVALUI_CharacterCustomizationPanelBase* CustomizationPanel;                                // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVALUI_NameValidatorDataAsset*         NameValidatorDataAsset;                            // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UVALUI_NameValidator*>          NameValidators;                                    // 0x4B0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            EventOnCommitCharacter;                            // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventOnBodyTypeSelectionConfirm;                   // 0x4D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventOnBodyTypeSelectionChange;                    // 0x4E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_CharacterCreationScreenBase* GetDefaultObj();

	void SetEnableContinueButton(bool bEnable);
	void SetEnableAllButtons(bool bEnable);
	void OnCommitCharacter__DelegateSignature(const struct FVALDTOS_MetaCharacterFormat& CommitedCharacter);
	void OnBodyTypeSelectionConfirm__DelegateSignature();
	void OnBodyTypeSelectionChange__DelegateSignature(bool bFirstSelection);
	void HandleCharacterNameValidityResponse(struct FVALUI_CharacterNameValidityResponse& Response);
	void HandleCharacterNameChanged(class FText& InCharacterName, enum class EVAL_CharacterNameType InCharacterNameType);
	TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>> GetAllowedCustomizationItems();
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_CharacterCreationStatics
class UVALUI_CharacterCreationStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVALUI_CharacterCreationStatics* GetDefaultObj();

	bool IsCharacterNameValidityResponseValid(struct FVALUI_CharacterNameValidityResponse& Response);
};

// 0x9E0 (0xE80 - 0x4A0)
// Class ValeriaUI.VALUI_CharacterCustomizationPanelBase
class UVALUI_CharacterCustomizationPanelBase : public UCommonActivatableWidgetInputExtended
{
public:
	uint8                                        Pad_171C[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                PreviewCharacterActor;                             // 0x4B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVAL_CharacterCustomizationComponent*  CharacterCustomizationComponent;                   // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVAL_CharacterCustomizationLoadout    CurrentLoadout;                                    // 0x4C0(0x918)(BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FVALUI_CharCustomization_LoadoutSlotData> LoadoutSlotMap;                                    // 0xDD8(0x50)(Edit, BlueprintVisible, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UEnum*                                 ItemTypeEnum;                                      // 0xE28(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSet<class FName>                            EnabledTagNames;                                   // 0xE30(0x50)(BlueprintVisible, BlueprintReadOnly, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_CharacterCustomizationPanelBase* GetDefaultObj();

	void SetPreviewCharacterActor(class AActor* Actor);
	void PopulateLoadoutSlotMap();
	void HandleOnAllLoadoutSlotItemsGenerated();
	void HandleLoadoutUpdated(struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& ContextPayload);
	void HandleLoadoutSlotItemsGenerated(class FName& LoadoutSlotName, struct FVALUI_CharCustomization_LoadoutSlotData& LoadoutSlotData);
	void GetLoadoutSlotDataFromItemObject(class UObject* ItemObject, class FName* LoadoutSlotName, struct FVALUI_CharCustomization_LoadoutSlotData* LoadoutSlotData, bool* bSuccess);
	struct FVAL_CharacterCustomizationLoadout GetCurrentLoadout();
	void GenerateLoadoutSlotItems();
	class UObject* GenerateItemObject(struct FVAL_CharCustomization_AssetData& AssetData);
};

// 0x60 (0x510 - 0x4B0)
// Class ValeriaUI.VALUI_CharacterMovementStick_Mobile
class UVALUI_CharacterMovementStick_Mobile : public US6UI_InputActionHandlingUserWidget
{
public:
	uint8                                        Pad_1745[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_CameraVirtualMoveHooker_Mobile* Hooker;                                            // 0x500(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1747[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_CharacterMovementStick_Mobile* GetDefaultObj();

	void SetHooker(class UVALUI_CameraVirtualMoveHooker_Mobile* VirtualMoveHooker);
	void OnUpdateMovmentVirtualStick(bool TouchControlFlag, struct FVector2D& Pos, struct FVector2D& ControlVector);
	void OnFirstTouch();
	void InitMovementVirtualStack(const struct FVector2D& DefaultPosition, float ValidTouchRadius, float MovementValidDistanceTemp, float WalkBoundaryDistanceTemp);
};

// 0x0 (0x278 - 0x278)
// Class ValeriaUI.VALUI_ChatEmojiPanel
class UVALUI_ChatEmojiPanel : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UVALUI_ChatEmojiPanel* GetDefaultObj();

	TSoftObjectPtr<class UTexture2D> GetTexture(struct FS6UI_FRichImageRow_Soft& ImageRow);
};

// 0x200 (0x478 - 0x278)
// Class ValeriaUI.VALUI_ChatInputBar
class UVALUI_ChatInputBar : public UUserWidget
{
public:
	uint8                                        Pad_1795[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCommitBlankText;                                 // 0x2E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageSubmitted;                                // 0x2F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x300(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMessageTargetCycled;                             // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnCommandSuggestionsChanged;                       // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1799[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UVAL_ChatCommand_Base*                 ActiveChatCommand;                                 // 0x350(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<TSubclassOf<class UVAL_ChatCommand_Base>> ChatCommandClasses;                                // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TMap<enum class EVAL_DirectMessageResult, class FText> DirectMessageErrorMessageTable;                    // 0x368(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	class UVALUI_ChatInputEditableText*          EditableText;                                      // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UVAL_ChatCommand_Base*>         ChatCommandTemplateObjects;                        // 0x3C0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	TSet<class UVAL_ChatCommand_Base*>           PendingActiveCommands;                             // 0x3D0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_179F[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ChatInputBar* GetDefaultObj();

	void VALUIEvent_OnTextChanged__DelegateSignature(class UVALUI_ChatInputBar* InputBar, class FText& PreviousText, class FText& NewText);
	void VALUIEvent_OnMessageTargetCycled__DelegateSignature(class UVALUI_ChatInputBar* InputBar, struct FMessageTarget& MessageTarget);
	void VALUIEvent_OnMessageSubmitted__DelegateSignature(class UVALUI_ChatInputBar* InputBar, struct FMessageTarget& MessageTarget, class FText& Message);
	void VALUIEvent_OnCommitBlankText__DelegateSignature(class UVALUI_ChatInputBar* InputBar);
	void VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature(const class FString& InString, TArray<class UVAL_ChatCommand_Base*>& CommandObjects);
	void TryUpdateChatChannel();
	void PushErrorNotification(class FText& InErrorText);
	void HandleOnTextCommitted(class FText& InText, enum class ETextCommit InCommitMethod);
	void HandleOnTextChanged(class FText& InText);
	void HandleOnStateChanged(enum class EVALUI_ChatInputBarState NewStateId);
	void HandleOnHideSuggestions();
	void HandleOnDisplayCharacterNameSuggestions(const class FString& CharacterNameSubstr, int32 MaxSuggestionsNum);
	void HandleOnChatChannelSet(struct FVALUI_ChatChannel& Channel);
	class FString GetCharacterName();
	void DisplayStringsSuggestions(const class FString& InString, TArray<class FString>& Suggestions);
	void DisplayCommandSuggestions(bool bInDisplay);
	void DisplayActiveCommandHint(class UVAL_ChatCommand_Base* Command, bool bDisplay);
	void CycleToPrevSuggestion();
	void CycleToNextSuggestion();
	void CompleteSuggestion();
	bool ChangeMessageTarget(struct FMessageTarget& MessageTarget);
};

// 0x8 (0x818 - 0x810)
// Class ValeriaUI.VALUI_EditableRichText_Styled
class UVALUI_EditableRichText_Styled : public US6UI_EditableRichText
{
public:
	class UVALUI_EditableRichTextStyle*          Style;                                             // 0x810(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_EditableRichText_Styled* GetDefaultObj();

};

// 0x108 (0x920 - 0x818)
// Class ValeriaUI.VALUI_ChatInputEditableText
class UVALUI_ChatInputEditableText : public UVALUI_EditableRichText_Styled
{
public:
	FMulticastInlineDelegateProperty_            OnSummonContextMenu;                               // 0x818(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        MaximumCharacterLimit;                             // 0x828(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PlainTextTag;                                      // 0x830(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BoldTextTag;                                       // 0x840(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItalicTextTag;                                     // 0x850(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  CycleKey;                                          // 0x860(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  UpKey;                                             // 0x878(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  DownKey;                                           // 0x890(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  PlainTextKey;                                      // 0x8A8(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  BoldKey;                                           // 0x8C0(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FKey                                  ItalicKey;                                         // 0x8D8(0x18)(Edit, BlueprintVisible, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_17D4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ChatInputEditableText* GetDefaultObj();

	void VALUI_OnSummonContextMenu__DelegateSignature(struct FGeometry& Geometry, struct FPointerEvent& MouseEvent);
	void StyleSelectedText(const class FString& StyleTagString);
	void PasteTextFromClipboardChecked();
	void MakeSelectedTextPlain();
	void MakeSelectedTextItalic();
	void MakeSelectedTextBold();
	void InsertTextAtCursorChecked(class FText& InText);
};

// 0x0 (0x278 - 0x278)
// Class ValeriaUI.VALUI_ChatMessage
class UVALUI_ChatMessage : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UVALUI_ChatMessage* GetDefaultObj();

	class FString GetTimeZone();
	class FString ColorToHexString(struct FLinearColor& Color);
};

// 0xF8 (0x5A8 - 0x4B0)
// Class ValeriaUI.VALUI_ChatPanelBase
class UVALUI_ChatPanelBase : public US6UI_InputActionHandlingUserWidget
{
public:
	uint8                                        Pad_184B[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnChatPanelStateChanged;                           // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TMap<class FName, struct FVALUI_ChatTab>     TabTable;                                          // 0x528(0x50)(Edit, BlueprintVisible, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class FName                                  ActiveTabName;                                     // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UVALUI_ChatInputBar*                   InputBar;                                          // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_184C[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ChatPanelBase* GetDefaultObj();

	bool TryGetTabAndChannelFromMessageConfig(struct FVALUI_ChatMessageConfig& Config, struct FVALUI_ChatTab* OutTab, struct FVALUI_ChatChannel* OutChannel);
	void ToggleChatChannel(struct FVALUI_ChatMessageConfig& MessageConfig);
	void ToggleChannelsByType(bool bEnabled, enum class EMessageTargetType Type);
	void ToggleAllChannels(bool bEnabled);
	void SwitchTab(class FName& TabName);
	void RemoveTabChannel(struct FVALUI_ChatTab* Tab, int32 ChannelIndex);
	void OnNewChatMessageAdded(struct FValeriaChatMessage& ChatMessage);
	void HandleToggleTabHost(bool bEnabled);
	void HandleTabChannelEnabled(struct FVALUI_ChatTab& Tab, struct FVALUI_ChatChannel& Channel, struct FVALUI_ChatMessageConfig& Config);
	void HandleRemoveSidePanelChannel(class UWidget* SidePanel, int32 ChannelIndex);
	void HandleOnStateChanged(enum class EVALUI_ChatPanelState State);
	void HandleOnPawnChanged(class APawn* Pawn);
	void HandleNewMessageTarget(const struct FMessageTarget& MessageTarget);
	void HandleNewControlMessage(struct FControlMessage& ControlMessage);
	void HandleNewChatMessage(struct FValeriaChatMessage& ChatMessage);
	void HandleMessageTargetRemoved(const struct FMessageTarget& MessageTarget);
	void HandleDisplayTab(class FName& TabName);
	void HandleDisplayChannelGlow(class UWidget* SidePanel, struct FVALUI_ChatChannel& Channel, int32 ChannelIndex);
	void HandleClearTabHost();
	void HandleClearMessagePanel(class UWidget* MessagePanel);
	void HandleAddTabToTabHost(class FName& TabName, class FText& TabDisplayName);
	void HandleAddTabChannel(struct FVALUI_ChatMessageConfig& MessageConfig);
	void HandleAddMessageToPanel(class UWidget* MessagePanel, struct FValeriaChatMessage& ChatMessage, struct FVALUI_ChatMessageConfig& MessageConfig);
	void GotoChatState(enum class EVALUI_ChatPanelState State);
	void GetTabWidgetReferences(class FName& TabName, class UWidget** OutSidePanelWidget, class UWidget** OutMessagePanelWidget);
	enum class EVALUI_ChatPanelState GetCurrentChatState();
	void GetChatMessageConfigs(struct FValeriaChatMessage& Message, TArray<struct FVALUI_ChatMessageConfig>* OutMessageConfigs);
	void DisplayTab(class FName& TabName);
	void ClearTabSidePanel(struct FVALUI_ChatTab& Tab);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_ChatStatics
class UVALUI_ChatStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVALUI_ChatStatics* GetDefaultObj();

	TArray<struct FMessageTarget> GetMessageTargetsOfChannel(class UWorld* WorldContext, struct FVALUI_ChatChannel& InChannel);
	bool DoesChannelMatchMessageTarget(struct FVALUI_ChatChannel& InChannel, struct FMessageTarget& InMessageTarget);
	struct FS6PLAT_ChatMessage ConvertValeriaChatMessageToPlatformChatMessage(struct FValeriaChatMessage& ChatMessages);
	TArray<struct FS6PLAT_ChatMessage> ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray(TArray<struct FValeriaChatMessage>& ChatMessages);
};

// 0xAD0 (0xB00 - 0x30)
// Class ValeriaUI.VALUI_CheckBoxStyle
class UVALUI_CheckBoxStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x30(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_CheckBoxStyle* GetDefaultObj();

	void Apply(class UCheckBox* CheckBox);
};

// 0x8 (0xC80 - 0xC78)
// Class ValeriaUI.VALUI_CheckBox_Styled
class UVALUI_CheckBox_Styled : public UCheckBox
{
public:
	class UVALUI_CheckBoxStyle*                  Style;                                             // 0xC78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_CheckBox_Styled* GetDefaultObj();

	void SetCheckBoxStyle(class UVALUI_CheckBoxStyle* NewStyle);
};

// 0x58 (0x2D0 - 0x278)
// Class ValeriaUI.VALUI_CrafterContentWidget
class UVALUI_CrafterContentWidget : public UUserWidget
{
public:
	TMap<class FName, struct FVALUI_Crafter>     CrafterTable;                                      // 0x278(0x50)(Edit, BlueprintVisible, EditFixedSize, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class UDataTable*                            CrafterConfigsDataTable;                           // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_CrafterContentWidget* GetDefaultObj();

	class FName GetCrafterRowName(struct FCrafterConfig& CrafterConfig);
	bool GetCrafterData(struct FCrafterConfig& CrafterConfig, struct FVALUI_Crafter* CrafterData);
};

// 0x0 (0x278 - 0x278)
// Class ValeriaUI.VALUI_CrafterStationsViewWidget
class UVALUI_CrafterStationsViewWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UVALUI_CrafterStationsViewWidget* GetDefaultObj();

	void DisplayCrafterStations(struct FRecipeNeeds& RecipeNeeds);
};

// 0x18 (0x180 - 0x168)
// Class ValeriaUI.VALUI_DebugOnly
class UVALUI_DebugOnly : public UContentWidget
{
public:
	bool                                         bShouldCollapseIfNotDebugMode;                     // 0x168(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1875[0x17];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_DebugOnly* GetDefaultObj();

};

// 0x8 (0x180 - 0x178)
// Class ValeriaUI.VALUI_DepthSortedHorizontalBox
class UVALUI_DepthSortedHorizontalBox : public UHorizontalBox
{
public:
	int32                                        ForemostWidgetIndex;                               // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_187A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_DepthSortedHorizontalBox* GetDefaultObj();

	void SetForemostWidgetIndex(int32 Index);
};

// 0x18 (0xA8 - 0x90)
// Class ValeriaUI.VALUI_DragDropOperation
class UVALUI_DragDropOperation : public UDragDropOperation
{
public:
	FMulticastInlineDelegateProperty_            OnDragStarted;                                     // 0x90(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bStartedDrag;                                      // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1884[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_DragDropOperation* GetDefaultObj();

	void DragStarted(struct FPointerEvent& PointerEvent);
};

// 0x48 (0x70 - 0x28)
// Class ValeriaUI.VALUI_Functor_Button_OnClicked
class UVALUI_Functor_Button_OnClicked : public UObject
{
public:
	uint8                                        Pad_1888[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_Functor_Button_OnClicked* GetDefaultObj();

	void OnClicked();
};

// 0x40 (0x70 - 0x30)
// Class ValeriaUI.VALUI_DynamicExtensionBase
class UVALUI_DynamicExtensionBase : public UPrimaryDataAsset
{
public:
	class FName                                  TargetContainer;                                   // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             TargetWidget;                                      // 0x38(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Priority;                                          // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_189B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_DynamicExtensionBase* GetDefaultObj();

	void AttachedToWidget();
};

// 0x310 (0x340 - 0x30)
// Class ValeriaUI.VALUI_EditableRichTextStyle
class UVALUI_EditableRichTextStyle : public UVALUI_WidgetStyleBase
{
public:
	class UDataTable*                            TextStyleSet;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class US6UI_EditableRichTextDecorator>> DecoratorClasses;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultStyle;                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextStyle                    DefaultTextStyleOverride;                          // 0x50(0x2F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_EditableRichTextStyle* GetDefaultObj();

	void ApplyToTextBlock(class US6UI_EditableRichText* TextWidget);
};

// 0xE80 (0xEB0 - 0x30)
// Class ValeriaUI.VALUI_EditableTextBoxStyle
class UVALUI_EditableTextBoxStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x30(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_EditableTextBoxStyle* GetDefaultObj();

	void ApplyToTextBox(class UEditableTextBox* TextWidget);
};

// 0x10 (0x1080 - 0x1070)
// Class ValeriaUI.VALUI_EditableTextBox_Styled
class UVALUI_EditableTextBox_Styled : public UEditableTextBox
{
public:
	class UVALUI_EditableTextBoxStyle*           Style;                                             // 0x1070(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A5[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_EditableTextBox_Styled* GetDefaultObj();

	void SetTextStyle(class UVALUI_EditableTextBoxStyle* NewStyle);
};

// 0x630 (0x660 - 0x30)
// Class ValeriaUI.VALUI_EditableTextStyle
class UVALUI_EditableTextStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FEditableTextStyle                    WidgetStyle;                                       // 0x30(0x2F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       HintTextStyle;                                     // 0x320(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_EditableTextStyle* GetDefaultObj();

	void ApplyToTextBlock(class UEditableText* TextWidget);
};

// 0x18 (0x4F0 - 0x4D8)
// Class ValeriaUI.VALUI_EditableText_Styled
class UVALUI_EditableText_Styled : public UEditableText
{
public:
	FMulticastInlineDelegateProperty_            OnCaretMovedDelegate;                              // 0x4D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UVALUI_EditableTextStyle*              Style;                                             // 0x4E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_EditableText_Styled* GetDefaultObj();

	void VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature(int32 LineIndex, int32 Offset);
	void SetTextStyle(class UVALUI_EditableTextStyle* NewStyle);
	void CaretGoTo(int32 LineIndex, int32 Offset);
};

// 0x18 (0x290 - 0x278)
// Class ValeriaUI.VALUI_EmoteButton
class UVALUI_EmoteButton : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, BlueprintCallable, NativeAccessSpecifierProtected)
	class UEmoteDataAsset*                       EmoteDataAsset;                                    // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_EmoteButton* GetDefaultObj();

};

// 0x28 (0x2A0 - 0x278)
// Class ValeriaUI.VALUI_EmoteButtonContainer
class UVALUI_EmoteButtonContainer : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UVALUI_EmoteButton>        EmoteButtonWidgetClass;                            // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UEmoteDataAsset>> Emotes;                                            // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_EmoteButtonContainer* GetDefaultObj();

	void OnEmoteContainerButtonClicked__DelegateSignature(class UVALUI_EmoteButtonContainer* Container, class UVALUI_EmoteButton* ButtonClicked, class UEmoteDataAsset* EmoteDataAsset);
	void OnEmoteButtonClicked(class UVALUI_EmoteButton* InButtonClicked, class UEmoteDataAsset* InEmoteDataAsset);
	void HandleClearContainer();
	void HandleAddButtonToContainer(class UVALUI_EmoteButton* Button);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_ErrorDisplayHandlerInterface
class IVALUI_ErrorDisplayHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVALUI_ErrorDisplayHandlerInterface* GetDefaultObj();

	void HandleErrorDisplay(struct FVALUI_ErrorDisplayPayload& ErrorDisplayPayload);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_ErrorDisplayHandling
class UVALUI_ErrorDisplayHandling : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVALUI_ErrorDisplayHandling* GetDefaultObj();

	bool TryRaiseErrorForDisplay(class UWidget* InstigatingWidget, struct FVALUI_ErrorDisplayPayload& ErrorDisplayPayload);
};

// 0x2D0 (0x300 - 0x30)
// Class ValeriaUI.VALUI_ExpandableAreaStyle
class UVALUI_ExpandableAreaStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FExpandableAreaStyle                  WidgetStyle;                                       // 0x30(0x1C0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BorderBrush;                                       // 0x1F0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                           BorderColor;                                       // 0x2C0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderPadding;                                     // 0x2D4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               AreaPadding;                                       // 0x2E4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CC[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ExpandableAreaStyle* GetDefaultObj();

	void Apply(class UExpandableArea* ExpandableArea);
};

// 0x10 (0x470 - 0x460)
// Class ValeriaUI.VALUI_ExpandableArea_Styled
class UVALUI_ExpandableArea_Styled : public UExpandableArea
{
public:
	class UVALUI_ExpandableAreaStyle*            ExpandableAreaStyle;                               // 0x460(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ExpandableArea_Styled* GetDefaultObj();

	void SetExpandableAreaStyle(class UVALUI_ExpandableAreaStyle* NewStyle);
};

// 0x8 (0x280 - 0x278)
// Class ValeriaUI.VALUI_ExtensionPointContainerBase
class UVALUI_ExtensionPointContainerBase : public UUserWidget
{
public:
	class FName                                  Identifier;                                        // 0x278(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_ExtensionPointContainerBase* GetDefaultObj();

	void AddExtensibleWidget(TSoftClassPtr<class UUserWidget>& WidgetReference);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_InputValidationFunctionLibrary
class UVALUI_InputValidationFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVALUI_InputValidationFunctionLibrary* GetDefaultObj();

	bool ValidateUserName(const class FString& UserNameInput, TArray<class FText>* OutErrors);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_ItemAcquisitionNotificationInterface
class IVALUI_ItemAcquisitionNotificationInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVALUI_ItemAcquisitionNotificationInterface* GetDefaultObj();

	void SetInitialData(const struct FValeriaItem& Item);
	bool CanAppendAdditionalData();
	void AppendAdditionalData(const struct FValeriaItem& Item);
};

// 0xE0 (0x108 - 0x28)
// Class ValeriaUI.VALUI_ItemAcquisitionNotifier
class UVALUI_ItemAcquisitionNotifier : public UObject
{
public:
	TSoftClassPtr<class UUserWidget>             WidgetClass;                                       // 0x28(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_18ED[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ItemAcquisitionNotifier* GetDefaultObj();

	void Setup(class UInventoryComponent* SourceInventoryComponent, class UVALUI_NotificationQueue* TargetNotificationQueue, TSoftClassPtr<class UUserWidget>& InWidgetClass);
	class UWidget* OnCreateItemAcquisitionNotification__DelegateSignature(class UVALUI_ItemAcquisitionNotifier* Notifier);
	void HandleNotificationDismissed(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId, class UWidget* NotificationWidget);
	void HandleItemAcquired(const struct FValeriaItem& Item);
};

// 0x8 (0xB0 - 0xA8)
// Class ValeriaUI.VALUI_ItemDragDrop
class UVALUI_ItemDragDrop : public UVALUI_DragDropOperation
{
public:
	bool                                         WasShiftDown;                                      // 0xA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ItemDragDrop* GetDefaultObj();

	struct FValeriaItem GetItem();
};

// 0x4F0 (0x520 - 0x30)
// Class ValeriaUI.VALUI_ItemSlotStyle
class UVALUI_ItemSlotStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FSlateBrush                           Brush_Empty;                                       // 0x30(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Filled;                                      // 0x100(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Hover;                                       // 0x1D0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Selected;                                    // 0x2A0(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Highlighted;                                 // 0x370(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Brush_Disabled;                                    // 0x440(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bRaiseOnHover;                                     // 0x510(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlayAnimOnHover;                                  // 0x511(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F5[0xE];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ItemSlotStyle* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class ValeriaUI.VALUI_ItemStyle
class UVALUI_ItemStyle : public UDataAsset
{
public:
	enum class EItemEmptyDisplayType             EmptyDisplayType;                                  // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemAmountDisplayType            AmountDisplayType;                                 // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomAmountDisplayColor;                      // 0x32(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18F6[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           AmountDisplayColor;                                // 0x34(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bCanShowDurability;                                // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowCapacity;                                  // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowConsumableIcon;                            // 0x4A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowQuestIcon;                                 // 0x4B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanShowAmmo;                                      // 0x4C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowTooltipOnHover;                               // 0x4D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FA[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ItemStyle* GetDefaultObj();

};

// 0x7A0 (0x7D0 - 0x30)
// Class ValeriaUI.VALUI_ListViewStyle
class UVALUI_ListViewStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x30(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  ScrollBarVisibility;                               // 0x7A0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScrollbarThickness;                                // 0x7A8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ScrollbarPadding;                                  // 0x7B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bScrollBarAlwaysVisible;                           // 0x7C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1901[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumberOfItemsToMakeScrollBarVisible;               // 0x7CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_ListViewStyle* GetDefaultObj();

};

// 0x68 (0xC88 - 0xC20)
// Class ValeriaUI.VALUI_ListView_Styled
class UVALUI_ListView_Styled : public UListView
{
public:
	uint8                                        Pad_191E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_ListViewStyle*                  Style;                                             // 0xC28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHandleDirectionalNavigation;                      // 0xC30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bProvideInputType;                                 // 0xC31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_191F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnUserScrolled;                                    // 0xC38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUserMouseWheelScrolled;                          // 0xC48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnListItemsChanged;                                // 0xC58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1920[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnListItemSelectionChangedWithInputType;        // 0xC78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVALUI_ListView_Styled* GetDefaultObj();

	void VALUI_OnListViewUserScrolled__DelegateSignature(float ScrollFraction);
	void VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature(float DesiredOffset);
	bool ShouldScrollBarBeVisible();
	void OnListItemSelectionChangedWithInputTypeDynamic__DelegateSignature(class UObject* Item, bool bIsSelected, enum class ESelectInfo SelectType);
	void OnListItemsChanged__DelegateSignature(TArray<class UObject*>& AddedItems, TArray<class UObject*>& RemovedItems);
	float GetScrollbarDistanceFromBottom();
	TArray<class UObject*> GetItemsWithinRange(int32& StartingIndex, int32& Range);
};

// 0x0 (0x278 - 0x278)
// Class ValeriaUI.VALUI_LoadingScreenBlackWidget
class UVALUI_LoadingScreenBlackWidget : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UVALUI_LoadingScreenBlackWidget* GetDefaultObj();

	class UWidgetAnimation* GetFadeFromBlackAnimation();
	void FadeFromNoneToBlack(float FadeTimeInSeconds);
	void FadeFromBlackToNone(float FadeTimeInSeconds);
};

// 0x20 (0x98 - 0x78)
// Class ValeriaUI.VALUI_MainHUDViewModel
class UVALUI_MainHUDViewModel : public US6UI_StateViewModel
{
public:
	struct FVALUI_MainHUDState                   HUDState;                                          // 0x78(0xC)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVALUI_SocialTrackingData             SocialTrackingData;                                // 0x84(0x14)(BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_MainHUDViewModel* GetDefaultObj();

	void ShowRightHudElements();
	void HideRightHudElements();
};

// 0x0 (0x4E8 - 0x4E8)
// Class ValeriaUI.VALUI_MainHUDWidget
class UVALUI_MainHUDWidget : public US6UI_StateUserWidget
{
public:

	static class UClass* StaticClass();
	static class UVALUI_MainHUDWidget* GetDefaultObj();

	void HandleOnViewModelSocialTrackingDataChanged(class UObject* Object, const struct FFieldNotificationId& Field);
	void HandleOnViewModelHUDStateChanged(class UObject* Object, const struct FFieldNotificationId& Field);
	void HandleOnSocialTrackingDataChanged(struct FVALUI_SocialTrackingData& SocialData);
	void HandleOnHUDStateChanged(struct FVALUI_MainHUDState& State);
};

// 0x11C0 (0x11F0 - 0x30)
// Class ValeriaUI.VALUI_MultiLineEditableTextBoxStyle
class UVALUI_MultiLineEditableTextBoxStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FEditableTextBoxStyle                 WidgetStyle;                                       // 0x30(0xE80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       TextStyle;                                         // 0xEB0(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_MultiLineEditableTextBoxStyle* GetDefaultObj();

	void ApplyToTextBox(class UMultiLineEditableTextBox* TextWidget);
};

// 0x8 (0x1070 - 0x1068)
// Class ValeriaUI.VALUI_MultiLineEditableTextBox_Styled
class UVALUI_MultiLineEditableTextBox_Styled : public UMultiLineEditableTextBox
{
public:
	class UVALUI_MultiLineEditableTextBoxStyle*  Style;                                             // 0x1068(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_MultiLineEditableTextBox_Styled* GetDefaultObj();

	void SetTextBoxStyle(class UVALUI_MultiLineEditableTextBoxStyle* NewStyle);
};

// 0x340 (0x370 - 0x30)
// Class ValeriaUI.VALUI_MultiLineEditableTextStyle
class UVALUI_MultiLineEditableTextStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FTextBlockStyle                       WidgetStyle;                                       // 0x30(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_MultiLineEditableTextStyle* GetDefaultObj();

	void ApplyToTextBlock(class UMultiLineEditableText* TextWidget);
};

// 0x8 (0x530 - 0x528)
// Class ValeriaUI.VALUI_MultiLineEditableText_Styled
class UVALUI_MultiLineEditableText_Styled : public UMultiLineEditableText
{
public:
	class UVALUI_MultiLineEditableTextStyle*     Style;                                             // 0x528(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_MultiLineEditableText_Styled* GetDefaultObj();

	void SetTextStyle(class UVALUI_MultiLineEditableTextStyle* NewStyle);
};

// 0x48 (0x78 - 0x30)
// Class ValeriaUI.VALUI_NewsInboxMessageDataAsset
class UVALUI_NewsInboxMessageDataAsset : public UDataAsset
{
public:
	struct FGuid                                 Guid;                                              // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVAL_NewsInboxMessageType         MessageType;                                       // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Subject;                                           // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_NewsInboxMessageDataAsset* GetDefaultObj();

};

// 0x30 (0x518 - 0x4E8)
// Class ValeriaUI.VALUI_NewsInbox_Widget
class UVALUI_NewsInbox_Widget : public UVALUI_ModalWidgetBase
{
public:
	bool                                         MessageDefsLoaded;                                 // 0x4E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_195C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVAL_NewsInboxComponent*               CurrentNewsInbox;                                  // 0x4F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVALUI_NewsInboxMessageDataAsset*> NewsInboxMessageDefinitions;                       // 0x4F8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_195E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_NewsInbox_Widget* GetDefaultObj();

	void OnLoadSuccess();
	void LoadNewsInboxMessageDefinitions();
	class AValeriaPlayerController* GetValeriaPlayer();
	class UVALUI_NewsInboxMessageDataAsset* GetNewsInboxMessageDefinitionFromRewardIndex(int32 Index, bool Claimed);
	class UVALUI_NewsInboxMessageDataAsset* GetNewsInboxMessageDefinitionByType(enum class EVAL_NewsInboxMessageType EMessageType);
	void BP_OnRewardRefresh();
	void BP_OnRedemptionSuccess();
	void BP_OnRedemptionFailure();
	void BP_OnLoadSuccess();
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_NotificationFactory
class UVALUI_NotificationFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVALUI_NotificationFactory* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_NotificationWidgetInterface
class IVALUI_NotificationWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVALUI_NotificationWidgetInterface* GetDefaultObj();

	bool MatchesNotification(class FText& NotificationText, TSoftObjectPtr<class UTexture2D>& NotificationIcon);
	void HandleNotificationShown(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& NotificationId);
	void HandleNotificationDismissed(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& NotificationId);
};

// 0x30 (0x58 - 0x28)
// Class ValeriaUI.VALUI_NotificationQueue
class UVALUI_NotificationQueue : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnNotificationPushed;                              // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNotificationDismissed;                           // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVALUI_NotificationQueueEntry> Entries;                                           // 0x48(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVALUI_NotificationQueue* GetDefaultObj();

	bool TryDismissNotification(struct FGuid& NotificationId);
	struct FGuid PushNotification(class UWidget* NotificationWidget);
	void OnNotificationShown(struct FGuid& NotificationId);
	void OnNotificationPushed__DelegateSignature(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId);
	void OnNotificationDismissed__DelegateSignature(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId, class UWidget* NotificationWidget);
	class UWidget* GetNotificationById(struct FGuid& NotificationId);
	class UWidget* GetLastNotificationOnStack();
	struct FGuid GetIdForNotification(class UWidget* NotificationWidget);
	TArray<struct FGuid> GetAlllNotificationIds();
};

// 0x30 (0x518 - 0x4E8)
// Class ValeriaUI.VALUI_PhotoCameraScreenBase
class UVALUI_PhotoCameraScreenBase : public US6UI_StateUserWidget
{
public:
	enum class EVALUI_PhotoCameraScreenLookMode  LookMode;                                          // 0x4E8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_198A[0x2F];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_PhotoCameraScreenBase* GetDefaultObj();

	void SetLookMode(enum class EVALUI_PhotoCameraScreenLookMode Value);
	void AccumulateLookModeInput(struct FGeometry& InGeometry, struct FPointerEvent& InMouseEvent, bool bInvertYAxis);
};

// 0x68 (0x588 - 0x520)
// Class ValeriaUI.VALUI_UIManagerWidgetBase
class UVALUI_UIManagerWidgetBase : public US6UI_UIManagerWidgetBase
{
public:
	uint8                                        Pad_19E2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnItemDragDrop;                                    // 0x528(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	uint8                                        Pad_19E3[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_UIManagerWidgetBase* GetDefaultObj();

	void RegisterCallbacksAndBroadcastNewDragDrop(class UVALUI_ItemDragDrop* ItemDragDrop);
	void OpenVillagerStore(int32 VillagerConfigId);
	void OpenBook(int32 BookId);
	void OnItemDragDropped(class UDragDropOperation* Operation);
	void NavigateToRecentPhotos(struct FGuid& IdOfPhotoToNavigateTo, bool bShouldSelectPhoto);
	void NavigateToOnlinePhotoAlbum(struct FGuid& IdOfPhotoToNavigateTo, bool bShouldSelectPhoto);
	void Implementation_ToggleGameplayMenuMode(enum class EVAL_GameplayMenuMode Mode);
	void Implementation_ToggleCollectionsMenu(enum class EVAL_CollectionsTabState& TabState);
	void Implementation_OpenVillagerStore(int32 VillagerConfigId);
	void Implementation_OpenSubgameScreen(class USubgameConfig* InSubgameConfig);
	void Implementation_OpenStore(class UVillagerStoreConfig* StoreConfig);
	void Implementation_OpenStables(class AActor* StablesActor);
	void Implementation_OpenSignTeleporter(class AActor* TeleporterActor);
	void Implementation_OpenShippingBin(class UShippingBinComponent* ShippingBinComponent);
	void Implementation_OpenRequestItem(class FName Tag);
	void Implementation_OpenRepairStation(class AActor* RepairStationActor, bool bAllowPurchases, bool bAllowRepairKitsFromStorage);
	void Implementation_OpenRecipeInspiration();
	void Implementation_OpenPremiumStore(struct FVAL_OpenStorePayload& Payload);
	void Implementation_OpenPlayerStorage();
	void Implementation_OpenPetBonus(TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& Items);
	void Implementation_OpenNewsInbox();
	void Implementation_OpenMenuHub();
	void Implementation_OpenMailbox();
	void Implementation_OpenItemVariantCustomizer(class UItemVariantCustomizerComponent* Customizer);
	void Implementation_OpenHousingEdit(class AHousingPlotActor* HousingPlot);
	void Implementation_OpenHouseUpgrade(class ULevelerComponent* LevelerComponent);
	void Implementation_OpenHomeTeleporter(class ATeleporterActor* Teleporter);
	void Implementation_OpenCVarMenu();
	void Implementation_OpenCrafter(class UCrafterComponent* CrafterComponent);
	void Implementation_OpenCommunityActivities();
	void Implementation_OpenBundleDropOffMenu(class UBundleShrineConfig* BundleConfig);
	void Implementation_OpenBook(int32 BookId);
	void Implementation_OpenAmmoMenu(enum class EAmmoType AmmoType);
	void Implementation_NavigateToRecentPhotos(struct FGuid& IdOfPhotoToNavigateTo, bool bShouldSelectPhoto);
	void Implementation_NavigateToOnlinePhotoAlbum(struct FGuid& IdOfPhotoToNavigateTo, bool bShouldSelectPhoto);
	void Implementation_NavigateToCharacterCustomization(struct FVAL_CharacterCustomizationModeConfig& Config);
	bool Implementation_HasAnyHousingPlotsTeleportOptions(class ATeleporterActor* Teleporter);
	void Implementation_CloseSubgameScreen();
};

// 0xF0 (0x678 - 0x588)
// Class ValeriaUI.VALUI_PregameUIManager
class UVALUI_PregameUIManager : public UVALUI_UIManagerWidgetBase
{
public:
	uint8                                        Pad_1A17[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPregameStateChange;                              // 0x5F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLobbyStateChange;                                // 0x600(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	class AVAL_CharacterRenderStudio*            RenderStudio;                                      // 0x610(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                AnnouncementURL;                                   // 0x618(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Announcement;                                      // 0x628(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDateTime                             AnnouncementTimestamp;                             // 0x638(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ServerStatusURL;                                   // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ServerStatus;                                      // 0x650(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A19[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_PregameUIManager* GetDefaultObj();

	void TryGetCachedCharacters_Checked(TArray<struct FVALDTOS_MetaCharacterFormat>* OutOurCharacters);
	bool TryGetCachedCharacters(TArray<struct FVALDTOS_MetaCharacterFormat>* OutOurCharacters);
	void SetAnnouncementURL(const class FString& URL);
	void OnPregameStateChange__DelegateSignature(enum class EVALUI_PregameState State);
	void OnLobbyStateChange__DelegateSignature(enum class EVALUI_LobbyState State);
	void HandleOnRetrievingCharacterListFailed(int32 ErrorCode);
	void HandleOnPregameStateChanged(enum class EVALUI_PregameState NewState);
	void HandleOnLoginStateChanged(enum class EVALUI_LoginState NewState);
	void HandleOnLobbyStateChanged(enum class EVALUI_LobbyState NewState);
	void HandleOnFetchedServerStatus();
	void HandleOnCharacterListObtained(TArray<struct FVALDTOS_MetaCharacterFormat>& InCachedCharacters);
	void HandleOnCharacterCreationStateChanged(enum class EVALUI_CharacterCreationState NewState);
	void GoToPregameState(enum class EVALUI_PregameState NewState);
	void GoToLoginState(enum class EVALUI_LoginState NewState);
	void GoToLobbyState(enum class EVALUI_LobbyState NewState);
	void GoToCharacterCreationState(enum class EVALUI_CharacterCreationState NewState);
	enum class EVALUI_PregameState GetCurrentPregameStateId();
	void GetCachedCharacterAtIndex_Checked(int32 Index, struct FVALDTOS_MetaCharacterFormat* OutCharacter);
	void FetchServerStatus();
	void FetchAnnouncements();
};

// 0x40 (0x418 - 0x3D8)
// Class ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase
class UVALUI_PremiumCurrencyPurchaseWidgetBase : public UCommonActivatableWidget
{
public:
	enum class EVALUI_PremiumCurrencyPurchaseState PurchaseState;                                     // 0x3D8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A26[0x13];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ValidatePurchaseTimerSecs;                         // 0x3EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ValidatePurchaseMaxAttempts;                       // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A27[0x24];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_PremiumCurrencyPurchaseWidgetBase* GetDefaultObj();

	void RequestBundleOffers();
	void PurchasePremiumCurrency(struct FGuid& BundleID, enum class EVALUI_PremiumCurrencyProvider& Provider);
	void HandleValidatePaymentFulfillmentTick(struct FGuid& PaymentID);
	void HandleUrlChanged(class FText& Text);
	void HandlePaymentFulfilled();
	void HandlePaymentCompleted();
	void HandlePaymentCancelled();
	void HandleCheckoutSessionCreated(const class FString& URL);
	void HandleBundleOffersFailed();
	void HandleBundleOffersAvailable(TArray<struct FVALUI_PremiumCurrencyBundle>& Bundles);
	void CancelValidatePaymentPolling();
};

// 0x0 (0x3D8 - 0x3D8)
// Class ValeriaUI.VALUI_PremiumItemPurchaseWidgetBase
class UVALUI_PremiumItemPurchaseWidgetBase : public UCommonActivatableWidget
{
public:

	static class UClass* StaticClass();
	static class UVALUI_PremiumItemPurchaseWidgetBase* GetDefaultObj();

	TMap<class FName, class UVAL_CharacterCustomizationItemBase*> GetLoadoutOverridesForCatalogItems(TArray<class UVAL_CharacterCustomizationItemBase*>& Items);
	TArray<class UVAL_CharacterCustomizationItemBase*> GetCustomizationItemsForGuids(TArray<struct FGuid>& ItemIds);
};

// 0x60 (0x2D8 - 0x278)
// Class ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase
class UVALUI_PremiumStorefrontTileWidgetBase : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelected;                                        // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	struct FVALUI_PremiumStorefrontWidgetModel   Model;                                             // 0x288(0x50)(BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_PremiumStorefrontTileWidgetBase* GetDefaultObj();

	void SetModel(struct FVALUI_PremiumStorefrontWidgetModel& NewModel);
	void OnSelected__DelegateSignature(class UVALUI_PremiumStorefrontTileWidgetBase* Widget);
	void HandleModelUpdate(struct FVALUI_PremiumStorefrontWidgetModel& NewModel);
	struct FVALUI_PremiumStorefrontWidgetModel GetModel();
};

// 0x18 (0x3F0 - 0x3D8)
// Class ValeriaUI.VALUI_PremiumStorefrontWidgetBase
class UVALUI_PremiumStorefrontWidgetBase : public UCommonActivatableWidget
{
public:
	int32                                        TilePaddingAmount;                                 // 0x3D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A42[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGridPanel*                            StoreGrid;                                         // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UVALUI_PremiumStorefrontTileWidgetBase> TileWidgetClass;                                   // 0x3E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UVALUI_PremiumStorefrontWidgetBase* GetDefaultObj();

	void HandleTileWidgetSelected(class UVALUI_PremiumStorefrontTileWidgetBase* Tile);
	void HandleTileSelected(struct FVALUI_PremiumStorefrontWidgetModel& Model);
	void HandleStorefrontError();
	void HandleStorefrontAvailable(struct FVALUI_PremiumStorefrontResponse& Response);
	bool FetchStorefront();
	void CreateStorefrontGrid(int32 WidgetsPerRow, TArray<struct FVALUI_PremiumStorefrontWidgetModel>& Models);
};

// 0x78 (0x560 - 0x4E8)
// Class ValeriaUI.VALUI_PremiumStoreScreenWidgetBase
class UVALUI_PremiumStoreScreenWidgetBase : public UVALUI_ModalWidgetBase
{
public:
	uint8                                        Pad_1A61[0x68];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnStudioStateChanged;                              // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_PremiumStoreScreenWidgetBase* GetDefaultObj();

	void OnStateChanged__DelegateSignature(class UVALUI_PremiumStoreScreenWidgetBase* StoreWidget, enum class EVALUI_PremiumStoreState State);
	void HandleOnStateChanged(enum class EVALUI_PremiumStoreState State);
	void HandleBackAction(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime);
	void GoToPremiumStoreState(enum class EVALUI_PremiumStoreState NewState);
	enum class EVALUI_PremiumStoreState GetPremiumStoreState();
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_PremiumStoreFunctionLibrary
class UVALUI_PremiumStoreFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVALUI_PremiumStoreFunctionLibrary* GetDefaultObj();

	struct FVAL_CharacterCustomization_PetPurchaseBonus GetPetPurchaseBonusFromPurchaseRewards(struct FVALUI_PremiumStorefrontPurchaseRewards& PurchaseRewards);
	TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>> GetNewPetsForBonusReceivedModal(struct FVAL_CharacterCustomization_PetPurchaseBonus& PetPurchaseBonus, TSet<struct FGuid>& NewEntitlements);
};

// 0x0 (0x1A8 - 0x1A8)
// Class ValeriaUI.VALUI_PremiumStoreWebBrowser
class UVALUI_PremiumStoreWebBrowser : public UWebBrowser
{
public:

	static class UClass* StaticClass();
	static class UVALUI_PremiumStoreWebBrowser* GetDefaultObj();

};

// 0x2A0 (0x2D0 - 0x30)
// Class ValeriaUI.VALUI_ProgressBarStyle
class UVALUI_ProgressBarStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FProgressBarStyle                     WidgetStyle;                                       // 0x30(0x290)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             BorderPadding;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_ProgressBarStyle* GetDefaultObj();

	void Apply(class UProgressBar* ProgressBar);
};

// 0x8 (0x440 - 0x438)
// Class ValeriaUI.VALUI_ProgressBar_Styled
class UVALUI_ProgressBar_Styled : public UProgressBar
{
public:
	class UVALUI_ProgressBarStyle*               Style;                                             // 0x438(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_ProgressBar_Styled* GetDefaultObj();

	void SetProgressBarStyle(class UVALUI_ProgressBarStyle* NewStyle);
};

// 0x210 (0x360 - 0x150)
// Class ValeriaUI.VALUI_RadioSlider
class UVALUI_RadioSlider : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSliderAnimationStarted;                          // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSliderAnimationCompleted;                        // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSliderWidgetCreated;                             // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnElementWidgetCreated;                            // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPageChanged;                                     // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               SliderWidgetClass;                                 // 0x1A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UUserWidget>               ElementWidgetClass;                                // 0x1A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ElementCount;                                      // 0x1B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SliderIndex;                                       // 0x1B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVALUI_RadioSliderPaginationSettings  PaginationSettings;                                // 0x1B8(0x98)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	float                                        SliderAnimationTime;                               // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AC2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRuntimeFloatCurve                    SliderAnimationCurve;                              // 0x258(0x88)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FMargin                               ElementPadding;                                    // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UUserWidget*                           SliderWidget;                                      // 0x2F0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<int32, class UUserWidget*>              ElementWidgetsTable;                               // 0x2F8(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AC6[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_RadioSlider* GetDefaultObj();

	void TryIncrementPage();
	void TryDecrementPage();
	void SetIndex(int32 Index, bool bSkipSliderAnimation);
	void OnSliderWidgetCreated__DelegateSignature(class UUserWidget* SliderWidget);
	void OnSliderChanged__DelegateSignature(class UUserWidget* PreviousElementWidget, int32 PreviousElementIndex, class UUserWidget* NewElementWidget, int32 NewElementIndex);
	void OnPageChanged__DelegateSignature(int32 PageIndex, int32 TotalNumPages);
	void OnElementWidgetCreated__DelegateSignature(class UUserWidget* ElementWidget, int32 ElementIndex);
	class UUserWidget* GetWidgetAtIndex(int32 Index);
	int32 GetTotalNumPages();
	class UUserWidget* GetSliderWidget();
	bool GetIndexFromWidget(class UUserWidget* Widget, int32* Index);
	TMap<int32, class UUserWidget*> GetElementWidgetsTable();
	int32 GetCurrentPageIndex();
	int32 GetCurrentIndex();
	void BuildElementsAndSlider();
};

// 0x360 (0x390 - 0x30)
// Class ValeriaUI.VALUI_RichTextBlockStyle
class UVALUI_RichTextBlockStyle : public UVALUI_WidgetStyleBase
{
public:
	class UDataTable*                            TextStyleSet;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class URichTextBlockDecorator>> DecoratorClasses;                                  // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bOverrideDefaultStyle;                             // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTextBlockStyle                       DefaultTextStyleOverride;                          // 0x50(0x340)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_RichTextBlockStyle* GetDefaultObj();

	void ApplyToTextBlock(class URichTextBlock* TextWidget);
};

// 0x10 (0x880 - 0x870)
// Class ValeriaUI.VALUI_RichTextBlock_Styled
class UVALUI_RichTextBlock_Styled : public URichTextBlock
{
public:
	class UVALUI_RichTextBlockStyle*             Style;                                             // 0x870(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_RichTextBlock_Styled* GetDefaultObj();

	void SetTextBlockStyle(class UVALUI_RichTextBlockStyle* NewStyle);
};

// 0xAE0 (0xB10 - 0x30)
// Class ValeriaUI.VALUI_ScrollBoxStyle
class UVALUI_ScrollBoxStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FScrollBoxStyle                       WidgetStyle;                                       // 0x30(0x350)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FScrollBarStyle                       WidgetBarStyle;                                    // 0x380(0x770)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             ScrollbarThickness;                                // 0xAF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ScrollbarPadding;                                  // 0xB00(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_ScrollBoxStyle* GetDefaultObj();

	void ApplyToScrollBox(class UScrollBox* ScrollBox);
};

// 0x10 (0xCB0 - 0xCA0)
// Class ValeriaUI.VALUI_ScrollBox_Styled
class UVALUI_ScrollBox_Styled : public UScrollBox
{
public:
	class UVALUI_ScrollBoxStyle*                 Style;                                             // 0xCA0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHandleDirectionalNavigation;                      // 0xCA8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AEE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_ScrollBox_Styled* GetDefaultObj();

	void SetScrollBoxStyle(class UVALUI_ScrollBoxStyle* NewStyle);
};

// 0x50 (0x88 - 0x38)
// Class ValeriaUI.VALUI_Settings
class UVALUI_Settings : public UDeveloperSettings
{
public:
	TSubclassOf<class UUserWidget>               ToolTipWidgetClass;                                // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UCurveFloat>            RadioSliderDefaultAnimCurve;                       // 0x40(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ServerTravelDelimiterText;                         // 0x70(0x18)(Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_Settings* GetDefaultObj();

};

// 0x500 (0x530 - 0x30)
// Class ValeriaUI.VALUI_SliderStyle
class UVALUI_SliderStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FSliderStyle                          WidgetStyle;                                       // 0x30(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_SliderStyle* GetDefaultObj();

	void Apply(class USlider* Slider);
};

// 0x10 (0x710 - 0x700)
// Class ValeriaUI.VALUI_Slider_Styled
class UVALUI_Slider_Styled : public USlider
{
public:
	class UVALUI_SliderStyle*                    Style;                                             // 0x700(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF6[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_Slider_Styled* GetDefaultObj();

	void SetSliderStyle(class UVALUI_SliderStyle* NewStyle);
};

// 0x10 (0x4C0 - 0x4B0)
// Class ValeriaUI.VALUI_SocialPanelBase
class UVALUI_SocialPanelBase : public US6UI_InputActionHandlingUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnToggleDebugSimulation;                           // 0x4B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_SocialPanelBase* GetDefaultObj();

	void ToggleDebugSimulation__DelegateSignature(bool bDisplay);
	class FString GetDebugSimulationFlag();
};

// 0x30 (0x4E0 - 0x4B0)
// Class ValeriaUI.VALUI_LobbyScreenUserWidget
class UVALUI_LobbyScreenUserWidget : public US6UI_InputActionHandlingUserWidget
{
public:
	FMulticastInlineDelegateProperty_            EventUpdateSelectedCharacter;                      // 0x4B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventOnPlayButtonClicked;                          // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            EventOnCancelLoginQueueButtonClicked;              // 0x4D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, BlueprintCallable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_LobbyScreenUserWidget* GetDefaultObj();

};

// 0x0 (0x4E8 - 0x4E8)
// Class ValeriaUI.VALUI_StateUserWidget_PregameHUD
class UVALUI_StateUserWidget_PregameHUD : public US6UI_StateUserWidget
{
public:

	static class UClass* StaticClass();
	static class UVALUI_StateUserWidget_PregameHUD* GetDefaultObj();

	void SetOwner(class UVALUI_PregameUIManager* Owner);
	void HandleOnLoginStateChanged(enum class EVALUI_LoginState NewState);
	void HandleOnLobbyStateChanged(enum class EVALUI_LobbyState NewState);
	void HandleOnFetchedServerStatus();
	void HandleOnCharacterCreationStateChanged(enum class EVALUI_CharacterCreationState NewState);
	class UVALUI_LobbyScreenUserWidget* GetLobbyScreen();
	class UVALUI_CharacterCreationScreenBase* GetCharacterCreationScreen();
	void DisplayMatchmakingQueueNumber(int32 Number);
	void DisplayMatchmakingQueueActive(bool bActive);
	void DisplayCharacterCreationMatchmaking();
};

// 0x78 (0x2F0 - 0x278)
// Class ValeriaUI.VALUI_TabButtonHostBase
class UVALUI_TabButtonHostBase : public UUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnDifferentActiveTabSet;                           // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FVALUI_TabButtonPreregistrationInfo> PreregisteredTabsInfoArray;                        // 0x288(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  ActiveTabName;                                     // 0x298(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, struct FVALUI_InstantiatedTabButtonInfo> InstantiatedTabButtonsInfoMap;                     // 0x2A0(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UVALUI_TabButtonHostBase* GetDefaultObj();

	void UnregisterTab(class FName& TabName);
	bool TrySetActiveTabName(class FName TabName, bool bForceSet);
	bool TryGetTabInfo(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo* OutInfo);
	void SetTabButtonVisibility(class FName& TabName, enum class ESlateVisibility NewVisibility);
	void RemoveTabButton(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo& Info);
	void RegisterNewTab(class FName& TabName, class FText& TabDisplayName, class UButton* Button, class UWidget* AssociatedContent, TSoftObjectPtr<class UTexture2D> IconTexture, struct FVector2D& IconSize);
	void OnDifferentActiveTabSet__DelegateSignature(class UVALUI_TabButtonHostBase* TabButtonHost);
	void HandleDifferentActiveTabSet(class FName TabName);
	TArray<class FName> GetTabNames();
	class FName GetActiveTabName();
	void AddTabButton(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo& Info);
};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_TabButtonInterface
class IVALUI_TabButtonInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IVALUI_TabButtonInterface* GetDefaultObj();

	void SetIsActiveTabButton(bool bIsActive);
};

// 0x160 (0x190 - 0x30)
// Class ValeriaUI.VALUI_TextBlockStyle
class UVALUI_TextBlockStyle : public UVALUI_WidgetStyleBase
{
public:
	struct FSlateColor                           ColorAndOpacity;                                   // 0x30(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateFontInfo                        Font;                                              // 0x48(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StrikeBrush;                                       // 0xA0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColorAndOpacity;                             // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_TextBlockStyle* GetDefaultObj();

	void ApplyToTextBlock(class UTextBlock* TextWidget);
};

// 0x8 (0x340 - 0x338)
// Class ValeriaUI.VALUI_TextBlock_Styled
class UVALUI_TextBlock_Styled : public UTextBlock
{
public:
	class UVALUI_TextBlockStyle*                 Style;                                             // 0x338(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UVALUI_TextBlock_Styled* GetDefaultObj();

	void SetTextBlockStyle(class UVALUI_TextBlockStyle* NewStyle);
};

// 0x28 (0xCB0 - 0xC88)
// Class ValeriaUI.VALUI_TileView_Styled
class UVALUI_TileView_Styled : public UVALUI_ListView_Styled
{
public:
	float                                        EntryHeight;                                       // 0xC88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EntryWidth;                                        // 0xC8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EListItemAlignment                TileAlignment;                                     // 0xC90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapHorizontalNavigation;                         // 0xC91(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B3D[0x1E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_TileView_Styled* GetDefaultObj();

	void SetEntryWidth(float NewWidth);
	void SetEntryHeight(float NewHeight);
	float GetEntryWidth();
	float GetEntryHeight();
};

// 0x28 (0x60 - 0x38)
// Class ValeriaUI.VALUI_UButtonSlot
class UVALUI_UButtonSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B44[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_UButtonSlot* GetDefaultObj();

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment);
	void SetPadding(const struct FMargin& InPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment);
};

// 0x4A8 (0x610 - 0x168)
// Class ValeriaUI.VALUI_UButton_Styled
class UVALUI_UButton_Styled : public UContentWidget
{
public:
	class UVALUI_ButtonStyle*                    Style;                                             // 0x168(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x170(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          BackgroundColor;                                   // 0x180(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonClickMethod                ClickMethod;                                       // 0x190(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x191(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x192(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x193(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonClicked;                                   // 0x198(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonPressed;                                   // 0x1A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonReleased;                                  // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonHovered;                                   // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonUnhovered;                                 // 0x1D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnButtonDrop;                                      // 0x1E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B58[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          WidgetStyleOverride;                               // 0x210(0x3F0)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1B59[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UVALUI_UButton_Styled* GetDefaultObj();

	void VisualRelease();
	void VisualPress();
	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod);
	void SetPressMethod(enum class EButtonPressMethod InPressMethod);
	void SetClickMethod(enum class EButtonClickMethod InClickMethod);
	void SetButtonStyle(struct FButtonStyle& WidgetStyle);
	void SetButtonConfig(class UVALUI_ButtonStyle* NewButtonStyle);
	struct FEventReply OnMouseButtonClicked(const struct FGeometry& MyGeometry, struct FPointerEvent& InMouseEvent);
};

// 0x0 (0x3B8 - 0x3B8)
// Class ValeriaUI.VALUI_UIManagerHUDBase
class AVALUI_UIManagerHUDBase : public AS6UI_UIManagerHUDBase
{
public:

	static class UClass* StaticClass();
	static class AVALUI_UIManagerHUDBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ValeriaUI.VALUI_WidgetBlueprintLibrary
class UVALUI_WidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UVALUI_WidgetBlueprintLibrary* GetDefaultObj();

	void UpdateEntryWidgetTypeOnListView(class UListViewBase* ListView, TSubclassOf<class UUserWidget> EntryWidgetType);
	class UObject* GetOuterForConstructingNativeWidget(class UUserWidget* HostUserWidget);
	class UWidget* FindOuterMostWidget(class UWidget* BaseWidget);
	struct FEventReply CaptureMouseWithHighPrecision(struct FEventReply& Reply, class UWidget* CapturingWidget);
};

}


