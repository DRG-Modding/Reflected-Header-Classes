#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneBoolChannel
#include "MovieSceneSpawnSectionTemplate.generated.h"

USTRUCT()
struct MOVIESCENETRACKS_API FMovieSceneSpawnSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneBoolChannel Curve;
    
public:
    FMovieSceneSpawnSectionTemplate();
};

