#pragma once
#include "CoreMinimal.h"
#include "EARFaceTrackingDirection.generated.h"

UENUM()
enum class EARFaceTrackingDirection : uint8 {
    FaceRelative,
    FaceMirrored,
};

