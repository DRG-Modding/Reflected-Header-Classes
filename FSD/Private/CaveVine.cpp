#include "CaveVine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SplineMeshComponent -FallbackName=SplineMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent



ACaveVine::ACaveVine() {
    this->GroundCollisionChannel = ECC_WorldDynamic;
    this->IdleSwingSpeed = 25.00f;
    this->ChaseSpeed = 100.00f;
    this->MaxReach = 100.00f;
    this->GroundOffset = 150.00f;
    this->NoiseRadius = 40.00f;
    this->NoiseSpeed = 0.20f;
    this->SplineMeshComponent = CreateDefaultSubobject<USplineMeshComponent>(TEXT("SplineMeshComponent"));
    this->VineHead = CreateDefaultSubobject<USceneComponent>(TEXT("VineHead"));
}

