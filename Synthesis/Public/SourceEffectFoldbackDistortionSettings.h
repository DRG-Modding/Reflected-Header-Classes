#pragma once
#include "CoreMinimal.h"
#include "SourceEffectFoldbackDistortionSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectFoldbackDistortionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float InputGainDb;
    
    UPROPERTY(EditAnywhere)
    float ThresholdDb;
    
    UPROPERTY(EditAnywhere)
    float OutputGainDb;
    
    FSourceEffectFoldbackDistortionSettings();
};

