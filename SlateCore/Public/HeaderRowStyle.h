#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "TableColumnHeaderStyle.h"
#include "SplitterStyle.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "HeaderRowStyle.generated.h"

USTRUCT()
struct SLATECORE_API FHeaderRowStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableColumnHeaderStyle ColumnStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTableColumnHeaderStyle LastColumnStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSplitterStyle ColumnSplitterStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush BackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor ForegroundColor;
    
    FHeaderRowStyle();
};

