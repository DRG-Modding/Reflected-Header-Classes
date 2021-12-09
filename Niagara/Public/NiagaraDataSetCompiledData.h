#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableLayoutInfo.h"
#include "NiagaraDataSetID.h"
#include "ENiagaraSimTarget.h"
#include "NiagaraDataSetCompiledData.generated.h"

USTRUCT()
struct NIAGARA_API FNiagaraDataSetCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FNiagaraVariable> Variables;
    
    UPROPERTY()
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;
    
    UPROPERTY()
    uint32 TotalFloatComponents;
    
    UPROPERTY()
    uint32 TotalInt32Components;
    
    UPROPERTY()
    uint8 bRequiresPersistentIDs: 1;
    
    UPROPERTY()
    FNiagaraDataSetID ID;
    
    UPROPERTY()
    ENiagaraSimTarget SimTarget;
    
    FNiagaraDataSetCompiledData();
};

