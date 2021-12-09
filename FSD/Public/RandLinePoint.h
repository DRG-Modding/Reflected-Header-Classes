#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "RandRange.h"
#include "RandLinePoint.generated.h"

USTRUCT(BlueprintType)
struct FRandLinePoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    FRandRange range;
    
    UPROPERTY(EditAnywhere)
    FRandRange NoiseRange;
    
    UPROPERTY(EditAnywhere)
    FRandRange SkewFactor;
    
    UPROPERTY(EditAnywhere)
    FRandRange FillAmount;
    
    FSD_API FRandLinePoint();
};

