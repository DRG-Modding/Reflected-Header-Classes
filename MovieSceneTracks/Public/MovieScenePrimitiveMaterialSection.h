#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectPathChannel
#include "MovieScenePrimitiveMaterialSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectPathChannel MaterialChannel;
    
    UMovieScenePrimitiveMaterialSection();
};

