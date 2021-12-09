#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_BoundaryType.generated.h"

UENUM(BlueprintType)
enum class EOculusMR_BoundaryType : uint8 {
    BT_OuterBoundary,
    BT_PlayArea,
    BT_MAX UMETA(Hidden),
};

