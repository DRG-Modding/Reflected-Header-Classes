#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraBoundParameter.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraBoundParameter {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraVariable Parameter;
    
    UPROPERTY()
    int32 SrcOffset;
    
    UPROPERTY()
    int32 DestOffset;
    
    NIAGARA_API FNiagaraBoundParameter();
};

