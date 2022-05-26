#pragma once
#include "CoreMinimal.h"
#include "ESkeletalSummaryDataType.generated.h"

UENUM(BlueprintType)
enum class ESkeletalSummaryDataType : uint8 {
    VR_SummaryType_FromAnimation,
    VR_SummaryType_FromDevice,
    VR_SummaryType_MAX UMETA(Hidden),
};

