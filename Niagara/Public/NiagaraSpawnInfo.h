#pragma once
#include "CoreMinimal.h"
#include "NiagaraSpawnInfo.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSpawnInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 count;
    
    UPROPERTY(EditAnywhere)
    float InterpStartDt;
    
    UPROPERTY(EditAnywhere)
    float IntervalDt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnGroup;
    
    NIAGARA_API FNiagaraSpawnInfo();
};

