#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SpinBoxStyle
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
#include "SpinBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class USpinBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSpinBoxStyle SpinBoxStyle;
    
    USpinBoxWidgetStyle();
};

