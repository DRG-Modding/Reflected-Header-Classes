#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataSetID.h"
#include "NiagaraVariable.h"
#include "NiagaraDataSetProperties.generated.h"

USTRUCT()
struct FNiagaraDataSetProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDataSetID ID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FNiagaraVariable> Variables;
    
    NIAGARA_API FNiagaraDataSetProperties();
};

