#pragma once
#include "CoreMinimal.h"
#include "EBindingKind.generated.h"

UENUM()
enum class EBindingKind : uint8 {
    Function,
    Property,
};

