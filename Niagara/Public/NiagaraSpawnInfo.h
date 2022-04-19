#pragma once
#include "CoreMinimal.h"
#include "NiagaraSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 count;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float InterpStartDt;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float IntervalDt;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SpawnGroup;
    
    NIAGARA_API FNiagaraSpawnInfo();
};

