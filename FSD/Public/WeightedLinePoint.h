#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "WeightedLinePoint.generated.h"

USTRUCT(BlueprintType)
struct FWeightedLinePoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(EditAnywhere)
    float range;
    
    UPROPERTY(EditAnywhere)
    float NoiseRange;
    
    UPROPERTY(EditAnywhere)
    float SkewFactor;
    
    UPROPERTY(EditAnywhere)
    float FillAmount;
    
    FSD_API FWeightedLinePoint();
};

