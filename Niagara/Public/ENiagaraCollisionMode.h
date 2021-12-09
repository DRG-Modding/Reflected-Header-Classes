#pragma once
#include "CoreMinimal.h"
#include "ENiagaraCollisionMode.generated.h"

UENUM()
enum class ENiagaraCollisionMode {
    None,
    SceneGeometry,
    DepthBuffer,
    DistanceField,
};

