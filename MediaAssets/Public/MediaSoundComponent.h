#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AudioMixer SynthComponent
#include "EMediaSoundChannels.h"
//CROSS-MODULE INCLUDE: Engine SoundAttenuationSettings
//CROSS-MODULE INCLUDE: CoreUObject FloatRange
#include "EMediaSoundComponentFFTSize.h"
#include "MediaSoundComponentSpectralData.h"
#include "MediaSoundComponent.generated.h"

class UMediaPlayer;

UCLASS(EditInlineNew)
class MEDIAASSETS_API UMediaSoundComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMediaSoundChannels Channels;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool DynamicRateAdjustment;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float RateAdjustmentFactor;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    FFloatRange RateAdjustmentRange;
    
protected:
    UPROPERTY(EditAnywhere)
    UMediaPlayer* MediaPlayer;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);
    
    UFUNCTION(BlueprintCallable)
    void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);
    
    UFUNCTION(BlueprintCallable)
    void SetEnvelopeFollowingsettings(int32 AttackTimeMsec, int32 ReleaseTimeMsec);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);
    
    UFUNCTION(BlueprintCallable)
    TArray<FMediaSoundComponentSpectralData> GetSpectralData();
    
    UFUNCTION(BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintPure)
    float GetEnvelopeValue() const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    
    UMediaSoundComponent();
};

