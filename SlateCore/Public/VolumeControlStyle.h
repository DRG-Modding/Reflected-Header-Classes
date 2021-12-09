#pragma once
#include "CoreMinimal.h"
#include "SlateWidgetStyle.h"
#include "SliderStyle.h"
#include "SlateBrush.h"
#include "VolumeControlStyle.generated.h"

USTRUCT()
struct SLATECORE_API FVolumeControlStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSliderStyle SliderStyle;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush HighVolumeImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush MidVolumeImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush LowVolumeImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush NoVolumeImage;
    
    UPROPERTY(EditAnywhere)
    FSlateBrush MutedImage;
    
    FVolumeControlStyle();
};

