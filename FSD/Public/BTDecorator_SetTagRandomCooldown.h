#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "RandRange.h"
#include "BTDecorator_SetTagRandomCooldown.generated.h"

UCLASS()
class UBTDecorator_SetTagRandomCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CooldownTag;
    
    UPROPERTY(EditAnywhere)
    FRandRange CooldownDuration;
    
    UPROPERTY(EditAnywhere)
    bool bAddToExistingDuration;
    
    UPROPERTY(EditAnywhere)
    bool TriggerOnActivation;
    
    UBTDecorator_SetTagRandomCooldown();
};

