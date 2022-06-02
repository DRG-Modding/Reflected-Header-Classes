#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "EMediaSoundComponentFFTSize.h"
#include "EMediaSoundChannels.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SoundAttenuationSettings -FallbackName=SoundAttenuationSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatRange -FallbackName=FloatRange
#include "MediaSoundComponentSpectralData.h"
#include "MediaSoundComponent.generated.h"

class UMediaPlayer;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MEDIAASSETS_API UMediaSoundComponent : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMediaSoundChannels Channels;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DynamicRateAdjustment;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RateAdjustmentFactor;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatRange RateAdjustmentRange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
public:
    UMediaSoundComponent();
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
    
    UFUNCTION(BlueprintCallable)
    TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaPlayer* GetMediaPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnvelopeValue() const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);
    
};

