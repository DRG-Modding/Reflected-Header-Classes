#pragma once
#include "CoreMinimal.h"
#include "ELandscapeBlendMode.generated.h"

UENUM()
enum ELandscapeBlendMode {
    LSBM_AdditiveBlend,
    LSBM_AlphaBlend,
    LSBM_MAX UMETA(Hidden),
};

