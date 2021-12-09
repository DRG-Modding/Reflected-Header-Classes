#pragma once
#include "CoreMinimal.h"
#include "NiagaraID.generated.h"

USTRUCT()
struct FNiagaraID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 Index;
    
    UPROPERTY(EditAnywhere)
    int32 AcquireTag;
    
    NIAGARA_API FNiagaraID();
};

