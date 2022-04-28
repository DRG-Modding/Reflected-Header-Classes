#include "VariantSet.h"

class UTexture2D;
class UObject;
class UVariant;
class ULevelVariantSets;

void UVariantSet::SetThumbnailFromTexture(UTexture2D* NewThumbnail) {
}

void UVariantSet::SetThumbnailFromFile(const FString& FilePath) {
}

void UVariantSet::SetThumbnailFromEditorViewport() {
}

void UVariantSet::SetThumbnailFromCamera(UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma) {
}

void UVariantSet::SetDisplayText(const FText& NewDisplayText) {
}

UVariant* UVariantSet::GetVariantByName(const FString& VariantName) {
    return NULL;
}

UVariant* UVariantSet::GetVariant(int32 VariantIndex) {
    return NULL;
}

UTexture2D* UVariantSet::GetThumbnail() {
    return NULL;
}

ULevelVariantSets* UVariantSet::GetParent() {
    return NULL;
}

int32 UVariantSet::GetNumVariants() const {
    return 0;
}

FText UVariantSet::GetDisplayText() const {
    return FText::GetEmpty();
}

UVariantSet::UVariantSet() {
    this->bExpanded = true;
    this->Thumbnail = NULL;
}

