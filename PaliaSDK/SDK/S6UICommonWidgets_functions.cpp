#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6UICommonWidgets.S6UI_Settings
// (None)

class UClass* US6UI_Settings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_Settings");

	return Clss;
}


// S6UI_Settings S6UICommonWidgets.Default__S6UI_Settings
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_Settings* US6UI_Settings::GetDefaultObj()
{
	static class US6UI_Settings* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_Settings*>(US6UI_Settings::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_BackgroundBlur
// (None)

class UClass* US6UI_BackgroundBlur::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_BackgroundBlur");

	return Clss;
}


// S6UI_BackgroundBlur S6UICommonWidgets.Default__S6UI_BackgroundBlur
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_BackgroundBlur* US6UI_BackgroundBlur::GetDefaultObj()
{
	static class US6UI_BackgroundBlur* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_BackgroundBlur*>(US6UI_BackgroundBlur::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_CommonButtonStyle
// (None)

class UClass* US6UI_CommonButtonStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_CommonButtonStyle");

	return Clss;
}


// S6UI_CommonButtonStyle S6UICommonWidgets.Default__S6UI_CommonButtonStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_CommonButtonStyle* US6UI_CommonButtonStyle::GetDefaultObj()
{
	static class US6UI_CommonButtonStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_CommonButtonStyle*>(US6UI_CommonButtonStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_CommonButtonInternalBase
// (None)

class UClass* US6UI_CommonButtonInternalBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_CommonButtonInternalBase");

	return Clss;
}


// S6UI_CommonButtonInternalBase S6UICommonWidgets.Default__S6UI_CommonButtonInternalBase
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_CommonButtonInternalBase* US6UI_CommonButtonInternalBase::GetDefaultObj()
{
	static class US6UI_CommonButtonInternalBase* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_CommonButtonInternalBase*>(US6UI_CommonButtonInternalBase::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_CommonButton_Styled
// (None)

class UClass* US6UI_CommonButton_Styled::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_CommonButton_Styled");

	return Clss;
}


// S6UI_CommonButton_Styled S6UICommonWidgets.Default__S6UI_CommonButton_Styled
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_CommonButton_Styled* US6UI_CommonButton_Styled::GetDefaultObj()
{
	static class US6UI_CommonButton_Styled* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_CommonButton_Styled*>(US6UI_CommonButton_Styled::StaticClass()->DefaultObject);

	return Default;
}


// Function S6UICommonWidgets.S6UI_CommonButton_Styled.SetIsDropShadow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CommonButton_Styled::SetIsDropShadow(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CommonButton_Styled", "SetIsDropShadow");

	Params::US6UI_CommonButton_Styled_SetIsDropShadow_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_CommonButton_Styled.SetCommonButtonStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class US6UI_CommonButtonStyle>InStyle                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CommonButton_Styled::SetCommonButtonStyle(TSubclassOf<class US6UI_CommonButtonStyle> InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CommonButton_Styled", "SetCommonButtonStyle");

	Params::US6UI_CommonButton_Styled_SetCommonButtonStyle_Params Parms{};

	Parms.InStyle = InStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class S6UICommonWidgets.S6UI_EditableRichText
// (None)

class UClass* US6UI_EditableRichText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_EditableRichText");

	return Clss;
}


// S6UI_EditableRichText S6UICommonWidgets.Default__S6UI_EditableRichText
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_EditableRichText* US6UI_EditableRichText::GetDefaultObj()
{
	static class US6UI_EditableRichText* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_EditableRichText*>(US6UI_EditableRichText::StaticClass()->DefaultObject);

	return Default;
}


// Function S6UICommonWidgets.S6UI_EditableRichText.Undo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::Undo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "Undo");

	Params::US6UI_EditableRichText_Undo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetTextStyleSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  NewTextStyleSet                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetTextStyleSet(class UDataTable* NewTextStyleSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetTextStyleSet");

	Params::US6UI_EditableRichText_SetTextStyleSet_Params Parms{};

	Parms.NewTextStyleSet = NewTextStyleSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetText");

	Params::US6UI_EditableRichText_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetJustification(enum class ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetJustification");

	Params::US6UI_EditableRichText_SetJustification_Params Parms{};

	Parms.InJustification = InJustification;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsReadyOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetIsReadOnly");

	Params::US6UI_EditableRichText_SetIsReadOnly_Params Parms{};

	Parms.InbIsReadyOnly = InbIsReadyOnly;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetHintText(class FText InHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetHintText");

	Params::US6UI_EditableRichText_SetHintText_Params Parms{};

	Parms.InHintText = InHintText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultTextStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEditableTextStyle          InDefaultTextStyle                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultTextStyle(struct FEditableTextStyle& InDefaultTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultTextStyle");

	Params::US6UI_EditableRichText_SetDefaultTextStyle_Params Parms{};

	Parms.InDefaultTextStyle = InDefaultTextStyle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultFont");

	Params::US6UI_EditableRichText_SetDefaultFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultColorAndOpacity");

	Params::US6UI_EditableRichText_SetDefaultColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultCaretImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InCaretImage                                                     (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultCaretImage(const struct FSlateBrush& InCaretImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultCaretImage");

	Params::US6UI_EditableRichText_SetDefaultCaretImage_Params Parms{};

	Parms.InCaretImage = InCaretImage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultBackgroundImageSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBackgroundImageSelected                                        (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultBackgroundImageSelected(const struct FSlateBrush& InBackgroundImageSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultBackgroundImageSelected");

	Params::US6UI_EditableRichText_SetDefaultBackgroundImageSelected_Params Parms{};

	Parms.InBackgroundImageSelected = InBackgroundImageSelected;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultBackgroundImageComposing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBackgroundImageComposing                                       (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultBackgroundImageComposing(const struct FSlateBrush& InBackgroundImageComposing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultBackgroundImageComposing");

	Params::US6UI_EditableRichText_SetDefaultBackgroundImageComposing_Params Parms{};

	Parms.InBackgroundImageComposing = InBackgroundImageComposing;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SelectAllText
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::SelectAllText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SelectAllText");

	Params::US6UI_EditableRichText_SelectAllText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction S6UICommonWidgets.S6UI_EditableRichText.S6UI_OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::S6UI_OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "S6UI_OnEditableTextCommittedEvent__DelegateSignature");

	Params::US6UI_EditableRichText_S6UI_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction S6UICommonWidgets.S6UI_EditableRichText.S6UI_OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::S6UI_OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "S6UI_OnEditableTextChangedEvent__DelegateSignature");

	Params::US6UI_EditableRichText_S6UI_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICommonWidgets.S6UI_EditableRichText.Redo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::Redo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "Redo");

	Params::US6UI_EditableRichText_Redo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.PasteTextFromClipboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::PasteTextFromClipboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "PasteTextFromClipboard");

	Params::US6UI_EditableRichText_PasteTextFromClipboard_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.InsertTextAtCursor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::InsertTextAtCursor(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "InsertTextAtCursor");

	Params::US6UI_EditableRichText_InsertTextAtCursor_Params Parms{};

	Parms.InText = InText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText US6UI_EditableRichText::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "GetText");

	Params::US6UI_EditableRichText_GetText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.GetSelectedText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText US6UI_EditableRichText::GetSelectedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "GetSelectedText");

	Params::US6UI_EditableRichText_GetSelectedText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.GetPlainText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText US6UI_EditableRichText::GetPlainText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "GetPlainText");

	Params::US6UI_EditableRichText_GetPlainText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.GetDecoratorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class US6UI_EditableRichTextDecorator>DecoratorClass                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6UI_EditableRichTextDecorator*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_EditableRichTextDecorator* US6UI_EditableRichText::GetDecoratorByClass(TSubclassOf<class US6UI_EditableRichTextDecorator> DecoratorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "GetDecoratorByClass");

	Params::US6UI_EditableRichText_GetDecoratorByClass_Params Parms{};

	Parms.DecoratorClass = DecoratorClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.DeleteSelectedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::DeleteSelectedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "DeleteSelectedText");

	Params::US6UI_EditableRichText_DeleteSelectedText_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.CutSelectedTextToClipboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::CutSelectedTextToClipboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "CutSelectedTextToClipboard");

	Params::US6UI_EditableRichText_CutSelectedTextToClipboard_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.CopySelectedTextToClipboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::CopySelectedTextToClipboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "CopySelectedTextToClipboard");

	Params::US6UI_EditableRichText_CopySelectedTextToClipboard_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.ClearAllDefaultStyleOverrides
// (Final, Native, Public)
// Parameters:

void US6UI_EditableRichText::ClearAllDefaultStyleOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "ClearAllDefaultStyleOverrides");

	Params::US6UI_EditableRichText_ClearAllDefaultStyleOverrides_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.AnyTextSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_EditableRichText::AnyTextSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "AnyTextSelected");

	Params::US6UI_EditableRichText_AnyTextSelected_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class S6UICommonWidgets.S6UI_EditableRichTextDecorator
// (None)

class UClass* US6UI_EditableRichTextDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_EditableRichTextDecorator");

	return Clss;
}


// S6UI_EditableRichTextDecorator S6UICommonWidgets.Default__S6UI_EditableRichTextDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_EditableRichTextDecorator* US6UI_EditableRichTextDecorator::GetDefaultObj()
{
	static class US6UI_EditableRichTextDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_EditableRichTextDecorator*>(US6UI_EditableRichTextDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_EditableRichTextDecorator_Image
// (None)

class UClass* US6UI_EditableRichTextDecorator_Image::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_EditableRichTextDecorator_Image");

	return Clss;
}


// S6UI_EditableRichTextDecorator_Image S6UICommonWidgets.Default__S6UI_EditableRichTextDecorator_Image
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_EditableRichTextDecorator_Image* US6UI_EditableRichTextDecorator_Image::GetDefaultObj()
{
	static class US6UI_EditableRichTextDecorator_Image* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_EditableRichTextDecorator_Image*>(US6UI_EditableRichTextDecorator_Image::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_EditableRichTextDecorator_Style
// (None)

class UClass* US6UI_EditableRichTextDecorator_Style::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_EditableRichTextDecorator_Style");

	return Clss;
}


// S6UI_EditableRichTextDecorator_Style S6UICommonWidgets.Default__S6UI_EditableRichTextDecorator_Style
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_EditableRichTextDecorator_Style* US6UI_EditableRichTextDecorator_Style::GetDefaultObj()
{
	static class US6UI_EditableRichTextDecorator_Style* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_EditableRichTextDecorator_Style*>(US6UI_EditableRichTextDecorator_Style::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_GridPanel
// (None)

class UClass* US6UI_GridPanel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_GridPanel");

	return Clss;
}


// S6UI_GridPanel S6UICommonWidgets.Default__S6UI_GridPanel
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_GridPanel* US6UI_GridPanel::GetDefaultObj()
{
	static class US6UI_GridPanel* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_GridPanel*>(US6UI_GridPanel::StaticClass()->DefaultObject);

	return Default;
}


// Function S6UICommonWidgets.S6UI_GridPanel.ClearFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_GridPanel::ClearFill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_GridPanel", "ClearFill");

	Params::US6UI_GridPanel_ClearFill_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class S6UICommonWidgets.S6UI_OverlaySwitcherSlot
// (None)

class UClass* US6UI_OverlaySwitcherSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_OverlaySwitcherSlot");

	return Clss;
}


// S6UI_OverlaySwitcherSlot S6UICommonWidgets.Default__S6UI_OverlaySwitcherSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_OverlaySwitcherSlot* US6UI_OverlaySwitcherSlot::GetDefaultObj()
{
	static class US6UI_OverlaySwitcherSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_OverlaySwitcherSlot*>(US6UI_OverlaySwitcherSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_OverlaySwitcher
// (None)

class UClass* US6UI_OverlaySwitcher::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_OverlaySwitcher");

	return Clss;
}


// S6UI_OverlaySwitcher S6UICommonWidgets.Default__S6UI_OverlaySwitcher
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_OverlaySwitcher* US6UI_OverlaySwitcher::GetDefaultObj()
{
	static class US6UI_OverlaySwitcher* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_OverlaySwitcher*>(US6UI_OverlaySwitcher::StaticClass()->DefaultObject);

	return Default;
}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.SetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_OverlaySwitcher::SetActiveWidgetIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "SetActiveWidgetIndex");

	Params::US6UI_OverlaySwitcher_SetActiveWidgetIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.SetActiveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_OverlaySwitcher::SetActiveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "SetActiveWidget");

	Params::US6UI_OverlaySwitcher_SetActiveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 US6UI_OverlaySwitcher::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "GetActiveWidgetIndex");

	Params::US6UI_OverlaySwitcher_GetActiveWidgetIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* US6UI_OverlaySwitcher::GetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "GetActiveWidget");

	Params::US6UI_OverlaySwitcher_GetActiveWidget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.AddChildToOverlaySwitcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6UI_OverlaySwitcherSlot*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_OverlaySwitcherSlot* US6UI_OverlaySwitcher::AddChildToOverlaySwitcher(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "AddChildToOverlaySwitcher");

	Params::US6UI_OverlaySwitcher_AddChildToOverlaySwitcher_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class S6UICommonWidgets.S6UI_RichTextBlockDecorator_SoftImage
