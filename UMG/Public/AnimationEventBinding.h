#pragma once
#include "CoreMinimal.h"
#include "WidgetAnimationDynamicEventDelegate.h"
#include "EWidgetAnimationEvent.h"
#include "AnimationEventBinding.generated.h"

class UWidgetAnimation;

USTRUCT(BlueprintType)
struct FAnimationEventBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* Animation;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FWidgetAnimationDynamicEvent Delegate;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EWidgetAnimationEvent AnimationEvent;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName UserTag;
    
    UMG_API FAnimationEventBinding();
};

