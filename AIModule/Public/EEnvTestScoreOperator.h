#pragma once
#include "CoreMinimal.h"
#include "EEnvTestScoreOperator.generated.h"

UENUM()
namespace EEnvTestScoreOperator {
    enum Type {
        AverageScore,
        MinScore,
        MaxScore,
        Multiply,
    };
}

