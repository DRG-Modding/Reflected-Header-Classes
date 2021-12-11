#pragma once
#include "CoreMinimal.h"
#include "Margin.h"
#include "SlateWidgetStyle.h"
#include "ButtonStyle.h"
#include "SlateColor.h"
#include "SlateBrush.h"
#include "DockTabStyle.generated.h"

USTRUCT()
struct SLATECORE_API FDockTabStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FButtonStyle CloseButtonStyle;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush NormalBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ActiveBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ColorOverlayTabBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ColorOverlayIconBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ForegroundBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush HoveredBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ContentAreaBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush TabWellBrush;
    
    UPROPERTY(EditAnywhere)
    FMargin TabPadding;
    
    UPROPERTY(EditAnywhere)
    float OverlapWidth;
    
    UPROPERTY(EditAnywhere)
    FSlateColor FlashColor;
    
    FDockTabStyle();
};

