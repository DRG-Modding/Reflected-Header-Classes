#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "RandRange.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BTDecorator_SharedAttackCooldown.generated.h"

UCLASS()
class UBTDecorator_SharedAttackCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRandRange CoolDownTime;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CooldownKey;
    
    UBTDecorator_SharedAttackCooldown();
};

