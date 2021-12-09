#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectConvolutionReverbSettings.generated.h"

class UAudioImpulseResponse;

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectConvolutionReverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY()
    float NormalizationVolumeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SurroundRearChannelBleedDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bInvertRearChannelBleedPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bSurroundRearChannelFlip;
    
    UPROPERTY()
    float SurroundRearChannelBleedAmount;
    
    UPROPERTY()
    UAudioImpulseResponse* ImpulseResponse;
    
    UPROPERTY()
    bool AllowHArdwareAcceleration;
    
    FSubmixEffectConvolutionReverbSettings();
};

