#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE: SlateCore ScrollBarStyle
#include "ScrollBarWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UScrollBarWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FScrollBarStyle ScrollBarStyle;
    
    UScrollBarWidgetStyle();
};

