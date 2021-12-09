#pragma once
#include "CoreMinimal.h"
#include "EDatasmithAreaLightActorShape.generated.h"

UENUM(BlueprintType)
enum class EDatasmithAreaLightActorShape : uint8 {
    Rectangle,
    Disc,
    Sphere,
    Cylinder,
    None,
};

