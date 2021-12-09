#pragma once
#include "CoreMinimal.h"
#include "ELandscapeLayerBlendType.generated.h"

UENUM()
enum ELandscapeLayerBlendType {
    LB_WeightBlend,
    LB_AlphaBlend,
    LB_HeightBlend,
    LB_MAX UMETA(Hidden),
};

