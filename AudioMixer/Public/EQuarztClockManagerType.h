#pragma once
#include "CoreMinimal.h"
#include "EQuarztClockManagerType.generated.h"

UENUM()
enum class EQuarztClockManagerType {
    AudioEngine,
    QuartzSubsystem,
    Count,
};

