#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AISystemBase -FallbackName=AISystemBase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "AISystem.generated.h"

class UAIAsyncTaskBlueprintProxy;
class UEnvQueryManager;
class UBehaviorTreeManager;
class UAIPerceptionSystem;
class UAIHotSpotManager;
class UNavLocalGridManager;

UCLASS()
class AIMODULE_API UAISystem : public UAISystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftClassPath PerceptionSystemClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftClassPath HotSpotManagerClassName;
    
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    float AcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    float PathfollowingRegularPathPointAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    float PathfollowingNavLinkAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bFinishMoveOnGoalOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAcceptPartialPaths;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAllowStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bEnableBTAITasks;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAllowControllersAsEQSQuerier;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bEnableDebuggerPlugin;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bForgetStaleActors;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAddBlackboardSelfKey;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, GlobalConfig, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;
    
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeManager* BehaviorTreeManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UEnvQueryManager* EnvironmentQueryManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UAIPerceptionSystem* PerceptionSystem;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UAIHotSpotManager* HotSpotManager;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UNavLocalGridManager* NavLocalGrids;
    
public:
    UAISystem();
    UFUNCTION(BlueprintCallable, Exec)
    void AILoggingVerbose();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIIgnorePlayers();
    
};

