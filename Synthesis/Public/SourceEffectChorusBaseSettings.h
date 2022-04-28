#pragma once
#include "CoreMinimal.h"
#include "SourceEffectChorusBaseSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectChorusBaseSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Depth;
    
    UPROPERTY(EditAnywhere)
    float Frequency;
    
    UPROPERTY(EditAnywhere)
    float Feedback;
    
    UPROPERTY(EditAnywhere)
    float WetLevel;
    
    UPROPERTY(EditAnywhere)
    float DryLevel;
    
    UPROPERTY(EditAnywhere)
    float Spread;
    
    FSourceEffectChorusBaseSettings();
};

