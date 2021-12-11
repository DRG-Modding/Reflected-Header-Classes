#pragma once
#include "CoreMinimal.h"
#include "Margin.h"
#include "SlateWidgetStyle.h"
#include "SlateFontInfo.h"
#include "EditableTextBoxStyle.h"
#include "SlateBrush.h"
#include "SearchBoxStyle.generated.h"

USTRUCT()
struct SLATECORE_API FSearchBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FEditableTextBoxStyle TextBoxStyle;
    
    UPROPERTY(EditAnywhere)
    FSlateFontInfo ActiveFontInfo;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush UpArrowImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush DownArrowImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush GlassImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush ClearImage;
    
    UPROPERTY(EditAnywhere)
    FMargin ImagePadding;
    
    UPROPERTY(EditAnywhere)
    bool bLeftAlignButtons;
    
    FSearchBoxStyle();
};

