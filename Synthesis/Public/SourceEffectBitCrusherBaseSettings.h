#pragma once
#include "CoreMinimal.h"
#include "SourceEffectBitCrusherBaseSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectBitCrusherBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float SampleRate;
    
    UPROPERTY(EditAnywhere)
    float BitDepth;
    
    FSourceEffectBitCrusherBaseSettings();
};

