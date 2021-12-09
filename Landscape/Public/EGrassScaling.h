#pragma once
#include "CoreMinimal.h"
#include "EGrassScaling.generated.h"

UENUM()
enum class EGrassScaling : uint8 {
    Uniform,
    Free,
    LockXY,
};

