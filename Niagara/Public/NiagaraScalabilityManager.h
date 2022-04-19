#pragma once
#include "CoreMinimal.h"
#include "NiagaraScalabilityManager.generated.h"

class UNiagaraEffectType;
class UNiagaraComponent;

USTRUCT()
struct FNiagaraScalabilityManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraEffectType* EffectType;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ManagedComponents;
    
    NIAGARA_API FNiagaraScalabilityManager();
};

