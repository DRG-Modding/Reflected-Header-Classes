#pragma once
#include "CoreMinimal.h"
#include "EMobileCSMQuality.generated.h"

UENUM()
enum class EMobileCSMQuality : uint8 {
    NoFiltering,
    PCF_1x1,
    PCF_2x2,
    PCF_3x3,
};

