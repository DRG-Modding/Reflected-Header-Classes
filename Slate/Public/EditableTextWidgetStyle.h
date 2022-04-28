#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EditableTextStyle -FallbackName=EditableTextStyle
#include "EditableTextWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UEditableTextWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextStyle EditableTextStyle;
    
    UEditableTextWidgetStyle();
};

