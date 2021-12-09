#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE: SlateCore TextBlockStyle
#include "TextBlockWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UTextBlockWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTextBlockStyle TextBlockStyle;
    
    UTextBlockWidgetStyle();
};

