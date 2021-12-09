#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTask_BlackboardBase
#include "BTTask_MoveToTarget.generated.h"

UCLASS()
class UBTTask_MoveToTarget : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float AcceptableRadius;
    
    UPROPERTY(EditAnywhere)
    bool EnterAttackStanceOnMoveFinished;
    
public:
    UBTTask_MoveToTarget();
};

