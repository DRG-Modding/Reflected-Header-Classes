#pragma once
#include "CoreMinimal.h"
#include "NiagaraDetailsLevelScaleOverrides.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDetailsLevelScaleOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Low;
    
    UPROPERTY(EditAnywhere)
    float Medium;
    
    UPROPERTY(EditAnywhere)
    float High;
    
    UPROPERTY(EditAnywhere)
    float Epic;
    
    UPROPERTY(EditAnywhere)
    float Cine;
    
    NIAGARA_API FNiagaraDetailsLevelScaleOverrides();
};

