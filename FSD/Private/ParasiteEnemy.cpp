#include "ParasiteEnemy.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "OutlineComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent

class UHealthComponentBase;

void AParasiteEnemy::OnSelfDeath(UHealthComponentBase* aHealthComponent) {
}

AParasiteEnemy::AParasiteEnemy() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Tentacles1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tentacles1"));
    this->Tentacles2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Tentacles2"));
    this->outline = CreateDefaultSubobject<UOutlineComponent>(TEXT("outline"));
    this->deathParticles = NULL;
    this->deathSound = NULL;
}

