#pragma once
#include "CoreMinimal.h"
#include "Margin.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "SlateSound.h"
#include "ButtonStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FButtonStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Hovered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Pressed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush Disabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin NormalPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin PressedPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound PressedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound HoveredSlateSound;
    
    FButtonStyle();
};

