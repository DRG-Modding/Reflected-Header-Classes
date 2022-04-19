#include "SpawnResourceGenerationItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

ASpawnResourceGenerationItem::ASpawnResourceGenerationItem() {
    this->Resource = NULL;
    this->BaseAmount = 0.00f;
    this->Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Root"));
}

