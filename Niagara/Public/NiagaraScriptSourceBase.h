#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NiagaraScriptSourceBase.generated.h"

UCLASS(MinimalAPI)
class UNiagaraScriptSourceBase : public UObject {
    GENERATED_BODY()
public:
    UNiagaraScriptSourceBase();
};

