#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieSceneTracks MovieScenePropertyTrack
#include "MovieScene2DTransformTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieScene2DTransformTrack();
};

