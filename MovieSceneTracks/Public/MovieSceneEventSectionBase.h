#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneEventSectionBase.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventSectionBase : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UMovieSceneEventSectionBase();
};

