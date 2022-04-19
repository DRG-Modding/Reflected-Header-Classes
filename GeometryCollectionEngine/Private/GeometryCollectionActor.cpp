#include "GeometryCollectionActor.h"
#include "GeometryCollectionComponent.h"

bool AGeometryCollectionActor::RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const {
    return false;
}

AGeometryCollectionActor::AGeometryCollectionActor() {
    this->GeometryCollectionComponent = CreateDefaultSubobject<UGeometryCollectionComponent>(TEXT("GeometryCollectionComponent0"));
    this->GeometryCollectionDebugDrawComponent = NULL;
}

