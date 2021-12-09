#pragma once
#include "CoreMinimal.h"
#include "EDrivenBoneModificationMode.generated.h"

UENUM()
enum class EDrivenBoneModificationMode : uint8 {
    AddToInput,
    ReplaceComponent,
    AddToRefPose,
};

