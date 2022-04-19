#include "FlameWallSegment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SphereComponent -FallbackName=SphereComponent

AFlameWallSegment::AFlameWallSegment() {
    this->CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
}

