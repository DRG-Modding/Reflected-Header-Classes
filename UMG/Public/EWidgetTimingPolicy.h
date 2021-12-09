#pragma once
#include "CoreMinimal.h"
#include "EWidgetTimingPolicy.generated.h"

UENUM()
enum class EWidgetTimingPolicy : uint8 {
    RealTime,
    GameTime,
};

