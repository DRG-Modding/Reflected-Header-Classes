#pragma once
#include "CoreMinimal.h"
#include "EHandSkeleton.generated.h"

UENUM(BlueprintType)
enum class EHandSkeleton : uint8 {
    VR_SteamVRHandSkeleton,
    VR_UE4HandSkeleton,
    VR_MAX UMETA(Hidden),
};

