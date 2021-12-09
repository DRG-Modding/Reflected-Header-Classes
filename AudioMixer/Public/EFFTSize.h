#pragma once
#include "CoreMinimal.h"
#include "EFFTSize.generated.h"

UENUM()
enum class EFFTSize : uint8 {
    DefaultSize,
    Min,
    Small,
    Medium,
    Large,
    Max,
};

