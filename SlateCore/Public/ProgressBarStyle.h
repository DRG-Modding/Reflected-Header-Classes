#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "ProgressBarStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FProgressBarStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush FillImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush MarqueeImage;
    
    FProgressBarStyle();
};

