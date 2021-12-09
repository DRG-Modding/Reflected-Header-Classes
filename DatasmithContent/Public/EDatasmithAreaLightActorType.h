#pragma once
#include "CoreMinimal.h"
#include "EDatasmithAreaLightActorType.generated.h"

UENUM(BlueprintType)
enum class EDatasmithAreaLightActorType : uint8 {
    Point,
    Spot,
    Rect,
};

