#pragma once
#include "CoreMinimal.h"
#include "ETrackedDeviceType.generated.h"

UENUM(BlueprintType)
enum class ETrackedDeviceType : uint8 {
    None,
    HMD,
    LTouch,
    RTouch,
    Touch,
    DeviceObjectZero,
    All,
};

