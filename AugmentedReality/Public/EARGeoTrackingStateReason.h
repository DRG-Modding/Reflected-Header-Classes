#pragma once
#include "CoreMinimal.h"
#include "EARGeoTrackingStateReason.generated.h"

UENUM()
enum class EARGeoTrackingStateReason : uint8 {
    None,
    NotAvailableAtLocation,
    NeedLocationPermissions,
    DevicePointedTooLow,
    WorldTrackingUnstable,
    WaitingForLocation,
    GeoDataNotLoaded,
    VisualLocalizationFailed,
    WaitingForAvailabilityCheck,
};

