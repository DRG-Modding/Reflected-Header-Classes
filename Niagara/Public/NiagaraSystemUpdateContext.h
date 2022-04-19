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
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ComponentsToReset;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ComponentsToReInit;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraSystem*> SystemSimsToDestroy;
    
public:
    FNiagaraSystemUpdateContext();
};

