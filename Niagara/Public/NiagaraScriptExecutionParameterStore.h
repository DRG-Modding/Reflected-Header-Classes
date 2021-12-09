#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterStore.h"
#include "NiagaraScriptExecutionPaddingInfo.h"
#include "NiagaraScriptExecutionParameterStore.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 ParameterSize;
    
    UPROPERTY()
    uint32 PaddedParameterSize;
    
    UPROPERTY()
    TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo;
    
    UPROPERTY()
    uint8 bInitialized: 1;
    
public:
    NIAGARA_API FNiagaraScriptExecutionParameterStore();
};

