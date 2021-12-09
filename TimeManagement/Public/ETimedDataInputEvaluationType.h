#pragma once
#include "CoreMinimal.h"
#include "ETimedDataInputEvaluationType.generated.h"

UENUM()
enum class ETimedDataInputEvaluationType {
    None,
    Timecode,
    PlatformTime,
};

