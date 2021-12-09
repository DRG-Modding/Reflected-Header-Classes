#pragma once
#include "CoreMinimal.h"
#include "EFourPlayerSplitScreenType.generated.h"

UENUM()
enum class EFourPlayerSplitScreenType : uint8 {
    Grid,
    Vertical,
    Horizontal,
};

