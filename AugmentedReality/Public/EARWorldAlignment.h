#pragma once
#include "CoreMinimal.h"
#include "EARWorldAlignment.generated.h"

UENUM()
enum class EARWorldAlignment : uint8 {
    Gravity,
    GravityAndHeading,
    Camera,
};

