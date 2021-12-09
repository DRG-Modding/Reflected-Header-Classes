#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "TableColumnHeaderStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FTableColumnHeaderStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSlateBrush SortPrimaryAscendingImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush SortPrimaryDescendingImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush SortSecondaryAscendingImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush SortSecondaryDescendingImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush NormalBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush HoveredBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush MenuDropdownImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush MenuDropdownNormalBorderBrush;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush MenuDropdownHoveredBorderBrush;
    
    FTableColumnHeaderStyle();
};

