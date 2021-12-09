#pragma once
#include "CoreMinimal.h"
#include "FNiagaraCompileEventSeverity.generated.h"

UENUM()
enum class FNiagaraCompileEventSeverity : uint8 {
    Log,
    Warning,
    Error,
};

