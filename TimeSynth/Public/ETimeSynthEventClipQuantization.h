#pragma once
#include "CoreMinimal.h"
#include "ETimeSynthEventClipQuantization.generated.h"

UENUM(BlueprintType)
enum class ETimeSynthEventClipQuantization : uint8 {
    Global,
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

