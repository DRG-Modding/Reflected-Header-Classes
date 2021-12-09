#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "HeroEnemyAfflictionEffect.generated.h"

UCLASS(Abstract)
class UHeroEnemyAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTag TagToAdd;
    
public:
    UHeroEnemyAfflictionEffect();
};

