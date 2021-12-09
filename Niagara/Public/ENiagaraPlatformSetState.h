#pragma once
#include "CoreMinimal.h"
#include "ENiagaraPlatformSetState.generated.h"

UENUM()
enum class ENiagaraPlatformSetState {
    Disabled,
    Enabled,
    Active,
    Unknown,
};

