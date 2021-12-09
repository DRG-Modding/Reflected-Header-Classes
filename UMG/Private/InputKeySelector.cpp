#include "InputKeySelector.h"

void UInputKeySelector::SetTextBlockVisibility(const ESlateVisibility InVisibility) {
}

void UInputKeySelector::SetSelectedKey(const FInputChord& InSelectedKey) {
}

void UInputKeySelector::SetNoKeySpecifiedText(FText InNoKeySpecifiedText) {
}

void UInputKeySelector::SetKeySelectionText(FText InKeySelectionText) {
}

void UInputKeySelector::SetEscapeKeys(const TArray<FKey>& InKeys) {
}

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys) {
}

void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys) {
}

bool UInputKeySelector::GetIsSelectingKey() const {
    return false;
}

UInputKeySelector::UInputKeySelector() {
    this->KeySelectionText = INVTEXT("...");
    this->NoKeySpecifiedText = INVTEXT("Empty");
    this->bAllowModifierKeys = true;
    this->bAllowGamepadKeys = false;
    this->EscapeKeys.AddDefaulted(1);
}

