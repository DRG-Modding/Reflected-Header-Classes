#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "WidgetAnimationBinding.generated.h"

USTRUCT(BlueprintType)
struct FWidgetAnimationBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName WidgetName;
    
    UPROPERTY()
    FName SlotWidgetName;
    
    UPROPERTY()
    FGuid AnimationGuid;
    
    UPROPERTY()
    bool bIsRootWidget;
    
    UMG_API FWidgetAnimationBinding();
};

