#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "RandRange.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BTDecorator_RandomCooldown.generated.h"

UCLASS()
class UBTDecorator_RandomCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRandRange CoolDownTime;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CooldownTimeModifier;
    
    UBTDecorator_RandomCooldown();
};

