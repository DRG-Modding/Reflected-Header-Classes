#pragma once
#include "CoreMinimal.h"
#include "NiagaraDetailsLevelScaleOverrides.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraDetailsLevelScaleOverrides {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Low;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Medium;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float High;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Epic;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Cine;
    
    NIAGARA_API FNiagaraDetailsLevelScaleOverrides();
};

