#pragma once
#include "CoreMinimal.h"
#include "CompositeFallbackFont.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Int32Range -FallbackName=Int32Range
#include "CompositeSubFont.generated.h"

USTRUCT(BlueprintType)
struct SLATECORE_API FCompositeSubFont : public FCompositeFallbackFont {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInt32Range> CharacterRanges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Cultures;
    
    FCompositeSubFont();
};

