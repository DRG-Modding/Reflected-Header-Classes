#pragma once
#include "CoreMinimal.h"
#include "NiagaraScalabilityManager.generated.h"

class UNiagaraEffectType;
class UNiagaraComponent;

USTRUCT(BlueprintType)
struct FNiagaraScalabilityManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraEffectType* EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> ManagedComponents;
    
    NIAGARA_API FNiagaraScalabilityManager();
};

