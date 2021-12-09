#pragma once
#include "CoreMinimal.h"
#include "EEnvTestFilterType.generated.h"

UENUM()
namespace EEnvTestFilterType {
    enum Type {
        Minimum,
        Maximum,
        Range,
        Match,
    };
}

