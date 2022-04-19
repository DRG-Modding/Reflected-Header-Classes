#pragma once
#include "CoreMinimal.h"
#include "ESamplePlayerSeekType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AudioMixer -ObjectName=SynthComponent -FallbackName=SynthComponent
#include "OnSampleLoadedDelegate.h"
#include "OnSamplePlaybackProgressDelegate.h"
#include "SynthSamplePlayer.generated.h"

class USoundWave;

UCLASS(meta=(BlueprintSpawnableComponent))
class SYNTHESIS_API USynthSamplePlayer : public USynthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundWave* SoundWave;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnSampleLoaded OnSampleLoaded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnSamplePlaybackProgress OnSamplePlaybackProgress;
    
    USynthSamplePlayer();
    UFUNCTION(BlueprintCallable)
    void SetSoundWave(USoundWave* InSoundWave);
    
    UFUNCTION(BlueprintCallable)
    void SetScrubTimeWidth(float InScrubTimeWidthSec);
    
    UFUNCTION(BlueprintCallable)
    void SetScrubMode(bool bScrubMode);
    
    UFUNCTION(BlueprintCallable)
    void SetPitch(float InPitch, float TimeSec);
    
    UFUNCTION(BlueprintCallable)
    void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoaded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSampleDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPlaybackProgressTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPlaybackProgressPercent() const;
    
};

