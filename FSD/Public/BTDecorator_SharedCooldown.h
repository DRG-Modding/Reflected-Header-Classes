#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "RandRange.h"
#include "BTDecorator_SharedCooldown.generated.h"

UCLASS()
class UBTDecorator_SharedCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FRandRange CoolDownTime;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector CooldownKey;
    
    UBTDecorator_SharedCooldown();
};
