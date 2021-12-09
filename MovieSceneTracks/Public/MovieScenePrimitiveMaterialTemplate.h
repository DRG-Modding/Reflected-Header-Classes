#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectPathChannel
#include "MovieScenePrimitiveMaterialTemplate.generated.h"

USTRUCT()
struct FMovieScenePrimitiveMaterialTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 MaterialIndex;
    
    UPROPERTY()
    FMovieSceneObjectPathChannel MaterialChannel;
    
public:
    MOVIESCENETRACKS_API FMovieScenePrimitiveMaterialTemplate();
};

