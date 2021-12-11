#pragma once
#include "CoreMinimal.h"
#include "AITask.h"
#include "EPathFollowingResult.h"
#include "AIMoveRequest.h"
#include "EAIOptionFlag.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AITask_MoveTo.generated.h"

class AActor;
class AAIController;
class UAITask_MoveTo;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAITask_MoveToOnRequestFailed);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAITask_MoveToOnMoveFinished, TEnumAsByte<EPathFollowingResult::Type>, Result, AAIController*, AIController);

UCLASS()
class AIMODULE_API UAITask_MoveTo : public UAITask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable)
    FAITask_MoveToOnRequestFailed OnRequestFailed;
    
    UPROPERTY(BlueprintAssignable)
    FAITask_MoveToOnMoveFinished OnMoveFinished;
    
    UPROPERTY()
    FAIMoveRequest MoveRequest;
    
public:
    UFUNCTION(BlueprintCallable)
    static UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag::Type> StopOnOverlap, TEnumAsByte<EAIOptionFlag::Type> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, TEnumAsByte<EAIOptionFlag::Type> ProjectGoalOnNavigation);
    
    UAITask_MoveTo();
};

