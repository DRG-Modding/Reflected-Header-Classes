#pragma once
#include "CoreMinimal.h"
#include "EProcMeshSliceCapOption.generated.h"

UENUM()
enum class EProcMeshSliceCapOption : uint8 {
    NoCap,
    CreateNewSectionForCap,
    UseLastSectionForCap,
};

