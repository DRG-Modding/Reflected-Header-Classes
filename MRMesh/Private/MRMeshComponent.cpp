#include "MRMeshComponent.h"

bool UMRMeshComponent::IsConnected() const {
    return false;
}

void UMRMeshComponent::ForceNavMeshUpdate() {
}

void UMRMeshComponent::Clear() {
}

UMRMeshComponent::UMRMeshComponent() {
    this->Material = NULL;
    this->bCreateMeshProxySections = true;
    this->bUpdateNavMeshOnMeshUpdate = true;
    this->bNeverCreateCollisionMesh = false;
    this->CachedBodySetup = NULL;
}

