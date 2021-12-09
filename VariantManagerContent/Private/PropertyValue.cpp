#include "PropertyValue.h"

bool UPropertyValue::HasRecordedData() const {
    return false;
}

FText UPropertyValue::GetPropertyTooltip() const {
    return FText::GetEmpty();
}

FString UPropertyValue::GetFullDisplayString() const {
    return TEXT("");
}

UPropertyValue::UPropertyValue() {
    this->bHasRecordedData = false;
    this->LeafPropertyClass = NULL;
    this->PropCategory = EPropertyValueCategory::Undefined;
}

