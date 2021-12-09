#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneIntegerChannel
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneIntegerSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneIntegerSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneIntegerChannel IntegerCurve;
    
public:
    UMovieSceneIntegerSection();
};

