#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "BTTask_SetTagCooldown.generated.h"

UCLASS(Blueprintable)
class AIMODULE_API UBTTask_SetTagCooldown : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CooldownTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToExistingDuration;
    
    UPROPERTY(EditAnywhere)
    float CooldownDuration;
    
    UBTTask_SetTagCooldown();
};

