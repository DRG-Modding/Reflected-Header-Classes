#pragma once
#include "CoreMinimal.h"
#include "Margin.h"
#include "SlateWidgetStyle.h"
#include "ButtonStyle.h"
#include "TextBlockStyle.h"
#include "HyperlinkStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FHyperlinkStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FButtonStyle UnderlineStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Padding;
    
    FHyperlinkStyle();
};

