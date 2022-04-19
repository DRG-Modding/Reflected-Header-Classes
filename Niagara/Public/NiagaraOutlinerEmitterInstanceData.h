#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimTarget.h"
#include "ENiagaraExecutionState.h"
#include "NiagaraOutlinerEmitterInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerEmitterInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString EmitterName;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraExecutionState ExecState;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumParticles;
    
    NIAGARA_API FNiagaraOutlinerEmitterInstanceData();
};

