#pragma once
#include "CoreMinimal.h"
#include "NiagaraVariable.h"
#include "NiagaraParameters.generated.h"

USTRUCT()
struct FNiagaraParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, EditFixedSize)
    TArray<FNiagaraVariable> Parameters;
    
    NIAGARA_API FNiagaraParameters();
};

