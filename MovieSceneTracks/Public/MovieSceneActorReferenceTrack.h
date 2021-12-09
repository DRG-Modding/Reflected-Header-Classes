#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneActorReferenceTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneActorReferenceTrack();
};

