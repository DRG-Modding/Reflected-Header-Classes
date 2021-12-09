#pragma once
#include "CoreMinimal.h"
#include "FontOutlineSettings.h"
#include "SlateFontInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FSlateFontInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* FontObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* FontMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFontOutlineSettings OutlineSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TypefaceFontName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Size;
    
    FSlateFontInfo();
};

