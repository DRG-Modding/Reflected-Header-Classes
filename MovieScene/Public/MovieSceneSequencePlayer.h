#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePlayerStatus.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneSequencePlaybackSettings.h"
#include "MovieSceneRootEvaluationTemplateInstance.h"
#include "MovieSceneSequenceReplProperties.h"
#include "EUpdatePositionMethod.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
//CROSS-MODULE INCLUDE: CoreUObject QualifiedFrameTime
//CROSS-MODULE INCLUDE: CoreUObject FrameTime
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequencePlayer.generated.h"

class UMovieSceneSequence;
class UMovieScenePlaybackClient;
class IMovieScenePlaybackClient;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovieSceneSequencePlayerOnPlayReverse);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovieSceneSequencePlayerOnPlay);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovieSceneSequencePlayerOnStop);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovieSceneSequencePlayerOnFinished);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FMovieSceneSequencePlayerOnPause);

UCLASS(Abstract, BlueprintType)
class MOVIESCENE_API UMovieSceneSequencePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FMovieSceneSequencePlayerOnPlay OnPlay;
    
    UPROPERTY(BlueprintAssignable)
    FMovieSceneSequencePlayerOnPlayReverse OnPlayReverse;
    
    UPROPERTY(BlueprintAssignable)
    FMovieSceneSequencePlayerOnStop OnStop;
    
    UPROPERTY(BlueprintAssignable)
    FMovieSceneSequencePlayerOnPause OnPause;
    
    UPROPERTY(BlueprintAssignable)
    FMovieSceneSequencePlayerOnFinished OnFinished;
    
protected:
    UPROPERTY()
    TEnumAsByte<EMovieScenePlayerStatus::Type> Status;
    
    UPROPERTY(Replicated)
    uint8 bReversePlayback: 1;
    
    UPROPERTY(Transient)
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(Replicated)
    FFrameNumber StartTime;
    
    UPROPERTY(Replicated)
    int32 DurationFrames;
    
    UPROPERTY(Transient)
    int32 CurrentNumLoops;
    
    UPROPERTY(Replicated)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(Transient)
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    
    UPROPERTY(Replicated)
    FMovieSceneSequenceReplProperties NetSyncProps;
    
    UPROPERTY(Transient)
    TScriptInterface<IMovieScenePlaybackClient> PlaybackClient;
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAtCurrentTime();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeRange(float NewStartTime, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackRange(const float NewStartTime, const float NewEndTime);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPosition(float NewPlaybackPosition);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRate(FFrameRate FrameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRange(int32 StartFrame, int32 Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableCameraCuts(bool bInDisableCameraCuts);
    
    UFUNCTION(BlueprintCallable)
    void ScrubToSeconds(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool ScrubToMarkedFrame(const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    void ScrubToFrame(FFrameTime NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void Scrub();
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_OnStopEvent(FFrameTime StoppedTime);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void RPC_ExplicitServerUpdateEvent(EUpdatePositionMethod Method, FFrameTime RelevantTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayToSeconds(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool PlayToMarkedFrame(const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    void PlayToFrame(FFrameTime NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayReverse();
    
    UFUNCTION(BlueprintCallable)
    void PlayLooping(int32 NumLoops);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable)
    void JumpToSeconds(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void JumpToPosition(float NewPlaybackPosition);
    
    UFUNCTION(BlueprintCallable)
    bool JumpToMarkedFrame(const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    void JumpToFrame(FFrameTime NewPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReversed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable)
    void GoToEndAndStop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQualifiedFrameTime GetStartTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlaybackStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlaybackPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlaybackEnd() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(UObject* InObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFrameRate GetFrameRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFrameDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQualifiedFrameTime GetEndTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQualifiedFrameTime GetDuration() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDisableCameraCuts();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FQualifiedFrameTime GetCurrentTime() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<UObject*> GetBoundObjects(FMovieSceneObjectBindingID ObjectBinding);
    
    UFUNCTION(BlueprintCallable)
    void ChangePlaybackDirection();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UMovieSceneSequencePlayer();
};

