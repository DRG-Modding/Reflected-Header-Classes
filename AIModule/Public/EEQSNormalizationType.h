#pragma once
#include "CoreMinimal.h"
#include "EEQSNormalizationType.generated.h"

UENUM()
enum class EEQSNormalizationType : uint8 {
    Absolute,
    RelativeToScores,
};

