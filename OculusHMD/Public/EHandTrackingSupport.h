#pragma once
#include "CoreMinimal.h"
#include "EHandTrackingSupport.generated.h"

UENUM(BlueprintType)
enum class EHandTrackingSupport : uint8 {
    ControllersOnly,
    ControllersAndHands,
    HandsOnly,
};

