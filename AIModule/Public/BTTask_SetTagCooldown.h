#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "BTTaskNode.h"
#include "BTTask_SetTagCooldown.generated.h"

UCLASS()
class AIMODULE_API UBTTask_SetTagCooldown : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGameplayTag CooldownTag;
    
    UPROPERTY(EditAnywhere)
    bool bAddToExistingDuration;
    
    UPROPERTY(EditAnywhere)
    float CooldownDuration;
    
    UBTTask_SetTagCooldown();
};

