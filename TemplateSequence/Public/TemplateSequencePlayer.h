#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlayer
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlaybackSettings
#include "TemplateSequencePlayer.generated.h"

class UTemplateSequencePlayer;
class UObject;
class UTemplateSequence;
class ATemplateSequenceActor;

UCLASS()
class TEMPLATESEQUENCE_API UTemplateSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);
    
    UTemplateSequencePlayer();
};

