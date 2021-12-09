#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterDataSetBinding.h"
#include "NiagaraParameterDataSetBindingCollection.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraParameterDataSetBindingCollection {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FNiagaraParameterDataSetBinding> FloatOffsets;
    
    UPROPERTY()
    TArray<FNiagaraParameterDataSetBinding> Int32Offsets;
    
    NIAGARA_API FNiagaraParameterDataSetBindingCollection();
};

