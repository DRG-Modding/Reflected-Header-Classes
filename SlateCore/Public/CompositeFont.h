#pragma once
#include "CoreMinimal.h"
#include "Typeface.h"
#include "CompositeFallbackFont.h"
#include "CompositeSubFont.h"
#include "CompositeFont.generated.h"

USTRUCT()
struct SLATECORE_API FCompositeFont {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTypeface DefaultTypeface;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FCompositeFallbackFont FallbackTypeface;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FCompositeSubFont> SubTypefaces;
    
    FCompositeFont();
};

