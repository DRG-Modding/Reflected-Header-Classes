#include "OculusMR_State.h"

UOculusMR_State::UOculusMR_State() {
    this->TrackingReferenceComponent = NULL;
    this->ScalingFactor = 1.00f;
    this->ChangeCameraStateRequested = false;
    this->BindToTrackedCameraIndexRequested = false;
}

