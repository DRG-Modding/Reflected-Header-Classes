#include "TrackedCamera.h"

FTrackedCamera::FTrackedCamera() {
    this->Index = 0;
    this->FieldOfView = 0.00f;
    this->SizeX = 0;
    this->SizeY = 0;
    this->AttachedTrackedDevice = ETrackedDeviceType::None;
}

