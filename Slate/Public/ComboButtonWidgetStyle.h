#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ComboButtonStyle -FallbackName=ComboButtonStyle
#include "ComboButtonWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UComboButtonWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboButtonStyle ComboButtonStyle;
    
    UComboButtonWidgetStyle();
};

