#pragma once
#include "CoreMinimal.h"
#include "NiagaraSpawnInfo.generated.h"

USTRUCT()
struct FNiagaraSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 count;
    
    UPROPERTY(EditAnywhere)
    float InterpStartDt;
    
    UPROPERTY(EditAnywhere)
    float IntervalDt;
    
    UPROPERTY(EditAnywhere)
    int32 SpawnGroup;
    
    NIAGARA_API FNiagaraSpawnInfo();
};

