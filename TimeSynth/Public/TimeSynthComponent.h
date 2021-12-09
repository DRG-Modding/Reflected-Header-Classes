#pragma once
#include "CoreMinimal.h"
#include "TimeSynthClipHandle.h"
#include "TimeSynthTimeDef.h"
//CROSS-MODULE INCLUDE: AudioMixer SynthComponent
#include "TimeSynthQuantizationSettings.h"
#include "ETimeSynthEventClipQuantization.h"
#include "ETimeSynthFFTSize.h"
#include "TimeSynthFilterSettings.h"
#include "TimeSynthEnvelopeFollowerSettings.h"
#include "ETimeSynthFilter.h"
#include "TimeSynthSpectralData.h"
#include "ETimeSynthEventQuantization.h"
#include "TimeSynthComponent.generated.h"

class UTimeSynthVolumeGroup;
class UTimeSynthClip;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTimeSynthComponentOnPlaybackTime, float, SynthPlaybackTimeSeconds);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FTimeSynthComponentOnQuantizationEvent, ETimeSynthEventQuantization, QuantizationType, int32, NumBars, float, Beat);

UCLASS()
class TIMESYNTH_API UTimeSynthComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeSynthQuantizationSettings QuantizationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableSpectralAnalysis: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<float> FrequenciesToAnalyze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ETimeSynthFFTSize FFTSize;
    
    UPROPERTY(BlueprintAssignable)
    FTimeSynthComponentOnPlaybackTime OnPlaybackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsFilterAEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsFilterBEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeSynthFilterSettings FilterASettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeSynthFilterSettings FilterBSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsEnvelopeFollowerEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 MaxPoolSize;
    
    UFUNCTION(BlueprintCallable)
    void StopSoundsOnVolumeGroupWithFadeOverride(UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const FTimeSynthTimeDef& FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void StopSoundsOnVolumeGroup(UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization);
    
    UFUNCTION(BlueprintCallable)
    void StopClipWithFadeOverride(FTimeSynthClipHandle InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const FTimeSynthTimeDef& FadeTime);
    
    UFUNCTION(BlueprintCallable)
    void StopClip(FTimeSynthClipHandle InClipHandle, ETimeSynthEventClipQuantization EventQuantization);
    
    UFUNCTION(BlueprintCallable)
    void SetVolumeGroup(UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec);
    
    UFUNCTION(BlueprintCallable)
    void SetSeed(int32 InSeed);
    
    UFUNCTION(BlueprintCallable)
    void SetQuantizationSettings(const FTimeSynthQuantizationSettings& InQuantizationSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterSettings(ETimeSynthFilter Filter, const FTimeSynthFilterSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFFTSize(ETimeSynthFFTSize InFFTSize);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvelopeFollowerSettings(const FTimeSynthEnvelopeFollowerSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvelopeFollowerEnabled(bool bInIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBPM(const float BeatsPerMinute);
    
    UFUNCTION(BlueprintCallable)
    void ResetSeed();
    
    UFUNCTION(BlueprintCallable)
    FTimeSynthClipHandle PlayClip(UTimeSynthClip* InClip, UTimeSynthVolumeGroup* InVolumeGroup);
    
    UFUNCTION(BlueprintCallable)
    bool HasActiveClips();
    
    UFUNCTION(BlueprintPure)
    TArray<FTimeSynthSpectralData> GetSpectralData() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnvelopeFollowerValue() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetBPM() const;
    
    UFUNCTION(BlueprintCallable)
    void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const FTimeSynthComponentOnQuantizationEvent& OnQuantizationEvent);
    
    UTimeSynthComponent();
};

