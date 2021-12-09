#pragma once
#include "CoreMinimal.h"
#include "NiagaraInputConditionMetadata.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraInputConditionMetadata {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName InputName;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> TargetValues;
    
    FNiagaraInputConditionMetadata();
};

