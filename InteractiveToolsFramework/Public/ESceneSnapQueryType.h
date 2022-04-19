#pragma once
#include "CoreMinimal.h"
#include "ESceneSnapQueryType.generated.h"

UENUM()
enum class ESceneSnapQueryType {
    Position = 0x1,
    Rotation,
};

