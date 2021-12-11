#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore ComboBoxStyle
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
#include "ComboBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FComboBoxStyle ComboBoxStyle;
    
    UComboBoxWidgetStyle();
};

