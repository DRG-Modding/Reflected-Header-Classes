#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DynamicBlueprintBinding -FallbackName=DynamicBlueprintBinding
#include "BlueprintWidgetAnimationDelegateBinding.h"
#include "WidgetAnimationDelegateBinding.generated.h"

UCLASS()
class UMG_API UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;
    
    UWidgetAnimationDelegateBinding();
};

