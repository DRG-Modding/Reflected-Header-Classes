#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateFontInfo.h"
#include "SlateBrush.h"
#include "SlateColor.h"
#include "EditableTextStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FEditableTextStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateFontInfo Font;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor ColorAndOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImageSelected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush BackgroundImageComposing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CaretImage;
    
    FEditableTextStyle();
};

