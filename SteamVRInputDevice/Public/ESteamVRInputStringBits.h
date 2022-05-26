#pragma once
#include "CoreMinimal.h"
#include "ESteamVRInputStringBits.generated.h"

UENUM(BlueprintType)
enum class ESteamVRInputStringBits : uint8 {
    VR_InputString_Hand,
    VR_InputString_ControllerType,
    VR_InputString_InputSource,
    VR_InputString_All,
    VR_InputString_MAX UMETA(Hidden),
};

