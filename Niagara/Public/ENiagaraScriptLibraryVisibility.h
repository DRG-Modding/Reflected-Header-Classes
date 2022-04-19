#pragma once
#include "CoreMinimal.h"
#include "ENiagaraScriptLibraryVisibility.generated.h"

UENUM()
enum class ENiagaraScriptLibraryVisibility {
    Invalid,
    Unexposed,
    Library,
    Hidden,
};

