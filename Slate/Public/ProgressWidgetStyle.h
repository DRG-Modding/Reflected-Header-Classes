#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyleContainerBase
//CROSS-MODULE INCLUDE: SlateCore ProgressBarStyle
#include "ProgressWidgetStyle.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UProgressWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProgressBarStyle ProgressBarStyle;
    
    UProgressWidgetStyle();
};

