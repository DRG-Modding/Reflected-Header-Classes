#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RotationLimit.generated.h"

USTRUCT(BlueprintType)
struct FRotationLimit {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector LimitMin;
    
    UPROPERTY(EditAnywhere)
    FVector LimitMax;
    
    ANIMGRAPHRUNTIME_API FRotationLimit();
};

