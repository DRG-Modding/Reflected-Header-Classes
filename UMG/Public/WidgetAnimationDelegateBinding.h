#pragma once
#include "CoreMinimal.h"
#include "BlueprintWidgetAnimationDelegateBinding.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DynamicBlueprintBinding -FallbackName=DynamicBlueprintBinding
#include "WidgetAnimationDelegateBinding.generated.h"

UCLASS(Blueprintable)
class UMG_API UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;
    
    UWidgetAnimationDelegateBinding();
};

