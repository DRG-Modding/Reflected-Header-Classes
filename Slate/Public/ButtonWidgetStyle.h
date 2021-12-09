#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE: SlateCore ButtonStyle
#include "ButtonWidgetStyle.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UButtonWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle ButtonStyle;
    
    UButtonWidgetStyle();
};

