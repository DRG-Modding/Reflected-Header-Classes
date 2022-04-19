#pragma once
#include "CoreMinimal.h"
#include "EXRDeviceConnectionResult.generated.h"

UENUM()
namespace EXRDeviceConnectionResult {
    enum Type {
        NoTrackingSystem,
        FeatureNotSupported,
        NoValidViewport,
        MiscFailure,
        Success,
    };
}

