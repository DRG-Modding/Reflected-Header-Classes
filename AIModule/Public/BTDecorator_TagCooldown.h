#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "BTDecorator_TagCooldown.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_TagCooldown : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CooldownTag;
    
    UPROPERTY(EditAnywhere)
    float CooldownDuration;
    
    UPROPERTY(EditAnywhere)
    bool bAddToExistingDuration;
    
    UPROPERTY(EditAnywhere)
    bool bActivatesCooldown;
    
    UBTDecorator_TagCooldown();
};

