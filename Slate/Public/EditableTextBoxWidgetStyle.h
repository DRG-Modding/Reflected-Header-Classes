#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE: SlateCore EditableTextBoxStyle
#include "EditableTextBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableTextBoxStyle EditableTextBoxStyle;
    
    UEditableTextBoxWidgetStyle();
};

