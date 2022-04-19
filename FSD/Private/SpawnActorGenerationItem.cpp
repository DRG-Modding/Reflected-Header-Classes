#include "SpawnActorGenerationItem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent

ASpawnActorGenerationItem::ASpawnActorGenerationItem() {
    this->ActorToSpawn = NULL;
    this->Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Root"));
}

