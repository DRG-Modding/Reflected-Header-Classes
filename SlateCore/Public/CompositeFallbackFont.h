#pragma once
#include "CoreMinimal.h"
#include "Typeface.h"
#include "CompositeFallbackFont.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FCompositeFallbackFont {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTypeface Typeface;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ScalingFactor;
    
    FCompositeFallbackFont();
};

