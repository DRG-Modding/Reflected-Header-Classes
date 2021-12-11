#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Actor
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
//CROSS-MODULE INCLUDE: MovieScene MovieScenePlaybackClient
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlaybackSettings
//CROSS-MODULE INCLUDE: MovieScene MovieSceneBindingOwnerInterface
#include "LevelSequenceCameraSettings.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectBindingID
#include "LevelSequenceActor.generated.h"

class ULevelSequencePlayer;
class UObject;
class ULevelSequenceBurnInOptions;
class UMovieSceneBindingOverrides;
class ULevelSequenceBurnIn;
class ULevelSequence;

UCLASS()
class LEVELSEQUENCE_API ALevelSequenceActor : public AActor, public IMovieScenePlaybackClient, public IMovieSceneBindingOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadOnly, Instanced, Replicated, Transient)
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> AdditionalEventReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLevelSequenceCameraSettings CameraSettings;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    ULevelSequenceBurnInOptions* BurnInOptions;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UMovieSceneBindingOverrides* BindingOverrides;
    
    UPROPERTY()
    uint8 bAutoPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideInstanceData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bReplicatePlayback: 1;
    
    UPROPERTY(BlueprintReadWrite, Instanced)
    UObject* DefaultInstanceData;
    
private:
    UPROPERTY(Export)
    ULevelSequenceBurnIn* BurnInInstance;
    
    UPROPERTY()
    bool bShowBurnin;
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowBurnin();
    
    UFUNCTION(BlueprintCallable)
    void SetSequence(ULevelSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatePlayback(bool ReplicatePlayback);
    
    UFUNCTION(BlueprintCallable)
    void SetEventReceivers(TArray<AActor*> AdditionalReceivers);
    
    UFUNCTION(BlueprintCallable)
    void SetBindingByTag(FName BindingTag, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    
    UFUNCTION(BlueprintCallable)
    void SetBinding(FMovieSceneObjectBindingID Binding, const TArray<AActor*>& Actors, bool bAllowBindingsFromAsset);
    
    UFUNCTION(BlueprintCallable)
    void ResetBindings();
    
    UFUNCTION(BlueprintCallable)
    void ResetBinding(FMovieSceneObjectBindingID Binding);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBindingByTag(FName Tag, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveBinding(FMovieSceneObjectBindingID Binding, AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSequence* LoadSequence() const;
    
    UFUNCTION(BlueprintCallable)
    void HideBurnin();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSequencePlayer* GetSequencePlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULevelSequence* GetSequence() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieSceneObjectBindingID> FindNamedBindings(FName Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieSceneObjectBindingID FindNamedBinding(FName Tag) const;
    
    UFUNCTION(BlueprintCallable)
    void AddBindingByTag(FName BindingTag, AActor* Actor, bool bAllowBindingsFromAsset);
    
    UFUNCTION(BlueprintCallable)
    void AddBinding(FMovieSceneObjectBindingID Binding, AActor* Actor, bool bAllowBindingsFromAsset);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ALevelSequenceActor();
    
    // Fix for true pure virtual functions not being implemented
};

