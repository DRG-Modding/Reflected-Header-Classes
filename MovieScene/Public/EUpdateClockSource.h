#pragma once
#include "CoreMinimal.h"
#include "EUpdateClockSource.generated.h"

UENUM()
enum class EUpdateClockSource : uint8 {
    Tick,
    Platform,
    Audio,
    RelativeTimecode,
    Timecode,
    Custom,
};

