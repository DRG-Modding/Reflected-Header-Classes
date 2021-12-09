#pragma once
#include "CoreMinimal.h"
#include "EEnvQueryRunMode.generated.h"

UENUM()
namespace EEnvQueryRunMode {
    enum Type {
        SingleResult,
        RandomBest5Pct,
        RandomBest25Pct,
        AllMatching,
    };
}

