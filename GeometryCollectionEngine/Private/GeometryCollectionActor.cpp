#include "GeometryCollectionActor.h"

bool AGeometryCollectionActor::RaycastSingle(FVector Start, FVector End, FHitResult& OutHit) const {
    return false;
}

AGeometryCollectionActor::AGeometryCollectionActor() {
    this->GeometryCollectionDebugDrawComponent = NULL;
}

