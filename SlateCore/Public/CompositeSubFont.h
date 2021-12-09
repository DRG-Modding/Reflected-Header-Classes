#pragma once
#include "CoreMinimal.h"
#include "CompositeFallbackFont.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Range
#include "CompositeSubFont.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FCompositeSubFont : public FCompositeFallbackFont {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FInt32Range> CharacterRanges;
    
    UPROPERTY()
    FString Cultures;
    
    FCompositeSubFont();
};

