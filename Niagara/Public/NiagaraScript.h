#pragma once
#include "CoreMinimal.h"
#include "NiagaraVMExecutableData.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "ENiagaraScriptUsage.h"
#include "NiagaraVMExecutableDataId.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "NiagaraScriptDataInterfaceInfo.h"
#include "NiagaraScriptExecutionParameterStore.h"
#include "NiagaraParameterStore.h"
#include "NiagaraBoundParameter.h"
#include "NiagaraScript.generated.h"

class UNiagaraParameterCollection;

UCLASS(MinimalAPI)
class UNiagaraScript : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable)
    ENiagaraScriptUsage Usage;
    
    UPROPERTY()
    int32 UsageIndex;
    
private:
    UPROPERTY()
    FGuid UsageId;
    
public:
    UPROPERTY()
    FNiagaraParameterStore RapidIterationParameters;
    
private:
    UPROPERTY()
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    
    UPROPERTY()
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    
    UPROPERTY()
    FNiagaraVMExecutableDataId CachedScriptVMId;
    
    UPROPERTY()
    FNiagaraVMExecutableData CachedScriptVM;
    
    UPROPERTY()
    TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    
    UPROPERTY()
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;
    
public:
    UFUNCTION()
    void RaiseOnGPUCompilationComplete();
    
    UNiagaraScript();
};

