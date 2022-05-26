#include "Variant.h"

class UTexture2D;
class UObject;
class UVariantSet;
class ULevelVariantSets;
class AActor;
class UVariant;

void UVariant::SwitchOn() {
}

void UVariant::SetThumbnailFromTexture(UTexture2D* NewThumbnail) {
}

void UVariant::SetThumbnailFromFile(const FString& FilePath) {
}

void UVariant::SetThumbnailFromEditorViewport() {
}

void UVariant::SetThumbnailFromCamera(UObject* WorldContextObject, const FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma) {
}

void UVariant::SetDisplayText(const FText& NewDisplayText) {
}

void UVariant::SetDependency(int32 Index, FVariantDependency& Dependency) {
}

bool UVariant::IsActive() {
    return false;
}

UTexture2D* UVariant::GetThumbnail() {
    return NULL;
}

UVariantSet* UVariant::GetParent() {
    return NULL;
}

int32 UVariant::GetNumDependencies() {
    return 0;
}

int32 UVariant::GetNumActors() {
    return 0;
}

FText UVariant::GetDisplayText() const {
    return FText::GetEmpty();
}

TArray<UVariant*> UVariant::GetDependents(ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies) {
    return TArray<UVariant*>();
}

FVariantDependency UVariant::GetDependency(int32 Index) {
    return FVariantDependency{};
}

AActor* UVariant::GetActor(int32 ActorIndex) {
    return NULL;
}

void UVariant::DeleteDependency(int32 Index) {
}

int32 UVariant::AddDependency(FVariantDependency& Dependency) {
    return 0;
}

UVariant::UVariant() {
    this->Thumbnail = NULL;
}

