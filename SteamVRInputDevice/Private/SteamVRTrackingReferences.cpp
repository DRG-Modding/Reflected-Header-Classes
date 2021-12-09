#include "SteamVRTrackingReferences.h"

class UStaticMesh;

bool USteamVRTrackingReferences::ShowTrackingReferences(UStaticMesh* TrackingReferenceMesh) {
    return false;
}

void USteamVRTrackingReferences::HideTrackingReferences() {
}

USteamVRTrackingReferences::USteamVRTrackingReferences() {
    this->ActiveDevicePollFrequency = 1.00f;
}

