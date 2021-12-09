#pragma once
#include "CoreMinimal.h"
#include "NCPool.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "NiagaraComponentPool.generated.h"

class UNiagaraSystem;

UCLASS(Transient)
class NIAGARA_API UNiagaraComponentPool : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools;
    
public:
    UNiagaraComponentPool();
};

