#include "CameraRig_Rail.h"

class USplineComponent;

USplineComponent* ACameraRig_Rail::GetRailSplineComponent() {
    return NULL;
}

ACameraRig_Rail::ACameraRig_Rail() {
    this->CurrentPositionOnRail = 0.00f;
    this->bLockOrientationToRail = false;
}

