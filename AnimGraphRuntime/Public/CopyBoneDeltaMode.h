#pragma once
#include "CoreMinimal.h"
#include "CopyBoneDeltaMode.generated.h"

UENUM()
enum class CopyBoneDeltaMode : uint8 {
    Accumulate,
    Copy,
};

