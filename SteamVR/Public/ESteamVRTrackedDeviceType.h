#pragma once
#include "CoreMinimal.h"
#include "ESteamVRTrackedDeviceType.generated.h"

UENUM(BlueprintType)
enum class ESteamVRTrackedDeviceType : uint8 {
    Controller,
    TrackingReference,
    Other,
    Invalid,
};

