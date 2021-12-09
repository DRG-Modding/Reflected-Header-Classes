#pragma once
#include "CoreMinimal.h"
#include "CurveInterpolationType.generated.h"

UENUM()
enum class CurveInterpolationType : uint8 {
    AUTOINTERP,
    LINEAR,
    CONSTANT,
};

