#include "GuntowerWeakPoint.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "EnemyHealthComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "WeakpointGlowComponent.h"

class UHealthComponentBase;


void AGuntowerWeakPoint::OnDeath(UHealthComponentBase* HealthComponent) {
}

void AGuntowerWeakPoint::DamageParent(float ammount) {
}

AGuntowerWeakPoint::AGuntowerWeakPoint() {
    this->Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Health = CreateDefaultSubobject<UEnemyHealthComponent>(TEXT("Health"));
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
    this->HitGlow = CreateDefaultSubobject<UWeakpointGlowComponent>(TEXT("WeakpointGlow"));
    this->DamageToParent = NULL;
    this->deathParticles = NULL;
    this->deathSound = NULL;
}

