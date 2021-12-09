#include "CameraRig_Crane.h"

ACameraRig_Crane::ACameraRig_Crane() {
    this->CranePitch = 0.00f;
    this->CraneYaw = 0.00f;
    this->CraneArmLength = 500.00f;
    this->bLockMountPitch = false;
    this->bLockMountYaw = false;
}

