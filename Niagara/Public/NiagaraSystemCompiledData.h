#pragma once
#include "CoreMinimal.h"
#include "NiagaraParameterStore.h"
#include "NiagaraParameterDataSetBindingCollection.h"
#include "NiagaraDataSetCompiledData.h"
#include "NiagaraSystemCompiledData.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraSystemCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraParameterStore InstanceParamStore;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData DataSetCompiledData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;
    
    NIAGARA_API FNiagaraSystemCompiledData();
};

