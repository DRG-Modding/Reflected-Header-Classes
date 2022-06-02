#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlayer -FallbackName=MovieSceneSequencePlayer
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "OnLevelSequencePlayerCameraCutEventDelegate.h"
#include "LevelSequencePlayer.generated.h"

class ULevelSequencePlayer;
class UCameraComponent;
class UObject;
class ULevelSequence;
class ALevelSequenceActor;

UCLASS(Blueprintable)
class LEVELSEQUENCE_API ULevelSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelSequencePlayerCameraCutEvent OnCameraCut;
    
    ULevelSequencePlayer();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetActiveCameraComponent() const;
    
    UFUNCTION(BlueprintCallable)
    static ULevelSequencePlayer* CreateLevelSequencePlayer(UObject* WorldContextObject, ULevelSequence* LevelSequence, FMovieSceneSequencePlaybackSettings Settings, ALevelSequenceActor*& OutActor);
    
};

