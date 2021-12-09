#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthFilterType.generated.h"

UENUM(BlueprintType)
enum class ETimeSynthFilterType : uint8 {
    LowPass,
    HighPass,
    BandPass,
    BandStop,
    Count,
};

