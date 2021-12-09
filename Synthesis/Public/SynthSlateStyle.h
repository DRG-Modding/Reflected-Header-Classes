#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: SlateCore SlateWidgetStyle
#include "ESynthSlateSizeType.h"
#include "ESynthSlateColorStyle.h"
#include "SynthSlateStyle.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSynthSlateStyle : public FSlateWidgetStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthSlateSizeType SizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESynthSlateColorStyle ColorStyle;
    
    FSynthSlateStyle();
};

