#pragma once
#include "CoreMinimal.h"
#include "EProcMeshSliceCapOption.generated.h"

UENUM(BlueprintType)
enum class EProcMeshSliceCapOption : uint8 {
    NoCap,
    CreateNewSectionForCap,
    UseLastSectionForCap,
};

