#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterDataSetBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraParameterDataSetBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 ParameterOffset;
    
    UPROPERTY()
    int32 DataSetComponentOffset;
    
    NIAGARA_API FNiagaraParameterDataSetBinding();
};

