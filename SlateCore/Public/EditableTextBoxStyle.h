#pragma once
#include "CoreMinimal.h"
#include "Margin.h"
#include "SlateWidgetStyle.h"
#include "ScrollBarStyle.h"
#include "SlateColor.h"
#include "SlateBrush.h"
#include "SlateFontInfo.h"
#include "EditableTextBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FEditableTextBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImageNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImageHovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImageFocused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImageReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor ReadOnlyForegroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin HScrollBarPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin VScrollBarPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FScrollBarStyle ScrollBarStyle;
    
    FEditableTextBoxStyle();
};

