#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundEffectSourcePreset -FallbackName=SoundEffectSourcePreset
#include "SourceEffectBitCrusherSettings.h"
#include "SourceEffectBitCrusherBaseSettings.h"
#include "SourceEffectBitCrusherPreset.generated.h"

class USoundModulatorBase;

UCLASS(BlueprintType, EditInlineNew)
class SYNTHESIS_API USourceEffectBitCrusherPreset : public USoundEffectSourcePreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSourceEffectBitCrusherSettings Settings;
    
    USourceEffectBitCrusherPreset();
    UFUNCTION(BlueprintCallable)
    void SetSettings(const FSourceEffectBitCrusherBaseSettings& NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetSampleRateModulator(const USoundModulatorBase* Modulator);
    
    UFUNCTION(BlueprintCallable)
    void SetSampleRate(float SampleRate);
    
    UFUNCTION(BlueprintCallable)
    void SetModulationSettings(const FSourceEffectBitCrusherSettings& ModulationSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetBits(float Bits);
    
    UFUNCTION(BlueprintCallable)
    void SetBitModulator(const USoundModulatorBase* Modulator);
    
};

