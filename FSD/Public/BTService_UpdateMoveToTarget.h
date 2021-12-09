#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTService
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BTService_UpdateMoveToTarget.generated.h"

UCLASS()
class UBTService_UpdateMoveToTarget : public UBTService {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetLocationKey;
    
    UPROPERTY(EditAnywhere)
    float LookAheadTime;
    
    UPROPERTY(EditAnywhere)
    float VerticalOffset;
    
public:
    UBTService_UpdateMoveToTarget();
};

