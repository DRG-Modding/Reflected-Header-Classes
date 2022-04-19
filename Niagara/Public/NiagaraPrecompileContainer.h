#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraPrecompileContainer.generated.h"

class UNiagaraSystem;
class UNiagaraScript;

UCLASS()
class NIAGARA_API UNiagaraPrecompileContainer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraScript*> Scripts;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* System;
    
    UNiagaraPrecompileContainer();
};

