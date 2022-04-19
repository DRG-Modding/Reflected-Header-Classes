#pragma once
#include "CoreMinimal.h"
#include "EInitialOscillatorOffset.generated.h"

UENUM()
enum EInitialOscillatorOffset {
    EOO_OffsetRandom,
    EOO_OffsetZero,
    EOO_MAX UMETA(Hidden),
};

