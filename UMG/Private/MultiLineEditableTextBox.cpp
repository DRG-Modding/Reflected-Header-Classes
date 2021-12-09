#include "MultiLineEditableTextBox.h"

void UMultiLineEditableTextBox::SetTextStyle(const FTextBlockStyle& InTextStyle) {
}

void UMultiLineEditableTextBox::SetText(FText InText) {
}

void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly) {
}

void UMultiLineEditableTextBox::SetHintText(FText InHintText) {
}

void UMultiLineEditableTextBox::SetError(FText InError) {
}

FText UMultiLineEditableTextBox::GetText() const {
    return FText::GetEmpty();
}

FText UMultiLineEditableTextBox::GetHintText() const {
    return FText::GetEmpty();
}

UMultiLineEditableTextBox::UMultiLineEditableTextBox() {
    this->bIsReadOnly = false;
    this->AllowContextMenu = true;
    this->VirtualKeyboardDismissAction = EVirtualKeyboardDismissAction::TextChangeOnDismiss;
    this->Style = NULL;
}

