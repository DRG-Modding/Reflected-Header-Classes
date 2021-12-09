#pragma once
#include "CoreMinimal.h"
#include "ESoundwaveSampleRateSettings.generated.h"

UENUM()
enum class ESoundwaveSampleRateSettings {
    Max,
    High,
    Medium,
    Low,
    Min,
    MatchDevice,
};

