#include "PickaxePreviewActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

class UPickaxePart;

void APickaxePreviewActor::PreviewParts(EPickaxePartLocation PreviewLocation, UPickaxePart* PreviewPart) {
}

void APickaxePreviewActor::EquipParts() {
}

APickaxePreviewActor::APickaxePreviewActor() {
    this->TP_Root = CreateDefaultSubobject<USceneComponent>(TEXT("TP_RootComponent"));
    this->ItemID = NULL;
    this->EquippedMaterial = NULL;
}

