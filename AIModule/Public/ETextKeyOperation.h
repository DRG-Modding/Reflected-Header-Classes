#pragma once
#include "CoreMinimal.h"
#include "ETextKeyOperation.generated.h"

UENUM()
namespace ETextKeyOperation {
    enum Type {
        Equal,
        NotEqual,
        Contain,
        NotContain,
    };
}

