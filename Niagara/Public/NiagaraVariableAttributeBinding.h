#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableAttributeBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariableAttributeBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraVariable BoundVariable;
    
    UPROPERTY()
    FNiagaraVariable DataSetVariable;
    
    UPROPERTY()
    FNiagaraVariable DefaultValueIfNonExistent;
    
    NIAGARA_API FNiagaraVariableAttributeBinding();
};

