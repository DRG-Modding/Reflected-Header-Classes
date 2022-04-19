#pragma once
#include "CoreMinimal.h"
#include "AfflictionEffect.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "HeroEnemyAfflictionEffect.generated.h"

UCLASS(Abstract)
class UHeroEnemyAfflictionEffect : public UAfflictionEffect {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagToAdd;
    
public:
    UHeroEnemyAfflictionEffect();
};

