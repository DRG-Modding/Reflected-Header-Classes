#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSpriteAlignment.generated.h"

UENUM()
enum class ENiagaraSpriteAlignment : uint8 {
    Unaligned,
    VelocityAligned,
    CustomAlignment,
};

