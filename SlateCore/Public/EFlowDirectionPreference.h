#pragma once
#include "CoreMinimal.h"
#include "EFlowDirectionPreference.generated.h"

UENUM()
enum class EFlowDirectionPreference : uint8 {
    Inherit,
    Culture,
    LeftToRight,
    RightToLeft,
};

