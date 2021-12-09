#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraUserParameterBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraUserParameterBinding {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNiagaraVariable Parameter;
    
    NIAGARA_API FNiagaraUserParameterBinding();
};

