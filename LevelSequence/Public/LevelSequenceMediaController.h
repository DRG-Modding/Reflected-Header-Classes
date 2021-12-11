#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: MovieScene MovieSceneCustomClockSource
//CROSS-MODULE INCLUDE: CoreUObject FrameTime
//CROSS-MODULE INCLUDE: CoreUObject QualifiedFrameTime
#include "LevelSequenceMediaController.generated.h"

class ALevelSequenceActor;
class UMediaComponent;

UCLASS()
class LEVELSEQUENCE_API ALevelSequenceMediaController : public AActor, public IMovieSceneCustomClockSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* Sequence;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UMediaComponent* MediaComponent;
    
    UPROPERTY(BlueprintReadOnly, ReplicatedUsing=OnRep_ServerStartTimeSeconds, meta=(AllowPrivateAccess=true))
    float ServerStartTimeSeconds;
    
public:
    UFUNCTION(BlueprintCallable)
    void SynchronizeToServer(float DesyncThresholdSeconds);
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerStartTimeSeconds();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALevelSequenceActor* GetSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaComponent* GetMediaComponent() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALevelSequenceMediaController();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void OnTick(float DeltaSeconds, float InPlayRate) override PURE_VIRTUAL(OnTick,);
    
    UFUNCTION(BlueprintCallable)
    void OnStopPlaying(const FQualifiedFrameTime& InStopTime) override PURE_VIRTUAL(OnStopPlaying,);
    
    UFUNCTION(BlueprintCallable)
    void OnStartPlaying(const FQualifiedFrameTime& InStartTime) override PURE_VIRTUAL(OnStartPlaying,);
    
    UFUNCTION(BlueprintCallable)
    FFrameTime OnRequestCurrentTime(const FQualifiedFrameTime& InCurrentTime, float InPlayRate) override PURE_VIRTUAL(OnRequestCurrentTime, return FFrameTime{};);
    
};

