#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateColor.h"
#include "SlateBrush.h"
#include "TableRowStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FTableRowStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush SelectorFocusedBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ActiveHoveredBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ActiveBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush InactiveHoveredBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush InactiveBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush EvenRowBackgroundHoveredBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush EvenRowBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush OddRowBackgroundHoveredBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush OddRowBackgroundBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor TextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateColor SelectedTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DropIndicator_Above;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DropIndicator_Onto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DropIndicator_Below;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush ActiveHighlightedBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush InactiveHighlightedBrush;
    
    FTableRowStyle();
};

