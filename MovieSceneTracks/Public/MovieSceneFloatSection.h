#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieSceneFloatSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneFloatSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneFloatChannel FloatCurve;
    
public:
    UMovieSceneFloatSection();
};

