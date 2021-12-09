#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "NiagaraTestStructInner.generated.h"

USTRUCT(BlueprintType)
struct FNiagaraTestStructInner {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector InnerVector1;
    
    UPROPERTY(EditAnywhere)
    FVector InnerVector2;
    
    NIAGARA_API FNiagaraTestStructInner();
};

