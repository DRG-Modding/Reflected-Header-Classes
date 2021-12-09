#pragma once
#include "CoreMinimal.h"
#include "EMeshModificationType.generated.h"

UENUM()
enum class EMeshModificationType : uint8 {
    FirstInterim,
    Interim,
    Final,
};

