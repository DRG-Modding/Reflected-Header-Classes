#pragma once
#include "CoreMinimal.h"
#include "EARPlaneDetectionMode.generated.h"

UENUM()
enum class EARPlaneDetectionMode : uint8 {
    None,
    HorizontalPlaneDetection,
    VerticalPlaneDetection,
};

