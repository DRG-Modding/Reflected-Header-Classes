#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ComboBoxStyle -FallbackName=ComboBoxStyle
#include "ComboBoxWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UComboBoxWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComboBoxStyle ComboBoxStyle;
    
    UComboBoxWidgetStyle();
};

