#pragma once
#include "CoreMinimal.h"
#include "EColorVisionDeficiency.generated.h"

UENUM()
enum class EColorVisionDeficiency : uint8 {
    NormalVision,
    Deuteranope,
    Protanope,
    Tritanope,
};

