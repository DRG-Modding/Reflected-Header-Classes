#pragma once
#include "CoreMinimal.h"
#include "NiagaraRandInfo.generated.h"

USTRUCT()
struct FNiagaraRandInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Seed1;
    
    UPROPERTY(EditAnywhere)
    int32 Seed2;
    
    UPROPERTY(EditAnywhere)
    int32 Seed3;
    
    NIAGARA_API FNiagaraRandInfo();
};

