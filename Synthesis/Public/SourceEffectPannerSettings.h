#pragma once
#include "CoreMinimal.h"
#include "SourceEffectPannerSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectPannerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Pan;
    
    FSourceEffectPannerSettings();
};

