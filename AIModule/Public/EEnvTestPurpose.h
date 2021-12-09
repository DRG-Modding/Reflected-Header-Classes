#pragma once
#include "CoreMinimal.h"
#include "EEnvTestPurpose.generated.h"

UENUM()
namespace EEnvTestPurpose {
    enum Type {
        Filter,
        Score,
        FilterAndScore,
    };
}

