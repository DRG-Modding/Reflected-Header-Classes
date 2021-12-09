#include "ObjectInfoComponent.h"

class UPrimitiveComponent;
class UDialogDataAsset;
class UActorContextWidget;
class UTexture2D;
class APlayerController;

UDialogDataAsset* UObjectInfoComponent::GetLookAtShout(const UPrimitiveComponent* TargetComponent) const {
    return NULL;
}

bool UObjectInfoComponent::GetIsPingableByLaserpointer(const UPrimitiveComponent* TargetComponent) const {
    return false;
}

FText UObjectInfoComponent::GetInGameName(const UPrimitiveComponent* TargetComponent) const {
    return FText::GetEmpty();
}

UTexture2D* UObjectInfoComponent::GetInGameIcon(const UPrimitiveComponent* TargetComponent) const {
    return NULL;
}

FText UObjectInfoComponent::GetInGameDescription(const UPrimitiveComponent* TargetComponent) const {
    return FText::GetEmpty();
}

UActorContextWidget* UObjectInfoComponent::GetContextWidget(APlayerController* InPlayerController) {
    return NULL;
}

UObjectInfoComponent::UObjectInfoComponent() {
}

