#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NavigationSystem -ObjectName=CrowdManagerBase -FallbackName=CrowdManagerBase
#include "CrowdAvoidanceSamplingPattern.h"
#include "CrowdAvoidanceConfig.h"
#include "CrowdManager.generated.h"

class ANavigationData;

UCLASS(Blueprintable, DefaultConfig, NonTransient)
class AIMODULE_API UCrowdManager : public UCrowdManagerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ANavigationData* MyNavData;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrowdAvoidanceConfig> AvoidanceConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAgents;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAgentRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAvoidedAgents;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxAvoidedWalls;
    
    UPROPERTY(Config, EditAnywhere)
    float NavmeshCheckInterval;
    
    UPROPERTY(Config, EditAnywhere)
    float PathOptimizationInterval;
    
    UPROPERTY(Config, EditAnywhere)
    float SeparationDirClamp;
    
    UPROPERTY(Config, EditAnywhere)
    float PathOffsetRadiusMultiplier;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bResolveCollisions: 1;
    
public:
    UCrowdManager();
};

