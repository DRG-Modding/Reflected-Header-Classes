#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthEnvelopeFollowerPeakMode.generated.h"

UENUM(BlueprintType)
enum class ETimeSynthEnvelopeFollowerPeakMode : uint8 {
    MeanSquared,
    RootMeanSquared,
    Peak,
    Count,
};

