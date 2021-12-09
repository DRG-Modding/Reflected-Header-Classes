#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneGeometryCacheParams.h"
#include "MovieSceneGeometryCacheSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneGeometryCacheParams Params;
    
    UMovieSceneGeometryCacheSection();
};

