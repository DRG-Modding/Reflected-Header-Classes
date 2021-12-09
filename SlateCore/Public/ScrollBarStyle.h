#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "ScrollBarStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FScrollBarStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HorizontalBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush VerticalBackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush VerticalTopSlotImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HorizontalTopSlotImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush VerticalBottomSlotImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HorizontalBottomSlotImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush NormalThumbImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HoveredThumbImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DraggedThumbImage;
    
    FScrollBarStyle();
};

