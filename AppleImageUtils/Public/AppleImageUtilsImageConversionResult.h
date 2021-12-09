#pragma once
#include "CoreMinimal.h"
#include "AppleImageUtilsImageConversionResult.generated.h"

USTRUCT(BlueprintType)
struct FAppleImageUtilsImageConversionResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FString Error;
    
    UPROPERTY(BlueprintReadOnly)
    TArray<uint8> ImageData;
    
    APPLEIMAGEUTILS_API FAppleImageUtilsImageConversionResult();
};

