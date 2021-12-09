#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GenericTeamAgentInterface.h"
#include "EPathFollowingRequestResult.h"
//CROSS-MODULE INCLUDE: GameplayTasks GameplayTaskOwnerInterface
//CROSS-MODULE INCLUDE: Engine Controller
#include "AIPerceptionListenerInterface.h"
//CROSS-MODULE INCLUDE: Engine VisualLoggerDebugSnapshotInterface
#include "AIRequestID.h"
#include "EPathFollowingResult.h"
//CROSS-MODULE INCLUDE: GameplayTasks GameplayResourceSet
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EPathFollowingStatus.h"
#include "AIController.generated.h"

class UAIPerceptionComponent;
class UPathFollowingComponent;
class UBrainComponent;
class UPawnActionsComponent;
class UBlackboardComponent;
class UGameplayTasksComponent;
class UNavigationQueryFilter;
class UBlackboardData;
class UGameplayTaskResource;
class UBehaviorTree;
class AActor;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAIControllerReceiveMoveCompleted, FAIRequestID, RequestID, TEnumAsByte<EPathFollowingResult::Type>, Result);

UCLASS()
class AIMODULE_API AAIController : public AController, public IAIPerceptionListenerInterface, public IGameplayTaskOwnerInterface, public IGenericTeamAgentInterface, public IVisualLoggerDebugSnapshotInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStartAILogicOnPossess: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStopAILogicOnUnposses: 1;
    
public:
    UPROPERTY()
    uint8 bLOSflag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSkipExtraLOSChecks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowStrafe: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bWantsPlayerState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bSetControlRotationFromPawnOrientation: 1;
    
private:
    UPROPERTY(Export, VisibleDefaultsOnly)
    UPathFollowingComponent* PathFollowingComponent;
    
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UBrainComponent* BrainComponent;
    
    UPROPERTY(Export, VisibleDefaultsOnly)
    UAIPerceptionComponent* PerceptionComponent;
    
private:
    UPROPERTY(BlueprintReadOnly, Export, meta=(AllowPrivateAccess=true))
    UPawnActionsComponent* ActionsComp;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export)
    UBlackboardComponent* Blackboard;
    
    UPROPERTY(Export)
    UGameplayTasksComponent* CachedGameplayTasksComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> DefaultNavigationFilterClass;
    
public:
    UPROPERTY(BlueprintAssignable)
    FAIControllerReceiveMoveCompleted ReceiveMoveCompleted;
    
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
    UFUNCTION(BlueprintImplementableEvent)
    void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);
    
public:
    UFUNCTION()
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
    
    UFUNCTION(BlueprintPure)
    bool HasPartialPath() const;
    
    UFUNCTION(BlueprintPure)
    UPathFollowingComponent* GetPathFollowingComponent() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPathFollowingStatus::Type> GetMoveStatus() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetImmediateMoveDestination() const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetFocusActor() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFocalPointOnActor(const AActor* Actor) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetFocalPoint() const;
    
    UFUNCTION(BlueprintPure)
    UAIPerceptionComponent* GetAIPerceptionComponent();
    
    UFUNCTION(BlueprintCallable)
    void ClaimTaskResource(TSubclassOf<UGameplayTaskResource> ResourceClass);
    
    AAIController();
};

