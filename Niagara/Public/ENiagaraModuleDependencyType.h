#pragma once
#include "CoreMinimal.h"
#include "ENiagaraModuleDependencyType.generated.h"

UENUM()
enum class ENiagaraModuleDependencyType : uint8 {
    PreDependency,
    PostDependency,
};

