#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequencePlayer
#include "ActorSequencePlayer.generated.h"

UCLASS()
class ACTORSEQUENCE_API UActorSequencePlayer : public UMovieSceneSequencePlayer {
    GENERATED_BODY()
public:
    UActorSequencePlayer();
};

