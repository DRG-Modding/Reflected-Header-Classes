#pragma once
#include "CoreMinimal.h"
#include "EFoliageScaling.generated.h"

UENUM()
enum class EFoliageScaling : uint8 {
    Uniform,
    Free,
    LockXY,
    LockXZ,
    LockYZ,
};

