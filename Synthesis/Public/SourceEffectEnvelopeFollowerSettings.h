#pragma once
#include "CoreMinimal.h"
#include "EEnvelopeFollowerPeakMode.h"
#include "SourceEffectEnvelopeFollowerSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectEnvelopeFollowerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EEnvelopeFollowerPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAnalogMode;
    
    FSourceEffectEnvelopeFollowerSettings();
};

