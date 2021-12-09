#pragma once
#include "CoreMinimal.h"
#include "NiagaraStatScope.generated.h"

USTRUCT()
struct FNiagaraStatScope {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName FullName;
    
    UPROPERTY()
    FName FriendlyName;
    
    NIAGARA_API FNiagaraStatScope();
};

