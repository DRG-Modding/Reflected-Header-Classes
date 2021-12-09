#pragma once
#include "CoreMinimal.h"
#include "EEnvTestWeight.generated.h"

UENUM()
namespace EEnvTestWeight {
    enum Type {
        None,
        Square,
        Inverse,
        Unused,
        Constant,
        Skip,
    };
}

