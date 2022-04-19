#include "TransformGizmo.h"

UTransformGizmo::UTransformGizmo() {
    this->ActiveTarget = NULL;
    this->bSnapToWorldGrid = false;
    this->bGridSizeIsExplicit = false;
    this->bRotationGridSizeIsExplicit = false;
    this->bSnapToWorldRotGrid = false;
    this->bUseContextCoordinateSystem = true;
    this->CurrentCoordinateSystem = EToolContextCoordinateSystem::Local;
    this->CameraAxisSource = NULL;
    this->AxisXSource = NULL;
    this->AxisYSource = NULL;
    this->AxisZSource = NULL;
    this->UnitAxisXSource = NULL;
    this->UnitAxisYSource = NULL;
    this->UnitAxisZSource = NULL;
    this->StateTarget = NULL;
    this->ScaledTransformSource = NULL;
}

