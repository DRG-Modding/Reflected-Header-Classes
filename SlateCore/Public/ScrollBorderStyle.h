#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "ScrollBorderStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FScrollBorderStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush TopShadowBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BottomShadowBrush;
    
    FScrollBorderStyle();
};

