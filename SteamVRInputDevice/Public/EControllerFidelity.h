#pragma once
#include "CoreMinimal.h"
#include "EControllerFidelity.generated.h"

UENUM(BlueprintType)
enum class EControllerFidelity : uint8 {
    VR_ControllerFidelity_Estimated,
    VR_ControllerFidelity_Full,
    VR_ControllerFidelity_Partial,
    VR_ControllerFidelity_MAX UMETA(Hidden),
};

