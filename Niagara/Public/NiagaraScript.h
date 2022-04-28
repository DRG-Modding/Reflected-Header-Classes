#pragma once
#include "CoreMinimal.h"
#include "NiagaraVMExecutableData.h"
#include "NiagaraParameterStore.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NiagaraShader -ObjectName=NiagaraScriptBase -FallbackName=NiagaraScriptBase
#include "ENiagaraScriptUsage.h"
#include "NiagaraVMExecutableDataId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "NiagaraScriptExecutionParameterStore.h"
#include "NiagaraBoundParameter.h"
#include "NiagaraScriptDataInterfaceInfo.h"
#include "NiagaraScript.generated.h"

class UNiagaraParameterCollection;

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraScript : public UNiagaraScriptBase {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraScriptUsage Usage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UsageId;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterStore RapidIterationParameters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVMExecutableDataId CachedScriptVMId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraVMExecutableData CachedScriptVM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;
    
public:
    UNiagaraScript();
    UFUNCTION(BlueprintCallable)
    void RaiseOnGPUCompilationComplete();
    
};

