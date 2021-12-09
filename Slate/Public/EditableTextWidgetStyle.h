#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE: SlateCore EditableTextStyle
#include "EditableTextWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableTextStyle EditableTextStyle;
    
    UEditableTextWidgetStyle();
};

