#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneFloatTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneFloatTrack();
};

