#pragma once
#include "CoreMinimal.h"
#include "ENiagaraParameterPanelCategory.generated.h"

UENUM()
enum class ENiagaraParameterPanelCategory {
    Input,
    Attributes,
    Output,
    Local,
    User,
    Engine,
    Owner,
    System,
    Emitter,
    Particles,
    ScriptTransient,
    StaticSwitch,
    None,
    Num,
};

