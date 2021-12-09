#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFloatTrack.h"
#include "MovieSceneSlomoTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack {
    GENERATED_BODY()
public:
    UMovieSceneSlomoTrack();
};

