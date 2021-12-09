#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSequence
#include "ActorSequenceObjectReferenceMap.h"
#include "ActorSequence.generated.h"

class UMovieScene;

UCLASS(DefaultToInstanced)
class ACTORSEQUENCE_API UActorSequence : public UMovieSceneSequence {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UMovieScene* MovieScene;
    
    UPROPERTY()
    FActorSequenceObjectReferenceMap ObjectReferences;
    
public:
    UActorSequence();
};

