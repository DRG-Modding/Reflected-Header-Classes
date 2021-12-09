#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptParameterUsage.generated.h"

UENUM()
enum class ENiagaraScriptParameterUsage : uint32 {
    Input,
    Output,
    Local,
    InputOutput,
    InitialValueInput,
    None,
    Num,
};

