#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
//CROSS-MODULE INCLUDE: CoreUObject FloatInterval
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BTTask_TunnelToTarget.generated.h"

UCLASS()
class UBTTask_TunnelToTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
    UPROPERTY(EditAnywhere)
    float BurrowSpeed;
    
    UPROPERTY(EditAnywhere)
    float BurrowDuration;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval DurationClamp;
    
public:
    UBTTask_TunnelToTarget();
};

