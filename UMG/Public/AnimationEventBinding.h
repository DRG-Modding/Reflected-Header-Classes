#pragma once
#include "CoreMinimal.h"
#include "EWidgetAnimationEvent.h"
#include "AnimationEventBinding.generated.h"

class UWidgetAnimation;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FAnimationEventBindingDelegate);

USTRUCT(BlueprintType)
struct FAnimationEventBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWidgetAnimation* Animation;
    
    UPROPERTY()
    FAnimationEventBindingDelegate Delegate;
    
    UPROPERTY()
    EWidgetAnimationEvent AnimationEvent;
    
    UPROPERTY()
    FName UserTag;
    
    UMG_API FAnimationEventBinding();
};

