#pragma once
#include "CoreMinimal.h"
#include "EToolChangeTrackingMode.generated.h"

UENUM(BlueprintType)
enum class EToolChangeTrackingMode : uint8 {
    NoChangeTracking = 0x1,
    UndoToExit,
    FullUndoRedo,
};

