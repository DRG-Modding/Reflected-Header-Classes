#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthEventQuantization.generated.h"

UENUM(BlueprintType)
enum class ETimeSynthEventQuantization : uint8 {
    None,
    Bars8,
    Bars4,
    Bars2,
    Bar,
    HalfNote,
    HalfNoteTriplet,
    QuarterNote,
    QuarterNoteTriplet,
    EighthNote,
    EighthNoteTriplet,
    SixteenthNote,
    SixteenthNoteTriplet,
    ThirtySecondNote,
    Count,
};

