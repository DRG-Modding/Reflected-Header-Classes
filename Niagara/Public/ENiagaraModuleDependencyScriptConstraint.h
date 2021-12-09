#pragma once
#include "CoreMinimal.h"
#include "ENiagaraModuleDependencyScriptConstraint.generated.h"

UENUM()
enum class ENiagaraModuleDependencyScriptConstraint : uint8 {
    SameScript,
    AllScripts,
};

