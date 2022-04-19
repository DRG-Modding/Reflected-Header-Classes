#pragma once
#include "CoreMinimal.h"
#include "EWidgetAnimationEvent.h"
#include "BlueprintWidgetAnimationDelegateBinding.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FBlueprintWidgetAnimationDelegateBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EWidgetAnimationEvent Action;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName AnimationToBind;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName FunctionNameToBind;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName UserTag;
    
    FBlueprintWidgetAnimationDelegateBinding();
};

