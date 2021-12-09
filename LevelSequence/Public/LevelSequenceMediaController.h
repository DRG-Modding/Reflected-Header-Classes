#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: MovieScene MovieSceneCustomClockSource
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
    UFUNCTION()
    void OnRep_ServerStartTimeSeconds();
    
public:
    UFUNCTION(BlueprintPure)
    ALevelSequenceActor* GetSequence() const;
    
    UFUNCTION(BlueprintPure)
    UMediaComponent* GetMediaComponent() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALevelSequenceMediaController();
};

