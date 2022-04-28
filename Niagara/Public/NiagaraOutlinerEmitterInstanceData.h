#pragma once
#include "CoreMinimal.h"
#include "ENiagaraSimTarget.h"
#include "ENiagaraExecutionState.h"
#include "NiagaraOutlinerEmitterInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraOutlinerEmitterInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmitterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSimTarget SimTarget;
    
    UPROPERTY(EditAnywhere)
    ENiagaraExecutionState ExecState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumParticles;
    
    NIAGARA_API FNiagaraOutlinerEmitterInstanceData();
};

