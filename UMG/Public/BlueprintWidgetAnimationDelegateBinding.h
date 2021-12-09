#pragma once
#include "CoreMinimal.h"
#include "EWidgetAnimationEvent.h"
#include "BlueprintWidgetAnimationDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FBlueprintWidgetAnimationDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    EWidgetAnimationEvent Action;
    
    UPROPERTY()
    FName AnimationToBind;
    
    UPROPERTY()
    FName FunctionNameToBind;
    
    UPROPERTY()
    FName UserTag;
    
    FBlueprintWidgetAnimationDelegateBinding();
};

