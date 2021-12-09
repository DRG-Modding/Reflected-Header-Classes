#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: NavigationSystem CrowdManagerBase
#include "CrowdAvoidanceConfig.h"
#include "CrowdAvoidanceSamplingPattern.h"
#include "CrowdManager.generated.h"

class ANavigationData;

UCLASS(DefaultConfig, NonTransient)
class AIMODULE_API UCrowdManager : public UCrowdManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ANavigationData* MyNavData;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FCrowdAvoidanceConfig> AvoidanceConfig;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxAgents;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAgentRadius;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxAvoidedAgents;
    
    UPROPERTY(Config, EditAnywhere)
    int32 MaxAvoidedWalls;
    
    UPROPERTY(Config, EditAnywhere)
    float NavmeshCheckInterval;
    
    UPROPERTY(Config, EditAnywhere)
    float PathOptimizationInterval;
    
    UPROPERTY(Config, EditAnywhere)
    float SeparationDirClamp;
    
    UPROPERTY(Config, EditAnywhere)
    float PathOffsetRadiusMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    uint8 bResolveCollisions: 1;
    
public:
    UCrowdManager();
};

