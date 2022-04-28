#pragma once
#include "CoreMinimal.h"
#include "SubmixEffectConvolutionReverbSettings.generated.h"

class UAudioImpulseResponse;

USTRUCT(BlueprintType)
struct SYNTHESIS_API FSubmixEffectConvolutionReverbSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float NormalizationVolumeDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBypass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMixInputChannelFormatToImpulseResponseFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMixReverbOutputToOutputChannelFormat;
    
    UPROPERTY(EditAnywhere)
    float SurroundRearChannelBleedDb;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertRearChannelBleedPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSurroundRearChannelFlip;
    
    UPROPERTY(EditAnywhere)
    float SurroundRearChannelBleedAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioImpulseResponse* ImpulseResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AllowHArdwareAcceleration;
    
    FSubmixEffectConvolutionReverbSettings();
};

