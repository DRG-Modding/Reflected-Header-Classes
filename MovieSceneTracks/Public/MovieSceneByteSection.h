#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneByteChannel
#include "MovieSceneByteSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneByteSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneByteChannel ByteCurve;
    
    UMovieSceneByteSection();
};

