#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyle
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
#include "ESynthKnobSize.h"
#include "SynthKnobStyle.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSynthKnobStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush LargeKnob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush LargeKnobOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush MediumKnob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSlateBrush MediumKnobOverlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinValueAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxValueAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthKnobSize KnobSize;
    
    FSynthKnobStyle();
};

