#pragma once
#include "CoreMinimal.h"
#include "EFFTPeakInterpolationMethod.generated.h"

UENUM()
enum class EFFTPeakInterpolationMethod : uint8 {
    NearestNeighbor,
    Linear,
    Quadratic,
};

