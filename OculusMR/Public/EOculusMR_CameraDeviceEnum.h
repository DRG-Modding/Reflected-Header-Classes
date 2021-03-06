#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_CameraDeviceEnum.generated.h"

UENUM(BlueprintType)
enum class EOculusMR_CameraDeviceEnum : uint8 {
    CD_None,
    CD_WebCamera0,
    CD_WebCamera1,
    CD_MAX UMETA(Hidden),
};

