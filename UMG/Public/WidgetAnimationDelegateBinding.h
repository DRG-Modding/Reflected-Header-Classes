#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DynamicBlueprintBinding
#include "BlueprintWidgetAnimationDelegateBinding.h"
#include "WidgetAnimationDelegateBinding.generated.h"

UCLASS()
class UMG_API UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings;
    
    UWidgetAnimationDelegateBinding();
};

