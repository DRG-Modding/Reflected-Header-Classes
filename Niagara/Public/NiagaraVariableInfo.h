#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraVariableInfo.generated.h"

class UNiagaraDataInterface;

USTRUCT()
struct FNiagaraVariableInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable Variable;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FText Definition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNiagaraDataInterface* DataInterface;
    
    NIAGARA_API FNiagaraVariableInfo();
};

