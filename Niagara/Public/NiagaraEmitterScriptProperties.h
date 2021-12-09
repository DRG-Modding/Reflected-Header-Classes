#pragma once
#include "CoreMinimal.h"
#include "NiagaraEventReceiverProperties.h"
#include "NiagaraEventGeneratorProperties.h"
#include "NiagaraEmitterScriptProperties.generated.h"

class UNiagaraScript;

USTRUCT(BlueprintType)
struct FNiagaraEmitterScriptProperties {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNiagaraScript* Script;
    
    UPROPERTY()
    TArray<FNiagaraEventReceiverProperties> EventReceivers;
    
    UPROPERTY()
    TArray<FNiagaraEventGeneratorProperties> EventGenerators;
    
    NIAGARA_API FNiagaraEmitterScriptProperties();
};

