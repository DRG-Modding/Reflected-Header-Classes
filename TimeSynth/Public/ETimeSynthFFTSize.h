#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthFFTSize.generated.h"

UENUM(BlueprintType)
enum class ETimeSynthFFTSize : uint8 {
    Min_64,
    Small_256,
    Medium_512,
    Large_1024,
};

