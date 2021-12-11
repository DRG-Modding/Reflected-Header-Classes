#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore ScrollBoxStyle
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
#include "ScrollBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UScrollBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FScrollBoxStyle ScrollBoxStyle;
    
    UScrollBoxWidgetStyle();
};

