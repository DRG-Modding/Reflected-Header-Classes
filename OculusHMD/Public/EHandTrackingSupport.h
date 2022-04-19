#pragma once
#include "CoreMinimal.h"
#include "EHandTrackingSupport.generated.h"

UENUM()
enum class EHandTrackingSupport : uint8 {
    ControllersOnly,
    ControllersAndHands,
    HandsOnly,
};

