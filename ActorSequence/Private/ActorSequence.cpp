#include "ActorSequence.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScene -FallbackName=MovieScene

UActorSequence::UActorSequence() {
    this->MovieScene = CreateDefaultSubobject<UMovieScene>(TEXT("MovieScene"));
}

