#pragma once
#include "CoreMinimal.h"
#include "LevelSequenceCameraSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequenceActor -FallbackName=MovieSceneSequenceActor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBindingOwnerInterface -FallbackName=MovieSceneBindingOwnerInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePlaybackClient -FallbackName=MovieScenePlaybackClient
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneObjectBindingID -FallbackName=MovieSceneObjectBindingID
#include "LevelSequenceActor.generated.h"

class ULevelSequencePlayer;
class ULevelSequenceBurnInOptions;
class UMovieSceneBindingOverrides;
class UObject;
class ULevelSequenceBurnIn;
class ULevelSequence;

UCLASS()
class LEVELSEQUENCE_API ALevelSequenceActor : public AActor, public IMovieSceneSequenceActor, public IMovieScenePlaybackClient, public IMovieSceneBindingOwnerInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnLevelSequenceLoaded);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(BlueprintReadWrite, Instanced, Replicated, Transient, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath LevelSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLevelSequenceCameraSettings CameraSettings;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    ULevelSequenceBurnInOptions* BurnInOptions;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UMovieSceneBindingOverrides* BindingOverrides;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bAutoPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverrideInstanceData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bReplicatePlayback: 1;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UObject* DefaultInstanceData;
    
private:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    ULevelSequenceBurnIn* BurnInInstance;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bShowBurnin;
    
public:
    ALevelSequenceActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ShowBurnin();
    
    UFUNCTION(BlueprintCallable)
    void SetSequence(ULevelSequence* InSequence);
    
    UFUNCTION(BlueprintCallable)
    void SetReplicatePlayback(bool ReplicatePlayback);
    
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
    
    
    // Fix for true pure virtual functions not being implemented
};

