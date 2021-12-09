#pragma once
#include "CoreMinimal.h"
#include "ENiagaraParameterScope.h"
#include "NiagaraParameterScopeInfo.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraParameterScopeInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ENiagaraParameterScope Scope;
    
    UPROPERTY()
    FString NamespaceString;
    
public:
    FNiagaraParameterScopeInfo();
};

