#include "PathfinderVehicle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "DeepPathfinderMovement.h"
#include "HealthComponent.h"

APathfinderVehicle::APathfinderVehicle() {
    this->PathfinderMovement = CreateDefaultSubobject<UDeepPathfinderMovement>(TEXT("PathfinderMovement"));
    this->Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));
    this->Speed = 10.00f;
}

