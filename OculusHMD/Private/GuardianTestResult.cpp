#include "GuardianTestResult.h"

FGuardianTestResult::FGuardianTestResult() {
    this->IsTriggering = false;
    this->DeviceType = ETrackedDeviceType::None;
    this->ClosestDistance = 0.00f;
}

