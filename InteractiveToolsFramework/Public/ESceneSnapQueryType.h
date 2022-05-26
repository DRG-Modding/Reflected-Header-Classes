#pragma once
#include "CoreMinimal.h"
#include "ESceneSnapQueryType.generated.h"

UENUM(BlueprintType)
enum class ESceneSnapQueryType : uint8 {
    Position = 0x1,
    Rotation,
};

