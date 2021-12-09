#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariableBase.h"
#include "NiagaraVariable.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraVariable : public FNiagaraVariableBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<uint8> VarData;
    
public:
    NIAGARA_API FNiagaraVariable();
};

