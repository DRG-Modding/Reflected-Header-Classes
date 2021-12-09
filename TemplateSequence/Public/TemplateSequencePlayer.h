#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlaybackSettings
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlayer
#include "TemplateSequencePlayer.generated.h"

class UTemplateSequencePlayer;
class UTemplateSequence;
class UObject;
class ATemplateSequenceActor;

UCLASS()
class TEMPLATESEQUENCE_API UTemplateSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);
    
    UTemplateSequencePlayer();
};

