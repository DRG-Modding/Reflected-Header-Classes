#pragma once
#include "CoreMinimal.h"
#include "ECheckBoxState.generated.h"

UENUM()
enum class ECheckBoxState : uint8 {
    Unchecked,
    Checked,
    Undetermined,
};

