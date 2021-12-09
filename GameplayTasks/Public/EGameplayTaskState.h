#pragma once
#include "CoreMinimal.h"
#include "EGameplayTaskState.generated.h"

UENUM()
enum class EGameplayTaskState {
    Uninitialized,
    AwaitingActivation,
    Paused,
    Active,
    Finished,
};

