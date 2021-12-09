#pragma once
#include "CoreMinimal.h"
#include "NiagaraFloat.generated.h"

USTRUCT()
struct FNiagaraFloat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Value;
    
    NIAGARA_API FNiagaraFloat();
};

