#pragma once
#include "CoreMinimal.h"
#include "TypefaceEntry.h"
#include "Typeface.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FTypeface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FTypefaceEntry> Fonts;
    
    FTypeface();
};

