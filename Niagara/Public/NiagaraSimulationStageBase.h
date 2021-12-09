#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: NiagaraCore NiagaraMergeable
#include "NiagaraSimulationStageBase.generated.h"

class UNiagaraScript;

UCLASS()
class NIAGARA_API UNiagaraSimulationStageBase : public UNiagaraMergeable {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNiagaraScript* Script;
    
    UPROPERTY(EditAnywhere)
    FName SimulationStageName;
    
    UNiagaraSimulationStageBase();
};

