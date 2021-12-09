#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateColor.h"
#include "SlateBrush.h"
#include "TableColumnHeaderStyle.h"
#include "SplitterStyle.h"
#include "HeaderRowStyle.generated.h"

USTRUCT()
struct SLATECORE_API FHeaderRowStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTableColumnHeaderStyle ColumnStyle;
    
    UPROPERTY(EditAnywhere)
    FTableColumnHeaderStyle LastColumnStyle;
    
    UPROPERTY(EditAnywhere)
    FSplitterStyle ColumnSplitterStyle;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateColor ForegroundColor;
    
    FHeaderRowStyle();
};

