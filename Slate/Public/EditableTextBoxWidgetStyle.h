#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore EditableTextBoxStyle
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
#include "EditableTextBoxWidgetStyle.generated.h"

UCLASS(MinimalAPI)
class UEditableTextBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableTextBoxStyle EditableTextBoxStyle;
    
    UEditableTextBoxWidgetStyle();
};

