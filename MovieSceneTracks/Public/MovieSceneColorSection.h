#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieSceneColorSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneColorSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel RedCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel GreenCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel BlueCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel AlphaCurve;
    
public:
    UMovieSceneColorSection();
};

