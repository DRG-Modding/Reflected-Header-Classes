#pragma once
#include "CoreMinimal.h"
#include "EEnvelopeFollowerPeakMode.h"
#include "SourceEffectEnvelopeFollowerSettings.generated.h"

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSourceEffectEnvelopeFollowerSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AttackTime;
    
    UPROPERTY(EditAnywhere)
    float ReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEnvelopeFollowerPeakMode PeakMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAnalogMode;
    
    FSourceEffectEnvelopeFollowerSettings();
};

