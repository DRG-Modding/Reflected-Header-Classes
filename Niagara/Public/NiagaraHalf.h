#pragma once
#include "CoreMinimal.h"
#include "NiagaraHalf.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraHalf {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 Value;
    
    NIAGARA_API FNiagaraHalf();
};

