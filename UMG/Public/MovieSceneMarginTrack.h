#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieSceneTracks MovieScenePropertyTrack
#include "MovieSceneMarginTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneMarginTrack();
};

