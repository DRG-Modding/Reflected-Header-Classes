#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraDataSetID.h"
#include "NiagaraVariableLayoutInfo.h"
#include "ENiagaraSimTarget.h"
#include "NiagaraDataSetCompiledData.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraDataSetCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Variables;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetID ID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 TotalFloatComponents;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 TotalInt32Components;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 TotalHalfComponents;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bRequiresPersistentIDs: 1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ENiagaraSimTarget SimTarget;
    
    FNiagaraDataSetCompiledData();
};

