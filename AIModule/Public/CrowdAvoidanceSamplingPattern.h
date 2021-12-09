#pragma once
#include "CoreMinimal.h"
#include "CrowdAvoidanceSamplingPattern.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FCrowdAvoidanceSamplingPattern {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> Angles;
    
    UPROPERTY(EditAnywhere)
    TArray<float> Radii;
    
    FCrowdAvoidanceSamplingPattern();
};

