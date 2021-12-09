#include "AxisPositionGizmo.h"

UAxisPositionGizmo::UAxisPositionGizmo() {
    this->bEnableSignedAxis = false;
    this->bInInteraction = false;
    this->InteractionStartParameter = 0.00f;
    this->InteractionCurParameter = 0.00f;
    this->ParameterSign = 1.00f;
}

