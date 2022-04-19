#pragma once
#include "CoreMinimal.h"
#include "NiagaraScalabilityState.h"
#include "NiagaraOutlinerEmitterInstanceData.h"
#include "ENiagaraExecutionState.h"
#include "ENCPoolMethod.h"
#include "NiagaraOutlinerTimingData.h"
#include "NiagaraOutlinerSystemInstanceData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraOutlinerSystemInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraOutlinerEmitterInstanceData> Emitters;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraExecutionState ActualExecutionState;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraExecutionState RequestedExecutionState;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraScalabilityState ScalabilityState;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPendingKill: 1;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ENCPoolMethod PoolMethod;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData AverageTime;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraOutlinerTimingData MaxTime;
    
    FNiagaraOutlinerSystemInstanceData();
};

