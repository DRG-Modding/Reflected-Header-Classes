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
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString FontFilename;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EFontHinting Hinting;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EFontLoadingPolicy LoadingPolicy;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SubFaceIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* FontFaceAsset;
    
public:
    FFontData();
};

