#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SoundEffectSubmixPreset
#include "SubmixEffectConvolutionReverbSettings.h"
#include "ESubmixEffectConvolutionReverbBlockSize.h"
#include "SubmixEffectConvolutionReverbPreset.generated.h"

class UAudioImpulseResponse;

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSubmixEffectConvolutionReverbSettings Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAudioImpulseResponse* ImpulseResponse;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ESubmixEffectConvolutionReverbBlockSize BlockSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bEnableHardwareAcceleration;
    
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSubmixEffectConvolutionReverbSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);
    
    USubmixEffectConvolutionReverbPreset();
};

