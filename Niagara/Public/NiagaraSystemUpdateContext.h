#pragma once
#include "CoreMinimal.h"
#include "NiagaraSystemUpdateContext.generated.h"

class UNiagaraComponent;
class UNiagaraSystem;

USTRUCT()
struct NIAGARA_API FNiagaraSystemUpdateContext {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    TArray<UNiagaraComponent*> ComponentsToReset;
    
    UPROPERTY(Export, Transient)
    TArray<UNiagaraComponent*> ComponentsToReInit;
    
    UPROPERTY(Transient)
    TArray<UNiagaraSystem*> SystemSimsToDestroy;
    
public:
    FNiagaraSystemUpdateContext();
};

