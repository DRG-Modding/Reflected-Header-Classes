#pragma once
#include "CoreMinimal.h"
#include "SourceEffectFoldbackDistortionSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectFoldbackDistortionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InputGainDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ThresholdDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OutputGainDb;
    
    FSourceEffectFoldbackDistortionSettings();
};

