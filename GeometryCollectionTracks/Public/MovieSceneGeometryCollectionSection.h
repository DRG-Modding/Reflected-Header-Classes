#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneGeometryCollectionParams.h"
#include "MovieSceneGeometryCollectionSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneGeometryCollectionParams Params;
    
    UMovieSceneGeometryCollectionSection();
};

