#pragma once
#include "CoreMinimal.h"
#include "NiagaraInt32.generated.h"

USTRUCT()
struct FNiagaraInt32 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Value;
    
    NIAGARA_API FNiagaraInt32();
};

