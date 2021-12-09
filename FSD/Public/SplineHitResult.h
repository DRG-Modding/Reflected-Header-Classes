#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SplineHitResult.generated.h"

USTRUCT(BlueprintType)
struct FSplineHitResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FHitResult HitResult;
    
    UPROPERTY(BlueprintReadOnly)
    float SplineDistance;
    
    UPROPERTY(BlueprintReadOnly)
    FVector SplineTangent;
    
    FSD_API FSplineHitResult();
};

