#pragma once
#include "CoreMinimal.h"
#include "ERBFNormalizeMethod.generated.h"

UENUM()
enum class ERBFNormalizeMethod : uint8 {
    OnlyNormalizeAboveOne,
    AlwaysNormalize,
    NormalizeWithinMedian,
    NoNormalization,
};

