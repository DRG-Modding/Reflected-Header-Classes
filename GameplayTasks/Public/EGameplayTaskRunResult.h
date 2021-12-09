#pragma once
#include "CoreMinimal.h"
#include "EGameplayTaskRunResult.generated.h"

UENUM()
enum class EGameplayTaskRunResult : uint8 {
    Error,
    Failed,
    Success_Paused,
    Success_Active,
    Success_Finished,
};

