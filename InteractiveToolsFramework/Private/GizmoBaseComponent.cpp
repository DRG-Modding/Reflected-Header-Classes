#include "GizmoBaseComponent.h"

void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn) {
}

void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn) {
}

UGizmoBaseComponent::UGizmoBaseComponent() {
    this->HoverSizeMultiplier = 2.00f;
    this->PixelHitDistanceThreshold = 7.00f;
}

