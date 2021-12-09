#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneEulerTransformTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneEulerTransformTrack();
};

