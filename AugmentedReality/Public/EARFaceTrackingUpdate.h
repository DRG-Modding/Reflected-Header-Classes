#pragma once
#include "CoreMinimal.h"
#include "EARFaceTrackingUpdate.generated.h"

UENUM()
enum class EARFaceTrackingUpdate : uint8 {
    CurvesAndGeo,
    CurvesOnly,
};

