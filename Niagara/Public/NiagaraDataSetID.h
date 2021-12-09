#pragma once
#include "CoreMinimal.h"
#include "ENiagaraDataSetType.h"
#include "NiagaraDataSetID.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDataSetID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY()
    ENiagaraDataSetType Type;
    
    NIAGARA_API FNiagaraDataSetID();
};

