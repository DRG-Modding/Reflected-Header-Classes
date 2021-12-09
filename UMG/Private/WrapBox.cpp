#include "WrapBox.h"

class UWrapBoxSlot;
class UWidget;

void UWrapBox::SetInnerSlotPadding(FVector2D InPadding) {
}

UWrapBoxSlot* UWrapBox::AddChildToWrapBox(UWidget* Content) {
    return NULL;
}

UWrapBox::UWrapBox() {
    this->WrapWidth = 500.00f;
    this->bExplicitWrapWidth = false;
}

