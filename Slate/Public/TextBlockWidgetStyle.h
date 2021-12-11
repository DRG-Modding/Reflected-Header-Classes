#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore TextBlockStyle
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
#include "TextBlockWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTextBlockStyle TextBlockStyle;
    
    UTextBlockWidgetStyle();
};

