#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AISystemBase
//CROSS-MODULE INCLUDE: CoreUObject SoftClassPath
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
#include "AISystem.generated.h"

class UAIHotSpotManager;
class UEnvQueryManager;
class UBehaviorTreeManager;
class UAIPerceptionSystem;
class UAIAsyncTaskBlueprintProxy;
class UNavLocalGridManager;

UCLASS()
class AIMODULE_API UAISystem : public UAISystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftClassPath PerceptionSystemClassName;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    FSoftClassPath HotSpotManagerClassName;
    
public:
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    float AcceptanceRadius;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    float PathfollowingRegularPathPointAcceptanceRadius;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    float PathfollowingNavLinkAcceptanceRadius;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bFinishMoveOnGoalOverlap;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bAcceptPartialPaths;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bAllowStrafing;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bEnableBTAITasks;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bAllowControllersAsEQSQuerier;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bEnableDebuggerPlugin;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    bool bForgetStaleActors;
    
    UPROPERTY(EditDefaultsOnly, GlobalConfig)
    TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;
    
protected:
    UPROPERTY(Transient)
    UBehaviorTreeManager* BehaviorTreeManager;
    
    UPROPERTY(Transient)
    UEnvQueryManager* EnvironmentQueryManager;
    
    UPROPERTY(Transient)
    UAIPerceptionSystem* PerceptionSystem;
    
    UPROPERTY(Transient)
    TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects;
    
    UPROPERTY(Transient)
    UAIHotSpotManager* HotSpotManager;
    
    UPROPERTY(Transient)
    UNavLocalGridManager* NavLocalGrids;
    
public:
    UFUNCTION(Exec)
    void AILoggingVerbose();
    
    UFUNCTION(Exec)
    void AIIgnorePlayers();
    
    UAISystem();
};

