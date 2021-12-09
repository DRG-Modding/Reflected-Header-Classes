#pragma once
#include "CoreMinimal.h"
#include "BTTask_MoveTo.h"
#include "BTTask_MoveDirectlyToward.generated.h"

UCLASS()
class AIMODULE_API UBTTask_MoveDirectlyToward : public UBTTask_MoveTo {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 bDisablePathUpdateOnGoalLocationChange: 1;
    
    UPROPERTY()
    uint8 bProjectVectorGoalToNavigation: 1;
    
private:
    UPROPERTY()
    uint8 bUpdatedDeprecatedProperties: 1;
    
public:
    UBTTask_MoveDirectlyToward();
};

