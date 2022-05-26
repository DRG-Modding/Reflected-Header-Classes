#pragma once
#include "CoreMinimal.h"
#include "ESteamVRHand.generated.h"

UENUM(BlueprintType)
enum class ESteamVRHand : uint8 {
    VR_Left,
    VR_Right,
    VR_MAX UMETA(Hidden),
};

