#pragma once
#include "CoreMinimal.h"
#include "NiagaraHalfVector3.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraHalfVector3 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint16 X;
    
    UPROPERTY(EditAnywhere)
    uint16 Y;
    
    UPROPERTY(EditAnywhere)
    uint16 Z;
    
    NIAGARA_API FNiagaraHalfVector3();
};

