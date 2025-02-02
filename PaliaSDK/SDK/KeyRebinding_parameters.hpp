#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function KeyRebinding.BindingKeyListenerWidget.OnDeactivated
struct UBindingKeyListenerWidget_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function KeyRebinding.BindingKeyListenerWidget.OnActivated
struct UBindingKeyListenerWidget_OnActivated_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function KeyRebinding.BindingKeyListenerWidget.GetPlayerInputKey
struct UBindingKeyListenerWidget_GetPlayerInputKey_Params
{
public:
	struct FInputKeys                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function KeyRebinding.KeyRebindingToolsLibrary.GetPromptDelayTime
struct UKeyRebindingToolsLibrary_GetPromptDelayTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function KeyRebinding.KeyRebindingToolsLibrary.GetKeyFName
struct UKeyRebindingToolsLibrary_GetKeyFName_Params
{
public:
	struct FKey                                  InKey;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function KeyRebinding.KeyRebindingToolsLibrary.GetImagesWithInputKeys
struct UKeyRebindingToolsLibrary_GetImagesWithInputKeys_Params
{
public:
	struct FInputKeys                            InputKeys;                                         // 0x0(0x30)(ConstParm, Parm, NativeAccessSpecifierPublic)
	class UInputActionDescriptionWidget*         ActionDescWidget;                                  // 0x30(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function KeyRebinding.KeyRebindingToolsLibrary.GetImagesArrayWithActionName
struct UKeyRebindingToolsLibrary_GetImagesArrayWithActionName_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadKey;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_651[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UKeyRebindingSubsystem*                KeyRebindingSubsystem;                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputActionDescriptionWidget*         ActionDescWidget;                                  // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLockedCurrentInput;                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_655[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKeyRebindingIcons                    ReturnValue;                                       // 0x28(0x20)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function KeyRebinding.KeyRebindingToolsLibrary.GetAllInputActionMappingInfo
struct UKeyRebindingToolsLibrary_GetAllInputActionMappingInfo_Params
{
public:
	TArray<struct FKeyRebindingSettingsInfo>     OutKeyRebindingSettingsInfo;                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadKey;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UKeyRebindingSubsystem*                KeyRebindingSubsystem;                             // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputActionDescriptionWidget*         ActionDescWidget;                                  // 0x20(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLockedCurrentInput;                             // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function KeyRebinding.KeyRebindingToolsLibrary.GetAllImagesWithAction
struct UKeyRebindingToolsLibrary_GetAllImagesWithAction_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEnhancedInputSubsystemWithKeyRebinding* EnhancedInputSubsystem;                            // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInputActionDescriptionWidget*         ActionDescWidget;                                  // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadKey;                                     // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLockedCurrentInput;                             // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_666[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputKeysImages>              ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.UnRegisterDelegateToRefreshKeys
struct UEnhancedInputSubsystemWithKeyRebinding_UnRegisterDelegateToRefreshKeys_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           RefreshKeysDelegate;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.RequestRebuildControlMappings
struct UEnhancedInputSubsystemWithKeyRebinding_RequestRebuildControlMappings_Params
{
public:
	struct FModifyContextOptions                 Options;                                           // 0x0(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInputMappingRebuildType          RebuildType;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.RemoveMappingContext
struct UEnhancedInputSubsystemWithKeyRebinding_RemoveMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0x8(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_679[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.RegisterDelegateToRefreshKeys
struct UEnhancedInputSubsystemWithKeyRebinding_RegisterDelegateToRefreshKeys_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           RefreshKeysDelegate;                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.GetKeysForInputAction
struct UEnhancedInputSubsystemWithKeyRebinding_GetKeysForInputAction_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadKey;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLockedCurrentInput;                             // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_680[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputKeys>                    ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.AddMappingContext
struct UEnhancedInputSubsystemWithKeyRebinding_AddMappingContext_Params
{
public:
	class UInputMappingContext*                  MappingContext;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Priority;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FModifyContextOptions                 Options;                                           // 0xC(0x1)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_684[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.UnRegisterCompleteKeyRebindingEvent
struct UKeyRebindingSubsystem_UnRegisterCompleteKeyRebindingEvent_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           KeyRebindingCallBackDelegate;                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.SetCustomKeyBindingOfAction
struct UKeyRebindingSubsystem_SetCustomKeyBindingOfAction_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKeyRebindingSlot                 SlotNum;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsUnbindingOperation;                             // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_698[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputKeys                            InputKeys;                                         // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadKey;                                     // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x41(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_699[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.SaveCustomRemappingDataset
struct UKeyRebindingSubsystem_SaveCustomRemappingDataset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.ResetToDefaultKeyMapping
struct UKeyRebindingSubsystem_ResetToDefaultKeyMapping_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.RegisterCompleteKeyRebindingEvent
struct UKeyRebindingSubsystem_RegisterCompleteKeyRebindingEvent_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           KeyRebindingCallBackDelegate;                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.QueryKeysOfActionAndSlot
struct UKeyRebindingSubsystem_QueryKeysOfActionAndSlot_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKeyRebindingSlot                 SlotNum;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadKey;                                     // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLockedCurrentInput;                             // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AB[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInputKeys                            ReturnValue;                                       // 0x10(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.QueryCustomRemappingKeys
struct UKeyRebindingSubsystem_QueryCustomRemappingKeys_Params
{
public:
	class FName                                  ActionName;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGamepadKey;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLockedCurrentInput;                             // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInputKeys>                    ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.GetAllKeysWithActionBound
struct UKeyRebindingSubsystem_GetAllKeysWithActionBound_Params
{
public:
	bool                                         bIsGamepadKey;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLockedCurrentInput;                             // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6B2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FKey>                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.GetActionNameWithAction
struct UKeyRebindingSubsystem_GetActionNameWithAction_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.ApplyLoadKeyRebindingSettings
struct UKeyRebindingSubsystem_ApplyLoadKeyRebindingSettings_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function KeyRebinding.KeyRebindingSubsystem.ApplyCustomKeyMapping
struct UKeyRebindingSubsystem_ApplyCustomKeyMapping_Params
{
public:
};

}
}


