#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_ClippingReference.generated.h"

UENUM(BlueprintType)
enum class EOculusMR_ClippingReference : uint8 {
    CR_TrackingReference,
    CR_Head,
    CR_MAX UMETA(Hidden),
};

