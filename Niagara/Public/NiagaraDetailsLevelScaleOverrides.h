#pragma once
#include "CoreMinimal.h"
#include "NiagaraDetailsLevelScaleOverrides.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDetailsLevelScaleOverrides {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Low;
    
    UPROPERTY()
    float Medium;
    
    UPROPERTY()
    float High;
    
    UPROPERTY()
    float Epic;
    
    UPROPERTY()
    float Cine;
    
    NIAGARA_API FNiagaraDetailsLevelScaleOverrides();
};

