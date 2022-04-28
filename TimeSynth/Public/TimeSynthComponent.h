#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "OnTimeSynthPlaybackTimeDelegate.h"
#include "ETimeSynthEventClipQuantization.h"
#include "OnQuantizationEventBPDelegate.h"
#include "TimeSynthQuantizationSettings.h"
#include "ETimeSynthFFTSize.h"
#include "TimeSynthFilterSettings.h"
#include "TimeSynthEnvelopeFollowerSettings.h"
#include "TimeSynthTimeDef.h"
#include "TimeSynthClipHandle.h"
#include "ETimeSynthFilter.h"
#include "TimeSynthSpectralData.h"
#include "ETimeSynthEventQuantization.h"
#include "TimeSynthComponent.generated.h"

class UTimeSynthVolumeGroup;
class UTimeSynthClip;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TIMESYNTH_API UTimeSynthComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeSynthQuantizationSettings QuantizationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableSpectralAnalysis: 1;
    
    UPROPERTY(EditAnywhere)
    TArray<float> FrequenciesToAnalyze;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETimeSynthFFTSize FFTSize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTimeSynthPlaybackTime OnPlaybackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFilterAEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFilterBEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeSynthFilterSettings FilterASettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeSynthFilterSettings FilterBSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsEnvelopeFollowerEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxPoolSize;
    
    UTimeSynthComponent();
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
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FTimeSynthSpectralData> GetSpectralData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxActiveClipLimit() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnvelopeFollowerValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBPM() const;
    
    UFUNCTION(BlueprintCallable)
    void AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const FOnQuantizationEventBP& OnQuantizationEvent);
    
};

