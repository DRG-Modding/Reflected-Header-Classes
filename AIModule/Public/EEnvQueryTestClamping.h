#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryTestClamping.generated.h"

UENUM()
namespace EEnvQueryTestClamping {
    enum Type {
        None,
        SpecifiedValue,
        FilterThreshold,
    };
}

