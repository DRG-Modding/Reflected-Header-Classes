#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "SplitterStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FSplitterStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HandleNormalBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HandleHighlightBrush;
    
    FSplitterStyle();
};

