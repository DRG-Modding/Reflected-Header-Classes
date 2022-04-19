#pragma once
#include "CoreMinimal.h"
#include "EARCaptureType.generated.h"

UENUM()
enum class EARCaptureType : uint8 {
    Camera,
    QRCode,
    SpatialMapping,
    SceneUnderstanding,
    HandMesh,
};

