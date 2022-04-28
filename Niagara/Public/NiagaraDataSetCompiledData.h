#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableLayoutInfo.h"
#include "NiagaraDataSetID.h"
#include "ENiagaraSimTarget.h"
#include "NiagaraDataSetCompiledData.generated.h"

USTRUCT(BlueprintType)
struct NIAGARA_API FNiagaraDataSetCompiledData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Variables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariableLayoutInfo> VariableLayouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetID ID;
    
    UPROPERTY(EditAnywhere)
    uint32 TotalFloatComponents;
    
    UPROPERTY(EditAnywhere)
    uint32 TotalInt32Components;
    
    UPROPERTY(EditAnywhere)
    uint32 TotalHalfComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequiresPersistentIDs: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSimTarget SimTarget;
    
    FNiagaraDataSetCompiledData();
};

