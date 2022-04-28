#pragma once
#include "CoreMinimal.h"
#include "SourceEffectPannerSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectPannerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Spread;
    
    UPROPERTY(EditAnywhere)
    float Pan;
    
    FSourceEffectPannerSettings();
};

