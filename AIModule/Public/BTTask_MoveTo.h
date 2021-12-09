#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BTTask_BlackboardBase.h"
#include "BTTask_MoveTo.generated.h"

class UNavigationQueryFilter;

UCLASS()
class AIMODULE_API UBTTask_MoveTo : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
    UPROPERTY(EditAnywhere)
    float ObservedBlackboardValueTolerance;
    
    UPROPERTY(EditAnywhere)
    uint8 bObserveBlackboardValue: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowStrafe: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bAllowPartialPath: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bTrackMovingGoal: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bProjectGoalLocation: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReachTestIncludesAgentRadius: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bReachTestIncludesGoalRadius: 1;
    
    UPROPERTY(VisibleInstanceOnly)
    uint8 bStopOnOverlap: 1;
    
    UPROPERTY()
    uint8 bStopOnOverlapNeedsUpdate: 1;
    
    UBTTask_MoveTo();
};

