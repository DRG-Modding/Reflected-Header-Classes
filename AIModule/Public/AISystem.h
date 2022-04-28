#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AISystemBase -FallbackName=AISystemBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftClassPath -FallbackName=SoftClassPath
#include "AISystem.generated.h"

class UEnvQueryManager;
class UAIAsyncTaskBlueprintProxy;
class UBehaviorTreeManager;
class UAIPerceptionSystem;
class UAIHotSpotManager;
class UNavLocalGridManager;

UCLASS(Blueprintable)
class AIMODULE_API UAISystem : public UAISystemBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftClassPath PerceptionSystemClassName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FSoftClassPath HotSpotManagerClassName;
    
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    float AcceptanceRadius;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float PathfollowingRegularPathPointAcceptanceRadius;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    float PathfollowingNavLinkAcceptanceRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bFinishMoveOnGoalOverlap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAcceptPartialPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAllowStrafing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bEnableBTAITasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAllowControllersAsEQSQuerier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bEnableDebuggerPlugin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bForgetStaleActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    bool bAddBlackboardSelfKey;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    TEnumAsByte<ECollisionChannel> DefaultSightCollisionChannel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTreeManager* BehaviorTreeManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UEnvQueryManager* EnvironmentQueryManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIPerceptionSystem* PerceptionSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAIHotSpotManager* HotSpotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNavLocalGridManager* NavLocalGrids;
    
public:
    UAISystem();
    UFUNCTION(BlueprintCallable, Exec)
    void AILoggingVerbose();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AIIgnorePlayers();
    
};

