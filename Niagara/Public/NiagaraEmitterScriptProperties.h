#pragma once
#include "CoreMinimal.h"
#include "NiagaraEventGeneratorProperties.h"
#include "NiagaraEventReceiverProperties.h"
#include "NiagaraEmitterScriptProperties.generated.h"

class UNiagaraScript;

USTRUCT(BlueprintType)
struct FNiagaraEmitterScriptProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNiagaraScript* Script;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraEventReceiverProperties> EventReceivers;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraEventGeneratorProperties> EventGenerators;
    
    NIAGARA_API FNiagaraEmitterScriptProperties();
};

