#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableInfo.generated.h"

class UNiagaraDataInterface;

USTRUCT()
struct FNiagaraVariableInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraVariable Variable;
    
    UPROPERTY()
    FText Definition;
    
    UPROPERTY()
    UNiagaraDataInterface* DataInterface;
    
    NIAGARA_API FNiagaraVariableInfo();
};

