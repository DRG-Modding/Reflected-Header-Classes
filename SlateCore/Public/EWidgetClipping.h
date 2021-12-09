#pragma once
#include "CoreMinimal.h"
#include "EWidgetClipping.generated.h"

UENUM()
enum class EWidgetClipping : uint8 {
    Inherit,
    ClipToBounds,
    ClipToBoundsWithoutIntersecting,
    ClipToBoundsAlways,
    OnDemand,
};

