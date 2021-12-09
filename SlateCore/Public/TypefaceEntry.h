#pragma once
#include "CoreMinimal.h"
#include "FontData.h"
#include "TypefaceEntry.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FTypefaceEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FFontData Font;
    
    FTypefaceEntry();
};

