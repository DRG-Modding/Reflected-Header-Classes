#pragma once
#include "CoreMinimal.h"
#include "EAREnvironmentCaptureProbeType.generated.h"

UENUM()
enum class EAREnvironmentCaptureProbeType : uint8 {
    None,
    Manual,
    Automatic,
};

