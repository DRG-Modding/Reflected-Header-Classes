#pragma once
#include "CoreMinimal.h"
#include "EDynamicBoxType.generated.h"

UENUM()
enum class EDynamicBoxType : uint8 {
    Horizontal,
    Vertical,
    Wrap,
    VerticalWrap,
    Radial,
    Overlay,
};

