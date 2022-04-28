#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Controller -FallbackName=Controller
#include "AIPerceptionListenerInterface.h"
#include "GenericTeamAgentInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTaskOwnerInterface -FallbackName=GameplayTaskOwnerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VisualLoggerDebugSnapshotInterface -FallbackName=VisualLoggerDebugSnapshotInterface
#include "AIMoveCompletedSignatureDelegate.h"
#include "EPathFollowingStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayResourceSet -FallbackName=GameplayResourceSet
#include "EPathFollowingRequestResult.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AIController.generated.h"

class UPathFollowingComponent;
class UBrainComponent;
class UAIPerceptionComponent;
class UPawnActionsComponent;
class UBlackboardComponent;
class UGameplayTasksComponent;
class UNavigationQueryFilter;
class UBlackboardData;
class UGameplayTaskResource;
class UBehaviorTree;
class AActor;

UCLASS(Blueprintable)
class AIMODULE_API AAIController : public AController, public IAIPerceptionListenerInterface, public IGameplayTaskOwnerInterface, public IGenericTeamAgentInterface, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartAILogicOnPossess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStopAILogicOnUnposses: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLOSflag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSkipExtraLOSChecks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowStrafe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantsPlayerState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSetControlRotationFromPawnOrientation: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPathFollowingComponent* PathFollowingComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBrainComponent* BrainComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAIPerceptionComponent* PerceptionComponent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnActionsComponent* ActionsComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBlackboardComponent* Blackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UGameplayTasksComponent* CachedGameplayTasksComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> DefaultNavigationFilterClass;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIMoveCompletedSignature ReceiveMoveCompleted;
    
    AAIController();
    UFUNCTION(BlueprintCallable)
    bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent);
    
    UFUNCTION(BlueprintCallable)
    void UnclaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);
    
    UFUNCTION(BlueprintCallable)
    void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveBlockDetection(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool RunBehaviorTree(UBehaviorTree* BTAsset);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToLocation(const FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EPathFollowingRequestResult::Type> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, TSubclassOf<UNavigationQueryFilter> FilterClass, bool bAllowPartialPath);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFocus(AActor* NewFocus);
    
    UFUNCTION(BlueprintCallable)
    void K2_SetFocalPoint(FVector FP);
    
    UFUNCTION(BlueprintCallable)
    void K2_ClearFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPartialPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPathFollowingComponent* GetPathFollowingComponent() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPathFollowingStatus::Type> GetMoveStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetImmediateMoveDestination() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFocusActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFocalPointOnActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFocalPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAIPerceptionComponent* GetAIPerceptionComponent();
    
    UFUNCTION(BlueprintCallable)
    void ClaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);
    
    
    // Fix for true pure virtual functions not being implemented
};

