#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSpriteFacingMode.generated.h"

UENUM()
enum class ENiagaraSpriteFacingMode : uint8 {
    FaceCamera,
    FaceCameraPlane,
    CustomFacingVector,
    FaceCameraPosition,
    FaceCameraDistanceBlend,
};

