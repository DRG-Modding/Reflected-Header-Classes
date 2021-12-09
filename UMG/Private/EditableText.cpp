#include "EditableText.h"

void UEditableText::SetText(FText InText) {
}

void UEditableText::SetJustification(TEnumAsByte<ETextJustify::Type> InJustification) {
}

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly) {
}

void UEditableText::SetIsPassword(bool InbIsPassword) {
}

void UEditableText::SetHintText(FText InHintText) {
}

FText UEditableText::GetText() const {
    return FText::GetEmpty();
}

UEditableText::UEditableText() {
    this->Style = NULL;
    this->BackgroundImageSelected = NULL;
    this->BackgroundImageComposing = NULL;
    this->CaretImage = NULL;
    this->IsReadOnly = false;
    this->IsPassword = false;
    this->MinimumDesiredWidth = 0.00f;
    this->IsCaretMovedWhenGainFocus = true;
    this->SelectAllTextWhenFocused = false;
    this->RevertTextOnEscape = false;
    this->ClearKeyboardFocusOnCommit = true;
    this->SelectAllTextOnCommit = false;
    this->AllowContextMenu = true;
    this->KeyboardType = EVirtualKeyboardType::Default;
    this->VirtualKeyboardTrigger = EVirtualKeyboardTrigger::OnFocusByPointer;
    this->VirtualKeyboardDismissAction = EVirtualKeyboardDismissAction::TextChangeOnDismiss;
    this->Justification = ETextJustify::Left;
}

