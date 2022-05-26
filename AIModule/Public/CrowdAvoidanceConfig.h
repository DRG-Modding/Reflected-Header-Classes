#pragma once
#include "CoreMinimal.h"
#include "CrowdAvoidanceConfig.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FCrowdAvoidanceConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VelocityBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DesiredVelocityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentVelocityWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideBiasWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactTimeWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
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

