#pragma once
#include "CoreMinimal.h"
#include "EDrivenDestinationMode.generated.h"

UENUM()
enum class EDrivenDestinationMode : uint8 {
    Bone,
    MorphTarget,
    MaterialParameter,
};

