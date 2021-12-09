#include "OculusMR_BoundaryMeshComponent.h"

UOculusMR_BoundaryMeshComponent::UOculusMR_BoundaryMeshComponent() {
    this->BoundaryType = EOculusMR_BoundaryType::BT_OuterBoundary;
    this->BottomZ = -1000.00f;
    this->TopZ = 1000.00f;
    this->CastingCameraActor = NULL;
}

