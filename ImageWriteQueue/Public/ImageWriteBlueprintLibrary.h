#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
#include "ImageWriteOptions.h"
#include "ImageWriteBlueprintLibrary.generated.h"

class UTexture;

UCLASS(BlueprintType)
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void ExportToDisk(UTexture* Texture, const FString& Filename, const FImageWriteOptions& options);
    
    UImageWriteBlueprintLibrary();
};

