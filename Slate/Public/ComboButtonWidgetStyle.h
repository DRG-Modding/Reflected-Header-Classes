#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE: SlateCore ComboButtonStyle
#include "ComboButtonWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FComboButtonStyle ComboButtonStyle;
    
    UComboButtonWidgetStyle();
};

