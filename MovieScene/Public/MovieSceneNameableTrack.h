#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneNameableTrack.generated.h"

UCLASS(Abstract, MinimalAPI)
class UMovieSceneNameableTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
    UMovieSceneNameableTrack();
};

