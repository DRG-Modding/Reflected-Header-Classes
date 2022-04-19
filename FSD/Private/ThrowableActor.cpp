#include "ThrowableActor.h"
#include "Net/UnrealNetwork.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ProjectileMovementComponent -FallbackName=ProjectileMovementComponent



void AThrowableActor::OnRep_IsMoving() {
}

void AThrowableActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AThrowableActor, IsMoving);
}

AThrowableActor::AThrowableActor() {
    this->Movement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));
    this->IsMoving = true;
    this->IgnoreFellOutOfWorld = false;
    this->IgnoreOwnersCollision = true;
}

