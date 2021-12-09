#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_VirtualGreenScreenType.generated.h"

UENUM(BlueprintType)
enum class EOculusMR_VirtualGreenScreenType : uint8 {
    VGS_Off,
    VGS_OuterBoundary,
    VGS_PlayArea,
    VGS_MAX UMETA(Hidden),
};

