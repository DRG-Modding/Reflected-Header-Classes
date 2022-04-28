#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=Chaos -ObjectName=ChaosSolverConfiguration -FallbackName=ChaosSolverConfiguration
#include "EFrictionCombineMode.h"
#include "ECollisionTraceFlag.h"
#include "PhysicsSettingsCore.generated.h"

UCLASS(Blueprintable, DefaultConfig)
class PHYSICSCORE_API UPhysicsSettingsCore : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float DefaultGravityZ;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultTerminalVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    float DefaultFluidFriction;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimulateScratchMemorySize;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RagdollAggregateThreshold;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    float TriangleMeshTriangleMinAreaThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableShapeSharing;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePCM;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableStabilization;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWarnMissingLocks;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnable2DPhysics;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDefaultHasComplexCollision;
    
    UPROPERTY(Config, EditAnywhere)
    float BounceThresholdVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EFrictionCombineMode::Type> FrictionCombineMode;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<EFrictionCombineMode::Type> RestitutionCombineMode;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxAngularVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxDepenetrationVelocity;
    
    UPROPERTY(Config, EditAnywhere)
    float ContactOffsetMultiplier;
    
    UPROPERTY(Config, EditAnywhere)
    float MinContactOffset;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxContactOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSimulateSkeletalMeshOnDedicatedServer;
    
    UPROPERTY(Config, EditAnywhere)
    TEnumAsByte<ECollisionTraceFlag> DefaultShapeComplexity;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChaosSolverConfiguration SolverOptions;
    
    UPhysicsSettingsCore();
};

