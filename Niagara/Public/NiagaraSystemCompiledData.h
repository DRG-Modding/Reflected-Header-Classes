#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterStore.h"
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraParameterDataSetBindingCollection.h"
#include "NiagaraSystemCompiledData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FNiagaraParameterStore InstanceParamStore;
    
    UPROPERTY()
    FNiagaraDataSetCompiledData DataSetCompiledData;
    
    UPROPERTY()
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;
    
    UPROPERTY()
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;
    
    UPROPERTY()
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;
    
    UPROPERTY()
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;
    
    UPROPERTY()
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;
    
    UPROPERTY()
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;
    
    UPROPERTY()
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;
    
    UPROPERTY()
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;
    
    UPROPERTY()
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;
    
    UPROPERTY()
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;
    
    NIAGARA_API FNiagaraSystemCompiledData();
};

