#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlaybackSettings
#include "ActorSequenceComponent.generated.h"

class UActorSequence;
class UActorSequencePlayer;

UCLASS(BlueprintType)
class ACTORSEQUENCE_API UActorSequenceComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FMovieSceneSequencePlaybackSettings PlaybackSettings;
    
    UPROPERTY(EditAnywhere, Instanced)
    UActorSequence* Sequence;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UActorSequencePlayer* SequencePlayer;
    
public:
    UActorSequenceComponent();
};

