#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "ExpandableAreaStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FExpandableAreaStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush CollapsedImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ExpandedImage;
    
    UPROPERTY(EditAnywhere)
    float RolloutAnimationSeconds;
    
    FExpandableAreaStyle();
};

