#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "BTDecorator_ConditionalGuard.generated.h"

UCLASS()
class UBTDecorator_ConditionalGuard : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector GuardKey;
    
    UPROPERTY(EditAnywhere)
    bool InvertLogic;
    
public:
    UBTDecorator_ConditionalGuard();
};
