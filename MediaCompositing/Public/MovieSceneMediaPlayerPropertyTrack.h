#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieSceneTracks MovieScenePropertyTrack
#include "MovieSceneMediaPlayerPropertyTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UMovieSceneMediaPlayerPropertyTrack();
};

