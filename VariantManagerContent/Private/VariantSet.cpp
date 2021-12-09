#include "VariantSet.h"

class UVariant;

void UVariantSet::SetDisplayText(const FText& NewDisplayText) {
}

UVariant* UVariantSet::GetVariantByName(const FString& VariantName) {
    return NULL;
}

UVariant* UVariantSet::GetVariant(int32 VariantIndex) {
    return NULL;
}

int32 UVariantSet::GetNumVariants() {
    return 0;
}

FText UVariantSet::GetDisplayText() const {
    return FText::GetEmpty();
}

UVariantSet::UVariantSet() {
    this->bExpanded = true;
}

