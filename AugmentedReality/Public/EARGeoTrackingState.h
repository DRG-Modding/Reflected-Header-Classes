#pragma once
#include "CoreMinimal.h"
#include "EARGeoTrackingState.generated.h"

UENUM()
enum class EARGeoTrackingState : uint8 {
    Initializing,
    Localized,
    Localizing,
    NotAvailable,
};

