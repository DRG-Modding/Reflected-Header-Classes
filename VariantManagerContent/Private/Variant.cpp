#include "Variant.h"

class UTexture2D;
class AActor;

void UVariant::SwitchOn() {
}

void UVariant::SetDisplayText(const FText& NewDisplayText) {
}

bool UVariant::IsActive() {
    return false;
}

UTexture2D* UVariant::GetThumbnail() {
    return NULL;
}

int32 UVariant::GetNumActors() {
    return 0;
}

FText UVariant::GetDisplayText() const {
    return FText::GetEmpty();
}

AActor* UVariant::GetActor(int32 ActorIndex) {
    return NULL;
}

UVariant::UVariant() {
    this->Thumbnail = NULL;
}

