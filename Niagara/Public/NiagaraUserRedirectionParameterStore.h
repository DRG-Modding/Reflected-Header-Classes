#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterStore.h"
#include "NiagaraVariable.h"
#include "NiagaraUserRedirectionParameterStore.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects;
    
public:
    NIAGARA_API FNiagaraUserRedirectionParameterStore();
};

