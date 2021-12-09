#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneActorReferenceData.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
//CROSS-MODULE INCLUDE: Engine SubtitleCue
#include "MovieSceneAudioSection.generated.h"

class USoundWave;
class USoundBase;
class USoundAttenuation;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FMovieSceneAudioSectionOnQueueSubtitles, const TArray<FSubtitleCue>&, Subtitles, float, CueDuration);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovieSceneAudioSectionOnAudioFinished);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMovieSceneAudioSectionOnAudioPlaybackPercent, const USoundWave*, PlayingSoundWave, const float, PlaybackPercent);

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneAudioSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    USoundBase* Sound;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float AudioStartTime;
    
    UPROPERTY()
    float AudioDilationFactor;
    
    UPROPERTY()
    float AudioVolume;
    
    UPROPERTY()
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY()
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY()
    FMovieSceneActorReferenceData AttachActorData;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressSubtitles;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideAttenuation;
    
    UPROPERTY(EditAnywhere)
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY()
    FMovieSceneAudioSectionOnQueueSubtitles OnQueueSubtitles;
    
    UPROPERTY()
    FMovieSceneAudioSectionOnAudioFinished OnAudioFinished;
    
    UPROPERTY()
    FMovieSceneAudioSectionOnAudioPlaybackPercent OnAudioPlaybackPercent;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundBase* InSound);
    
    UFUNCTION(BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
    UFUNCTION(BlueprintPure)
    USoundBase* GetSound() const;
    
    UMovieSceneAudioSection();
};

