#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieSceneMarginSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneMarginSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneFloatChannel TopCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel LeftCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel RightCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel BottomCurve;
    
    UMovieSceneMarginSection();
};

