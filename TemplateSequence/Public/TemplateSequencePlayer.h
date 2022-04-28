#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlayer -FallbackName=MovieSceneSequencePlayer
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSequencePlaybackSettings -FallbackName=MovieSceneSequencePlaybackSettings
#include "TemplateSequencePlayer.generated.h"

class UTemplateSequence;
class UTemplateSequencePlayer;
class UObject;
class ATemplateSequenceActor;

UCLASS(Blueprintable)
class TEMPLATESEQUENCE_API UTemplateSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UTemplateSequencePlayer();
    UFUNCTION(BlueprintCallable)
    static UTemplateSequencePlayer* CreateTemplateSequencePlayer(UObject* WorldContextObject, UTemplateSequence* TemplateSequence, FMovieSceneSequencePlaybackSettings Settings, ATemplateSequenceActor*& OutActor);
    
};

