#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectPathChannel
#include "MovieSceneObjectPropertySection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneObjectPropertySection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectPathChannel ObjectChannel;
    
    UMovieSceneObjectPropertySection();
};

