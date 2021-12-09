#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_DepthQuality.generated.h"

UENUM()
enum class EOculusMR_DepthQuality : uint8 {
    DQ_Low,
    DQ_Medium,
    DQ_High,
    DQ_MAX UMETA(Hidden),
};

