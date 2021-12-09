#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthBeatDivision.generated.h"

UENUM(BlueprintType)
enum class ETimeSynthBeatDivision : uint8 {
    One,
    Two,
    Four,
    Eight,
    Sixteen,
    Count,
};

