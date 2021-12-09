#pragma once
#include "CoreMinimal.h"
#include "ENiagaraParameterScope.generated.h"

UENUM()
enum class ENiagaraParameterScope : uint32 {
    Input,
    User,
    Engine,
    Owner,
    System,
    Emitter,
    Particles,
    ScriptPersistent,
    ScriptTransient,
    Local,
    Custom,
    DISPLAY_ONLY_StaticSwitch,
    Output,
    None,
    Num,
};

