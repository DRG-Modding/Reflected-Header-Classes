#include "SizeBoxSlot.h"

void USizeBoxSlot::SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment) {
}

void USizeBoxSlot::SetPadding(FMargin InPadding) {
}

void USizeBoxSlot::SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment) {
}

USizeBoxSlot::USizeBoxSlot() {
    this->HorizontalAlignment = HAlign_Fill;
    this->VerticalAlignment = VAlign_Fill;
}

