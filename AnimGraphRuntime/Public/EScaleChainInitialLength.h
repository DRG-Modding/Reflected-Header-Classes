#pragma once
#include "CoreMinimal.h"
#include "EScaleChainInitialLength.generated.h"

UENUM()
enum class EScaleChainInitialLength : uint8 {
    FixedDefaultLengthValue,
    Distance,
    ChainLength,
};

