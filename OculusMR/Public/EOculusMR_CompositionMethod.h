#pragma once
#include "CoreMinimal.h"
#include "EOculusMR_CompositionMethod.generated.h"

UENUM(BlueprintType)
enum class EOculusMR_CompositionMethod : uint8 {
    ExternalComposition,
    DirectComposition,
    EOculusMR_MAX UMETA(Hidden),
};

