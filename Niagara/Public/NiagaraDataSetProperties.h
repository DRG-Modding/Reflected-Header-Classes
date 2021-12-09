#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataSetID.h"
#include "NiagaraVariable.h"
#include "NiagaraDataSetProperties.generated.h"

USTRUCT()
struct FNiagaraDataSetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FNiagaraDataSetID ID;
    
    UPROPERTY()
    TArray<FNiagaraVariable> Variables;
    
    NIAGARA_API FNiagaraDataSetProperties();
};

