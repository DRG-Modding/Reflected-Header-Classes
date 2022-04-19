#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneActorReferenceData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnQueueSubtitles__DelegateSignature -FallbackName=OnQueueSubtitlesDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAudioFinished__DelegateSignature -FallbackName=OnAudioFinishedDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnAudioPlaybackPercent__DelegateSignature -FallbackName=OnAudioPlaybackPercentDelegate
#include "MovieSceneAudioSection.generated.h"

class USoundAttenuation;
class USoundBase;

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneAudioSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* Sound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float StartOffset;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AudioStartTime;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AudioDilationFactor;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AudioVolume;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel SoundVolume;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel PitchMultiplier;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceData AttachActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLooping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSuppressSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAttenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* AttenuationSettings;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnQueueSubtitles OnQueueSubtitles;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnAudioFinished OnAudioFinished;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnAudioPlaybackPercent OnAudioPlaybackPercent;
    
public:
    UMovieSceneAudioSection();
    UFUNCTION(BlueprintCallable)
    void SetStartOffset(FFrameNumber InStartOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetSound(USoundBase* InSound);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameNumber GetStartOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetSound() const;
    
};

