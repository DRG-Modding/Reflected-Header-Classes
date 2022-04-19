#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "InlineTextImageStyle.generated.h"

USTRUCT()
struct SLATECORE_API FInlineTextImageStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Image;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 Baseline;
    
    FInlineTextImageStyle();
};

