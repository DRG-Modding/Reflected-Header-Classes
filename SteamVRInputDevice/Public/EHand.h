#pragma once
#include "CoreMinimal.h"
#include "EHand.generated.h"

UENUM(BlueprintType)
enum class EHand : uint8 {
    VR_LeftHand,
    VR_RightHand,
    VR_MAX UMETA(Hidden),
};

