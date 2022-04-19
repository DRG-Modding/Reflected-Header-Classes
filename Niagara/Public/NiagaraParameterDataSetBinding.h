#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterDataSetBinding.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraParameterDataSetBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 ParameterOffset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 DataSetComponentOffset;
    
    NIAGARA_API FNiagaraParameterDataSetBinding();
};

