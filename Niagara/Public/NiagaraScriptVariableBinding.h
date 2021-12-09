#pragma once
#include "CoreMinimal.h"
#include "NiagaraScriptVariableBinding.generated.h"

USTRUCT()
struct FNiagaraScriptVariableBinding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    NIAGARA_API FNiagaraScriptVariableBinding();
};

