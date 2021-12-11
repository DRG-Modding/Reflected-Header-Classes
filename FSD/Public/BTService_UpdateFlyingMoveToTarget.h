#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: AIModule BTService
#include "BTService_UpdateFlyingMoveToTarget.generated.h"

UCLASS()
class UBTService_UpdateFlyingMoveToTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(EditAnywhere)
    float LookAheadTime;
    
public:
    UBTService_UpdateFlyingMoveToTarget();
};

