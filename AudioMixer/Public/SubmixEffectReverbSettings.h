#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectReverbSettings.generated.h"

USTRUCT(BlueprintType)
struct AUDIOMIXER_API FSubmixEffectReverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypassEarlyReflections;
    
    UPROPERTY(EditAnywhere)
    float ReflectionsDelay;
    
    UPROPERTY(EditAnywhere)
    float GainHF;
    
    UPROPERTY(EditAnywhere)
    float ReflectionsGain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypassLateReflections;
    
    UPROPERTY(EditAnywhere)
    float LateDelay;
    
    UPROPERTY(EditAnywhere)
    float DecayTime;
    
    UPROPERTY(EditAnywhere)
    float Density;
    
    UPROPERTY(EditAnywhere)
    float Diffusion;
    
    UPROPERTY(EditAnywhere)
    float AirAbsorptionGainHF;
    
    UPROPERTY(EditAnywhere)
    float DecayHFRatio;
    
    UPROPERTY(EditAnywhere)
    float LateGain;
    
    UPROPERTY(EditAnywhere)
    float Gain;
    
    UPROPERTY(EditAnywhere)
    float WetLevel;
    
    UPROPERTY(EditAnywhere)
    float DryLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypass;
    
    FSubmixEffectReverbSettings();
};

