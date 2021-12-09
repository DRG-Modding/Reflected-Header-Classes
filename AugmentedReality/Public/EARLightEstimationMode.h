#pragma once
#include "CoreMinimal.h"
#include "EARLightEstimationMode.generated.h"

UENUM()
enum class EARLightEstimationMode : uint8 {
    None,
    AmbientLightEstimate,
    DirectionalLightEstimate,
};

