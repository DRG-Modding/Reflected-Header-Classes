#pragma once
#include "CoreMinimal.h"
#include "EFontHinting.h"
#include "EFontLoadingPolicy.h"
#include "FontData.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FFontData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FString FontFilename;
    
    UPROPERTY()
    EFontHinting Hinting;
    
    UPROPERTY()
    EFontLoadingPolicy LoadingPolicy;
    
    UPROPERTY()
    int32 SubFaceIndex;
    
    UPROPERTY()
    UObject* FontFaceAsset;
    
public:
    FFontData();
};

