#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "FontOutlineSettings.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct SLATECORE_API FFontOutlineSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 OutlineSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSeparateFillAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyOutlineToDropShadows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UObject* OutlineMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor OutlineColor;
    
    FFontOutlineSettings();
};

