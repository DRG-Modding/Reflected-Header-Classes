#pragma once
#include "CoreMinimal.h"
#include "Margin.h"
#include "SlateWidgetStyle.h"
#include "SlateColor.h"
#include "SlateBrush.h"
#include "ESlateCheckBoxType.h"
#include "SlateSound.h"
#include "CheckBoxStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FCheckBoxStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ESlateCheckBoxType::Type> CheckBoxType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UncheckedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UncheckedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UncheckedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush CheckedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UndeterminedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UndeterminedHoveredImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush UndeterminedPressedImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor BorderBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound CheckedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound UncheckedSlateSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateSound HoveredSlateSound;
    
    FCheckBoxStyle();
};

