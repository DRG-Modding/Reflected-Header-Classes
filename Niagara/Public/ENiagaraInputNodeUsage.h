#pragma once
#include "CoreMinimal.h"
#include "ENiagaraInputNodeUsage.generated.h"

UENUM()
enum class ENiagaraInputNodeUsage {
    Undefined,
    Parameter,
    Attribute,
    SystemConstant,
    TranslatorConstant,
    RapidIterationParameter,
};

