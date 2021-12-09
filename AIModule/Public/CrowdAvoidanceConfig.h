#pragma once
#include "CoreMinimal.h"
#include "CrowdAvoidanceConfig.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FCrowdAvoidanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float VelocityBias;
    
    UPROPERTY(EditAnywhere)
    float DesiredVelocityWeight;
    
    UPROPERTY(EditAnywhere)
    float CurrentVelocityWeight;
    
    UPROPERTY(EditAnywhere)
    float SideBiasWeight;
    
    UPROPERTY(EditAnywhere)
    float ImpactTimeWeight;
    
    UPROPERTY(EditAnywhere)
    float ImpactTimeRange;
    
    UPROPERTY(EditAnywhere)
    uint8 CustomPatternIdx;
    
    UPROPERTY(EditAnywhere)
    uint8 AdaptiveDivisions;
    
    UPROPERTY(EditAnywhere)
    uint8 AdaptiveRings;
    
    UPROPERTY(EditAnywhere)
    uint8 AdaptiveDepth;
    
    FCrowdAvoidanceConfig();
};

