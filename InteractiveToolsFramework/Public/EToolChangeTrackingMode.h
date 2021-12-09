#pragma once
#include "CoreMinimal.h"
#include "EToolChangeTrackingMode.generated.h"

UENUM()
enum class EToolChangeTrackingMode {
    NoChangeTracking = 0x1,
    UndoToExit,
    FullUndoRedo,
};

