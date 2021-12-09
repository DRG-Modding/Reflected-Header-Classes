#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SlateBrush.h"
#include "SliderStyle.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FSliderStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush NormalBarImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HoveredBarImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DisabledBarImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush NormalThumbImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush HoveredThumbImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush DisabledThumbImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BarThickness;
    
    FSliderStyle();
};