// (None)

class UClass* US6UI_RichTextBlockDecorator_SoftImage::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_RichTextBlockDecorator_SoftImage");

	return Clss;
}


// S6UI_RichTextBlockDecorator_SoftImage S6UICommonWidgets.Default__S6UI_RichTextBlockDecorator_SoftImage
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_RichTextBlockDecorator_SoftImage* US6UI_RichTextBlockDecorator_SoftImage::GetDefaultObj()
{
	static class US6UI_RichTextBlockDecorator_SoftImage* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_RichTextBlockDecorator_SoftImage*>(US6UI_RichTextBlockDecorator_SoftImage::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_RichTextBlockDecorator_Style
// (None)

class UClass* US6UI_RichTextBlockDecorator_Style::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_RichTextBlockDecorator_Style");

	return Clss;
}


// S6UI_RichTextBlockDecorator_Style S6UICommonWidgets.Default__S6UI_RichTextBlockDecorator_Style
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_RichTextBlockDecorator_Style* US6UI_RichTextBlockDecorator_Style::GetDefaultObj()
{
	static class US6UI_RichTextBlockDecorator_Style* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_RichTextBlockDecorator_Style*>(US6UI_RichTextBlockDecorator_Style::StaticClass()->DefaultObject);

	return Default;
}


// Class S6UICommonWidgets.S6UI_RichTextBlockDecorator_URL
// (None)

class UClass* US6UI_RichTextBlockDecorator_URL::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UI_RichTextBlockDecorator_URL");

	return Clss;
}


// S6UI_RichTextBlockDecorator_URL S6UICommonWidgets.Default__S6UI_RichTextBlockDecorator_URL
// (Public, ClassDefaultObject, ArchetypeObject)

class US6UI_RichTextBlockDecorator_URL* US6UI_RichTextBlockDecorator_URL::GetDefaultObj()
{
	static class US6UI_RichTextBlockDecorator_URL* Default = nullptr;

	if (!Default)
		Default = static_cast<US6UI_RichTextBlockDecorator_URL*>(US6UI_RichTextBlockDecorator_URL::StaticClass()->DefaultObject);

	return Default;
}

}


