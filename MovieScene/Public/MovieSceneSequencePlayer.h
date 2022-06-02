#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequencePlaybackSettings.h"
#include "OnMovieSceneSequencePlayerEventDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "EMovieScenePlayerStatus.h"
#include "MovieSceneRootEvaluationTemplateInstance.h"
#include "MovieSceneSequenceReplProperties.h"
#include "MovieSceneSequencePlaybackParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "EUpdatePositionMethod.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=QualifiedFrameTime -FallbackName=QualifiedFrameTime
#include "MovieSceneObjectBindingID.h"
#include "MovieSceneSequencePlayer.generated.h"

class UMovieSceneSequence;
class UMovieScenePlaybackClient;
class IMovieScenePlaybackClient;
class UMovieSceneSequenceTickManager;

UCLASS(Abstract, Blueprintable)
class MOVIESCENE_API UMovieSceneSequencePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent OnPlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent OnPlayReverse;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent OnStop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent OnPause;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMovieSceneSequencePlayerEvent OnFinished;
    
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovieScenePlayerStatus::Type> Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 bReversePlayback: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneSequence* Sequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FFrameNumber StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DurationFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float DurationSubFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentNumLoops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FMovieSceneSequenceReplProperties NetSyncProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMovieScenePlaybackClient> PlaybackClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMovieSceneSequenceTickManager* TickManager;
    
public:
    UMovieSceneSequencePlayer();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void StopAtCurrentTime();
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetTimeRange(float NewStartTime, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaybackPosition(FMovieSceneSequencePlaybackParams PlaybackParams);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRate(FFrameRate FrameRate);
    
    UFUNCTION(BlueprintCallable)
    void SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames);
    
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
    void RestoreState();
    
    UFUNCTION(BlueprintCallable)
    void PlayToSeconds(float TimeInSeconds);
    
    UFUNCTION(BlueprintCallable)
    bool PlayToMarkedFrame(const FString& InLabel);
    
    UFUNCTION(BlueprintCallable)
    void PlayToFrame(FFrameTime NewPosition);
    
    UFUNCTION(BlueprintCallable)
    void PlayTo(FMovieSceneSequencePlaybackParams PlaybackParams);
    
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
    UMovieSceneSequence* GetSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPlayRate() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FMovieSceneObjectBindingID> GetObjectBindings(UObject* InObject);
    
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
    
};

