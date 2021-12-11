#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "PawnAction.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PawnAction_Move.generated.h"

class AActor;
class UNavigationQueryFilter;

UCLASS(EditInlineNew)
class AIMODULE_API UPawnAction_Move : public UPawnAction {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* GoalActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector GoalLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AcceptableRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAllowStrafe: 1;
    
    UPROPERTY()
    uint8 bFinishOnOverlap: 1;
    
    UPROPERTY()
    uint8 bUsePathfinding: 1;
    
    UPROPERTY()
    uint8 bAllowPartialPath: 1;
    
    UPROPERTY()
    uint8 bProjectGoalToNavigation: 1;
    
    UPROPERTY()
    uint8 bUpdatePathToGoal: 1;
    
    UPROPERTY()
    uint8 bAbortChildActionOnPathChange: 1;
    
public:
    UPawnAction_Move();
};

